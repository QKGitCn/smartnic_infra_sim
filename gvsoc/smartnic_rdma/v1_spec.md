# V1 Specification: RDMA Simulation Framework in GVSoC

## 0. Scope

This specification defines the concrete v1 implementation contract for the RDMA simulation framework.

The goal of v1 is to provide:

- deterministic queue-based RDMA semantics
- end-to-end execution across two simulated nodes
- DMA, queue, completion, and interrupt behavior
- parameterized timing for architectural studies

V1 is intentionally an abstract reliable RDMA transport, not a full RoCEv2 implementation.

V1 models a host-application system with SmartNIC MCU-offloaded RDMA control, not a purely host-managed RNIC. The host owns the application plane, the programmable RISC-V MCU software stack owns the RDMA control plane, and the RDMA engine is the data plane.

## 1. Supported Operation Set

V1 shall support the following opcodes:

- `RDMA_WRITE`
- `RDMA_READ`
- `SEND`
- `RECV`

### 1.1 Semantics

#### `RDMA_WRITE`

- initiator reads payload from local memory
- initiator emits a write request packet/event
- responder writes payload into remote memory
- initiator receives completion after the completion condition is met

#### `RDMA_READ`

- initiator emits a read request packet/event
- responder reads remote memory
- responder emits a read response packet/event
- initiator writes payload into local memory
- initiator receives completion

#### `SEND/RECV`

- initiator issues `SEND`
- target must have a matching `RECV` available
- payload is transferred into the receiver buffer
- sender and receiver completion behavior follows configured policy

### 1.2 Unsupported Operations

- atomics
- multicast
- unreliable transport
- shared receive queues
- memory windows
- inline data optimization
- full immediate/invalidate semantics
- exact congestion behavior

## 2. Topology and Node Model

### 2.0 Control-Plane / Data-Plane Split

Within each simulated node:

- the host owns the application plane
- the RISC-V MCU and its software stack own the RDMA control plane
- the RDMA engine owns the data plane
- the remote peer remains part of the end-to-end RDMA model

The host side is responsible for:

- running the distributed application workload
- issuing high-level communication intent to the SmartNIC
- consuming host-visible offload completion status

The MCU software stack is responsible for:

- consuming host offload commands
- RDMA subsystem initialization
- queue-pair and memory-region configuration
- queue memory allocation and programming
- WQE posting and doorbells
- completion polling or interrupt handling
- policy and sequencing decisions

The RDMA engine is responsible for:

- WQE fetch and decode
- queue execution
- DMA movement
- packet/event generation and reception
- CQE generation
- protocol and error enforcement

### 2.1 Inter-Layer Interface Stack

The minimum host-to-wire stack shall be modeled as:

1. host application
2. host communication runtime
3. `host_mcu_offload_if`
4. SmartNIC MCU software stack
5. `mcu_rdma_ctrl_if`
6. RDMA engine
7. `rdma_link_if`
8. remote peer

Required interface semantics:

- host application -> host runtime:
  high-level communication API such as transfer, send, receive, or collective-trigger intent
- host runtime -> `host_mcu_offload_if`:
  offload command submission and host-visible completion handling
- `host_mcu_offload_if` -> MCU software stack:
  command ring, completion ring, doorbell, and status exchange
- MCU software stack -> `mcu_rdma_ctrl_if`:
  MMIO programming, WQE/CQE queue management, and interrupt handling
- RDMA engine -> `rdma_link_if`:
  packet/event request-response transport

### 2.2 Minimum Node Topology

Each node shall include:

- one host-side workload source or host stub
- one host-to-MCU mailbox or offload interface block
- one programmable RISC-V MCU running the RDMA control software stack
- one RDMA engine
- one local memory block
- one MMIO router
- one interrupt path
- one NIC-side packet ingress/egress stub

### 2.3 Minimum System Topology

The minimum integration target shall be two nodes connected through an abstract packet/event network path.

