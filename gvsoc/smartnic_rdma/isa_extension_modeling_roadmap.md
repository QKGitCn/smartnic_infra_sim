# ISA Extension Modeling Roadmap

This document captures a forward-looking ISA-extension modeling roadmap for the
SmartNIC RDMA simulation work.

The purpose is not to claim that every vendor-specific instruction name below is
publicly documented in exactly the same form. Instead, this file defines the
**capability classes** that matter to the simulator and maps them to plausible
architecture directions inspired by industry designs.

For the simulator, these capability classes are more important than any one
vendor-specific mnemonic.

## Scope

This roadmap is for future modeling work beyond the current host-centric
baseline.

Current baseline:

- one simulated `rv64` host CPU
- one `host_control_path`
- one RDMA engine
- queue-based request/complete flow

Future work may add:

- specialized submit instructions
- low-power completion wait instructions
- native RMA-style instructions
- scheduler-mediated task offload instructions

This document now goes one step further and proposes a **concrete first ISA
extension scheme** focused on the control plane.

## Modeling Principle

Use **capability-oriented** abstractions first.

Do not bind the simulator too early to vendor-specific instruction names unless
they are supported by stable, public documentation that we intend to model
faithfully.

The simulator should first answer:

- what operation is being accelerated?
- which part of the control path disappears?
- which timing buckets shrink?
- what architectural constraints are introduced?

## Concrete Proposal Summary

Based on the current model and the control-plane bottlenecks we already expose,
the recommended first ISA extension set is:

1. `ENQ.WQE`
2. `WAIT.CQ`
3. `COMMIT.SQ`
4. `TASK.SUBMIT`

Optional later:

5. `RMA.PUT`
6. `RMA.GET`

The recommendation is to implement them in that order.

## Why This Specific Set

The current host-side timing buckets are:

- `userspace_req_cycles`
- `kernel_req_cycles`
- `driver_prepare_cycles`
- `pcie_submit_cycles`
- `poll_interval_cycles`
- `pcie_completion_cycles`
- `driver_completion_cycles`
- `kernel_completion_cycles`
- `userspace_completion_cycles`

The most valuable first ISA work should directly shrink the buckets that are:

- control-plane dominated
- easy to explain
- easy to compare against the current baseline

That points to:

- submission compression
- completion wait compression
- scheduler-mediated offload

before moving to fully native RMA instructions.

## Proposed New ISA Extension Scheme

### Extension Family Name

Suggested internal modeling family:

- `Zircp`

Meaning:

- `Z`:
  experimental/custom extension family
- `ircp`:
  interconnect / RDMA control plane

This is only a simulator-internal naming proposal. It does not claim standards
status.

### Instruction 1: `ENQ.WQE`

#### Intent

Directly enqueue one prepared WQE into a device-visible submission queue with
reduced software overhead.

#### High-Level Semantics

```text
ENQ.WQE rd, rs1, rs2
```

- `rs1`
  points to a WQE in memory
- `rs2`
  carries queue/context metadata or queue selector
- `rd`
  receives status

#### Status Model

Suggested return codes:

- `0`: success
- `1`: queue full / retry needed
- `2`: invalid queue context
- `3`: protection / privilege failure

#### What It Replaces

This should compress:

- most of `driver_prepare_cycles`
- part of `pcie_submit_cycles`

#### Current GVSoC Mapping

Current path:

- firmware writes request MMIO
- `host_control_path` builds WQE
- `host_control_path` rings control and SQ doorbell

With `ENQ.WQE`:

- host firmware issues `ENQ.WQE`
- the simulator treats that as a descriptor-submit fast path

#### First Modeling Parameters

- `enq_wqe_cycles`
- `enq_wqe_retry_cycles`
- `enq_wqe_queue_full_penalty`

### Instruction 2: `WAIT.CQ`

#### Intent

Block efficiently until a completion queue condition becomes true, instead of
spinning with software polling.

#### High-Level Semantics

```text
WAIT.CQ rd, rs1, rs2
```

