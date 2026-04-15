# Draft Paper: SmartNIC MCU Offloading for RDMA Control and RISC-V ISA Extensions

## Abstract

Remote Direct Memory Access (RDMA) systems rely on hardware data-plane offload to deliver high throughput and low latency, while the control path remains managed through software-visible queue structures, doorbells, completion handling, and device-specific capability exposure. This paper investigates a SmartNIC architecture in which RDMA control is offloaded from the host to a programmable on-device RISC-V microcontroller unit (MCU), while the RDMA data plane remains in dedicated hardware. The proposed split creates a programmable SmartNIC-resident control layer that can absorb low-level RDMA configuration and operational control, while leaving the application on the host CPU. We argue that this design improves flexibility for exploring RDMA control policies and protocol variants, but also introduces a new control-plane bottleneck at the MCU. To address this bottleneck, we propose a small set of RISC-V extension candidates targeted at mailbox dequeue, doorbell issue, and completion handling. We further argue that extension candidates should only be adopted when their operands are available at issue time without hidden software-visible dependencies. Under this rule, doorbell and mailbox-pop instructions emerge as the strongest first candidates, while more ambitious queue-post instructions require a narrower operand contract. The result is a co-design perspective in which SmartNIC MCU programmability provides flexibility and carefully constrained ISA support restores control-plane efficiency.

## 1. Introduction

RDMA-capable NICs and SmartNICs achieve high performance by pushing the data path into hardware. Descriptor fetch, DMA transfer, transport handling, completion generation, and interrupt signaling are typically executed by dedicated hardware blocks. In contrast, the control path remains software-managed: queues must be configured, memory regions must be registered, work requests must be formed, and doorbells must be issued at the correct points.

In mainstream systems, the application runs on a host CPU, and the host software stack is responsible for preparing RDMA operations through the software-hardware interface exposed by the device. This model is effective and mature, but it also means that low-level RDMA control remains coupled to the capabilities and semantics exposed by the NIC and its surrounding software ecosystem.

This paper considers an alternative architecture in which the host continues to run the application, but the RDMA control plane is offloaded to a programmable MCU on the SmartNIC. The SmartNIC MCU becomes responsible for low-level RDMA control tasks such as command interpretation, queue management, work submission, doorbell handling, and completion processing. The RDMA engine remains responsible for the data plane.

This architectural shift creates two research questions. First, can a SmartNIC-resident MCU provide a more adaptable control layer for RDMA experimentation than a purely host-managed control path? Second, if the MCU becomes the new control bottleneck, can a small set of RISC-V instruction extensions reduce its overhead without undermining programmability?

The key claim of this work is not that RDMA hardware should be replaced by software, nor that new instructions are universally necessary. The claim is narrower and more precise: once RDMA control is intentionally moved onto a programmable SmartNIC MCU, the resulting control overhead becomes an architectural target in its own right, and ISA support may become justified.

## 2. Motivation

### 2.1 Why Move RDMA Control to the SmartNIC MCU

The conventional host-managed RDMA model places the application and the software-visible control path on the host CPU. Even when the data path is fully offloaded, the host remains responsible for much of the low-level interaction that prepares and triggers RDMA execution.

This arrangement has two limitations for research and system evolution. First, the host-facing software stack may abstract common operations, but the actual low-level capability surface is still constrained by the device implementation and vendor-specific support. Second, the host remains directly involved in the fine-grained control path, which limits the ability to move control policies, experimental transport behavior, or device-local orchestration into the SmartNIC itself.

Offloading RDMA control to a SmartNIC MCU changes this balance. The host continues to express application-level communication intent, but the SmartNIC MCU becomes the execution point for device-local control semantics. This creates a programmable layer that can absorb:

- queue-pair management
- memory-region setup
- work request preparation or commitment
- doorbell policy
- completion processing
- device-local sequencing and control decisions

In this sense, the value of the MCU is flexibility. It provides a programmable SmartNIC-side control plane that is richer than a purely fixed-function control path.

### 2.2 Why New Instructions May Be Necessary

The same design that improves flexibility also introduces cost. Once the MCU becomes responsible for mailbox handling, queue updates, doorbells, and completion processing, the MCU may become a measurable bottleneck, especially for small messages and control-intensive workloads.

This observation motivates ISA support, but only under a strict rule. Instruction extensions should not be justified by programmability alone. They should be justified only if:

- the MCU is a real control-plane bottleneck
- the hot control sequences are structurally regular
- the required instruction operands can be made available cleanly

Thus the paper separates two claims:

- flexibility claim:
  the SmartNIC MCU improves adaptability of the RDMA control path