### 2.4 Peer Implementation Modes

Two peer modes are allowed:

- full peer node
  - second RDMA-capable GVSoC node using the same model
- behavioral peer
  - lightweight responder for early unit and component tests

The full peer node is mandatory for integration validation by Milestone 3.

## 3. Memory Model

### 3.1 Local Memory Layout

V1 local memory shall be used for:

- SQ storage
- RQ storage
- CQ storage
- payload buffers
- optional context storage if needed

### 3.2 Addressing Assumptions

- all queue and payload addresses are guest physical addresses in the simulated node memory map
- the RDMA engine accesses them through its memory master interface
- invalid addresses must produce deterministic error behavior

### 3.3 Alignment Assumptions

V1 should tolerate unaligned payload addresses functionally, but timing may model penalties later if needed.

Queue entry alignment requirements:

- WQE alignment: at least 16 bytes
- CQE alignment: at least 16 bytes
- QP context alignment: at least 32 bytes if stored in memory

## 4. Memory Registration Model

V1 shall implement a minimal memory-region model.

### 4.1 MR Entry

```c
struct MR {
    uint64_t base_addr;
    uint64_t length;
    uint32_t lkey;
    uint32_t rkey;
    uint32_t access_flags;
};
```

### 4.2 Required Checks

By the end of v1 functional bring-up:

- bounds checking is required
- `lkey` and `rkey` checking is required
- invalid region access must produce a deterministic completion error

Protection domains, ownership domains, and process isolation are not required.

## 5. Queue-Pair Model

### 5.1 QP Type

V1 shall model one queue-pair type with reliable connected semantics.

### 5.2 QP States

Minimum required states:

- `RESET`
- `INIT`
- `RTR`
- `RTS`
- `ERROR`

### 5.3 QP Context Structure

```c
enum QPState {
    QP_RESET = 0,
    QP_INIT  = 1,
    QP_RTR   = 2,
    QP_RTS   = 3,
    QP_ERROR = 4
};

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

    uint32_t sq_size;
    uint32_t rq_size;
    uint32_t cq_size;

    uint32_t producer_credits;
    uint32_t consumer_credits;

    uint32_t peer_qp_id;
    uint32_t peer_node_id;

    uint32_t next_psn;
    uint32_t expected_psn;

    uint32_t retry_count;
    uint32_t timeout_ticks;
};
```

### 5.4 QP Software-Visible Rules

- WQEs may only be consumed in `RTS`
- incoming operations may only be accepted in `RTR` or `RTS`
- any fatal queue/protocol error transitions the QP to `ERROR`
- CQ posting is allowed in `ERROR` if reporting an error completion

## 6. Queue Memory Objects

### 6.1 WQE Format

```c
enum WQEOpcode {
    WQE_OP_RDMA_WRITE = 1,
    WQE_OP_RDMA_READ  = 2,
    WQE_OP_SEND       = 3,
    WQE_OP_RECV       = 4
};

enum WQEFlags {
    WQE_F_SIGNALED = 1 << 0,
    WQE_F_FENCE    = 1 << 1
};

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

### 6.2 CQE Format

```c
enum CQEStatus {
    CQE_SUCCESS = 0,
    CQE_LOCAL_ERR,
    CQE_REMOTE_ERR,
    CQE_LEN_ERR,
    CQE_QP_ERR,
    CQE_ACCESS_ERR,
    CQE_TIMEOUT
};