- `rs1`
  points to completion state or CQ context
- `rs2`
  carries wait condition / threshold / timeout mode
- `rd`
  returns completion status or timeout code

#### Status Model

Suggested return codes:

- `0`: completion observed
- `1`: timeout
- `2`: invalid completion context
- `3`: interrupted / aborted wait

#### What It Replaces

This should compress:

- `poll_interval_cycles`
- part of `userspace_completion_cycles`
- part of `kernel_completion_cycles`

#### Current GVSoC Mapping

Current path:

- firmware polls `CPL_DONE`

With `WAIT.CQ`:

- firmware enters a wait state
- `host_control_path` or future completion event wakes it

#### First Modeling Parameters

- `wait_cq_entry_cycles`
- `wait_cq_exit_cycles`
- `wait_cq_wakeup_cycles`
- `wait_cq_timeout_penalty`

### Instruction 3: `COMMIT.SQ`

#### Intent

Force one queue entry or a small batch to become device-visible with the right
ordering guarantees, without requiring the full software doorbell sequence.

#### High-Level Semantics

```text
COMMIT.SQ rd, rs1, rs2
```

- `rs1`
  queue pointer or submission queue state
- `rs2`
  ordering / lightweight commit mode
- `rd`
  status

#### Why It Exists Separately from `ENQ.WQE`

`ENQ.WQE` models descriptor enqueue.

`COMMIT.SQ` models:

- visibility
- fence semantics
- lightweight vs full commit modes

This separation makes the model closer to real hardware/software design space.

#### What It Replaces

This should mostly compress:

- the remaining part of `pcie_submit_cycles`

#### First Modeling Parameters

- `commit_sq_cycles`
- `commit_sq_fence_penalty`
- `commit_sq_lightweight_cycles`

### Instruction 4: `TASK.SUBMIT`

#### Intent

Submit one communication task to a scheduler/offload agent instead of managing
every queue operation directly from the host CPU.

#### High-Level Semantics

```text
TASK.SUBMIT rd, rs1, rs2
```

- `rs1`
  points to a task descriptor
- `rs2`
  scheduler class / queue / priority
- `rd`
  submit status

#### What It Replaces

This changes the architecture from:

- CPU -> RDMA engine

to:

- CPU -> scheduler/offload agent -> RDMA engine

It should compress:

- part of `userspace_req_cycles`
- part of `kernel_req_cycles`
- part of `driver_prepare_cycles`

but introduces:

- scheduler queueing cost
- dispatch cost

#### First Modeling Parameters

- `task_submit_cycles`
- `task_scheduler_queue_cycles`
- `task_dispatch_cycles`

### Optional Later Instructions: `RMA.PUT` / `RMA.GET`

#### Intent

Express remote memory operations directly as architected instructions.

#### Recommendation

Do not prioritize these first.

They are powerful, but they collapse too much of the software stack at once and
make the comparison story harder early on.

They should come only after:

- `ENQ.WQE`
- `WAIT.CQ`
- `COMMIT.SQ`
- `TASK.SUBMIT`

have already been evaluated.

## Capability Class A: Descriptor Enqueue

### Intuition

A CPU instruction directly enqueues a prepared work descriptor into a
device-visible hardware queue with less software overhead than a normal
driver-mediated path.

### Industry Inspiration

Closest public example:

- Intel `ENQCMD / ENQCMDS`

### What It Replaces

Compared with the current host-centric stack, this capability compresses:

- part of `driver_prepare_cycles`
- part of `pcie_submit_cycles`
- possibly some software locking / queue ownership overhead

### Simulator Modeling Hook

Add a mode where request submission bypasses part of:

- `host_control_path` driver phase
- MMIO doorbell path

Possible future parameters:

- `descriptor_enqueue_cycles`
- `descriptor_enqueue_retry_cycles`
- `descriptor_enqueue_queue_full_penalty`

### Likely Behavioral Change

- WQE still exists logically
- submission becomes more direct
- queue-full retry becomes a first-class event

