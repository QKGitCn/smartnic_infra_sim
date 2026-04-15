# Component Implementation Plan: Per-Node RDMA Offload Platform

## 0. Purpose

This document defines the implementation plan for one simulated node in the GVSoC-based RDMA offload platform.

This node plan supports two linked research goals:

- flexibility:
  evaluate whether a SmartNIC-resident programmable RISC-V MCU can provide a more adaptable RDMA control layer for protocol and control experimentation
- efficiency:
  evaluate whether RDMA-specific MCU instructions are needed to remove the control-plane overhead introduced by moving control onto the MCU

These goals must remain separate in the implementation and evaluation:

- MCU programmability is the main mechanism for flexibility
- MCU instruction extensions are only justified if measurable control-path bottlenecks appear

Each node contains five primary components under development:

1. `N1` `host_stub`
2. `N2` `host_mcu_mailbox`
3. `N3` `rv_ctrl_core`
4. `N4` `rdma_engine`
5. `N5` `local_mem`

For the MCU-offload platform, this five-block decomposition remains the main node structure.

For the host-centric baseline used as the comparison point, the host side should be refined into a layered stack rather than treated as one undifferentiated behavioral source. The selected host-side refinement is:

- host CPU pipeline: real `rv64` ISS
- host user space: behavioral timing layer
- host kernel: behavioral timing layer
- host RDMA driver: behavioral timing layer
- host-device control interface: behavioral timing layer

This layered host plan is captured separately in:

- [layered_host_plan.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/layered_host_plan.md)

For the future RTL-MCU path, the first scaffolding artifacts are now planned as:

- [rtl_mcu_comp.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/rtl_mcu_comp.py)
- [dpi_mcu_wrapper.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/dpi_mcu_wrapper.cpp)

These are not yet wired into the default runnable baseline. They exist to
define the first stable interface contract for an RTL MCU connected through a
DPI bridge.

The main rule of this plan is:

- every component must have explicit adjacent interfaces
- every interface must have named signals, structures, and bit-width assumptions
- every component must expose behavior at the right abstraction level
- every likely bottleneck must have either counters or timing/bandwidth parameters

V1 is still an abstract model. Where exact microarchitectural timing is not yet available, the component must expose a constant with clear end-to-end meaning.

## 1. Node-Level Connectivity

The per-node connectivity is:

`host_stub <-> host_mcu_mailbox <-> rv_ctrl_core <-> rdma_engine <-> local_mem`

Additional side connections:

- `rv_ctrl_core -> local_mem` for firmware code/data access
- `rdma_engine -> remote_link` for packet/event transport
- `rdma_engine -> rv_ctrl_core` for interrupts
- optional `host_mcu_mailbox -> host_stub` interrupt/event notification

## 2. Common Width and Timing Assumptions

These widths and constants apply unless a component section overrides them.

### 2.1 Common Bit Widths

- physical address width: `64`
- data word width for control registers: `32`
- mailbox pointer width: `32`
- queue index width: `32`
- timestamp width: `64`
- node id width: `32`
- QP id width: `32`
- opcode width: `32`
- status width: `32`
- length width: `32`
- flags width: `32`
- interrupt vector width: `8`

### 2.2 Common Timing Constants

- `t_host_cmd_post`
  - host time to write one mailbox command and ring the doorbell
- `t_mailbox_dequeue`
  - mailbox-visible delay before the MCU can observe a new command
- `t_mcu_cmd_decode`
  - MCU firmware time to decode one offload command
- `t_mmio_write`
  - latency of one MCU MMIO write toward the RDMA engine
- `t_mmio_read`
  - latency of one MCU MMIO read from the RDMA engine
- `t_irq_host`
  - delay from mailbox completion ready to host-visible notification
- `t_irq_mcu`
  - delay from RDMA engine event to MCU-visible interrupt
- `local_mem_bandwidth_bytes_per_sec`
  - effective local memory bandwidth seen by initiators
- `local_mem_base_latency`
  - fixed latency per local memory request

## 3. Component `N1`: `host_stub`

### 3.1 Purpose

`host_stub` represents the host-side runtime or driver shim which converts application-level communication intent into SmartNIC offload commands.

V1 does not model a full host OS or PCIe stack. `host_stub` is a functional host-side source/sink of offload traffic.

### 3.2 Adjacent Interfaces

#### `IF-H1`: Host Intent Input

Direction:

- upstream workload -> `host_stub`

Abstraction:

- software call or behavioral trigger

Required fields:

- `intent_opcode[31:0]`
- `peer_id[31:0]`
- `src_addr[63:0]`
- `dst_addr[63:0]`
- `length[31:0]`
- `flags[31:0]`
- `request_id[31:0]`

#### `IF-H2`: Host-to-Mailbox Command Path

Direction:

- `host_stub` -> `host_mcu_mailbox`

Mechanism:

- command ring writes plus doorbell MMIO