struct CQE {
    uint32_t status;
    uint32_t opcode;
    uint32_t qp_id;
    uint32_t bytes;
    uint64_t timestamp;
    uint32_t user_id;
};
```

### 6.3 Queue Rules

- queue producer/consumer indices wrap modulo queue size
- queue full and queue empty must be distinguishable deterministically
- malformed WQEs generate a deterministic completion or engine error
- CQ overflow is a fatal QP error in v1

## 7. Transport Object Model

V1 shall use structured packet/event transport objects rather than wire-accurate frames.

### 7.1 Packet Type Enum

```c
enum PacketType {
    PKT_RDMA_WRITE_REQ = 1,
    PKT_RDMA_READ_REQ  = 2,
    PKT_RDMA_READ_RESP = 3,
    PKT_SEND_REQ       = 4,
    PKT_ACK            = 5,
    PKT_NACK           = 6
};
```

### 7.2 Packet Structure

```c
struct Packet {
    uint32_t type;
    uint32_t qp_id;
    uint32_t psn;

    uint32_t src_node;
    uint32_t dst_node;

    uint64_t local_addr;
    uint64_t remote_addr;

    uint32_t len;
    uint32_t flags;

    uint32_t lkey;
    uint32_t rkey;

    uint32_t user_id;
};
```

### 7.3 Packet Semantics

- `RDMA_WRITE_REQ` carries the intent and payload reference information
- `RDMA_READ_REQ` requests remote memory read
- `RDMA_READ_RESP` carries read response metadata and payload reference information
- `SEND_REQ` carries send payload intent
- `ACK` and `NACK` are abstract transport responses

Payload content may be modeled through:

- direct payload copy in functional mode
- payload buffer references with scheduled latency in timed mode

## 8. MMIO Register Map

All offsets are relative to `RDMA_BASE`.

### 8.1 Global Control and Status

```text
0x0000 VERSION
0x0004 CONTROL
0x0008 STATUS
0x000C INT_STATUS
0x0010 INT_ENABLE
0x0014 ERROR_CODE
```

### 8.2 QP Programming Window

```text
0x0100 QP_SEL
0x0104 QP_STATE
0x0108 SQ_BASE_LO
0x010C SQ_BASE_HI
0x0110 RQ_BASE_LO
0x0114 RQ_BASE_HI
0x0118 CQ_BASE_LO
0x011C CQ_BASE_HI
0x0120 SQ_SIZE
0x0124 RQ_SIZE
0x0128 CQ_SIZE
0x012C PEER_QP_ID
0x0130 PEER_NODE_ID
0x0134 NEXT_PSN
```

### 8.3 Memory Registration Programming Window

```text
0x0180 MR_SEL
0x0184 MR_BASE_LO
0x0188 MR_BASE_HI
0x018C MR_LEN_LO
0x0190 MR_LEN_HI
0x0194 MR_LKEY
0x0198 MR_RKEY
0x019C MR_ACCESS_FLAGS
```

### 8.4 Doorbells

```text
0x0200 SQ_DOORBELL
0x0204 RQ_DOORBELL
```

### 8.5 Host-to-MCU Offload Mailbox Window

```text
0x0240 H2M_CMDQ_BASE_LO
0x0244 H2M_CMDQ_BASE_HI
0x0248 H2M_CMDQ_SIZE
0x024C H2M_CMDQ_HEAD
0x0250 H2M_CMDQ_TAIL
0x0254 H2M_CPLQ_BASE_LO
0x0258 H2M_CPLQ_BASE_HI
0x025C H2M_CPLQ_SIZE
0x0260 H2M_CPLQ_HEAD
0x0264 H2M_CPLQ_TAIL
0x0268 H2M_DOORBELL
0x026C H2M_STATUS
```

### 8.6 Timing and Debug Knobs

```text
0x0300 TRACE_ENABLE
0x0304 TRACE_FILTER
0x0308 PERF_COUNTER_SEL
0x030C PERF_COUNTER_VAL
0x0310 CFG_T_WQE_FETCH
0x0314 CFG_T_DMA_READ
0x0318 CFG_T_DMA_WRITE
0x031C CFG_T_PKT_TX_BASE
0x0320 CFG_T_PKT_TX_PER_BYTE
0x0324 CFG_T_NET_RTT
0x0328 CFG_T_CQE_POST
0x032C CFG_T_IRQ_RAISE
```

### 8.7 Minimum Bitfield Requirements

`CONTROL`

- bit 0: engine enable
- bit 1: soft reset
- bit 2: interrupt enable global

`STATUS`

- bit 0: engine enabled
- bit 1: busy
- bit 2: fatal error

`INT_STATUS`

- bit 0: completion interrupt
- bit 1: timeout interrupt
- bit 2: fatal error interrupt

`H2M_STATUS`

- bit 0: command queue non-empty
- bit 1: completion queue non-empty
- bit 2: mailbox overflow
- bit 3: mailbox fatal error

## 9. Host-to-MCU Offload Interface

The host-to-MCU offload interface is the boundary between the host application plane and the SmartNIC RDMA control plane.

### 9.1 Required Transport Mechanism

V1 shall model `host_mcu_offload_if` using:

- one host-to-MCU command ring in shared memory
- one MCU-to-host completion ring in shared memory
- one host-to-MCU doorbell register
- one status register block
- one optional interrupt path from MCU to host

Single-producer/single-consumer ring behavior is sufficient for v1.

### 9.2 Offload Command Format

```c
enum OffloadOpcode {
    OFFLOAD_NOP = 0,
    OFFLOAD_CREATE_SESSION = 1,
    OFFLOAD_REGISTER_BUFFER = 2,
    OFFLOAD_TRANSFER = 3,
    OFFLOAD_POLL = 4,
    OFFLOAD_WAIT = 5,
    OFFLOAD_TEARDOWN = 6
};

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

