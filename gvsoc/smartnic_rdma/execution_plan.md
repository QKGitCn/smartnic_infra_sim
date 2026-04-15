# Execution Plan: RDMA Simulation Framework in GVSoC

## 0. Purpose and Modeling Level

This document defines an implementation-oriented execution plan for building an RDMA-capable SmartNIC simulation framework in GVSoC.

The target is a timing-aware architectural simulator, not an RTL model and not a full protocol-compliance environment. The framework is intended to support:

- RDMA engine architectural exploration
- bring-up of the MCU-resident RDMA software stack
- queueing, DMA, and scheduling studies
- latency and throughput trend analysis
- extension toward accelerator offload and SmartNIC control/data-plane partitioning

The framework is not intended in v1 to provide:

- exact RoCEv2 wire compatibility
- Linux verbs compatibility
- PCIe host stack realism
- precise MAC/PHY timing
- signoff-quality cycle matching

The design should therefore emphasize:

- explicit component interfaces
- event-driven state machines
- deterministic execution
- parameterized timing knobs
- strong observability through trace events and counters

## 0.1 Motivation and Research Hypothesis

The motivation for this project is not only to offload RDMA control work from the host, but also to create a programmable SmartNIC-side control layer for exploring new RDMA control policies and protocol variants.

Mainstream RDMA deployments expose relatively stable host-facing software APIs, but the low-level capability surface is still constrained by NIC hardware support, vendor-specific providers, and device firmware behavior. This means host software can often target standard verbs-like abstractions, while experimentation with new protocol behavior or low-level control semantics remains limited by what the device actually implements.

This project therefore proposes a three-part separation:

- host CPU: application plane
- SmartNIC RISC-V MCU: programmable RDMA control plane
- RDMA engine: data plane

The research hypothesis is:

- moving RDMA control onto a programmable SmartNIC MCU increases flexibility for protocol/control experimentation
- moving that control onto an MCU also introduces a new control-plane overhead
- carefully chosen RISC-V extensions can reduce that MCU overhead without giving up programmability

This leads to two distinct claims that must not be conflated:

- flexibility claim:
  the MCU makes SmartNIC-side control more programmable than a purely host-managed or fixed-function control path
- efficiency claim:
  custom RISC-V instructions are justified only if the MCU becomes a measurable bottleneck in mailbox handling, WQE posting, doorbell issue, completion handling, or similar control sequences

The evaluation should therefore compare at least three cases:

1. host-managed baseline control
2. MCU-offloaded control with baseline RISC-V software
3. MCU-offloaded control with selected RISC-V RDMA-control extensions

## 1. V1 System Target

Do not begin with full RoCEv2. Freeze a narrower, implementable target first.

V1 models a host-application system with SmartNIC MCU-offloaded RDMA control, not a purely host-managed RNIC. The host owns the application plane, the programmable RISC-V MCU software stack owns the RDMA control plane, the RDMA engine is the data plane, and a remote peer remains part of the end-to-end system model.

### 1.1 V1 Goals

The initial platform shall include:

- one host-side workload source or host stub
- one programmable RISC-V MCU
- one host-to-MCU offload interface
- one RDMA engine
- one local memory subsystem
- one NIC ingress/egress abstraction
- one remote peer model
- support for:
  - `RDMA Write`
  - `RDMA Read`
  - `Send`
  - `Recv`
- queue-pair-driven execution
- doorbells
- WQE fetch
- DMA payload movement
- CQE writeback
- interrupts
- timestamped trace generation

### 1.2 V1 Non-Goals

The following are explicitly out of scope for v1:

- full RoCEv2 packet fidelity
- exact Ethernet, UDP, BTH, RETH, or AETH encoding
- congestion control
- ECN, PFC, or DCQCN
- atomics
- shared receive queues
- multi-host fairness studies
- full protection-domain semantics
- exact memory registration permission model
- full host-side driver stack
- Linux verbs API support

### 1.3 V1 Semantic Target