Named fields:

- `cmd_ring_base[63:0]`
- `cmd_ring_tail[31:0]`
- `cmd_ring_entry[255:0]`
- `h2m_doorbell[31:0]`

#### `IF-H3`: Mailbox-to-Host Completion Path

Direction:

- `host_mcu_mailbox` -> `host_stub`

Mechanism:

- completion ring polling or interrupt-assisted dequeue

Named fields:

- `cpl_ring_head[31:0]`
- `cpl_ring_entry[191:0]`
- `host_irq[7:0]`
- `mailbox_status[31:0]`

### 3.3 Behavioral Logic

`host_stub` shall:

- accept high-level transfer intents
- generate `OffloadCmd` entries
- write commands into the mailbox command ring
- ring the mailbox doorbell
- poll or wait for `OffloadCpl`
- return high-level completion status to the workload generator

`host_stub` shall not:

- build RDMA WQEs directly in the offload path
- interact with the RDMA engine data path directly

### 3.4 Data Formats

`host_stub` produces:

```c
struct OffloadCmd {
    uint32_t opcode;
    uint32_t cmd_id;
    uint32_t peer_id;
    uint32_t flags;
    uint64_t src_addr;
    uint64_t dst_addr;
    uint32_t length;
    uint32_t opaque;
};
```

`host_stub` consumes:

```c
struct OffloadCpl {
    uint32_t cmd_id;
    uint32_t status;
    uint32_t bytes_done;
    uint32_t flags;
    uint64_t timestamp;
};
```

Packed sizes:

- `OffloadCmd`: `256` bits
- `OffloadCpl`: `160` bits, padded to `192` bits or `256` bits for ring alignment

### 3.5 Timing-Relevant State

The following sequential behavior affects end-to-end performance:

- command batching before one doorbell
- host polling interval on the completion ring
- interrupt-vs-polling completion policy

Required constants:

- `host_cmd_batch_size`
- `host_poll_period`
- `host_completion_mode`
  - `0 = polling`
  - `1 = interrupt`

### 3.6 Required Counters

- `host_cmd_posted`
- `host_cmd_completed`
- `host_cmd_retries`
- `host_cmd_batch_histogram`
- `host_visible_completion_latency_sum`
- `host_visible_completion_latency_max`
- `host_mailbox_busy_cycles`

If cycle accounting is too abstract in v1, expose:

- `avg_host_cmd_post_cost`
- `avg_host_completion_poll_cost`

## 4. Component `N2`: `host_mcu_mailbox`

### 4.1 Purpose

`host_mcu_mailbox` is the explicit offload boundary between host-side software intent and MCU-managed RDMA control.

Its functions are:

- store host-to-MCU offload commands
- store MCU-to-host completions
- expose doorbell and status registers
- enforce queue ownership and ordering
- optionally generate host-visible notifications

### 4.2 Adjacent Interfaces

#### `IF-M1`: Host Command Producer Interface

Direction:

- `host_stub` -> `host_mcu_mailbox`

Signals and fields:

- `cmdq_base[63:0]`
- `cmdq_size[31:0]`
- `cmdq_tail[31:0]`
- `cmd_entry[255:0]`
- `h2m_doorbell[31:0]`

#### `IF-M2`: MCU Command Consumer Interface

Direction:

- `host_mcu_mailbox` -> `rv_ctrl_core`

Mechanism:

- memory-mapped queue metadata plus optional interrupt

Signals and fields:

- `cmdq_head[31:0]`
- `cmdq_tail_visible[31:0]`
- `cmd_available`
- `mcu_irq[7:0]`

#### `IF-M3`: MCU Completion Producer Interface

Direction:

- `rv_ctrl_core` -> `host_mcu_mailbox`

Signals and fields:

- `cplq_tail[31:0]`
- `cpl_entry[191:0]`
- `cpl_post`

#### `IF-M4`: Host Completion Consumer Interface

Direction:

- `host_mcu_mailbox` -> `host_stub`

Signals and fields:

- `cplq_head[31:0]`
- `cplq_tail_visible[31:0]`
- `cpl_available`
- `host_irq[7:0]`
- `status[31:0]`

### 4.3 Behavioral Logic

`host_mcu_mailbox` shall implement:

- single-producer/single-consumer command ring semantics
- single-producer/single-consumer completion ring semantics
- write-before-doorbell ordering
- overflow detection
- deterministic dequeue order

The mailbox is not an RDMA protocol entity. It is a control-plane queue manager.

### 4.4 Control Registers

Required MMIO-visible registers:

- `H2M_CMDQ_BASE_LO[31:0]`
- `H2M_CMDQ_BASE_HI[31:0]`
- `H2M_CMDQ_SIZE[31:0]`
- `H2M_CMDQ_HEAD[31:0]`
- `H2M_CMDQ_TAIL[31:0]`
- `H2M_CPLQ_BASE_LO[31:0]`
- `H2M_CPLQ_BASE_HI[31:0]`
- `H2M_CPLQ_SIZE[31:0]`
- `H2M_CPLQ_HEAD[31:0]`
- `H2M_CPLQ_TAIL[31:0]`
- `H2M_DOORBELL[31:0]`
- `H2M_STATUS[31:0]`

