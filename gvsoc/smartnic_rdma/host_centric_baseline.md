# Host-Centric RDMA Baseline Plan

## 0. Purpose

This document defines the first evaluation case:

- host-centric RDMA control
- no SmartNIC MCU in the fast path
- no custom MCU instructions

This case is the baseline against which later MCU-offloaded and MCU-ISA-extended designs will be compared.

## 1. Goal

The goal of the host-centric baseline is to establish a working end-to-end RDMA experiment where:

- the host-side control logic directly manages RDMA operations
- the RDMA engine remains the hardware-like data plane
- the same queue, memory, and link semantics used in later cases are preserved

This baseline must answer:

- what is the latency and throughput of the conventional control method?
- where is time spent in the host-managed control path?
- what fraction of the end-to-end cost later moves to the MCU?

## 2. Architecture of Case A

For the host-centric baseline, the per-node logic is reduced to:

1. `host_stub`
2. `rdma_engine`
3. `local_mem`

Optional support blocks:

- `mmio_router`
- `interrupt_ctrl`
- `nic_tx_rx_stub`

The key rule is:

- the host directly performs RDMA control
- the mailbox and MCU are not used on the fast path

## 3. Control/Data Split in the Baseline

### 3.1 Host Responsibilities

The host side is responsible for:

- QP configuration
- MR configuration
- queue allocation
- WQE preparation
- doorbell issue
- completion polling or interrupt handling

### 3.2 RDMA Engine Responsibilities

The RDMA engine is responsible for:

- WQE fetch
- QP/MR validation
- DMA read and write
- packet/event transmit and receive
- CQE post
- interrupt generation

### 3.3 Local Memory Responsibilities

The local memory system stores:

- QP and MR metadata if memory-backed
- SQ/RQ/CQ structures
- payload buffers
- host-visible benchmark buffers

## 4. Minimum Interfaces

### 4.1 Host-to-RDMA Control Interface

This is the main interface in Case A.

It should be implemented as:

- MMIO register access
- queue memory writes
- SQ/RQ doorbells
- CQ polling or interrupt consumption

Required host-visible control actions:

- `qp_config(qp_id, ...)`
- `mr_config(mr_id, ...)`
- `post_wqe(qp_id, wqe_ptr or wqe fields)`
- `ring_sq(qp_id, producer_idx)`
- `poll_cq(qp_id)`

### 4.2 RDMA-to-Memory Interface

Required behavior:

- RDMA engine can fetch WQEs from local memory
- RDMA engine can DMA-read payload from local memory
- RDMA engine can DMA-write payload or CQEs into local memory

### 4.3 RDMA Link Interface

Required behavior:

- RDMA engine exchanges abstract packet/event objects with the remote peer

## 5. Required Components for the First Bring-Up

### 5.1 `host_stub`

In the baseline, `host_stub` acts as:

- host runtime
- host driver shim
- workload generator

It must directly program the RDMA engine and directly consume benchmark completions.

### 5.2 `rdma_engine`

The RDMA engine should be identical to the one used in later cases.

This is essential for fair comparison.

### 5.3 `local_mem`

The local memory model should also be identical to later cases.

This is essential for preserving memory-contention effects across all evaluation cases.

## 6. First Benchmark to Implement

The first benchmark should be:

- `rdma_write_lat`

Reason:

- simplest end-to-end control path
- easiest to verify functionally
- most useful for exposing control overhead

### 6.1 Minimal Sequence

1. host prepares source and destination buffers
2. host configures QP and MR state
3. host writes one WQE into SQ memory
4. host rings the SQ doorbell
5. RDMA engine fetches and executes the WQE
6. remote side services the request
7. RDMA engine posts a CQE
8. host polls CQ or receives interrupt
9. host records completion latency

### 6.2 First Success Criterion

The baseline is functionally alive when:

- one `RDMA_WRITE` completes correctly
- data arrives in the expected remote buffer
- one CQE is posted correctly
- host can measure one end-to-end completion latency

## 7. Metrics to Record in Case A

### 7.1 End-to-End Metrics

- `throughput_MBps`
- `throughput_Gbps`
- `avg_lat_ns`
- `p95_lat_ns`
- `p99_lat_ns`

### 7.2 Host-Control Metrics

- host-side WQE preparation time
- host-side doorbell issue time
- host-side CQ polling time
- host-intent to doorbell latency
- host-intent to completion latency

### 7.3 RDMA Engine Metrics

- WQE fetch count
- bytes read
- bytes written
- packets transmitted
- packets received
- WQE-to-CQE latency

### 7.4 Memory Metrics

- memory request count
- bytes transferred
- wait time due to arbitration or latency

## 8. Counters Needed in the Baseline

### 8.1 Host-Side Counters

- `host_wqe_posts`
- `host_doorbells`
- `host_cq_polls`
- `host_mmio_reads`
- `host_mmio_writes`
- `host_cmd_to_doorbell_latency_sum`
- `host_cmd_to_completion_latency_sum`

### 8.2 RDMA Engine Counters

- `rdma_wqe_fetched`
- `rdma_wqe_executed`
- `rdma_cqe_posted`
- `rdma_bytes_read`
- `rdma_bytes_written`
- `rdma_packets_tx`
- `rdma_packets_rx`
- `rdma_wqe_to_cqe_latency_sum`

### 8.3 Local Memory Counters

- `local_mem_reads`
- `local_mem_writes`
- `local_mem_bytes_read`
- `local_mem_bytes_written`
- `local_mem_wait_time_sum`

## 9. Parameter Sweep for the Baseline

The minimum baseline sweep is:

### 9.1 Message Size

- `64`
- `128`
- `256`
- `512`
- `1024`
- `2048`
- `4096`
- `8192`
- `16384`
- `32768`
- `65536`

### 9.2 Outstanding Depth

Start with:

- `1`

Then extend to:

- `2`
- `4`
- `8`
- `16`

### 9.3 Completion Mode

- polling first
- interrupt mode second

Polling should be implemented first because it is easier to validate and attribute.

## 10. Implementation Order

### Step 1

Build a minimal single-node control path:

- host can write RDMA MMIO
- host can allocate queue memory

### Step 2

Add a behavioral remote peer or second node.

### Step 3

Implement one working `RDMA_WRITE`.

### Step 4

Add CQ polling and latency measurement.

### Step 5

Run message-size sweep for `rdma_write_lat`.

### Step 6

Add streaming benchmark `rdma_write_bw`.

## 11. Output Format

Each run should export one structured record:

```text
case,op,msg_size,outstanding,completion_mode,total_bytes,total_ops,elapsed_ns,throughput_MBps,throughput_Gbps,avg_lat_ns,p95_lat_ns,p99_lat_ns,host_mmio_ops_per_op,host_polls_per_op,rdma_wqe_to_cqe_avg_ns
```

For this case:

- `case = host_centric`

## 12. What This Baseline Must Provide for Later Cases

This baseline must produce:

- one functionally correct conventional control path
- one stable latency curve
- one stable throughput curve
- a counter set that can later be compared against the MCU-offload cases

Without this baseline, the MCU-offload evaluation will not have a trustworthy reference.