V1 shall model an abstract reliable RDMA transport with queue-based verbs-like semantics. The operation semantics should feel RDMA-like, while transport encoding remains abstract.

This means:

- the engine shall implement queue, DMA, completion, and packet-event behavior
- the network side shall be represented by structured packet/event objects, not raw Ethernet frames
- reliable connected semantics are sufficient for v1
- packet fragmentation may remain abstract until needed for timing studies

## 2. Overall Simulator Architecture

The GVSoC platform should be built as the following top-level components:

- `rv_ctrl_core`
- `local_mem`
- `mmio_router`
- `rdma_engine`
- `dma_engine` or internal RDMA DMA submodule
- `packet_parser_classifier`
- `nic_tx_rx_stub`
- `interrupt_ctrl`
- `remote_peer_model`
- `trace_stats`

### 2.0 Control-Plane / Data-Plane Ownership

Within each node:

- the host owns the application plane
- the RISC-V MCU and its software stack own the RDMA control plane
- the RDMA engine owns the data plane
- the remote peer provides end-to-end request/response behavior for RDMA validation

The host side is responsible for:

- running the distributed application or workload source
- issuing high-level communication intent
- consuming host-visible completion results

The MCU software stack is responsible for:

- consuming host offload commands
- engine initialization and programming
- QP and MR setup
- queue allocation and doorbells
- completion handling
- runtime control and policy

The RDMA engine is responsible for:

- WQE fetch/decode
- DMA execution
- packet/event transport behavior
- CQE generation
- protocol/error handling

### 2.1 Interface Stack

The minimum stack should be modeled as:

1. host application or host workload source
2. host communication runtime
3. `host_mcu_offload_if`
4. SmartNIC MCU software stack
5. `mcu_rdma_ctrl_if`
6. RDMA engine
7. `rdma_link_if`
8. remote peer

This keeps the application plane, RDMA control plane, and RDMA data plane explicitly separated.

### 2.2 Why This Split

This split maps well to SmartNIC/RNIC architectural decomposition:

- the host provides application-level communication intent
- the MCU software stack programs queues and policies
- the RDMA engine owns queue execution and protocol semantics
- the DMA path owns memory movement
- the parser/classifier separates RDMA and non-RDMA traffic classes
- the NIC stub accounts for transmit/receive behavior and link-side timing
- the peer model enables end-to-end correctness and timing studies

This partition also aligns with GVSoC's strengths:

- modular component modeling
- explicit bindings/interfaces
- event scheduling
- full-platform assembly through Python generators and C++ components

### 2.3 GVSoC Component Mapping

The local node should be assembled from the following GVSoC-visible blocks:

- `host_stub`
- `host_mcu_mailbox`
- `rv_ctrl_core`
- `local_mem`
- `mmio_router`
- `rdma_engine`
- `nic_tx_rx_stub`
- `interrupt_ctrl`

Responsibilities:

- `host_stub`
  - injects host-side communication intent or workload commands
  - writes mailbox commands
  - polls or consumes host-visible completions
- `host_mcu_mailbox`
  - owns the host-to-MCU command/completion queues
  - exposes doorbell and status registers
  - mediates host <-> MCU control exchange
- `rv_ctrl_core`
  - runs the MCU software stack
  - dequeues offload commands
  - translates commands into RDMA control actions
- `rdma_engine`
  - executes WQEs and data movement
- `nic_tx_rx_stub`
  - carries abstract link events to the remote peer

Required bindings:

- `host_stub` -> `host_mcu_mailbox`
- `rv_ctrl_core` -> `mmio_router`
- `rdma_engine` -> `local_mem`
- `rdma_engine` -> `nic_tx_rx_stub`
- `rdma_engine` interrupt -> `interrupt_ctrl` -> `rv_ctrl_core`
- `host_mcu_mailbox` optional interrupt -> `host_stub`

## 3. Internal RDMA Engine Architecture