Required `H2M_STATUS` bits:

- bit `0`: command queue non-empty
- bit `1`: completion queue non-empty
- bit `2`: command queue overflow
- bit `3`: completion queue overflow
- bit `4`: ordering error detected
- bit `5`: mailbox fatal error

### 4.5 Timing and Bandwidth Parameters

- `mailbox_cmd_bandwidth_cmds_per_sec`
- `mailbox_cpl_bandwidth_cpls_per_sec`
- `t_mailbox_cmd_visibility`
- `t_mailbox_cpl_visibility`
- `t_mailbox_irq_host`
- `t_mailbox_irq_mcu`

These constants give concrete end-to-end meaning even if v1 does not model every register transfer cycle explicitly.

### 4.6 Required Counters

- `mailbox_cmd_enqueued`
- `mailbox_cmd_dequeued`
- `mailbox_cpl_enqueued`
- `mailbox_cpl_dequeued`
- `mailbox_cmd_overflow`
- `mailbox_cpl_overflow`
- `mailbox_cmd_queue_depth_hwm`
- `mailbox_cpl_queue_depth_hwm`
- `mailbox_cmd_wait_time_sum`
- `mailbox_cpl_wait_time_sum`

## 5. Component `N3`: `rv_ctrl_core`

### 5.1 Purpose

`rv_ctrl_core` is the programmable RISC-V MCU that executes the RDMA control-plane software stack.

It is responsible for translating host offload commands into low-level RDMA control actions.

### 5.2 Adjacent Interfaces

#### `IF-R1`: Mailbox Command Interface

Direction:

- `host_mcu_mailbox` -> `rv_ctrl_core`

Signals and fields:

- `cmd_available`
- `cmdq_head[31:0]`
- `cmd_entry[255:0]`
- `mcu_irq[7:0]`

#### `IF-R2`: Mailbox Completion Interface

Direction:

- `rv_ctrl_core` -> `host_mcu_mailbox`

Signals and fields:

- `cpl_entry[191:0]`
- `cpl_post`
- `cplq_tail[31:0]`

#### `IF-R3`: MCU-to-RDMA Control Interface

Direction:

- `rv_ctrl_core` <-> `rdma_engine`

Mechanism:

- MMIO register reads/writes
- queue memory programming
- interrupt handling

Signals and fields:

- `mmio_addr[63:0]`
- `mmio_wdata[31:0]`
- `mmio_rdata[31:0]`
- `mmio_write`
- `mmio_read`
- `rdma_irq[7:0]`

#### `IF-R4`: MCU-to-Local-Memory Interface

Direction:

- `rv_ctrl_core` <-> `local_mem`

Purpose:

- firmware fetch
- stack/data access
- queue/WQE/CQE initialization

Signals and fields:

- `mem_addr[63:0]`
- `mem_wdata[63:0]`
- `mem_rdata[63:0]`
- `mem_be[7:0]`
- `mem_write`
- `mem_read`

### 5.3 Behavioral Logic

The MCU software stack shall implement:

1. mailbox command dequeue
2. command decode
3. QP/MR lookup or setup
4. WQE construction or queue update
5. RDMA engine MMIO programming
6. doorbell write
7. CQ polling or interrupt handling
8. host-visible completion generation

The MCU is the main control-plane scheduling point in the offload design.

### 5.4 Sequential Behavior Relevant to Performance

The following sequences must be measurable:

- time from mailbox dequeue to first RDMA MMIO access
- time from offload command receipt to WQE ready
- time from CQE visibility to host-visible completion
- number of MMIO operations per transfer
- number of memory stores needed to post one WQE

Required constants:

- `mcu_clock_hz`
- `mcu_cycles_per_cmd_decode`
- `mcu_cycles_per_wqe_build`
- `mcu_cycles_per_cqe_consume`
- `mcu_mmio_issue_rate_ops_per_sec`

These may later be replaced by detailed instruction-level execution if GVSoC CPU modeling is sufficient.

### 5.5 Required Counters

- `mcu_cmd_received`
- `mcu_cmd_completed`
- `mcu_cmd_failed`
- `mcu_cycles_busy`
- `mcu_cycles_idle`
- `mcu_cycles_cmd_decode`
- `mcu_cycles_wqe_build`
- `mcu_cycles_cqe_handle`
- `mcu_mmio_reads`
- `mcu_mmio_writes`
- `mcu_local_mem_reads`
- `mcu_local_mem_writes`
- `mcu_cmd_to_doorbell_latency_sum`
- `mcu_cqe_to_host_cpl_latency_sum`

### 5.6 Candidate ISA Extension Set

