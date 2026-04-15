# Host Refactor Plan

## Purpose

This document turns the layered host architecture into an implementation sequence.

The main objective is to replace the current monolithic `host_stub` benchmark driver with a layered host-centric baseline built around:

- a real `rv64` ISS for host CPU execution
- separated behavioral host layers for:
  - user space
  - kernel
  - RDMA driver
  - host-device control interface

The current smoke baseline remains useful as a reference bring-up artifact, but it should no longer be treated as the final host-centric architecture.

## Target Architecture

The target host-centric baseline is:

1. `host_cpu_rv64`
2. `host_userspace`
3. `host_kernel`
4. `host_rdma_driver`
5. `host_pcie_if`
6. `rdma_engine`
7. `local_mem`

The current `host_stub` should be viewed as a temporary collapsed form of `H1` through `H4`, not as the long-term baseline.

## Refactor Strategy

The refactor should proceed incrementally so the platform keeps a runnable checkpoint after each step.

### Phase 0: Preserve the Current Smoke Path

Keep the current working baseline intact as a fallback.

Current working components:

- [baseline_target.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/baseline_target.py)
- [host_stub_comp.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_stub_comp.py)
- [host_stub.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_stub.cpp)
- [rdma_engine_comp.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/rdma_engine_comp.py)
- [rdma_engine.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/rdma_engine.cpp)

This is the functional reference point.

### Phase 1: Insert a Real `rv64` ISS Above the Current Host Logic

Goal:

- replace the implicit host CPU behavior with a real ISS
- keep the current host-side control flow below it as one temporary wrapper

New structure:

1. `host_cpu_rv64`
2. `host_control_path_stub`
3. `rdma_engine`
4. `local_mem`

#### New Files

- `host_cpu_target.py`
- `host_control_path_comp.py`
- `host_control_path.cpp`
- optionally `firmware/` for host benchmark code

#### What Changes

- the `rv64` ISS becomes the source of benchmark intent
- the old `host_stub` logic moves into `host_control_path`
- `host_control_path` still collapses user/kernel/driver/PCIe layers temporarily

#### What Stays the Same

- current WQE format
- current RDMA engine
- current memory structure
- current single-node local `RDMA_WRITE` smoke semantics

### Phase 2: Split `host_control_path` into Behavioral Host Layers

Goal:

- separate host-side software overhead into visible layers

New structure:

1. `host_cpu_rv64`
2. `host_userspace`
3. `host_kernel`
4. `host_rdma_driver`
5. `host_pcie_if`
6. `rdma_engine`
7. `local_mem`

#### New Files

- `host_userspace_comp.py`
- `host_userspace.cpp`
- `host_kernel_comp.py`
- `host_kernel.cpp`
- `host_rdma_driver_comp.py`
- `host_rdma_driver.cpp`
- `host_pcie_if_comp.py`
- `host_pcie_if.cpp`

#### Layer Responsibilities

`host_userspace`

- request preparation
- batching decision
- userspace-to-kernel request transfer

`host_kernel`

- syscall/trap proxy
- kernel dispatch
- permission and queue checks

`host_rdma_driver`

- WQE construction
- SQ/CQ management
- doorbell issue logic
- completion decode

`host_pcie_if`

- MMIO propagation delay
- CQ/status read delay
- host-visible control interface timing

### Phase 3: Move the Benchmark Driver into `rv64` Firmware

Goal:

- stop embedding benchmark control entirely in a C++ hardware component
- let the host CPU issue benchmark requests as software

#### New Assets

- `firmware/rdma_write_lat/`
- host benchmark source
- linker script / startup as needed

#### Behavior

The firmware should:

- create one request per iteration
- call into the host-side control path
- wait for completion
- collect latency samples
- print or export results

This phase is what makes the host CPU pipeline meaningful in the baseline.

### Phase 4: Reintroduce Nonzero Timing in the RDMA Path

Goal:

- once the host side is layered properly, add real timing into the RDMA side

This should happen only after the new layered host stack is stable, so the source of timing is easier to interpret.

Suggested RDMA-engine timing constants:

- `wqe_fetch_cycles`
- `dma_read_cycles`
- `dma_write_cycles`
- `cqe_write_cycles`

Suggested host-device timing constants:

- `mmio_post_cycles`
- `mmio_read_cycles`
- `completion_visibility_cycles`

## Transitional Implementation Rule

At no point should we delete the last known-good runnable checkpoint until the replacement phase is validated.

That means:

- keep the current smoke host path until `Phase 1` is runnable
- keep `Phase 1` until `Phase 2` is runnable
- keep `Phase 2` until firmware-driven `Phase 3` is runnable

## Immediate Next Step

The most practical next step is:

### `Step A`

Replace `host_stub` with:

- `rv64` ISS
- one temporary `host_control_path` block

This gives:

- real host CPU execution
- minimal structural disruption
- a clear path toward splitting the remaining host layers afterward

## Phase 1 Concrete Blueprint

Phase 1 should not try to model a full host software stack yet. The goal is narrower:

- make host benchmark intent originate from a real `rv64` core
- keep the rest of the current control path runnable
- preserve the existing successful local `RDMA_WRITE` smoke behavior

The recommended temporary structure is:

1. `host_cpu_rv64`
2. `host_control_path`
3. `rdma_engine`
4. `local_mem`

### Phase 1 Interpretation

During Phase 1:

- `host_cpu_rv64` models host CPU execution cost
- `host_control_path` temporarily collapses:
  - user space
  - kernel
  - RDMA driver
  - host-device control interface

This means Phase 1 is intentionally asymmetric:

- CPU pipeline realism is introduced immediately
- host software layering remains behaviorally collapsed one more step

That is acceptable because it creates a working checkpoint with a real CPU before the control path is split further.

### Recommended Phase 1 Interfaces

The `rv64` core should not directly build WQEs into device-visible memory in Phase 1. Instead, it should communicate with `host_control_path` through a small host-request interface.

Suggested `IF-CPU-CTRL` request fields:

- `opcode[31:0]`
- `src_addr[63:0]`
- `dst_addr[63:0]`
- `length[31:0]`
- `user_id[31:0]`
- `valid[0:0]`

Suggested completion fields:

- `status[31:0]`
- `bytes_done[31:0]`
- `user_id[31:0]`
- `done[0:0]`

Phase 1 can implement this interface in one of two ways:

- memory-mapped control registers between CPU firmware and `host_control_path`
- a small custom wire or IO request interface

The preferred first step is memory-mapped control registers, because it keeps the firmware bring-up simple and debuggable.

### Recommended MMIO Register Sketch for `host_control_path`

If the Phase 1 CPU-to-control-path boundary is MMIO, use a compact register bank such as:

- `0x0000` `REQ_OPCODE`
- `0x0008` `REQ_SRC_ADDR_LO`
- `0x000c` `REQ_SRC_ADDR_HI`
- `0x0010` `REQ_DST_ADDR_LO`
- `0x0014` `REQ_DST_ADDR_HI`
- `0x0018` `REQ_LEN`
- `0x001c` `REQ_USER_ID`
- `0x0020` `REQ_DOORBELL`
- `0x0024` `CPL_STATUS`
- `0x0028` `CPL_BYTES_DONE`
- `0x002c` `CPL_USER_ID`
- `0x0030` `CPL_DONE`

This is enough for the first firmware-driven smoke benchmark.

### Phase 1 Behavior of `host_control_path`

`host_control_path` should initially reuse the same proven logic currently in `host_stub`:

- prepare WQE
- write WQE to SQ memory
- write `CONTROL`
- ring `SQ_DOORBELL`
- poll RDMA status
- read CQE
- expose completion back to the CPU-visible register bank

The difference is not the logic yet. The difference is where the request originates:

- today: internal benchmark FSM inside `host_stub`
- Phase 1: firmware on `host_cpu_rv64`

### Recommended Firmware Shape

The first `rv64` firmware does not need a library stack. It can be a very small polling benchmark:

1. write request registers in `host_control_path`
2. ring `REQ_DOORBELL`
3. poll `CPL_DONE`
4. read `CPL_STATUS`, `CPL_BYTES_DONE`, `CPL_USER_ID`
5. repeat for `N` iterations
6. print final summary

That firmware should mirror the existing smoke semantics:

- one local `RDMA_WRITE`
- fixed `copy_size`
- fixed iteration count
- synchronous completion handling

### Recommended Phase 1 Target Wiring

`baseline_target.py` should eventually evolve toward:

- one host clock domain
- one `rv64` ISS instance
- one `host_control_path`
- one `rdma_engine`
- one `local_mem`
- one router or interconnect that exposes:
  - control-path MMIO region
  - RDMA-engine MMIO region
  - main memory region

Suggested provisional map:

- `0x00000000` to `local_mem`
- `0x20000000` to `host_control_path`
- `0x20010000` to `rdma_engine`

The exact addresses may change, but the key rule is:

- CPU-visible control-path MMIO and RDMA MMIO should be distinct

### Phase 1 Bring-Up Milestones

The Phase 1 bring-up should be done in this order:

1. instantiate `rv64` ISS without changing the existing working smoke path
2. add `host_control_path` as a separate component while still keeping current `host_stub` available as fallback
3. make `host_control_path` respond to CPU MMIO reads and writes
4. boot tiny firmware that can write one request into `host_control_path`
5. make `host_control_path` drive the existing RDMA engine successfully
6. read completion back from firmware
7. remove the old benchmark-driving responsibility from `host_stub`

### Phase 1 Debug Requirements

To keep bring-up manageable, Phase 1 should expose CLI-visible progress at three places:

- firmware-side request issue
- `host_control_path` request acceptance and completion publication
- RDMA-engine WQE fetch / copy / CQE completion

This will preserve the current high-visibility debug style that has already been useful in the smoke baseline.

### Phase 1 Exit Condition

Phase 1 is only considered complete when all of the following are true:

- the host request originates in `rv64` firmware
- `host_control_path` completes one local `RDMA_WRITE`
- the firmware observes success through the CPU-visible interface
- the simulation terminates cleanly on success
- the old `host_stub` benchmark loop is no longer required for the main runnable path

## Recommended File Ownership for the Next Step

### Files to Add

- `host_cpu_soc.py`
- `host_control_path_comp.py`
- `host_control_path.cpp`
- `firmware/README.md`

### Files to Update

- [baseline_target.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/baseline_target.py)
- [README.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/README.md)
- [debug_log.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/debug_log.md)

### Files to Keep for Reference

- [host_stub_comp.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_stub_comp.py)
- [host_stub.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_stub.cpp)

## Success Criteria for Phase 1

Phase 1 is complete when:

1. `rv64` ISS is instantiated in the host-centric baseline
2. benchmark intent originates from the host CPU side
3. the control path still produces a successful local `RDMA_WRITE`
4. the simulation still exits cleanly
5. host CPU cycles and retired instructions can be observed

## Why This Order Is Best

This order gives the biggest architectural improvement with the smallest immediate rewrite:

- you stop pretending the host is a monolithic stub
- you gain a real CPU model early
- you avoid a premature explosion into too many components
- you keep a live runnable system throughout the refactor