The first RDMA engine should not be monolithic internally, even if implemented as one top-level component initially.

### 3.1 Control Plane

The control plane shall include:

- MCU software stack
- MMIO register bank
- engine control and status state
- queue-pair context table
- memory-region table
- doorbell handling logic
- interrupt enable/status logic

### 3.2 Execution Plane

The execution plane shall include:

- WQE fetcher
- WQE decoder
- request scheduler
- completion generator
- timer/timeout placeholder
- internal event queue

### 3.3 Data Plane

The data plane shall include:

- DMA read path
- DMA write path
- payload buffer management
- packet ingress path
- packet egress path

### 3.4 Required Implementation Rule

Even if some sub-blocks are not separated into independent GVSoC components initially, they must still be represented as distinct internal classes or modules with explicit responsibilities. Do not bury scheduling, DMA, queue state, and completion logic in one large state machine.

## 4. Fixed Interfaces to Define Before Heavy Implementation

Before writing the main engine implementation, freeze the interfaces below.

### 4.0 Host-to-MCU Offload Interface

Purpose:

- carry host communication intent into the SmartNIC MCU
- decouple host-visible offload commands from low-level RDMA queue mechanics
- expose host-visible completion status without requiring host visibility into every CQE

Must define:

- command ring format
- completion ring format
- doorbell semantics
- producer/consumer ownership rules
- host-visible interrupt or polling behavior

V1 should use a mailbox-style interface with a command ring, completion ring, and one doorbell register.

### 4.1 MMIO Interface

Purpose:

- MCU software programs engine state
- MCU software creates and configures QPs
- MCU software rings doorbells
- MCU software polls status and completion-related state
- MCU software reads counters/debug status

Must define:

- register offsets
- bitfields
- write side effects
- interrupt semantics
- reset behavior

### 4.2 Memory Master Interface

Purpose:

- WQE fetch
- payload read/write
- CQE writeback
- optional MR/QP metadata fetches if stored in memory

Must define:

- read/write granularity
- ordering expectations
- alignment behavior
- error behavior on invalid access
- contention visibility

### 4.3 Packet/Event Interface

Purpose:

- move RDMA requests and responses between local and remote nodes

Must define:

- packet/event object fields
- local/remote addressing metadata
- reliability metadata such as `psn`
- optional flags for `ack`/`nack` later

### 4.4 Interrupt/Event Interface

Purpose:

- completion signaling
- error signaling
- timeout signaling

Must define:

- interrupt sources
- interrupt coalescing policy if any
- level-vs-edge behavior
- clear semantics

### 4.5 Trace Interface

Purpose:

- provide deterministic observability for correctness debugging and timing studies

Must define:

- trace event schema
- minimum required event set
- trace metadata fields
- configuration knobs

## 5. Development Phases

Implement in three layers. Do not mix them from the beginning.

### 5.1 Phase A: Functional Model

The objective of Phase A is to prove software-visible control flow and end-to-end operation semantics.

#### Implement

- MMIO registers
- QP context table
- SQ/RQ/CQ structures
- WQE fetch and decode
- CQE writeback
- doorbell handling
- interrupt generation
- abstract packet/event objects instead of real Ethernet/UDP/BTH packets
- local and remote memory movement at functional level

#### Functional Simplifications Allowed

- zero or fixed latency for all operations
- abstract packet transfers
- no contention
- no retries
- no packet loss
- minimal QP state handling

#### Success Criteria

- MCU software running on the RISC-V core can:
  - initialize the engine
  - configure a QP
  - post WQEs
  - observe correct completions
- `RDMA Write`, `RDMA Read`, and `Send/Recv` all pass deterministic payload checks
- queue state transitions are correct
- completion ordering is correct

### 5.2 Phase B: Timed Architectural Model

The objective of Phase B is to study timing trends without changing functional behavior.

#### Add Timing To