- efficiency claim:
  RISC-V ISA extensions are needed only if MCU-side control overhead becomes significant

## 3. Architectural Overview

The proposed architecture separates the system into three planes:

- host application plane
- SmartNIC MCU control plane
- RDMA data plane

The host continues to run the application and high-level communication logic. Instead of directly driving all fine-grained RDMA control operations, the host sends communication intent to the SmartNIC. The on-device MCU interprets that intent and performs the corresponding RDMA control actions. The RDMA engine then executes the data movement and transport processing in hardware.

This separation leads to a clean role division:

- host CPU:
  application execution and communication intent generation
- SmartNIC MCU:
  RDMA control-plane execution
- RDMA engine:
  data-plane execution

This structure is not a replacement for hardware RDMA offload. It is a relocation of the control layer.

## 4. Comparison with Conventional Host-Managed RDMA

### 4.1 Conventional Model

In a conventional host-managed design, the application runs on the host and the host software stack prepares RDMA operations. The host performs or directly manages:

- queue setup
- memory-region metadata handling
- work request preparation
- doorbell issue
- completion consumption

The hardware RDMA engine then executes the transfer.

This model is mature and efficient. Its main optimization mechanisms are batching, queue design, DMA fetch, user-space access, and hardware offload.

### 4.2 Proposed SmartNIC MCU-Offloaded Model

In the proposed model, the host still runs the application, but the host no longer directly performs every fine-grained RDMA control operation. Instead:

- the host issues high-level communication intent
- the SmartNIC MCU translates that intent into low-level RDMA control
- the RDMA engine executes the data plane

This changes the question from “how should host software manage RDMA?” to “how much of RDMA control should be executed inside the SmartNIC, and how efficiently can it be executed there?”

### 4.3 Main Difference

The key difference between the two models is not in the data plane. In both designs, the data plane remains hardware-centered. The key difference is where the low-level control logic lives:

- conventional approach:
  host-side software is the main RDMA control-plane executor
- proposed approach:
  the SmartNIC MCU is the main RDMA control-plane executor

This shift is what makes programmability and ISA support interesting.

## 5. Research Hypothesis

The paper is based on three hypotheses.

### 5.1 Flexibility Hypothesis

A programmable SmartNIC MCU enables more flexible RDMA control and protocol experimentation than a purely host-managed control path.

### 5.2 Bottleneck Hypothesis

Moving RDMA control onto the SmartNIC MCU introduces measurable control-plane overhead in mailbox handling, queue programming, doorbell issue, completion processing, and related sequences.

### 5.3 ISA Hypothesis

A small set of carefully designed RISC-V instructions can reduce the MCU overhead of the offloaded design, provided the instruction semantics are constrained to avoid hidden dependencies and excessive hazard-handling cost.

These hypotheses imply three evaluation points:

1. host-managed baseline control
2. MCU-offloaded control using baseline RISC-V software
3. MCU-offloaded control using selected RISC-V extensions

## 6. MCU Control Responsibilities

In the proposed architecture, the SmartNIC MCU is responsible for:

- consuming host-issued offload commands
- interpreting communication requests
- configuring or selecting queue-pair state
- managing control-plane metadata
- preparing or committing RDMA work requests
- issuing doorbells
- consuming completions
- generating host-visible completion results

The MCU therefore becomes the key control-plane scheduler and the central software-visible orchestration point on the SmartNIC.

The more this layer absorbs, the more programmable the SmartNIC becomes. At the same time, the more important MCU efficiency becomes.

## 7. Why Instruction Design Must Be Conservative

It is tempting to propose large, high-level instructions such as “post an RDMA request” or “consume a full mailbox command” in one step. However, such instructions are only attractive if the required information is already available at issue time.

If an instruction needs to:

- gather scattered software-managed fields
- chase variable queue metadata
- parse variable-length records
- implicitly access multiple unrelated state structures

then the instruction may introduce more implementation complexity and hazard-handling cost than it removes.

For this reason, instruction design in this work follows a conservative rule:

- an instruction should be preferred only if its required inputs are explicit register operands or fixed architectural state

This rule has a direct impact on which extension candidates remain attractive.

## 8. Re-Evaluated RISC-V Extension Candidates

### 8.1 First-Tier Candidates

The strongest first candidates are the ones with clear, fixed-width operand contracts.

#### `rdma.db`

This instruction issues an RDMA doorbell with built-in ordering semantics.

Why it is attractive:

- the required inputs are small and explicit
- the instruction replaces a structured MMIO and ordering sequence
- it targets a hot control path

