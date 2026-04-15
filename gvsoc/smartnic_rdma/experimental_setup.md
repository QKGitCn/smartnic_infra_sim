# Experimental Setup: MCU-Offloaded RDMA Control and ISA Evaluation

## 0. Purpose

This document defines the experimental setup for evaluating:

1. conventional host-centric RDMA control
2. MCU-offloaded RDMA control with baseline RISC-V software
3. MCU-offloaded RDMA control with selected RISC-V ISA extensions

The purpose of the setup is to isolate:

- the effect of moving RDMA control from the host to the SmartNIC MCU
- the effect of adding custom instructions to the MCU after offloading

The setup must therefore hold the RDMA data plane fixed while varying only the control-plane placement and the MCU instruction set.

## 1. Evaluation Questions

The experimental setup must answer the following questions.

### 1.1 Offload Question

What is the performance impact of moving RDMA control from the host to the SmartNIC MCU?

This is evaluated by comparing:

- `Case A`: host-centric control
- `Case B`: MCU-offloaded control with baseline RISC-V software

### 1.2 ISA Question

What is the performance impact of adding custom instructions to the SmartNIC MCU once the control plane has already been offloaded?

This is evaluated by comparing:

- `Case B`: MCU-offloaded control with baseline RISC-V software
- `Case C`: MCU-offloaded control with RISC-V extensions

### 1.3 End-to-End Question

What is the total benefit or cost of the proposed design relative to the conventional control method?

This is evaluated by comparing:

- `Case A`: host-centric control
- `Case C`: MCU-offloaded control with RISC-V extensions

## 2. Experimental Cases

### 2.1 Case A: Host-Centric Baseline

In this case:

- the host runs the application-side communication logic
- the host directly performs RDMA control actions
- the fast-path control work does not go through the SmartNIC MCU

The RDMA engine and data plane remain unchanged.

This case represents the conventional software-controlled RDMA setup.

### 2.2 Case B: MCU-Offloaded Baseline

In this case:

- the host issues high-level communication intent
- the host sends offload commands to the SmartNIC MCU
- the MCU executes RDMA control with baseline RISC-V software
- no custom instructions are used

The RDMA engine and data plane remain unchanged.

This case isolates the architectural effect of offloading the control plane to the MCU.

### 2.3 Case C: MCU-Offloaded with ISA Extensions

In this case:

- the host-to-MCU offload path is the same as in Case B
- the MCU uses selected custom instructions
- the data plane remains unchanged

The first extension set should be:

- `rdma.db`
- `mailbox.pop`
- optionally `rdma.cq.pop`

This case isolates the benefit of MCU ISA support after control offload.

## 3. Fair Comparison Rules

The following must remain fixed across all cases:

- RDMA engine functionality
- queue semantics
- memory registration semantics
- local memory model
- link timing model
- remote peer behavior
- workload pattern
- message-size sweep
- outstanding-depth sweep
- QP-count sweep

Only the control path may change between cases.

If this rule is violated, the comparison will not cleanly attribute performance changes to offloading or ISA support.

## 4. Workload Strategy

### 4.1 General Principle

The first evaluation should not use a full application such as federated learning training. Instead, it should use communication microbenchmarks that capture the RDMA behavior relevant to end-to-end performance.

This is the standard and defensible approach for isolating communication behavior.

### 4.2 Recommended Microbenchmarks

The first benchmark suite should include:

#### `rdma_write_lat`

- ping-pong style latency benchmark
- one operation at a time
- measures completion latency

#### `rdma_write_bw`

- streaming throughput benchmark
- multiple operations can be outstanding
- measures steady-state throughput

#### `rdma_read_lat`

- request-response latency benchmark
- useful for stressing round-trip behavior

#### `rdma_read_bw`

- optional second-phase benchmark
- stresses request and response handling under streaming load

#### `send_recv_lat`

- optional benchmark for queue-pair synchronization and receive availability behavior

### 4.3 External Benchmark References

The benchmark semantics should be inspired by existing microbench practice, especially:

- RDMA perftest style benchmarks such as `ib_send_lat`, `ib_write_lat`, `ib_read_lat`, `ib_write_bw`
- OSU-style latency and bandwidth sweep structure

The goal is not necessarily to execute those tools unchanged, but to reproduce their measurement methodology inside the proposed architecture.

## 5. Workload Execution Model

### 5.1 Host-Centric Case

For `Case A`:

- host-side logic generates the benchmark requests
- host-side control logic posts work to the RDMA control interface directly
- the RDMA engine executes the data path

### 5.2 MCU-Offloaded Cases

For `Case B` and `Case C`:

- host-side logic generates the benchmark requests
- host sends offload commands through the mailbox
- MCU consumes commands and performs RDMA control actions
- RDMA engine executes the data path
- MCU consumes low-level completions and produces host-visible completion status

### 5.3 Host-Visible Completion Model

The benchmark should always end at a host-visible completion point, even when low-level RDMA completions are handled locally by the MCU.

This is necessary because the comparison is against a host-centric method and the workload is host-initiated.

## 6. Metrics

The setup must report both end-to-end metrics and internal control-path metrics.