struct OffloadCpl {
    uint32_t cmd_id;
    uint32_t status;
    uint32_t bytes_done;
    uint32_t flags;
    uint64_t timestamp;
};
```

### 9.3 Offload Interface Semantics

Required command flow:

1. host runtime writes `OffloadCmd` entries into the command ring
2. host runtime updates the producer index
3. host runtime writes `H2M_DOORBELL`
4. MCU software dequeues one or more commands
5. MCU software translates commands into RDMA control actions
6. MCU software posts `OffloadCpl` entries into the completion ring
7. MCU software optionally raises a host-visible interrupt

### 9.4 Completion-Level Rule

V1 shall distinguish:

- MCU-local RDMA completions
  - CQEs consumed by MCU software
- host-visible offload completions
  - higher-level completion objects returned through the completion ring

The host is not required to observe every low-level RDMA CQE.

## 10. Internal Event Model

The implementation shall use explicit scheduled events.

### 9.1 Event Types

```c
enum EventType {
    EV_DB_SQ = 1,
    EV_DB_RQ,
    EV_WQE_FETCH_BEGIN,
    EV_WQE_FETCH_END,
    EV_DMA_READ_BEGIN,
    EV_DMA_READ_END,
    EV_DMA_WRITE_BEGIN,
    EV_DMA_WRITE_END,
    EV_PKT_TX,
    EV_PKT_RX,
    EV_ACK_RX,
    EV_NACK_RX,
    EV_CQE_POST,
    EV_IRQ_RAISE,
    EV_TIMEOUT,
    EV_RETRY
};
```

### 9.2 Event Structure

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

### 9.3 Determinism Rule

If multiple events share the same timestamp, their execution order must be stable and deterministic. Suggested order:

1. doorbells
2. fetch completion
3. DMA completion
4. packet receive
5. packet transmit
6. completion posting
7. interrupt raise
8. timeout/retry

## 11. Functional Behavior

### 10.1 `RDMA_WRITE` Sequence

1. MCU software posts WQE into SQ
2. MCU software writes SQ doorbell
3. engine schedules WQE fetch
4. engine validates QP state and keys
5. engine DMA-reads local payload
6. engine emits write request packet/event
7. remote peer validates request and writes payload into remote memory
8. remote peer emits `ACK`
9. initiator posts CQE
10. initiator raises interrupt if enabled

### 10.2 `RDMA_READ` Sequence

1. MCU software posts read WQE
2. MCU software writes SQ doorbell
3. engine fetches WQE
4. engine emits read request packet/event
5. remote peer validates request
6. remote peer DMA-reads remote payload
7. remote peer emits read response packet/event
8. initiator DMA-writes returned payload into local memory
9. initiator posts CQE
10. initiator raises interrupt if enabled

### 10.3 `SEND/RECV` Sequence

1. receiver posts `RECV`
2. sender posts `SEND`
3. sender engine validates sender QP
4. receiver side validates that a receive WQE is available
5. payload is transferred into receiver buffer
6. sender CQE is posted
7. receiver CQE is posted
8. interrupt behavior follows local configuration

### 10.4 Error Policy

Errors must be deterministic and software-visible through:

- CQE status if operation-specific
- engine error code if global/fatal
- QP transition to `ERROR` if required

## 12. Timing Model

V1 shall use configurable timing knobs.

### 11.1 Required Timing Parameters

- `t_wqe_fetch`
- `t_dma_read`
- `t_dma_write`
- `t_pkt_tx_base`
- `t_pkt_tx_per_byte`
- `t_net_rtt`
- `t_cqe_post`
- `t_irq_raise`

### 11.2 Link Model Parameters

In addition to the generic timing knobs above, the timed model shall expose explicit link-description parameters for the abstract RDMA path.

Required link parameters:

- `link_bandwidth_bytes_per_sec`
- `link_base_latency`
- `link_per_byte_time`
- `link_max_inflight_pkts`
- `link_tx_queue_depth`
- `link_rx_queue_depth`

Recommended optional link parameters:

- `link_mtu_or_max_payload`
- `link_ack_latency`
- `link_retry_timeout`
- `link_loss_rate`

V1 may keep `link_loss_rate` fixed at zero and leave retry-related parameters inactive until retries are modeled.

### 11.3 Timing Computation Guidance

Suggested formulas:

- WQE fetch delay: `t_wqe_fetch`
- DMA read delay: `t_dma_read + size / dma_bandwidth`
- DMA write delay: `t_dma_write + size / dma_bandwidth`
- packet tx delay: `t_pkt_tx_base + len * t_pkt_tx_per_byte`
- read round-trip: `request tx + network + remote read + response tx + network`

Suggested steady-state throughput bound:

- throughput = `min(dma_read_bw, dma_write_bw, link_bandwidth_bytes_per_sec, scheduler_issue_rate)`

Suggested `RDMA_WRITE` latency budget:

```text
latency =
    t_wqe_fetch +
    t_dma_read +
    (t_pkt_tx_base + msg_size * t_pkt_tx_per_byte) +
    t_net_rtt / 2 +
    remote_write_cost +
    link_ack_latency +
    t_cqe_post +
    t_irq_raise