This is the cleanest first candidate because it has minimal hidden dependencies.

#### `mailbox.pop`

This instruction dequeues one host-issued mailbox command and advances the mailbox head atomically. Importantly, it should not attempt to return a wide command record directly through the scalar register file. Instead, it should deposit the fixed-width mailbox record into an architected shadow register bank or CSR-backed shadow state.

Why it is attractive:

- mailbox dequeue is a structured, repeated control-path operation
- queue state can be placed in fixed architectural CSRs
- the wide result problem can be handled through shadow state rather than oversized register outputs

This makes `mailbox.pop` a strong candidate for the host-to-MCU handoff path.

#### `rdma.cq.pop`

This instruction consumes one completion queue entry (CQE) and advances the CQ head atomically. As with mailbox dequeue, a clean design should place the consumed CQE into shadow state rather than attempting to expose all fields directly through one scalar result.

Why it is attractive:

- completion handling is on the critical control path
- CQE format can be kept fixed-width and aligned

Its strength depends on keeping the CQE format simple and fixed.

### 8.2 Conditional Candidates

#### `rdma.post`

This instruction commits one already-packed, fixed-width work queue entry and advances the submission queue tail.

This candidate is weaker than `rdma.db` and `mailbox.pop` because it only remains clean if the WQE is already formed and the instruction does not need to gather scattered fields from software-managed state. If the instruction has to assemble the WQE itself, it becomes significantly less attractive.

#### `rdma.post.batch`

This instruction extends the previous idea to multiple already-packed WQEs. It only becomes interesting once the single-entry `rdma.post` contract is clearly defined and free of hidden dependency problems.

### 8.3 Extension Candidates to Avoid Early

Instructions that try to encode broad “protocol actions” or variable-format queue operations should be avoided early because they are likely to create:

- hidden data dependencies
- large operand surfaces
- difficult exception and hazard handling
- overly specialized semantics that do not generalize cleanly

## 9. Encoding and Architectural State

To avoid conflicts with standard vector instructions, the first extension set should remain in custom instruction space rather than overlapping any vector opcode space. A regular 32-bit custom format is sufficient for the first-generation control instructions.

The wide metadata associated with mailbox records and completions should not be returned directly through ordinary scalar outputs. Instead, the architecture should use fixed machine-mode shadow state or custom control registers that hold:

- mailbox queue pointers
- mailbox shadow command records
- completion queue pointers
- completion shadow records
- selected doorbell state

This keeps the instruction semantics narrow and reduces the need for hidden data gathering at issue time.

## 10. Benefits and Criticisms

### 10.1 Potential Benefits

- The SmartNIC becomes more programmable at the control-plane level.
- New control policies and protocol variants can be explored without making the host the only site of experimentation.
- Device-local control may reduce host-side fine-grained interaction.
- The architecture provides a natural target for RISC-V ISA co-design.
- The control-plane bottleneck becomes measurable and optimizable.

### 10.2 Limitations and Criticisms

- The data plane may still remain constrained by the capabilities of the RDMA engine.
- Some protocol changes may require changes to packet-processing hardware, not only MCU firmware.
- The host-managed baseline is already highly optimized in industry, so MCU offload must justify its overhead.
- If the extension candidates are too aggressive, the extra complexity may outweigh the benefit.
- MCU programmability and MCU ISA support should not be conflated; they solve different problems.

## 11. Evaluation Methodology

The evaluation should compare:

1. host-managed baseline
2. MCU-offloaded baseline
3. MCU-offloaded design with selected extensions

The key metrics should include:

- end-to-end throughput
- end-to-end latency
- control-path latency from host intent to doorbell issue
- mailbox residency time
- MCU service time
- completion handling latency
- MCU cycles per transfer
- MMIO operations per transfer
- local memory accesses per transfer

The most important control-plane workloads are those that stress:

- mailbox dequeue
- work submission
- doorbell issue
- completion processing

especially under small-message conditions.

## 12. Conclusion

This paper argues for a SmartNIC architecture in which the RDMA control plane is offloaded from the host to a programmable RISC-V MCU, while the RDMA data plane remains in dedicated hardware. The main value of this shift is flexibility: the SmartNIC gains a programmable control layer for RDMA experimentation. The main cost of this shift is a new control-plane bottleneck on the MCU. This bottleneck motivates a conservative form of ISA co-design. Under a strict dependency-aware design rule, the strongest first extension candidates are doorbell and mailbox-pop instructions, while queue-post instructions require a narrower operand contract before they become viable. The result is a research direction that connects SmartNIC programmability with carefully scoped RISC-V extension design.