## Capability Class B: Direct 64B Queue Write

### Intuition

A CPU instruction atomically pushes one cache-bypassing 64-byte chunk into a
device queue or device-visible memory aperture.

### Industry Inspiration

Closest public example:

- Intel `MOVDIR64B`

### What It Replaces

This capability is best used to model:

- direct WQE write into SQ
- one-shot low-overhead queue fill

### Simulator Modeling Hook

Add a mode where:

- WQE construction still happens in software
- but the final queue write is modeled as one atomic direct-store operation

Possible future parameters:

- `direct_store64_cycles`
- `direct_store64_visibility_cycles`

### Likely Behavioral Change

- lower SQ-post overhead
- fewer software-side partial-write concerns
- better descriptor-submission determinism

## Capability Class C: Wait-Until-Completion Instruction

### Intuition

Instead of active polling, the CPU or offload core blocks efficiently until a
completion condition becomes true.

### Industry Inspiration

This is inspired by DPU/DPA-like completion-wait behavior, even where the exact
instruction mnemonic is not modeled as a public ISA contract.

### What It Replaces

This capability compresses or removes:

- `poll_interval_cycles`
- repeated completion MMIO/CQ polling cost
- host-side busy-wait energy cost

### Simulator Modeling Hook

Add a mode where completion waiting is modeled as:

- event-driven sleep
- interrupt/event wakeup
- near-zero polling loop occupancy

Possible future parameters:

- `wait_on_completion_entry_cycles`
- `wait_on_completion_exit_cycles`
- `completion_wakeup_latency_cycles`

### Likely Behavioral Change

- polling disappears as the dominant completion method
- total cycles may shrink
- energy/per-core occupancy would shrink even more strongly

## Capability Class D: Native RMA Instruction

### Intuition

The CPU issues a single instruction whose semantics directly express a remote
memory operation, instead of building a descriptor through a driver stack.

### Industry Inspiration

This class is inspired by architectures that aim to collapse the network access
path into the processor execution model itself.

### What It Replaces

This is the most aggressive collapse of the current host-centric control path.

It could remove most of:

- `userspace_req_cycles`
- `kernel_req_cycles`
- `driver_prepare_cycles`
- `pcie_submit_cycles`

### Simulator Modeling Hook

Add a mode where the CPU issues:

- `RMA_PUT`
- `RMA_GET`

as abstract simulated instructions or pseudo-ops.

Possible future parameters:

- `native_rma_issue_cycles`
- `native_rma_visibility_cycles`
- `native_rma_completion_cycles`

### Likely Behavioral Change

- host software stack nearly disappears
- the CPU-to-network boundary becomes much thinner
- descriptor queues may become optional or hidden

## Capability Class E: Task-Offload Submit

### Intuition

The CPU does not submit RDMA work directly to the device. Instead, it hands a
task to a scheduler or management core that then orchestrates transport or
collective communication.

### Industry Inspiration

This class is inspired by task-scheduler or compute-network co-design
approaches, regardless of exact vendor ISA naming.

### What It Replaces

It replaces the direct CPU-to-RDMA submission path with:

- CPU -> scheduler/task engine
- scheduler/task engine -> RDMA engine or collective engine

### Simulator Modeling Hook

Insert a new component between host CPU and RDMA engine:

- `task_scheduler`

Possible future parameters:

- `task_offload_submit_cycles`
- `task_scheduler_queue_cycles`
- `task_dispatch_cycles`

### Likely Behavioral Change

- lower CPU submit occupancy
- more complex orchestration
- better fit for collective operations and AI communication

## Mapping to Current GVSoC Model

Current path:

```text
rv64 firmware
  -> host_control_path.userspace
  -> host_control_path.kernel
  -> host_control_path.driver
  -> host_control_path.pcie
  -> rdma_engine
  -> completion path back upward
```

### Capability-Class Effects

- Descriptor Enqueue:
  - compress `driver + pcie submit`
- Direct 64B Queue Write:
  - compress final WQE store to SQ