- WQE fetch latency
- DMA read latency
- DMA write latency
- packet serialization time
- network propagation / RTT
- completion generation latency
- interrupt latency
- queueing delays
- memory/interconnect contention
- explicit link bandwidth and inflight limits

#### Required Design Rule

The visible functional state machine must remain the same as in Phase A. Timing shall be introduced by scheduled events and resource occupancy, not by creating a second behavior path with different semantics.

#### Success Criteria

- latency and throughput vary plausibly with:
  - payload size
  - batch size
  - QP count
  - local vs remote buffer placement
  - memory bandwidth constraints
- runs are deterministic under fixed seeds and identical configuration
- trace event timing matches expected pipeline behavior

### 5.3 Phase C: Protocol Refinement

Only once the timed model is stable should protocol realism be expanded.

#### Add

- fuller QP state machine handling
- retries
- timeout policy
- basic `ACK`/`NACK` behavior
- immediate data or invalidate if needed
- more explicit transport header fields if needed

#### Success Criteria

- timeout and retry behavior is traceable
- error paths produce correct CQE status
- protocol-related event order is stable and reproducible

## 6. Software Plan

You need three software artifacts, even if the first version keeps them small.

### 6.1 Host Runtime / Offload Shim

Responsibilities:

- accept communication intent from the host application or workload source
- translate that intent into mailbox commands
- manage host-visible completion handling
- provide a baseline comparison path against direct host-managed control if needed

### 6.2 Bare-Metal or RTOS Software Stack on the RISC-V MCU

Responsibilities:

- dequeue mailbox commands
- initialize the RDMA engine
- set up memory-region entries
- create and initialize QPs
- allocate and program queue memory
- post WQEs
- poll or handle interrupts
- validate completions and payload correctness

The MCU software stack should also serve as the baseline software target for evaluating candidate RISC-V RDMA-control extensions. Candidate instructions should be prioritized only when their operands are available at issue time without hidden software-visible dependencies. Under that rule, the highest-priority extension candidates are:

- `rdma.db`
- `mailbox.pop`
- `rdma.cq.pop`

Conditional second-tier candidates:

- `rdma.post`
- `rdma.post.batch`

### 6.3 Peer/Test Harness

Responsibilities:

- instantiate remote behavior
- inject peer-side request/response events
- compare expected vs actual memory contents
- manage multi-node scenarios

### 6.4 Benchmark/Configuration Driver

Responsibilities:

- run parameter sweeps
- collect counters and traces
- record configuration values
- export benchmark results reproducibly
- generate plotting-ready structured output

### 6.5 Software Policy for V1

For bring-up:

- do not simulate Linux verbs
- do not model host kernel driver machinery
- do not model full PCIe protocol realism
- use a minimal runtime that writes WQEs and doorbells directly
- use a minimal mailbox protocol between host and MCU
- optionally add a thin verbs-like shim later, after the engine is stable

### 6.6 MCU-Side RDMA Perf Workload

V1 should include an MCU-driven RDMA benchmark workload inspired by `iperf`, but implemented directly on top of the MCU software stack and RDMA queue interface.

This workload should:

- post repeated RDMA operations from MCU software
- sweep message size, outstanding depth, and QP count
- measure throughput and completion latency
- export results in a plotting-friendly format

The workload should not depend on a socket API or TCP/UDP stack.

## 7. Validation Strategy

Validation must proceed in layers.

### 7.1 Functional Correctness

Check:

- correct WQE consumption order
- correct queue pointer updates
- correct payload movement
- correct CQE generation
- correct completion status
- correct QP state transitions
- correct interrupt or polling behavior

### 7.2 Microarchitectural Sanity

Sweep:

- payload size
- batch size
- number of active QPs
- local vs remote buffer placement
- memory bandwidth limits
- interrupt vs polling mode
- explicit link bandwidth and link credit limits
- mailbox command batching depth

Expected qualitative trends:

- batching improves throughput
- increasing QP count stresses scheduler and queue handling
- DMA and queue management become bottlenecks before transport encoding realism matters
- memory placement affects end-to-end latency and throughput