```

### 11.4 Contention Hooks

The implementation should reserve explicit places for:

- memory port occupancy
- DMA engine occupancy
- packet egress occupancy
- scheduler occupancy

V1 may implement these as simple serialized resources before more advanced contention models are added.

## 13. Interrupt Model

### 12.1 Interrupt Sources

Minimum interrupt sources:

- completion available
- timeout
- fatal engine error

### 12.2 V1 Implementation Rule

One aggregated interrupt line per RDMA engine is acceptable in v1.

### 12.3 Clearing Policy

- `INT_STATUS` bits are write-1-to-clear
- fatal error clear is only valid after software reset or explicit recovery sequence

## 14. Trace and Observability

### 13.1 Required Trace Events

The following trace events are mandatory:

- `db_sq`
- `db_rq`
- `wqe_fetch_begin`
- `wqe_fetch_end`
- `dma_read_begin`
- `dma_read_end`
- `dma_write_begin`
- `dma_write_end`
- `pkt_tx`
- `pkt_rx`
- `ack_rx`
- `nack_rx`
- `cqe_post`
- `irq_raise`
- `qp_state_change`
- `timeout`
- `retry`

### 13.2 Required Trace Fields

Every trace entry should include:

- timestamp
- node id
- event type
- QP id if applicable
- opcode if applicable
- bytes if applicable
- status if applicable
- one or two metadata fields for local debugging

### 13.3 Performance Counters

Minimum counters:

- WQEs consumed
- CQEs posted
- bytes DMA-read
- bytes DMA-written
- packets transmitted
- packets received
- retries
- timeouts
- link tx queue occupancy high-water mark
- link rx queue occupancy high-water mark
- total benchmark bytes transferred
- total benchmark operations completed
- cumulative completion latency
- p95 completion latency estimate if supported
- p99 completion latency estimate if supported

## 15. Error Model

### 14.1 Required Error Classes

- invalid QP state
- invalid memory region or key
- queue underflow or missing receive
- queue overflow
- timeout
- remote-side rejection

### 14.2 Completion Mapping

Suggested mapping:

- invalid memory region -> `CQE_ACCESS_ERR`
- missing receive -> `CQE_REMOTE_ERR`
- timeout -> `CQE_TIMEOUT`
- invalid QP state -> `CQE_QP_ERR`
- length mismatch -> `CQE_LEN_ERR`

## 16. Required Tests

### 16.1 Unit Tests

- MMIO register read/write correctness
- QP creation and state transitions
- SQ posting and consume order
- CQ posting
- MR bounds check
- key check
- missing receive behavior
- queue overflow behavior

### 16.2 Integration Tests

- one-node local loopback smoke test
- host-to-MCU mailbox smoke test
- two-node `RDMA_WRITE`
- two-node `RDMA_READ`
- two-node `SEND/RECV`
- interrupt-driven completion path
- polling-driven completion path

### 16.3 Timing Tests

- payload-size latency sweep
- batch-size throughput sweep
- QP-scaling sweep
- memory-bandwidth stress sweep
- interrupt-vs-polling comparison

### 16.4 MCU-Side RDMA Performance Benchmark

V1 shall include an MCU-driven benchmark workload inspired by `iperf`, but targeting RDMA semantics rather than sockets.

Required benchmark controls:

- operation type: `RDMA_WRITE`, `RDMA_READ`, `SEND`
- message size
- total bytes or duration
- outstanding depth
- QP count
- polling vs interrupt mode

Recommended default message-size sweep:

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

Required per-run outputs:

- total bytes transferred
- total operations completed
- elapsed simulated time
- throughput in MB/s
- throughput in Gb/s
- average completion latency
- p95 completion latency
- p99 completion latency

Recommended structured output format:

```text
op,msg_size,outstanding,qp_count,mode,total_bytes,total_ops,elapsed_ns,throughput_MBps,throughput_Gbps,avg_lat_ns,p95_lat_ns,p99_lat_ns
```

Required graph targets:

- throughput vs message size
- latency vs message size
- throughput vs outstanding depth
- latency vs outstanding depth
- throughput vs QP count

### 16.5 Acceptance Criteria

`M1` acceptance:

- MCU software boots
- MMIO programming works
- dummy engine responds

`M2` acceptance:

- queue unit tests pass
- deterministic traces match expected queue behavior

`M3` acceptance:

- all supported opcodes pass two-node correctness tests

`M4` acceptance:

- timing sweeps show plausible monotonic trends
- repeated runs match under fixed configuration and seed

`M5` acceptance:

- mixed traffic split behaves correctly

`M6` acceptance:

- benchmark suite runs unattended and exports structured output

## 17. Determinism and Reproducibility Requirements

The framework shall provide:

- fixed random seed support
- stable same-timestamp event ordering
- configuration dump per run
- trace configuration identifiers
- benchmark metadata including timing knobs and topology

These are mandatory, not optional, because without them the simulator will not be useful for debugging or comparison studies.