The MCU is the primary location for architectural extension experiments. Extension candidates shall be prioritized by likely impact on end-to-end RDMA control overhead, especially for small-message transfers.

Design rule:

- a candidate instruction is preferred only if all required operands are available at issue time
- hidden reads of variable software state should be avoided
- dependence on memory-resident queue metadata should be minimized
- if an instruction needs too many implicit inputs, it should be split into smaller primitives or moved to a CSR-backed design

For v1, this means the best candidates are instructions that operate on:

- explicit register operands
- fixed architectural CSRs
- fixed-width queue entries or fixed-width metadata records

#### Tier 1: Highest-Value Candidates

These are the most efficient first candidates because they collapse hot control-path sequences without requiring hidden software-visible dependencies.

`rdma.db`

- purpose:
  ring an RDMA doorbell with built-in ordering semantics
- likely replaces:
  MMIO address setup, MMIO store, explicit fence or ordering sequence
- architectural inputs:
  queue selector, QP id, producer value
- architectural outputs:
  success/fail status
- dependency assessment:
  strong candidate because all operands can be explicit and fixed-width
- expected benefit:
  reduces doorbell path latency and MMIO instruction count

`mailbox.pop`

- purpose:
  dequeue one host offload command from the mailbox ring into architected shadow CSRs and advance the command head atomically
- likely replaces:
  queue status check, entry load, head update, ownership bookkeeping
- architectural inputs:
  mailbox queue state held in fixed CSRs
- architectural outputs:
  command shadow CSRs updated, updated head pointer, empty indication in `rd`
- dependency assessment:
  good candidate if the mailbox entry is fixed-width and queue state is kept in fixed CSRs
- expected benefit:
  reduces host-to-MCU handoff overhead and command-service latency

`rdma.cq.pop`

- purpose:
  consume one CQE into architected shadow CSRs and advance the CQ head in one operation
- likely replaces:
  CQE load sequence, status extraction, head update, bounds handling
- architectural inputs:
  CQ state held in fixed CSRs
- architectural outputs:
  CQE shadow CSRs updated, updated head pointer, empty indication in `rd`
- dependency assessment:
  acceptable candidate if CQE format is fixed-width and aligned, but less attractive if completion parsing becomes format-dependent
- expected benefit:
  reduces completion-handling overhead and polling cost

#### Tier 2: Conditional Candidates

These can be useful, but only if the data dependency story is kept clean through fixed-width descriptors, CSR-backed queue state, or pre-packed operand blocks.

`rdma.post`

- purpose:
  commit one already-packed WQE and update the SQ tail atomically
- likely replaces:
  tail update logic and one or more queue metadata stores
- allowed form for v1:
  the instruction may only commit a WQE that is already present at a known aligned address
- disallowed form for v1:
  do not make the instruction implicitly gather scattered WQE fields from multiple registers or hidden memory locations
- dependency assessment:
  not a Tier 1 candidate unless queue base and tail are kept in fixed CSRs or explicit registers
- expected benefit:
  reduces queue-post overhead if the operand contract stays narrow

`rdma.post.batch`

- purpose:
  commit multiple already-packed WQEs and advance the SQ tail once
- dependency assessment:
  useful only after `rdma.post` is well-defined and batching metadata is explicit
- expected benefit:
  improves batching efficiency and amortizes doorbell cost

`rdma.waitcq`

- purpose:
  low-overhead wait for completion with optional timeout
- expected benefit:
  reduces busy polling when interrupt-driven MCU execution is studied

`rdma.mr.check`

- purpose:
  assist with fast MR bounds and key validation
- expected benefit:
  reduces repeated software-side metadata checks if validation remains partially firmware-managed

#### Tier 3: Optional Later Candidates

`rdma.qp.ldst`

- purpose:
  load or store packed QP state fields through one instruction
- expected benefit:
  reduces QP context bookkeeping overhead

`rdma.fence.db`

- purpose:
  combined ordering barrier plus doorbell issue
- expected benefit:
  useful if the ordering path becomes measurable in detailed timing studies

### 5.7 Preferred Operand-Binding Strategy

To avoid extra hazard handling, the preferred binding strategy is:

- keep queue base pointers in dedicated CSRs
- keep producer and consumer indices in dedicated CSRs or explicit integer registers
- require fixed-width mailbox, CQE, and WQE entry formats
- avoid instructions that must read arbitrary software-managed linked structures
- avoid instructions that implicitly perform variable-length parsing

The best first prototype instruction set is therefore:

- `rdma.db`
- `mailbox.pop`
- optionally `rdma.cq.pop`

`rdma.post` should only move into the first prototype set if the WQE commit contract is narrowed to an already-packed, fixed-width entry.

### 5.8 Proposed V1 Custom Encoding Layout

To avoid conflicts with ratified vector instructions, the proposed MCU extensions shall use the 32-bit `custom-0` major opcode only.