### 7.3 Architectural Plausibility

Use literature and prior RNIC/SmartNIC work to calibrate trends, not exact numbers.

The model should reproduce qualitative behaviors such as:

- throughput gain from batching multiple WQEs
- increasing scheduler pressure with more QPs
- bottlenecks shifting between DMA, queue handling, and transmit path
- visible scaling limits from scheduling/rate-limiting logic

### 7.4 Determinism and Reproducibility

The framework must support:

- fixed random seeds
- deterministic ordering for equal-time events
- configuration hashes in output
- trace replay/debug support if practical

## 8. Development Milestones

### 8.1 Milestone 1: Platform Skeleton

Deliver:

- GVSoC Python platform generator
- `host_stub` component
- `host_mcu_mailbox` component
- RISC-V MCU integration
- local memory integration
- MMIO router
- dummy RDMA peripheral

Must pass:

- MCU software boots
- MCU software can read and write RDMA MMIO
- host stub can write mailbox commands
- mailbox doorbell path works
- simulator reaches a stable idle loop

### 8.2 Milestone 2: Queue Model

Deliver:

- SQ/RQ/CQ data structures
- doorbell handling
- WQE/CQE binary formats
- QP state storage
- unit tests for post/consume/completion

Must pass:

- deterministic queue lifecycle tests
- CQE creation tests
- invalid queue access tests

### 8.3 Milestone 3: Functional RDMA Operations

Deliver:

- local memory copies
- remote peer stub or second-node path
- host-to-MCU `TRANSFER` command path
- functional `RDMA Write`
- functional `RDMA Read`
- functional `Send/Recv`

Must pass:

- two-node end-to-end payload correctness tests
- host-visible offload completion correctness
- completion and interrupt correctness

### 8.4 Milestone 4: Timed Model

Deliver:

- event scheduling for:
  - WQE fetch
  - DMA
  - packet tx/rx
  - completion writeback
  - interrupt raise
- parameterized latencies
- explicit link model parameters:
  - `link_bandwidth_bytes_per_sec`
  - `link_base_latency`
  - `link_per_byte_time`
  - `link_max_inflight_pkts`
- contention hooks

Must pass:

- monotonic timing trend checks
- reproducible benchmark runs

### 8.5 Milestone 5: Parser/Classifier and Traffic Split

Deliver:

- classify RDMA vs non-RDMA traffic
- route RDMA traffic into the engine
- optional non-RDMA forward path

Must pass:

- mixed traffic routing tests
- no corruption of RDMA path under mixed load

### 8.6 Milestone 6: Benchmark Suite

Deliver:

- latency benchmark
- throughput benchmark
- batch-size sweep
- message-size sweep
- mailbox-batching sweep
- QP scaling sweep
- trace dump and summary generation
- CSV or equivalent plotting-ready output

Must pass:

- unattended scripted benchmark execution
- stable result export format
- throughput-vs-message-size and latency-vs-message-size plots can be generated from the exported results

### 8.7 Milestone 7: Advanced Features

Only after the core path is stable, add:

- retry and timeout policy
- congestion hooks
- programmable scheduler / rate limiter
- accelerator offload block
- stronger memory registration and protection realism
- MCU ISA-extension experiments for RDMA control acceleration

## 9. Recommended Internal Abstractions

Use internal data structures with stable fields from the beginning.

### 9.1 Work Queue Entry

```c
struct WQE {
    uint32_t opcode;
    uint32_t qp_id;
    uint64_t local_addr;
    uint64_t remote_addr;
    uint32_t length;
    uint32_t flags;
    uint32_t lkey;
    uint32_t rkey;
    uint32_t user_id;
};
```

### 9.2 Completion Queue Entry

```c
struct CQE {
    uint32_t status;
    uint32_t bytes;
    uint32_t opcode;
    uint32_t qp_id;
    uint64_t ts;
    uint32_t user_id;
};
```