- Wait-Until-Completion:
  - replace polling model in firmware / host control path
- Native RMA Instruction:
  - collapse most of the host-control pipeline
- Task-Offload Submit:
  - insert scheduler between CPU and RDMA engine

## Exact Mapping to Current Cycle Buckets

### `ENQ.WQE`

Primary effect:

- reduce `driver_prepare_cycles`
- reduce `pcie_submit_cycles`

Secondary effect:

- may reduce part of `kernel_req_cycles` if submission bookkeeping shrinks

### `WAIT.CQ`

Primary effect:

- reduce `poll_interval_cycles`

Secondary effect:

- reduce `userspace_completion_cycles`
- reduce `kernel_completion_cycles`

### `COMMIT.SQ`

Primary effect:

- reduce `pcie_submit_cycles`

Secondary effect:

- improve determinism of queue visibility timing

### `TASK.SUBMIT`

Primary effect:

- reduce `userspace_req_cycles`
- reduce `kernel_req_cycles`
- reduce part of `driver_prepare_cycles`

Secondary effect:

- add scheduler-side timing buckets

## Proposed Implementation Order in the Simulator

### Step 1: `ENQ.WQE`

Minimal simulator change:

- add a fast-submit path in `host_control_path`
- optionally bypass part of WQE-build and MMIO-doorbell staging

### Step 2: `WAIT.CQ`

Minimal simulator change:

- replace firmware polling loop with a wait-based completion model
- add wakeup timing parameters

### Step 3: `COMMIT.SQ`

Minimal simulator change:

- distinguish:
  - descriptor preparation
  - queue commit / visibility

### Step 4: `TASK.SUBMIT`

Minimal simulator change:

- introduce a new `task_scheduler` component
- route CPU requests through it

### Step 5: `RMA.PUT / RMA.GET`

Minimal simulator change:

- create an instruction-level fast path that bypasses most queue management

## First Recommended Experimental Matrix

To keep the comparison clean, evaluate these configurations:

1. baseline host-centric software path
2. baseline + `ENQ.WQE`
3. baseline + `WAIT.CQ`
4. baseline + `ENQ.WQE + WAIT.CQ`
5. scheduler path with `TASK.SUBMIT`
6. later: native `RMA.PUT / RMA.GET`

This will let the research answer:

- is submit acceleration enough?
- is completion-wait acceleration enough?
- are the two additive?
- when is scheduler-mediated offload better than direct submit acceleration?

## Recommended Modeling Order

To keep the simulator evolution manageable:

### Phase 1

Model `ENQ.WQE`

Reason:

- highest immediate payoff
- easiest to explain against current queue path

### Phase 2

Model `WAIT.CQ`

Reason:

- directly attacks completion polling overhead
- complements `ENQ.WQE`

### Phase 3

Model `COMMIT.SQ`

Reason:

- separates enqueue semantics from visibility/fence semantics

### Phase 4

Model `TASK.SUBMIT`

Reason:

- introduces the first explicit offload path for control-plane management

### Phase 5

Model `RMA.PUT / RMA.GET`

Reason:

- most aggressive architectural change
- should only come after queue-based and scheduler-based baselines are stable

## Research Questions This Roadmap Supports

- How much of host-centric RDMA latency comes from software stack staging?
- How much can direct descriptor submission reduce request overhead?
- How much polling overhead remains in completion-heavy workloads?
- When does a scheduler-mediated path outperform direct CPU submission?
- At what point does a native-RMA instruction model materially outperform a
  queue-based control path?

## Documentation Caution

When connecting this roadmap to external architectures:

- keep vendor-specific claims conservative
- distinguish:
  - publicly documented instructions
  - inferred architecture behavior
  - simulator-internal abstract capability classes

This file is therefore a **modeling roadmap**, not a vendor ISA compliance
document.

## 中文头脑风暴整理

这一节用于整理前期讨论中已经形成的中文判断、直觉和方案取舍，作为后续正式设计前的头脑风暴记录。

