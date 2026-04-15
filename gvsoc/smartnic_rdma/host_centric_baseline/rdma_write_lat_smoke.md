# `rdma_write_lat` Smoke Path

## Purpose

This note describes the current minimal host-centric queue-backed smoke path for one `RDMA_WRITE`-style operation.

The goal is not yet a full benchmark loop. The goal is to validate the first end-to-end control/data sequence:

1. host writes one WQE into SQ memory
2. host rings the SQ doorbell
3. RDMA engine fetches the WQE from memory
4. RDMA engine performs the payload copy
5. RDMA engine writes one CQE into CQ memory
6. host observes the completion
7. host verifies destination-buffer and CQE correctness

## Current Data Structures

### WQE

The current minimal WQE used in the smoke path is:

```c
struct HostWqe {
    uint32_t opcode;
    uint32_t flags;
    uint64_t src_addr;
    uint64_t dst_addr;
    uint32_t length;
    uint32_t user_id;
};
```

Current assumption:

- `opcode = 1` means a minimal `RDMA_WRITE`-style copy command

### CQE

The current minimal CQE used in the smoke path is:

```c
struct HostCqe {
    uint32_t status;
    uint32_t bytes;
    uint32_t user_id;
    uint32_t reserved;
};
```

## Current MMIO Usage

The current draft control path uses:

- `CONTROL` at offset `0x0004`
- `STATUS` at offset `0x0008`
- `SQ_DOORBELL` at offset `0x0200`

Current meaning:

- write `1` to `CONTROL` to enable the engine
- write `1` to `SQ_DOORBELL` to trigger one queue fetch/execute sequence
- read `STATUS` to observe idle/busy/done state

## Current Memory Layout

The current smoke path assumes:

- `SQ` base at `0x00001000`
- `CQ` base at `0x00002000`
- source buffer at `0x00010000`
- destination buffer at `0x00020000`

These are baseline draft constants and can later become target parameters.

## Current Execution Sequence

### Host Side

The host stub:

- initializes the source buffer with a byte pattern
- clears the destination buffer
- writes one WQE into SQ memory
- enables the RDMA engine
- rings the SQ doorbell
- reads back one CQE from CQ memory

### RDMA Engine Side

The RDMA engine:

- receives the SQ doorbell
- fetches one WQE from SQ memory using its DMA interface
- validates the opcode in a minimal way
- reads the source payload from memory
- writes the destination payload to memory
- writes one CQE into CQ memory
- raises one IRQ pulse

## What This Smoke Path Proves

If working, this smoke path proves:

- host-centric direct RDMA control path is structurally connected
- queue-backed operation is functioning at the minimum level
- the engine can fetch WQE state from memory rather than relying on a hardcoded copy trigger
- the completion path through CQ memory exists
- the destination buffer can be checked for functional correctness
- the CQE fields can be checked for functional correctness

## Current Validation Checks

The current host-side smoke path now checks:

- destination buffer matches the source buffer
- `cqe.status == 0`
- `cqe.bytes == copy_size`
- `cqe.user_id == 1`

These checks are still local smoke checks, not a full benchmark harness.

## Current Timestamp Markers

The current host-side smoke path records:

- `t_host_issue`
- `t_doorbell`
- `t_cqe_visible`
- `t_host_completion`

These markers are enough to derive the first latency slices:

- host-intent to doorbell
- doorbell to CQE visibility
- host-intent to host-visible completion

## What It Does Not Yet Prove

This smoke path does not yet prove:

- remote peer behavior
- full RDMA semantics
- benchmark repeatability
- throughput behavior
- interrupt-driven host completion logic
- queue depth handling beyond one entry
- robust error handling

## Immediate Next Step

The next engineering step should be:

- turn the single operation into a timed repeated loop for the first true `rdma_write_lat` microbenchmark
