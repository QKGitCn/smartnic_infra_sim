# SmartNIC RDMA GVSoC — 设计过程回忆日志

本文件记录每次设计会话的核心问题、分析过程、决策依据和产出文件，供后续回忆与继续开发使用。

---

## [Session 2025-04-15] cv32e40x 适配性分析 + GVSoC 哑核设计

### 提问

> 分析 gvsoc/mcu/cv32e40x 文件夹下的 RISC-V 核，是否合适用于 smartnic_rdma 中作为 host-MCU 中的 MCU 部分，根据 cv32e40x 写一个哑核作为测试，考虑他的 XIF 指令扩展接口，但不急于实现新的指令。

---

### 分析背景

当前 `host_centric_baseline/` 中的 `dpi_mcu_wrapper.cpp` 是一个 GVSoC 侧的 scaffold，仅保留了 11 个端口（fetch_enable、reset、entry、msi/mti/mei/sei、mem、busy、halted），尚未接入任何真实 RTL 核。目标是评估 `mcu/cv32e40x/` 下的核是否可以在后续 Verilator/DPI 路径中成为真实替换对象，并先写一个哑核来验证接口契约。

---

### cv32e40x 核心特征（探明）

**文件**：`smartnic_rdma/mcu/cv32e40x/rtl/cv32e40x_core.sv`

| 特征 | 值 |
|------|-----|
| 架构 | RV32I + M/B/A/F 可选扩展 |
| 流水线 | 4 级 |
| 内存协议 | OBI (Open Bus Interface)：req / gnt / rvalid |
| 指令总线宽度 | 32-bit |
| 数据总线宽度 | 32-bit |
| Reset 极性 | `rst_ni` active-low |
| Fetch enable | `fetch_enable_i` 1-bit |
| Boot address | `boot_addr_i[31:0]` |
| 中断 | `irq_i[31:0]`，bit3=MSI、bit7=MTI、bit11=MEI |
| XIF 扩展 | 参数 `X_EXT`，6 个 modport |
| Debug | JTAG/DM，`debug_req_i`，`debug_halted_o` |
| CLIC 模式 | 可选（`CLIC` 参数，默认 0） |

**XIF interface**：`cv32e40x_if_xif.sv`，6 个 cpu_* modport：

| Modport | 方向（CPU 侧） | 用途 |
|---------|--------------|------|
| `cpu_compressed` | out valid/req，in ready/resp | 压缩指令 offload |
| `cpu_issue` | out valid/req，in ready/resp | 指令 offload 给协处理器 |
| `cpu_commit` | out valid/commit | 通知协处理器 commit/kill |
| `cpu_mem` | in valid/req，out ready/resp | 协处理器发 LSU 请求给 CPU |
| `cpu_mem_result` | out result_valid/result | CPU 返回 LSU 结果给协处理器 |
| `cpu_result` | in result_valid/result，out result_ready | 协处理器写回寄存器堆 |

所有 struct 类型定义在 `cv32e40x_if_xif.sv` 接口体内（自包含，不依赖 pkg）。

---

### 适配性结论：适合

**适配理由：**

1. **接口一一对应**：`dpi_mcu_wrapper.cpp` 的 11 个 scaffold 端口与 cv32e40x 核心控制端口直接映射，仅需 reset 极性翻转（active-low → active-high）和 boot_addr 宽度截断（uint64_t → [31:0]）。

2. **RV32 宽度匹配**：SmartNIC NIC 侧 MCU 不需要 64-bit；rv64 ISS 是独立的 host CPU 路径，两者并存无冲突。

3. **OBI → GVSoC IoReq 翻译直接**：OBI req/gnt/rvalid 握手与 GVSoC `vp::IoMaster` 的 `req()` / `response()` 回调模型可以直接对应，无需复杂状态机。

4. **XIF 为 RDMA offload 预留路径**：XIF issue/result 通道是未来 RDMA 自定义指令（如 `post_send`、`poll_cq`）的天然承载接口，当前 stub 不影响 Phase 1 功能。

**需要注意的接口差异（哑核中处理）：**

| 信号 | 处理方式 |
|------|---------|
| `rst_ni` (active-low) | `reset_sync(bool)` 传入时取反 |
| `boot_addr_i[31:0]` | 截取 `entry_sync(uint64_t)` 低 32 位 |
| `irq_i[31:0]` | msi→bit3、mti→bit7、mei→bit11 拼装 |
| `scan_cg_en_i` | 接 0 |
| `clic_irq_*` | 接 0（CLIC=0 模式） |
| `fencei_flush_req_o/ack_i` | 哑核不发 fence，req=0 |
| `data_atop_o[5:0]` | 接 0（无原子操作） |
| `mcycle_o[63:0]` | 内部自由计数器 |

