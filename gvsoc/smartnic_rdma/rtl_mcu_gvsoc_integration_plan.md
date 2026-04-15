# RTL MCU Integration Plan for GVSoC

## 0. Goal

This document describes a practical plan for integrating a new RTL-based
RISC-V MCU core into the current GVSoC-based SmartNIC simulation flow.

The intended MCU candidates are:

- CV32E40X-derived core
- Ibex-derived core

The intended use case is:

- evaluate a new MCU control-plane design
- add custom instructions later
- connect the MCU to the existing GVSoC system instead of building a completely
  separate simulator

## 1. Recommended Strategy

The recommended strategy is:

- **do not start by replacing the GVSoC ISS with a brand-new native GVSoC CPU model**
- **start with RTL cosimulation through DPI**

Why:

- lower engineering risk
- easier to reuse an existing RTL core
- custom instructions remain in RTL where they naturally belong
- easier to keep the rest of the system in GVSoC:
  - memory
  - RDMA engine
  - mailbox / host-control blocks
  - timing and instrumentation

## 2. Existing Hooks Already Present in This Repository

The current repository already contains useful infrastructure for this style of
integration.

### 2.1 DPI Wrapper Infrastructure

Relevant file:

- [dpi.cpp](/home/kunq/smartnic_infra_sim/gvsoc/core/dpi-wrapper/src/dpi.cpp)

What it provides:

- open a GVSoC instance from DPI
- start the GVSoC simulation
- bind external wires
- advance time in coordination with a SystemVerilog/DPI side

This is the strongest existing hook for RTL cosimulation.

### 2.2 Generic DPI Chip Wrapper Pattern

Relevant file:

- [dpi_chip_wrapper.cpp](/home/kunq/smartnic_infra_sim/gvsoc/core/models/utils/dpi_chip_wrapper.cpp)

What it shows:

- how to build a GVSoC component that bridges external RTL-side signals
- how to expose grouped pad/interface behavior through `vp::Wire*`
- how to map external signal edges into GVSoC component interactions

This file is not a CPU wrapper, but it is a good reference for the style of
bridge component you will likely need.

### 2.3 RTL Cosimulation Hook in the Runner

Relevant file:

- [runner.py](/home/kunq/smartnic_infra_sim/gvsoc/core/models/gvsoc/runner.py)

Relevant features:

- `--rtl-cosimulation`
- `--gvsoc-path`
- `rtl_cosim_runner`

This shows that GVSoC already has a runner-level notion of RTL cosimulation.

## 3. Recommended Integration Architecture

### 3.1 First Practical Architecture

```text
baseline_target.py
  -> rtl_mcu_comp.py
     -> dpi_mcu_wrapper.cpp
        <-> Verilated MCU top (CV32E40X / Ibex wrapper)
  -> interconnect
  -> local memory
  -> rdma_engine
  -> host_control_path or mailbox block
```

### 3.2 Conceptual Partition

GVSoC remains responsible for:

- top-level platform composition
- memory model
- interconnect
- RDMA engine
- peripheral models
- trace and timing infrastructure

RTL remains responsible for:

- MCU core microarchitecture
- custom instruction behavior
- local MCU pipeline behavior
- local RTL-visible control logic

The bridge is responsible for:

- clock/reset synchronization
- instruction and data memory transactions
- interrupts
- boot/start control
- simulation time coordination

## 4. Recommended Development Phases

## Phase 1: Minimal RTL Dummy Core

Before integrating CV32E40X or Ibex directly, create a tiny RTL test core or
state machine that only validates the bridge.

It should prove:

- GVSoC can clock the RTL side
- reset works
- RTL can issue memory reads
- RTL can issue memory writes
- IRQ lines can be driven

Why this phase matters:

- it isolates bridge/debug problems from real CPU-core problems

## Phase 2: Verilated MCU Wrapper

Create a thin SystemVerilog wrapper around the chosen core:

- `cv32e40x_gvsoc_top.sv` or `ibex_gvsoc_top.sv`

Responsibilities:

- expose a simplified memory interface
- expose clock/reset
- expose interrupt lines
- expose boot/fetch enable control
- optionally expose a retire/debug status signal

At this phase, do not try to expose every optional CPU feature.

## Phase 3: GVSoC DPI MCU Component

Create:

- `rtl_mcu_comp.py`
- `dpi_mcu_wrapper.cpp`

Responsibilities:

- instantiate the RTL MCU bridge as a GVSoC component
- connect it to the interconnect
- connect reset and IRQ lines
- connect boot address and start/fetch-enable signals

## Phase 4: Replace ISS as an Option

Update:

- `baseline_target.py`

to support a switch between:

- ISS mode
- RTL MCU mode

This is important because it keeps a working baseline while the RTL path is
being debugged.

## Phase 5: Add Custom Instructions

Only after the RTL MCU path is stable:

- modify CV32E40X or Ibex
- add custom instruction decode/execute behavior
- validate the new instruction path
- compare against the ISS-based semantic model if both exist

## 5. Minimal Interface Contract for the MCU Bridge

The bridge should start with the smallest useful contract.

### 5.1 Required Control Signals