Chosen major opcode:

- `opcode[6:0] = 0001011`

Reason:

- the RISC-V base opcode map marks `custom-0` as recommended for custom 32-bit extensions
- the vector extension uses `OP-V = 1010111`, which is a different major opcode
- therefore the proposed encoding does not overlap the standard vector arithmetic opcode space

V1 should not use compressed encodings for these instructions.

#### 5.8.1 Common 32-bit Layout

All first-generation instructions use an R-type-like custom layout:

```text
31        25 24    20 19    15 14   12 11     7 6      0
+-----------+--------+--------+--------+--------+--------+
|  funct7   |  rs2   |  rs1   | funct3 |   rd   | opcode |
+-----------+--------+--------+--------+--------+--------+
```

With:

- `opcode = 0001011` (`custom-0`)

This keeps decode simple and avoids any overlap with `OP-V`.

#### 5.8.2 Proposed Bitmap Assignments

`rdma.db`

```text
31        25 24    20 19    15 14   12 11     7 6      0
+-----------+--------+--------+--------+--------+--------+
| 0000000   |  rs2   |  rs1   | qsel   |   rd   |0001011 |
+-----------+--------+--------+--------+--------+--------+
```

Operand binding:

- `rs1` = producer value
- `rs2` = QP id
- `funct3=qsel`
  - `000` = SQ doorbell
  - `001` = RQ doorbell
  - `010` = CQ arm or completion acknowledge
  - others reserved
- `rd` = status code

Pseudo-semantics:

```text
if qsel unsupported: rd <- ERR_UNIMP
else if engine not ready: rd <- ERR_BUSY
else
    issue ordered doorbell for (QP=rs2, queue=qsel, producer=rs1)
    rd <- OK
```

`mailbox.pop`

```text
31        25 24    20 19    15 14   12 11     7 6      0
+-----------+--------+--------+--------+--------+--------+
| 0000001   | 00000  | 00000  | 000    |   rd   |0001011 |
+-----------+--------+--------+--------+--------+--------+
```

Architected CSR dependencies:

- `mh2m_cmdq_base`
- `mh2m_cmdq_head`
- `mh2m_cmdq_tail`
- `mh2m_cmdq_size`
- `mh2m_cmdq_stride`
- `moffcmd0` .. `moffcmd7`

Pseudo-semantics:

```text
if mh2m_cmdq_head == mh2m_cmdq_tail:
    rd <- EMPTY
else
    idx <- mh2m_cmdq_head
    load fixed-width command entry at
        mh2m_cmdq_base + idx * mh2m_cmdq_stride
    write entry words into moffcmd0..moffcmd7
    mh2m_cmdq_head <- (mh2m_cmdq_head + 1) mod mh2m_cmdq_size
    rd <- idx
```

Hazard note:

- this avoids returning a 256-bit command through the integer register file
- the dependency surface is limited to fixed CSRs and fixed-width mailbox records

`rdma.cq.pop`

```text
31        25 24    20 19    15 14   12 11     7 6      0
+-----------+--------+--------+--------+--------+--------+
| 0000010   | 00000  | 00000  | 000    |   rd   |0001011 |
+-----------+--------+--------+--------+--------+--------+
```

Architected CSR dependencies:

- `mrd_cq_base`
- `mrd_cq_head`
- `mrd_cq_tail`
- `mrd_cq_size`
- `mrd_cq_stride`
- `mcqe0` .. `mcqe3`

Pseudo-semantics:

```text
if mrd_cq_head == mrd_cq_tail:
    rd <- EMPTY
else
    idx <- mrd_cq_head
    load fixed-width CQE entry at
        mrd_cq_base + idx * mrd_cq_stride
    write entry words into mcqe0..mcqe3
    mrd_cq_head <- (mrd_cq_head + 1) mod mrd_cq_size
    rd <- idx
```

Hazard note:

- this avoids variable-format completion parsing inside the instruction itself
- software can read `mcqe0`..`mcqe3` with ordinary CSR reads or mapped register accesses

`rdma.post`

```text
31        25 24    20 19    15 14   12 11     7 6      0
+-----------+--------+--------+--------+--------+--------+
| 0000011   |  rs2   |  rs1   | 000    |   rd   |0001011 |
+-----------+--------+--------+--------+--------+--------+
```

Restricted V1 form only:

- `rs1` = address or index of an already-packed aligned WQE
- `rs2` = QP id
- `rd` = status code
- queue base and tail state must come from fixed CSRs

If this restricted contract cannot be maintained cleanly, `rdma.post` should be removed from the first implementation wave.

### 5.9 Proposed MCU CSR Map for RDMA-Control Extensions

The first-generation MCU extension design uses dedicated machine-mode custom CSRs to hold queue state and shadow records. This keeps instruction operands explicit and avoids oversized register-file dependencies.

The CSR allocation below is a project-local proposal for simulation and experimentation. V1 does not claim architectural standardization.