### 9.3 Queue-Pair Context

```c
struct QPContext {
    uint32_t qp_id;
    uint32_t state;
    uint64_t sq_base;
    uint64_t rq_base;
    uint64_t cq_base;
    uint32_t sq_head;
    uint32_t sq_tail;
    uint32_t rq_head;
    uint32_t rq_tail;
    uint32_t cq_head;
    uint32_t cq_tail;
    uint32_t credits;
    uint32_t peer_qp_id;
    uint32_t peer_node_id;
    uint32_t next_psn;
    uint32_t expected_psn;
};
```

### 9.4 Packet/Event Transport Object

```c
struct Packet {
    uint32_t type;
    uint32_t qp_id;
    uint32_t psn;
    uint64_t local_addr;
    uint64_t remote_addr;
    uint32_t len;
    uint32_t flags;
    uint32_t src_node;
    uint32_t dst_node;
};
```

### 9.5 Internal Scheduled Event

```c
struct Event {
    uint64_t time;
    uint32_t type;
    uint32_t object_id;
    uint32_t qp_id;
    uint64_t opaque0;
    uint64_t opaque1;
};
```

### 9.6 Architectural Rule

Keep these layers separate.

Semantic layer:

- `Read`
- `Write`
- `Send/Recv`
- queues
- completions

Transport layer:

- request/response objects
- `ACK`/`NACK`
- retries
- fragmentation if needed later

Physical/network layer:

- latency
- serialization
- bandwidth
- queueing
- drops if later enabled

This separation prevents a rewrite when moving from abstract RDMA semantics to more protocol-like transport modeling.

## 10. Risks and Mitigation

### 10.1 Risk: Over-Modeling Protocol Too Early

Mitigation:

- no full RoCE fidelity in v1
- abstract packet/event transport first
- freeze the v1 semantic contract early

### 10.2 Risk: Functional and Timed Logic Diverge

Mitigation:

- keep one visible state machine
- add timing only through scheduled events and resource occupancy
- reuse the same queue/DMA/completion code paths

### 10.3 Risk: No Calibration Target

Mitigation:

- use literature trends as qualitative anchors
- record what is intentionally not modeled
- compare trends, not absolute numbers

### 10.4 Risk: Unclear Control Ownership

Mitigation:

- keep control in MCU software first
- move policy into the engine only after a stable baseline functionality exists

### 10.5 Risk: Remote Peer Ambiguity

Mitigation:

- define peer behavior explicitly in the v1 spec
- start with a deterministic peer
- introduce more realism only after core correctness is proven

### 10.6 Risk: Poor Observability

Mitigation:

- define trace schema up front
- require trace points on all key pipeline stages
- ensure event timestamps and IDs are stable

## 11. Best First Prototype

The best first demonstration is a two-node GVSoC system:

- each node has:
  - one host stub
  - one host-to-MCU mailbox
  - one programmable RISC-V MCU
  - one RDMA engine
  - one local memory system
- node A host stub issues an offload command
- node A MCU software posts `RDMA Read`
- node B serves the read from its local memory
- data lands in node A local memory
- node A MCU software validates the payload or runs a small compute block such as a checksum
- node A host stub receives a host-visible completion
- node A completion is written back
- latency and throughput are measured as functions of:
  - payload size
  - batch size
  - QP count later

This prototype is small enough for early bring-up but rich enough to validate the entire chain:

- host-to-MCU offload
- control programming
- queue execution
- remote request/response
- DMA
- completion
- measurement

## 12. Bottom Line

The correct implementation order is:

1. build a functional QP/WQE/CQE simulator
2. add a host-to-MCU mailbox and offload path
3. add a remote peer and payload movement
4. add timed DMA/network/completion events
5. validate with `Read`/`Write`/`Send` microbenchmarks
6. add traffic split and classification
7. extend toward scheduler, congestion hooks, and accelerator offload

This plan intentionally prioritizes architectural utility and implementation stability over early protocol completeness.