- `clk`
- `rst_n` or equivalent reset
- `fetch_enable`
- `boot_addr`

### 5.2 Required Interrupt Signals

At minimum:

- machine software interrupt
- machine timer interrupt
- machine external interrupt

Later optional:

- finer-grain external interrupt lines

### 5.3 Required Memory Interface

Start with a simplified transactional interface, for example:

- `req_valid`
- `req_addr`
- `req_wdata`
- `req_write`
- `req_size`
- `req_instr`
- `rsp_valid`
- `rsp_rdata`
- `rsp_err`

This is much easier to bridge than AXI or a more complex bus on day one.

### 5.4 Optional Observability Signals

Useful but not required at first:

- `commit_valid`
- `commit_pc`
- `insn_word`
- `trap`
- `halted`

These help later when validating new instructions.

## 6. GVSoC-Side Component Design

## 6.1 `rtl_mcu_comp.py`

Purpose:

- Python wrapper for the RTL MCU bridge

Should provide:

- path to the Verilated/DPI-backed shared object or configuration
- boot address
- IRQ configuration
- optional trace/debug settings

## 6.2 `dpi_mcu_wrapper.cpp`

Purpose:

- C++ GVSoC component that bridges GVSoC interfaces and the RTL MCU model

Expected ports:

- `vp::IoMaster` for memory requests
- `vp::WireSlave<bool>` for reset
- `vp::WireSlave<bool>` for fetch/start enable
- `vp::WireSlave<uint64_t>` for boot address
- `vp::WireSlave<bool>` for interrupt inputs

Potential optional ports:

- `vp::WireMaster<bool>` halted/busy
- `vp::WireMaster<uint32_t>` retire counters or debug state

## 6.3 Reference Style in Existing Code

Good local examples for component style:

- [host_control_path.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_control_path.cpp)
- [rdma_engine.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/rdma_engine.cpp)

Good local examples for bridge/wrapper style:

- [dpi_chip_wrapper.cpp](/home/kunq/smartnic_infra_sim/gvsoc/core/models/utils/dpi_chip_wrapper.cpp)
- [dpi.cpp](/home/kunq/smartnic_infra_sim/gvsoc/core/dpi-wrapper/src/dpi.cpp)

## 7. How to Connect It in `baseline_target.py`

Recommended structure:

### ISS Mode

Keep the current path:

- `host_cpu_rv64 = iss.Riscv(...)`

### RTL MCU Mode

Instantiate:

- `rtl_mcu = RtlMcu(...)`

Then connect:

- instruction/data memory path -> interconnect
- boot address -> ROM/loader convention
- IRQ lines -> CLINT/PLIC or direct external source
- host-control mailbox / control-plane block -> through MMIO or local memory

This lets you compare:

- ISS semantic prototype
- RTL-realized core

inside the same system-level platform.

## 8. Most Important Engineering Advice

### 8.1 Do Not Start with a Full AXI Integration

AXI will make the first debug cycle much harder.

Start with:

- a minimal custom memory-request protocol

Then bridge that to GVSoC IO requests.

### 8.2 Do Not Start by Replacing the Whole CPU Path

Keep an option flag in the target for:

- `iss`
- `rtl_mcu`

That will save a lot of bring-up pain.

### 8.3 Validate the Bridge Before Validating New Instructions

The first milestone should not be:

- “custom instruction works”

The first milestone should be:

- “RTL core fetches and loads/stores correctly through GVSoC”

### 8.4 Keep ISS-Based Semantic Modeling in Parallel

Even if RTL is the end goal, it is still useful to keep:

- an ISS-based semantic prototype for the new instructions

This gives you:

- faster architectural experiments
- a correctness reference when RTL debugging gets complicated

## 9. Recommended Near-Term Plan

### Step 1

Create a new document or code stub for:

- `rtl_mcu_comp.py`
- `dpi_mcu_wrapper.cpp`

### Step 2

Implement a dummy RTL requester:

- one instruction fetch
- one data write
- one data read

### Step 3

Wire it into:

- `baseline_target.py`

behind a mode switch

### Step 4

Run the same control-plane experiment with:

- ISS path
- RTL MCU path

### Step 5

Only then begin CV32E40X / Ibex integration and custom instruction work

## 10. Summary

Yes, there is a relatively simple integration path.

The best path is:

- use the existing DPI and RTL cosim hooks already present in GVSoC
- build a dedicated RTL MCU wrapper component
- keep the rest of the platform in GVSoC
- introduce the real RTL core incrementally

The most important existing hooks are:

- [dpi.cpp](/home/kunq/smartnic_infra_sim/gvsoc/core/dpi-wrapper/src/dpi.cpp)
- [dpi_chip_wrapper.cpp](/home/kunq/smartnic_infra_sim/gvsoc/core/models/utils/dpi_chip_wrapper.cpp)
- [runner.py](/home/kunq/smartnic_infra_sim/gvsoc/core/models/gvsoc/runner.py)

This path is much lighter than writing a fully native GVSoC CPU model from
scratch, and it is a very good fit for integrating a modified CV32E40X or Ibex
MCU with new instructions.