### 为什么值得做控制面指令扩展和 offload

从当前模拟器的结构看，真正复杂、而且会持续膨胀的部分并不是数据面本身，而是控制面：

- userspace
- kernel
- driver
- PCIe/control submit
- poll/completion return

数据面目前反而是清晰且相对简单的：

- WQE 写入
- RDMA engine 取 WQE
- 执行一次 memory copy
- 写回 CQE

因此，如果研究目标是减少主机侧参与、降低请求提交和完成等待的开销，那么控制面比数据面更值得优先做 ISA 扩展和 offload。

### 为什么说这条路线有现实意义

虽然不同大厂做法差异很大，但方向高度一致：

- 有的在缩短 descriptor enqueue 路径
- 有的在把等待 completion 的动作事件化
- 有的在把控制循环搬到近设备侧
- 有的则试图进一步把通信语义直接做成更原生的执行单元能力

共同点在于：

- 提交路径的软件层数太多
- doorbell / queue submit 有额外开销
- completion polling 很浪费 CPU
- 多进程/多线程共享队列时软件同步成本高

这说明控制面优化不是附属问题，而是一个单独值得研究的问题。

### 对当前项目的判断

对本项目而言，控制面 ISA 扩展和 offload：

- 不是“可有可无”
- 而是很可能比先卷数据面细节更有研究价值

尤其是在以下场景下，这类优化价值更高：

- 小消息、高频请求
- completion 很密集
- 每次数据搬运不大，但提交/完成频繁
- AI 训练或分布式同步中存在大量细粒度通信触发

### 研究上为什么值得做

如果构造出以下对比链条，就能形成很强的研究叙事：

1. baseline：传统 host-centric 控制面
2. variant 1：控制面指令扩展
3. variant 2：控制面 offload 到 MCU / scheduler / DPA-like core
4. variant 3：ISA + offload 结合

这样就能回答一组很有价值的问题：

- 哪一部分 host 开销最值得被 ISA 化？
- descriptor submit 和 completion wait，谁更值得优先做扩展？
- ISA 扩展和 near-device offload 是替代关系还是互补关系？
- 在不同消息粒度下，收益拐点在哪里？

### 工程上为什么也值得做，但必须克制

工程上同样值得做，但不能一开始就追求“大而全”。

如果一上来就设计很多复杂 vendor-style 指令，会很容易失控，陷入：

- ISA 语义过早复杂化
- 特权边界问题
- 软件栈兼容性问题
- 实验设计难以解释

因此更合理的策略是：

- 先做“控制面最小扩展集”
- 用最少的指令覆盖最关键的控制路径阶段

### 最适合作为第一阶段的最小扩展集

第一阶段最值得做的不是 native RMA 指令，而是三类控制面能力：

#### 1. 提交类扩展

例如抽象成：

- `ENQ.WQE`
- `RDMA_SUBMIT`

目标是压缩：

- `driver_prepare_cycles`
- `pcie_submit_cycles`

这是最容易见效、最容易比较、最容易解释的一类。

#### 2. 等待类扩展

例如抽象成：

- `WAIT.CQ`
- event-driven completion wait

目标是压缩：

- `poll_interval_cycles`
- 一部分 completion return path

这类扩展非常关键，因为很多 CPU 浪费就在 completion polling 上。

#### 3. 任务下发类 offload

例如：

- `TASK.SUBMIT`

目标是：

- host CPU 不再直接管理每次细粒度提交
- 把控制循环交给 scheduler / MCU / DPA-like core

这更适合第二阶段或第三阶段展开。

### 什么不应该优先做

第一阶段不建议优先做：

- 完整 native `RMA_PUT / RMA_GET`
- 复杂 memory key 更新指令
- 大量细碎的 vendor-style 特权控制指令
- 完整连接建立/资源管理 ISA 化

这些方向虽然很吸引人，但太早做会让方案缺乏可比性，也容易让模拟器结构失控。

### ISA 扩展和 offload 不是二选一