#### 5.9.1 Mailbox Queue State CSRs

These CSRs provide the state needed by `mailbox.pop`.

```text
0xBC0 mh2m_cmdq_base_lo
0xBC1 mh2m_cmdq_base_hi
0xBC2 mh2m_cmdq_head
0xBC3 mh2m_cmdq_tail
0xBC4 mh2m_cmdq_size
0xBC5 mh2m_cmdq_stride
0xBC6 mh2m_status
0xBC7 mh2m_ctrl
```

Field intent:

- `mh2m_cmdq_base_lo[31:0]`
- `mh2m_cmdq_base_hi[31:0]`
- `mh2m_cmdq_head[31:0]`
- `mh2m_cmdq_tail[31:0]`
- `mh2m_cmdq_size[31:0]`
- `mh2m_cmdq_stride[31:0]`

`mh2m_status` bits:

- bit `0`: command queue non-empty
- bit `1`: command queue overflow seen
- bit `2`: mailbox ordering error
- bit `3`: host interrupt pending
- bits `31:4`: reserved

`mh2m_ctrl` bits:

- bit `0`: mailbox pop enable
- bit `1`: host interrupt enable
- bits `31:2`: reserved

#### 5.9.2 Mailbox Shadow Record CSRs

These CSRs hold one fixed-width offload command after `mailbox.pop`.

```text
0xBC8 moffcmd0
0xBC9 moffcmd1
0xBCA moffcmd2
0xBCB moffcmd3
0xBCC moffcmd4
0xBCD moffcmd5
0xBCE moffcmd6
0xBCF moffcmd7
```

Proposed packing for a 256-bit `OffloadCmd` shadow:

- `moffcmd0`
  - bits `31:0` = `opcode`
- `moffcmd1`
  - bits `31:0` = `cmd_id`
- `moffcmd2`
  - bits `31:0` = `peer_id`
- `moffcmd3`
  - bits `31:0` = `flags`
- `moffcmd4`
  - bits `31:0` = `src_addr[31:0]`
- `moffcmd5`
  - bits `31:0` = `src_addr[63:32]`
- `moffcmd6`
  - bits `31:0` = `dst_addr[31:0]`
- `moffcmd7`
  - bits `31:0` = `dst_addr[63:32]`

If `length` and `opaque` must also be included in the shadow path, v1 shall use one of the following:

- expand the mailbox shadow bank to `moffcmd0..moffcmd9`, or
- define a reduced fast-path command format for the first extension experiments

The second option is preferred for the first prototype because it keeps the dependency surface narrow.

#### 5.9.3 CQ State CSRs

These CSRs provide the state needed by `rdma.cq.pop`.

```text
0xBD0 mrd_cq_base_lo
0xBD1 mrd_cq_base_hi
0xBD2 mrd_cq_head
0xBD3 mrd_cq_tail
0xBD4 mrd_cq_size
0xBD5 mrd_cq_stride
0xBD6 mrd_cq_status
0xBD7 mrd_cq_ctrl
```

Field intent:

- `mrd_cq_base_lo[31:0]`
- `mrd_cq_base_hi[31:0]`
- `mrd_cq_head[31:0]`
- `mrd_cq_tail[31:0]`
- `mrd_cq_size[31:0]`
- `mrd_cq_stride[31:0]`

`mrd_cq_status` bits:

- bit `0`: CQ non-empty
- bit `1`: CQ overflow seen
- bit `2`: CQ error state
- bits `31:3`: reserved

`mrd_cq_ctrl` bits:

- bit `0`: CQ pop enable
- bit `1`: CQ interrupt acknowledge enable
- bits `31:2`: reserved

#### 5.9.4 CQ Shadow Record CSRs

These CSRs hold one fixed-width CQE after `rdma.cq.pop`.

```text
0xBD8 mcqe0
0xBD9 mcqe1
0xBDA mcqe2
0xBDB mcqe3
0xBDC mcqe4
0xBDD mcqe5
```

Proposed packing for a padded `CQE` shadow:

- `mcqe0`
  - bits `31:0` = `status`
- `mcqe1`
  - bits `31:0` = `opcode`
- `mcqe2`
  - bits `31:0` = `qp_id`
- `mcqe3`
  - bits `31:0` = `bytes`
- `mcqe4`
  - bits `31:0` = `timestamp[31:0]`
- `mcqe5`
  - bits `31:0` = `timestamp[63:32]`

If `user_id` is needed in the first prototype, add:

- `0xBDE mcqe6`

#### 5.9.5 RDMA Doorbell State CSRs

These CSRs reduce operand count for `rdma.db` and optional restricted `rdma.post`.

```text
0xBE0 mrd_qp_sel
0xBE1 mrd_sq_prod
0xBE2 mrd_rq_prod
0xBE3 mrd_db_status
0xBE4 mrd_sq_base_lo
0xBE5 mrd_sq_base_hi
0xBE6 mrd_sq_tail
0xBE7 mrd_sq_stride
```

