# Layered Host Plan

## Purpose

This document refines the host-centric baseline so that the host side is no longer treated as one collapsed behavioral block.

The selected architecture is:

- `host CPU pipeline`: `Option A`, a real `rv64` ISS
- `host user space`: behavioral layer with explicit timing
- `host kernel`: behavioral layer with explicit timing
- `host RDMA driver`: behavioral layer with explicit timing
- `host-device control interface`: behavioral PCIe/MMIO/DMA control layer with explicit timing
- `rdma_engine`: hardware-like data-plane model
- `local_mem`: memory system model

This is still a practical simulation architecture. It separates the host software layers without requiring a full Linux port or a real host PCIe software stack.

## Layered Host Stack

The refined host-centric stack is:

1. `H0` `host_cpu_rv64`
2. `H1` `host_userspace`
3. `H2` `host_kernel`
4. `H3` `host_rdma_driver`
5. `H4` `host_pcie_if`
6. `D0` `rdma_engine`
7. `D1` `local_mem`

The key modeling choice is:

- only `H0` is a real ISS-based processor model
- `H1` to `H4` are behavioral timing layers

## Why This Split

This split gives the host-centric baseline a much better interpretation:

- the host CPU pipeline is no longer hidden inside a stub
- user-space, kernel, and driver overheads can be separated
- the host-device control boundary is explicit
- the data plane remains in the RDMA engine

This is a strong baseline for later comparison against:

- MCU-offloaded control
- MCU-offloaded control with ISA extensions

## Component Roles

### `H0` `host_cpu_rv64`

This is a real `rv64` ISS instance.

Responsibilities:

- execute benchmark firmware
- generate high-level communication intent
- pay real instruction-execution cost for the host benchmark control path

Non-goals in v1:

- full Linux
- full syscall emulation
- full user/kernel mode semantics

The firmware can still be structured as if it calls user, kernel, and driver layers, but those layers are represented by adjacent behavioral modules.

### `H1` `host_userspace`

This models user-space runtime behavior.

Responsibilities:

- translate benchmark intent into RDMA library/runtime requests
- model request preparation overhead
- model batching policy

Suggested timing constants:

- `t_userspace_prepare_cycles`
- `t_userspace_batch_decision_cycles`

### `H2` `host_kernel`

This models kernel-side mediation.

Responsibilities:

- syscall / trap entry overhead proxy
- kernel dispatch overhead
- queue ownership and permission checks

Suggested timing constants:

- `t_syscall_entry_cycles`
- `t_kernel_dispatch_cycles`
- `t_kernel_check_cycles`

### `H3` `host_rdma_driver`

This models host RDMA driver logic.

Responsibilities:

- construct WQEs
- manage SQ/CQ metadata
- issue doorbells
- interpret completions

Suggested timing constants:

- `t_driver_wqe_build_cycles`
- `t_driver_db_issue_cycles`
- `t_driver_cqe_consume_cycles`

### `H4` `host_pcie_if`

This models the host-device control interface.

This is better named `host_pcie_if` or `host_device_ctrl_if` than “PCIe software stack,” because it includes interface timing semantics rather than software alone.

Responsibilities:

- model MMIO write propagation
- model host-visible completion read visibility
- model control-path DMA visibility if later needed

Suggested timing constants:

- `t_mmio_post_cycles`
- `t_mmio_read_cycles`
- `t_host_dev_visibility_cycles`

### `D0` `rdma_engine`

This remains the hardware-like data-plane execution block.

Responsibilities:

- fetch WQE
- perform DMA read/write
- write CQE
- expose engine status

This component should later gain its own timed FSM.

### `D1` `local_mem`

This remains the memory system model shared by host/device requests.

Responsibilities:

- store SQ/CQ state
- store source and destination buffers
- model memory access latency and bandwidth

## Interface Decomposition

The host path should be decomposed into explicit adjacent interfaces.

### `IF-H0-H1`: CPU to User Runtime

Abstraction:

- firmware call / request descriptor handoff

Fields:

- `req_opcode[31:0]`
- `peer_id[31:0]`
- `src_addr[63:0]`
- `dst_addr[63:0]`
- `length[31:0]`
- `req_id[31:0]`

### `IF-H1-H2`: User to Kernel

Abstraction:

- syscall-like request boundary

Fields:

- `verb_opcode[31:0]`
- `buf_addr[63:0]`
- `peer_qp[31:0]`
- `length[31:0]`
- `flags[31:0]`

### `IF-H2-H3`: Kernel to Driver

Abstraction:

- internal RDMA-driver control request

Fields:

- `driver_opcode[31:0]`
- `sq_addr[63:0]`
- `cq_addr[63:0]`
- `src_addr[63:0]`
- `dst_addr[63:0]`
- `length[31:0]`
- `user_id[31:0]`

### `IF-H3-H4`: Driver to Host-Device Interface

Abstraction:

- MMIO and queue-memory programming operations

Fields:

- `mmio_addr[63:0]`
- `mmio_wdata[31:0]`
- `mmio_write_en[0:0]`
- `queue_addr[63:0]`
- `queue_wdata[255:0]`
- `queue_write_valid[0:0]`

### `IF-H4-D0`: Host to RDMA Engine

Abstraction:

- host-visible control interface

Mechanisms:

- MMIO control register write
- SQ doorbell write
- CQ/status polling reads

### `IF-H4-D1`: Host to Local Memory

Abstraction:

- queue/buffer memory access path

Used for:

- SQ write
- CQ read
- source buffer write
- destination buffer read

## Practical Implementation Strategy

The implementation should proceed in two steps.

### Step 1: Preserve Current Functional Flow, Split the Host Layers Behaviorally

Keep the current benchmark semantics, but replace one monolithic `host_stub` with:

- `host_userspace_stub`
- `host_kernel_stub`
- `host_rdma_driver_stub`
- `host_pcie_if`

while introducing:

- `host_cpu_rv64` as an ISS core

The behavioral host layers should be implemented as explicit state transitions and cycle costs, not full software systems.

### Step 2: Move Benchmark Issuance to the RV64 Core

The benchmark firmware on `host_cpu_rv64` should:

- trigger the layered host flow
- wait for completion
- collect latency samples

This allows host CPU execution cost to be measured through the ISS while keeping the rest of the host software stack tractable.

## Recommended Build Order

1. Replace `host_stub` with `host_cpu_rv64` plus one behavioral `host_control_path` wrapper.
2. Split `host_control_path` into `host_userspace`, `host_kernel`, `host_rdma_driver`, `host_pcie_if`.
3. Preserve the current successful local `RDMA_WRITE` flow.
4. Re-run the smoke benchmark and confirm correctness.
5. Add timing constants per host layer.
6. Add counters per host layer.
7. Only then re-introduce nonzero memory and RDMA-engine timing.

## Minimum Counters Per Host Layer

### `H0` `host_cpu_rv64`

- `host_cpu_cycles_total`
- `host_cpu_insn_retired`
- `host_cpu_cycles_per_req`

### `H1` `host_userspace`

- `userspace_req_count`
- `userspace_total_cycles`
- `userspace_batch_count`

### `H2` `host_kernel`

- `kernel_req_count`
- `kernel_total_cycles`
- `kernel_dispatch_cycles`

### `H3` `host_rdma_driver`

- `driver_wqe_count`
- `driver_doorbell_count`
- `driver_total_cycles`
- `driver_cqe_count`

### `H4` `host_pcie_if`

- `pcie_mmio_write_count`
- `pcie_mmio_read_count`
- `pcie_total_cycles`
- `pcie_completion_visibility_cycles`

## Current Recommendation

For the host-centric baseline, use:

- real `rv64` ISS for host CPU execution
- behavioral timing layers for user space, kernel, driver, and host-device control interface

This gives a much better host baseline without exploding implementation scope.