长期来看，系统完全可以形成四层对比：

#### 方案 A：纯 host software

- 当前 baseline

#### 方案 B：host-side ISA extension

- host CPU 仍在控制循环里
- 但提交/等待成本显著下降

#### 方案 C：near-device offload

- MCU / scheduler / DPA-like core 接管控制循环

#### 方案 D：ISA + offload 联合

- host CPU 用轻量指令把任务交给 near-device agent
- near-device agent 继续做后续编排

这条路线非常适合做成体系化对比，而不是只做某一个孤立优化点。

### 当前最推荐的优先级

基于收益、复杂度和解释性，当前最推荐顺序是：

1. 先做 `ENQ.WQE`
2. 再做 `WAIT.CQ`
3. 然后做 `COMMIT.SQ`
4. 再引入 `TASK.SUBMIT`
5. 最后再考虑 `RMA.PUT / RMA.GET`

这个顺序的核心逻辑是：

- 先证明“控制面提交压缩”有效
- 再证明“completion wait 优化”有效
- 再区分 enqueue 和 commit/fence 语义
- 最后再把控制循环搬走

### 一句话结论

如果目标是做一个有研究价值、又能落地到模拟器中的方案，那么：

- 控制面指令扩展和 offload 非常值得做
- 而且很可能比先深挖数据面细节更有价值
- 但必须从最小控制面扩展集开始，而不是一开始就追求 native RMA 一步到位

## 第一阶段实现建议

这一节面向当前已经存在的 GVSoC baseline 代码结构，目标不是一次性实现完整新 ISA，而是给出“怎么在现有工程里逐步落地”的建议。

当前相关文件主要有：

- [baseline_target.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/baseline_target.py)
- [host_control_path.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_control_path.cpp)
- [host_control_path_comp.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_control_path_comp.py)
- [rdma_engine.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/rdma_engine.cpp)
- [main.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/main.c)

### 实现总原则

第一阶段不去真的修改 RISC-V 指令译码器。

建议先用两层方式推进：

1. **语义层模拟**
   - 在 firmware + `host_control_path` 中先模拟这些新指令的效果
   - 用来验证体系结构价值

2. **ISA 层接入**
   - 等语义稳定后，再决定是否进入真正的 ISS 指令扩展实现

这样可以先回答“值不值得做”，再回答“怎么编码进 ISA”。

### 第一阶段建议顺序

#### 步骤 1：先做 `ENQ.WQE` 语义路径

这是第一优先级。

##### 目标

把当前：

- firmware 写 `REQ_*` MMIO
- `host_control_path` 构造 WQE
- `host_control_path` 再写 RDMA MMIO

压缩成一个更直接的“快速提交路径”。

##### 最小改动建议

修改：

- [host_control_path.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_control_path.cpp)
- [host_control_path_comp.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_control_path_comp.py)

具体做法：

- 在 `host_control_path` 中加入一种新模式，例如：
  - `submit_mode = "legacy" | "enq_wqe"`
- 在 `enq_wqe` 模式下：
  - 缩短或跳过部分 `driver_prepare`
  - 缩短或替代部分 `pcie_submit`
  - 仍然保留 WQE 和 SQ 的存在

新增参数建议：

- `submit_mode`
- `enq_wqe_cycles`
- `enq_wqe_retry_cycles`
- `enq_wqe_queue_full_penalty`

##### firmware 侧建议

修改：

- [main.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/main.c)

在第一阶段，不需要真的加新 ISA 指令，可以先：

- 增加一个“伪指令模式”开关
- 例如通过写一个新的控制寄存器，告诉 `host_control_path` 走 `ENQ.WQE` 语义路径

也就是说，先做：

- “像指令一样的控制面快速路径”

而不是：

- “真正修改 rv64 解码器”

##### 这一阶段的主要观察指标

- `driver_prepare_cycles` 是否显著下降
- `pcie_submit_cycles` 是否显著下降
- CPU 总体 submit-to-completion latency 是否下降