Field intent:

- `mrd_qp_sel[31:0]`
- `mrd_sq_prod[31:0]`
- `mrd_rq_prod[31:0]`
- `mrd_db_status[31:0]`
- `mrd_sq_base_lo[31:0]`
- `mrd_sq_base_hi[31:0]`
- `mrd_sq_tail[31:0]`
- `mrd_sq_stride[31:0]`

This lets `rdma.db` operate either:

- with fully explicit `rs1` and `rs2` operands, or
- with `mrd_qp_sel` and producer values preloaded into CSRs

#### 5.9.6 CSR Design Rules

The CSR map shall obey these rules:

- all shadow records must be fixed-width
- all queue pointers must be scalar and directly readable
- no CSR may require implicit variable-length parsing
- a custom instruction may update at most one queue head or tail per issue in v1
- if an instruction needs more than one shadow bank update plus one queue-pointer update, it should be split

#### 5.9.7 First-Prototype Recommendation

To keep the first extension wave simple:

- implement `rdma.db` first
- implement `mailbox.pop` next
- implement `rdma.cq.pop` only if the CQE shadow width is finalized
- defer `rdma.post` until the WQE fast-path format is frozen

### 5.10 Candidate Evaluation Rule

Each candidate instruction shall be evaluated against a plain RISC-V baseline with the same mailbox protocol, RDMA engine, local memory model, and link parameters.

Required comparison dimensions:

- MCU instructions retired per transfer
- MCU cycles per transfer
- MMIO operations per transfer
- local memory accesses per transfer
- command-to-doorbell latency
- CQE-to-host-completion latency
- end-to-end throughput
- end-to-end latency

### 5.11 Extension-Specific Counters

If ISA extensions are modeled, add:

- `mcu_ext_rdma_post_count`
- `mcu_ext_rdma_db_count`
- `mcu_ext_rdma_cq_pop_count`
- `mcu_ext_mailbox_pop_count`
- `mcu_ext_rdma_post_batch_count`
- `mcu_ext_waitcq_count`
- `mcu_ext_cycles_saved_proxy`
- `mcu_ext_mmio_ops_saved_proxy`
- `mcu_ext_mem_ops_saved_proxy`

## 6. Component `N4`: `rdma_engine`

### 6.1 Purpose

`rdma_engine` is the hardware data-plane execution block.

It consumes configured state and queue entries, performs DMA, emits and receives abstract RDMA transport events, generates CQEs, and raises interrupts.

### 6.2 Adjacent Interfaces

#### `IF-E1`: MCU Control Interface

Direction:

- `rv_ctrl_core` <-> `rdma_engine`

Signals and fields:

- `mmio_addr[63:0]`
- `mmio_wdata[31:0]`
- `mmio_rdata[31:0]`
- `mmio_write`
- `mmio_read`
- `rdma_irq[7:0]`

#### `IF-E2`: RDMA-to-Memory DMA Interface

Direction:

- `rdma_engine` <-> `local_mem`

Signals and fields:

- `dma_addr[63:0]`
- `dma_wdata[511:0]`
- `dma_rdata[511:0]`
- `dma_len[31:0]`
- `dma_write`
- `dma_read`
- `dma_tag[15:0]`

V1 assumes a `512`-bit internal DMA datapath for bulk transfer modeling. This is a modeling constant, not a wire-level physical claim.

#### `IF-E3`: RDMA Link Interface

Direction:

- `rdma_engine` <-> remote link or `nic_tx_rx_stub`

Mechanism:

- packet/event object injection and reception

Fields:

- `pkt_type[31:0]`
- `qp_id[31:0]`
- `psn[31:0]`
- `src_node[31:0]`
- `dst_node[31:0]`
- `local_addr[63:0]`
- `remote_addr[63:0]`
- `len[31:0]`
- `flags[31:0]`
- `lkey[31:0]`
- `rkey[31:0]`
- `user_id[31:0]`

### 6.3 Behavioral Logic

`rdma_engine` shall implement:

- WQE fetch
- WQE decode
- QP state validation
- MR/key validation
- DMA read and DMA write scheduling
- packet/event transmit and receive
- CQE posting
- interrupt generation

The engine must maintain deterministic behavior for equal-time events.

### 6.4 Sequential Behavior Relevant to Performance

The following stages are potential bottlenecks and must be visible:

- WQE fetch delay
- scheduler wait time
- DMA read occupancy
- DMA write occupancy
- packet transmit occupancy
- packet receive service time
- CQE post latency
- interrupt raise latency

Required constants:

- `t_wqe_fetch`
- `t_dma_read`
- `t_dma_write`
- `t_pkt_tx_base`
- `t_pkt_tx_per_byte`
- `t_net_rtt`
- `t_cqe_post`
- `t_irq_raise`
- `rdma_scheduler_issue_rate_ops_per_sec`
- `rdma_max_inflight_ops`