---

### 哑核设计决策

**目标**：一个 SystemVerilog 模块，端口签名与 cv32e40x_core.sv 相同，但内部只做最简握手，不解码指令。用于 Phase 1 验证 DPI 桥接的 OBI 协议路径。

**内部结构（5 状态 FSM）：**

```
ST_IDLE
  └─ fetch_enable_i=1 → pc=boot_addr → ST_FETCH_REQ

ST_FETCH_REQ
  └─ instr_gnt_i=1 → ST_FETCH_WAIT
  └─ fetch_enable_i=0 → ST_IDLE

ST_FETCH_WAIT
  └─ instr_rvalid_i=1 → pc+=4, fetch_count++
       ├─ fetch_count==16 && !data_done → ST_DATA_REQ
       └─ otherwise → ST_FETCH_REQ
  └─ fetch_enable_i=0 → ST_IDLE

ST_DATA_REQ  (data smoke test：向 boot_addr+0x100 写 0xDEAD_BEEF)
  └─ data_gnt_i=1 → ST_DATA_WAIT

ST_DATA_WAIT
  └─ data_rvalid_i=1 → data_done=1 → ST_FETCH_REQ
```

**XIF stub 策略（cpu_* 侧从不发起 offload）：**

| 信号 | 值 |
|------|-----|
| `compressed_valid` | 0 |
| `issue_valid` | 0 |
| `commit_valid` | 0 |
| `mem_ready` | 1（vacuous accept） |
| `mem_result_valid` | 0 |
| `result_ready` | 1（vacuous accept） |
| 所有 `*_req / *_resp` struct | `'0` |

---

### 产出文件

| 文件 | 说明 |
|------|------|
| `smartnic_rdma/mcu/cv32e40x_dummy/cv32e40x_gvsoc_dummy.sv` | 哑核主体（260 行），5 状态 OBI FSM + XIF stub |
| `smartnic_rdma/mcu/cv32e40x_dummy/cv32e40x_gvsoc_dummy_lint_top.sv` | Verilator lint 包装顶层（Verilator 4.x 不支持 interface port 作顶层，需要此包装器） |
| `smartnic_rdma/mcu/cv32e40x_dummy/cv32e40x_gvsoc_dummy.vlt` | Verilator 配置：对 `cv32e40x_if_xif.sv` 接口体的 UNUSED/UNDRIVEN 抑制（lint env 无协处理器） |

**未修改文件**（保持原样）：
- `host_centric_baseline/dpi_mcu_wrapper.cpp`
- `host_centric_baseline/rtl_mcu_comp.py`
- `host_centric_baseline/baseline_target.py`
- `host_centric_baseline/Makefile`

---

### 验证结果

**工作目录：`/home/kunq/smartnic_infra_sim/gvsoc/`**

```bash
# 哑核 lint 检查
verilator --lint-only -Wall --sv \
  --top-module cv32e40x_gvsoc_dummy_lint_top \
  smartnic_rdma/mcu/cv32e40x_dummy/cv32e40x_gvsoc_dummy.vlt \
  smartnic_rdma/mcu/cv32e40x/rtl/cv32e40x_if_xif.sv \
  smartnic_rdma/mcu/cv32e40x_dummy/cv32e40x_gvsoc_dummy.sv \
  smartnic_rdma/mcu/cv32e40x_dummy/cv32e40x_gvsoc_dummy_lint_top.sv
# 结果：零 warning，零 error ✓
```

**工作目录：`/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/`**

```bash
# GVSoC 主体构建（验证哑核不破坏构建）
make gvsoc
# 结果：正常构建，不受影响 ✓
```

---

### 下一步（Phase 2 预告）

1. 在 `dpi_mcu_wrapper.cpp` 中实现 OBI → IoReq 翻译逻辑
2. 用 Verilator 将 `cv32e40x_gvsoc_dummy.sv` 编译成 DPI `.so`
3. 验证 GVSoC 侧 `IoMaster` 与 SV 侧 OBI 握手端到端可通
4. 替换哑核为真实 `cv32e40x_core` 实例（Phase 3）
5. 考虑 XIF issue/result 通道接入 RDMA 指令协处理器（Phase 4）

---