#### 步骤 2：做 `WAIT.CQ` 语义路径

这是第二优先级。

##### 目标

把当前 firmware 的 active polling：

- 轮询 `CPL_DONE`

替换成：

- 一个事件驱动或 sleep-like completion wait 模型

##### 最小改动建议

修改：

- [main.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/main.c)
- [host_control_path.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_control_path.cpp)

具体做法：

- firmware 不再每次主动读 `CPL_DONE`
- 改成调用一个“等待完成”的抽象接口
- `host_control_path` 在完成到达时触发 wakeup

第一阶段仍然不需要真正的 ISA 指令，可以先用：

- special MMIO register
- 或 semihost-style helper
- 或一个模拟“wait primitive”的小 hook

新增参数建议：

- `wait_cq_entry_cycles`
- `wait_cq_exit_cycles`
- `wait_cq_wakeup_cycles`
- `wait_cq_timeout_penalty`

##### 这一阶段的主要观察指标

- `poll_interval_cycles` 是否下降到接近 0
- CPU 侧 busy polling 指令数是否显著减少
- 总 completion latency 是否下降

#### 步骤 3：把 `COMMIT.SQ` 从 `ENQ.WQE` 中拆出来

##### 目标

把“描述符入队”和“队列对设备可见/带 fence 的提交”明确分开。

##### 为什么值得拆

因为真实系统里，通常存在两个不同问题：

- descriptor 怎么放进去
- 何时、以什么顺序、以什么 fence 语义让硬件看见

##### 最小改动建议

继续修改：

- [host_control_path.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_control_path.cpp)
- [host_control_path_comp.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_control_path_comp.py)

具体做法：

- 将当前 `driver_prepare -> pcie_submit` 再拆成：
  - descriptor enqueue
  - queue commit
- commit 阶段支持：
  - `full commit`
  - `lightweight commit`

新增参数建议：

- `commit_sq_cycles`
- `commit_sq_fence_penalty`
- `commit_sq_lightweight_cycles`

##### 这一阶段的主要观察指标

- `pcie_submit_cycles` 的细分贡献
- full fence 与 lightweight commit 的差异

#### 步骤 4：引入 `TASK.SUBMIT` 所需的新组件

##### 目标

从：

- CPU 直接驱动 `host_control_path`

转向：

- CPU 把任务交给 `task_scheduler`
- `task_scheduler` 再调度到 RDMA engine 或后续近设备控制核

##### 最小改动建议

新增组件：

- `task_scheduler.cpp`
- `task_scheduler_comp.py`

并修改：

- [baseline_target.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/baseline_target.py)

使路径变成：

```text
rv64 firmware
  -> task_scheduler
  -> host_control_path / rdma_engine
```

##### 这一阶段的意义

这一步就不只是“压缩一段路径”，而是在体系结构上比较：

- direct submit
- scheduler-mediated submit

##### 新增参数建议

- `task_submit_cycles`
- `task_scheduler_queue_cycles`
- `task_dispatch_cycles`

### 关于真正的 ISA 接入

在上述四步语义路径稳定后，再考虑是否进入真正的 ISS 指令扩展。

如果进入真正 ISA 接入，建议顺序仍然是：

1. `ENQ.WQE`
2. `WAIT.CQ`
3. `COMMIT.SQ`
4. `TASK.SUBMIT`

并且应尽量做到：

- 先保留现有 MMIO 路径作为对照组
- 新 ISA 路径作为可切换模式

这样实验对比会最清楚。

### 第一阶段最推荐的实验对照

建议至少保留以下几组：

1. `baseline`
   - 现有 host-centric software path
2. `baseline + ENQ.WQE`
3. `baseline + WAIT.CQ`
4. `baseline + ENQ.WQE + WAIT.CQ`
5. `scheduler path + TASK.SUBMIT`

这样可以很清楚地回答：

- 是 submit 更值得优化？
- 还是 completion wait 更值得优化？
- 两者是否叠加？
- scheduler/offload 是否比 host-side ISA 更有优势？