### 6.5 Required Counters

- `rdma_wqe_fetched`
- `rdma_wqe_executed`
- `rdma_cqe_posted`
- `rdma_bytes_read`
- `rdma_bytes_written`
- `rdma_packets_tx`
- `rdma_packets_rx`
- `rdma_scheduler_busy_cycles`
- `rdma_dma_read_busy_cycles`
- `rdma_dma_write_busy_cycles`
- `rdma_tx_busy_cycles`
- `rdma_rx_busy_cycles`
- `rdma_wqe_to_cqe_latency_sum`
- `rdma_qp_error_count`
- `rdma_retry_count`
- `rdma_timeout_count`

If v1 remains too abstract for true cycle counts, expose:

- `effective_dma_read_bandwidth`
- `effective_dma_write_bandwidth`
- `effective_link_bandwidth`

## 7. Component `N5`: `local_mem`

### 7.1 Purpose

`local_mem` stores:

- MCU firmware code and data
- mailbox rings if mapped locally
- QP state if memory-backed
- SQ, RQ, CQ entries
- payload buffers

It is a shared bottleneck between control-plane access and data-plane DMA.

### 7.2 Adjacent Interfaces

#### `IF-L1`: MCU Memory Interface

Direction:

- `rv_ctrl_core` <-> `local_mem`

Signals and fields:

- `mcu_mem_addr[63:0]`
- `mcu_mem_wdata[63:0]`
- `mcu_mem_rdata[63:0]`
- `mcu_mem_be[7:0]`
- `mcu_mem_write`
- `mcu_mem_read`

#### `IF-L2`: RDMA DMA Interface

Direction:

- `rdma_engine` <-> `local_mem`

Signals and fields:

- `dma_addr[63:0]`
- `dma_wdata[511:0]`
- `dma_rdata[511:0]`
- `dma_len[31:0]`
- `dma_write`
- `dma_read`
- `dma_tag[15:0]`

### 7.3 Behavioral Logic

`local_mem` shall provide:

- deterministic read/write service
- arbitration between MCU and RDMA engine requesters
- address-range checking
- optional fixed-priority or round-robin arbitration policy

The memory model need not be DRAM-accurate in v1, but it must expose enough structure to reveal contention between control and data paths.

### 7.4 Timing and Bandwidth Parameters

- `local_mem_bandwidth_bytes_per_sec`
- `local_mem_base_latency`
- `local_mem_mcu_port_share`
- `local_mem_rdma_port_share`
- `local_mem_arbitration_policy`
  - `0 = fixed priority`
  - `1 = round robin`
  - `2 = weighted`

### 7.5 Required Counters

- `local_mem_reads`
- `local_mem_writes`
- `local_mem_bytes_read`
- `local_mem_bytes_written`
- `local_mem_mcu_req_count`
- `local_mem_rdma_req_count`
- `local_mem_mcu_wait_time_sum`
- `local_mem_rdma_wait_time_sum`
- `local_mem_queue_depth_hwm`
- `local_mem_bank_conflict_proxy_count`

If bank-level modeling is absent in v1, `local_mem_bank_conflict_proxy_count` may be implemented as:

- count of requests delayed by arbitration beyond `local_mem_base_latency`

## 8. End-to-End Probe Placement

Probes or counters must be placed wherever end-to-end RDMA latency or throughput can be limited.

Required probe points:

1. host command creation
2. mailbox enqueue
3. mailbox dequeue at MCU
4. first MCU MMIO access for a command
5. SQ doorbell write
6. WQE fetch begin/end
7. DMA read begin/end
8. packet tx
9. packet rx
10. DMA write begin/end
11. CQE post
12. MCU completion consume
13. host-visible completion post
14. host completion consume

Required derived metrics:

- host-intent to host-visible completion latency
- host-intent to doorbell latency
- mailbox residency time
- MCU command service time
- RDMA engine service time
- local memory contention penalty
- effective end-to-end throughput

## 9. Recommended Implementation Order

1. implement `N5` `local_mem` with counters and deterministic arbitration
2. implement `N2` `host_mcu_mailbox` with command/completion rings
3. implement `N1` `host_stub` to generate `TRANSFER` commands
4. bring up `N3` `rv_ctrl_core` mailbox dequeue and completion return path
5. implement `N4` `rdma_engine` queue, DMA, and CQE flow
6. connect node-local probes and timestamps
7. connect remote peer path
8. run message-size and batching sweeps

## 10. Minimum V1 Acceptance per Node

The node implementation is acceptable for v1 when:

- the host can post a `TRANSFER` command
- the mailbox can deliver it to the MCU deterministically
- the MCU can translate it into RDMA engine work
- the RDMA engine can move data through local memory and the remote link
- host-visible completion returns correctly
- the required counters and timing probes are readable
- throughput and latency sweeps can be exported in structured form