### 6.1 End-to-End Metrics

- throughput in MB/s
- throughput in Gb/s
- average latency
- p95 latency
- p99 latency
- operations per second

### 6.2 Control-Path Metrics

- host-intent to doorbell latency
- mailbox enqueue to dequeue latency
- MCU command service time
- CQE to host-visible completion latency
- MMIO operations per transfer
- memory accesses per transfer
- instructions retired per transfer
- MCU cycles per transfer

### 6.3 Bottleneck Metrics

- mailbox queue depth high-water mark
- RDMA scheduler occupancy
- DMA busy time
- link busy time
- local memory wait time
- MCU busy cycles
- host completion wait time

## 7. Derived Comparisons

### 7.1 Offload Gain

This compares `Case B` against `Case A`.

It answers:

- what is gained or lost by moving the control plane to the MCU?

### 7.2 ISA Gain

This compares `Case C` against `Case B`.

It answers:

- what is gained by adding custom instructions once the MCU already owns the control plane?

### 7.3 Total Architectural Gain

This compares `Case C` against `Case A`.

It answers:

- what is the overall gain or penalty of the full proposed architecture relative to the conventional host-centric method?

## 8. Parameter Sweeps

The minimum required parameter sweeps are:

### 8.1 Message Size Sweep

Suggested sizes:

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

### 8.2 Outstanding Depth Sweep

Suggested depths:

- `1`
- `2`
- `4`
- `8`
- `16`
- `32`

### 8.3 QP Count Sweep

Suggested counts:

- `1`
- `2`
- `4`
- `8`

### 8.4 Completion Mode Sweep

- polling
- interrupt

These sweeps are necessary because the performance benefit of offload or ISA support may depend strongly on message granularity and queue concurrency.

## 9. Tools Needed

The experimental setup requires:

- GVSoC platform composition and simulation
- RISC-V ISS model
- cross-compilation toolchain for MCU firmware
- host workload generator or behavioral host stub
- result export to CSV or equivalent structured format
- plotting environment such as Python with `pandas` and `matplotlib`

Useful local references already present in the workspace include:

- ISS model wrappers
- instruction-extension tutorials
- timed-instruction tutorials

These are useful for bringing up the MCU and for adding the first custom instruction experiments.

## 10. Practical Bring-Up Plan

### 10.1 Step 1: One Transfer, One Completion

Build the simplest possible end-to-end path:

- one host command
- one RDMA operation
- one completion

No parameter sweep is needed yet.

### 10.2 Step 2: Host-Centric Baseline

Implement the direct host-managed control path first.

This establishes the comparison baseline and validates the RDMA engine behavior independently of MCU offload.

### 10.3 Step 3: MCU-Offloaded Baseline

Add the mailbox and MCU control path:

- host command
- mailbox
- MCU software control
- RDMA engine
- host-visible completion

### 10.4 Step 4: Instrumentation

Before adding ISA extensions, instrument:

- command generation
- mailbox enqueue/dequeue
- doorbell issue
- WQE fetch
- CQE post
- host-visible completion

This is necessary to identify whether the MCU actually becomes a bottleneck.

### 10.5 Step 5: First ISA Candidate

Add `rdma.db` first.

Reason:

- it has the cleanest operand contract
- it targets a hot path
- it avoids the dependency hazards of larger instructions

### 10.6 Step 6: Second ISA Candidate

Add `mailbox.pop` next.

Reason:

- it directly attacks host-to-MCU control overhead
- it remains structurally regular if implemented with fixed-width mailbox entries and shadow state

### 10.7 Step 7: Run Sweeps

Run the parameter sweeps for:

- message size
- outstanding depth
- QP count
- completion mode

### 10.8 Step 8: Plot Results

Produce at least the following figures:

- throughput vs message size
- latency vs message size
- MCU cycles per transfer vs message size
- host-intent to doorbell latency vs message size
- mailbox residency time vs message size

## 11. Output Format

Each benchmark run should export one record with fields such as:

```text
case,op,msg_size,outstanding,qp_count,completion_mode,total_bytes,total_ops,elapsed_ns,throughput_MBps,throughput_Gbps,avg_lat_ns,p95_lat_ns,p99_lat_ns,mcu_cycles_per_op,mmio_ops_per_op,mailbox_wait_ns
```

This makes post-processing and plotting straightforward.

## 12. What Counts as Success

The setup is successful when:

- all three cases can be executed with the same workload semantics
- the data plane remains functionally identical across cases
- the instrumentation can identify where time is spent in the control path
- the benchmark suite can export structured results
- the setup can attribute performance differences cleanly to:
  - host vs MCU control placement
  - baseline MCU vs extended MCU instruction set

## 13. Final Recommendation

Yes, it is practical to establish this framework, but only if the evaluation is staged carefully.

The recommended order is:

1. build the host-centric baseline
2. build the MCU-offloaded baseline
3. add probes
4. add `rdma.db`
5. add `mailbox.pop`
6. run microbenchmark sweeps

The most important practical choice is to begin with microbenchmarks rather than a full application workload. This gives a clean, defensible, and achievable path to evaluating all three comparison layers.
