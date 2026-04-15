# Host-Centric Baseline

## Purpose

This folder contains the current host-centric RDMA baseline for the SmartNIC
simulation work.

This baseline is the reference case for later comparison against:

- MCU-offloaded RDMA control
- MCU-offloaded RDMA control with RISC-V ISA extensions

The current emphasis is on the host-side control plane:

- how a host CPU and its software stack submit RDMA work
- how that control path can be decomposed into explicit timing stages
- how the resulting timing can later be calibrated using measurements from a
  real Linux node

## What This Baseline Represents

At the architectural level, this baseline represents:

- host-managed RDMA control
- no MCU in the fast path
- no custom ISA extensions in the control loop
- one local RDMA engine
- one local shared memory
- one queue-backed `RDMA_WRITE`-style smoke path

The current CPU-driven path uses:

- a real `rv64` ISS in GVSoC
- a tiny firmware workload
- a layered host control-path model
- a local RDMA engine model

## High-Level Structure

```text
host firmware (rv64 ELF)
  -> host_cpu_rv64 ISS
  -> host_control_path MMIO
  -> local submission/completion queues in memory
  -> rdma_engine
  -> completion back to firmware
```

There are now two host-side execution styles in this folder:

- legacy behavioral path
  - `host_stub`
- current preferred CPU-driven path
  - `rv64 firmware` + `host_control_path`

## Quick Start

From this folder:

```bash
cd /home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline
make run-host-fw
```

Useful targets:

- `make run`
  - runs the original `host_stub` smoke path
- `make host-fw`
  - builds the `rv64` firmware ELF only
- `make run-host-fw`
  - runs the current `rv64`-driven host-centric path

With a calibration profile:

```bash
make run-host-fw HOST_CALIBRATION_PROFILE=/path/to/profile.json
```

## Folder Map

This section explains the purpose of every important file and subfolder in the
current baseline.

### Core Simulation Source Files

#### [baseline_target.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/baseline_target.py)

Purpose:

- the top-level GVSoC target composition for this baseline

What it does:

- instantiates the clock domain
- creates interconnect, memory, ROM, CPU, peripherals, and device models
- maps MMIO and memory regions
- optionally loads the `rv64` firmware ELF
- wires together:
  - `host_cpu_rv64`
  - `host_control_path`
  - `rdma_engine`
  - local memory
  - `clint`, `plic`, and `uart`

Why it matters:

- this is the entry point for the whole simulated system

#### [host_control_path.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_control_path.cpp)

Purpose:

- the current host-side control-plane model

What it does:

- exposes a CPU-visible MMIO request/completion interface
- receives request fields from firmware
- models staged timing for:
  - userspace
  - kernel
  - driver
  - PCIe/control submit
  - completion return path
- writes WQE-like data into memory
- notifies the RDMA engine
- observes completion and reports it back to firmware

Why it matters:

- this is the main module for extracting and later calibrating host-side
  control-plane overhead

#### [host_control_path_comp.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_control_path_comp.py)

Purpose:

- Python wrapper for `host_control_path.cpp`

What it does:

- declares the component to GVSoC
- defines default timing properties
- optionally loads calibration overrides from JSON

Why it matters:

- this is where the simulation gets configurable host-control timing knobs

#### [rdma_engine.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/rdma_engine.cpp)

Purpose:

- the local RDMA execution engine model

What it does:

- accepts control MMIO writes
- fetches the WQE from the submission queue
- reads the source buffer
- writes the destination buffer
- writes the CQE

Why it matters:

- this is the local NIC-side data movement block for the host-centric baseline

#### [rdma_engine_comp.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/rdma_engine_comp.py)

Purpose:

- Python wrapper for `rdma_engine.cpp`

What it does:

- declares the RDMA engine as a GVSoC component
- sets parameters and interfaces expected by the target

#### [host_stub.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_stub.cpp)

Purpose:

- the original behavioral host-side smoke benchmark

What it does:

- directly drives the RDMA engine path without a real host CPU
- provides a simpler reference path for early bring-up

Why it still exists:

- useful for comparison and fallback during debugging
- documents the earlier host-centric control style

#### [host_stub_comp.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_stub_comp.py)

Purpose:

- Python wrapper for `host_stub.cpp`

#### [host_stub.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_stub.py)

Purpose:

- earlier Python-side draft/stub for the host component

Why it exists:

- keeps historical context from the early scaffold phase

### Firmware Files

These files implement the current `rv64` workload that runs on the ISS.

#### [firmware/host_ctrl_smoke/main.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/main.c)

Purpose:

- the actual firmware workload logic

What it does:

- programs the `host_control_path` MMIO registers
- rings the request doorbell
- polls completion
- prints per-iteration cycle counts and a summary

#### [firmware/host_ctrl_smoke/start.S](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/start.S)

Purpose:

- firmware entry point and minimal runtime setup

What it does:

- sets up execution state
- transfers control into `main`

#### [firmware/host_ctrl_smoke/link.ld](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/link.ld)

Purpose:

- linker script for the firmware ELF

What it does:

- places firmware sections into the expected RAM layout

#### [firmware/host_ctrl_smoke/semihost.h](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/semihost.h)

Purpose:

- helper macros/functions for minimal semihosted output and exit handling

### Build and Launch Files

#### [Makefile](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/Makefile)

Purpose:

- top-level workflow for build and run

What it does:

- builds GVSoC artifacts
- builds the host firmware
- launches the target
- forwards calibration profile arguments when needed

#### [run.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/run.py)

Purpose:

- local launcher/helper entrypoint

What it does:

- bootstraps repository-local Python imports
- serves as a lightweight entrypoint for local use

#### [smoke_launch.sh](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/smoke_launch.sh)

Purpose:

- convenience shell wrapper for smoke-level launching

#### [import_smoke_test.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/import_smoke_test.py)

Purpose:

- verifies that Python-side imports work correctly inside a normal GVSoC clone

Why it matters:

- portability depends on finding the enclosing GVSoC Python stack correctly

### Calibration Files

#### [host_calibration_profile.example.json](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_calibration_profile.example.json)

Purpose:

- example timing-profile JSON for overriding host-control buckets

What it controls:

- `userspace_req_cycles`
- `kernel_req_cycles`
- `driver_prepare_cycles`
- `pcie_submit_cycles`
- `poll_interval_cycles`
- `pcie_completion_cycles`
- `driver_completion_cycles`
- `kernel_completion_cycles`
- `userspace_completion_cycles`

#### [real_board_calib/README.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/README.md)

Purpose:

- overview of the real-node calibration workspace

#### [real_board_calib/ubuntu_host_plan.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/ubuntu_host_plan.md)

Purpose:

- local approximation calibration plan on an Ubuntu node

What it covers:

- userspace-only and eventfd-backed approximations
- tool installation
- CSV trace generation

#### [real_board_calib/ubuntu_rdma_submit_plan.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/ubuntu_rdma_submit_plan.md)

Purpose:

- real RoCE/RoCEv2-oriented host-side submission calibration plan

What it covers:

- RDMA/RoCE userspace dependencies
- Soft-RoCE bring-up
- real verbs-based submission workload flow

#### [real_board_calib/convert_calibration.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/convert_calibration.py)

Purpose:

- converts raw trace CSV into the JSON timing profile used by the simulator

#### [real_board_calib/local_ctrl_smoke.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/local_ctrl_smoke.py)

Purpose:

- minimal Python local-control-path approximation workload

#### [real_board_calib/test.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/test.c)

Purpose:

- minimal C local-control-path approximation workload

#### [real_board_calib/test_eventfd.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/test_eventfd.c)

Purpose:

- eventfd-backed approximation of a more realistic control handoff path

#### [real_board_calib/test_verbs_submit.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/test_verbs_submit.c)

Purpose:

- real `libibverbs`-based workload for measuring host-side RoCE submission
  overhead

#### [real_board_calib/preflight_ubuntu_host.sh](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/preflight_ubuntu_host.sh)

Purpose:

- checks required Ubuntu host tools before running calibration

#### [real_board_calib/capture_userspace_only.sh](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/capture_userspace_only.sh)

Purpose:

- convenience wrapper for collecting the userspace-only approximation trace

#### [real_board_calib/raw_trace_schema.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/raw_trace_schema.md)

Purpose:

- explains the meaning of raw trace timestamp columns

#### [real_board_calib/raw_trace_example.csv](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/raw_trace_example.csv)

Purpose:

- example raw trace file

### Documentation Files

#### [debug_log.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/debug_log.md)

Purpose:

- chronological bring-up and debugging history

#### [quickstart.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/quickstart.md)

Purpose:

- first commands to try in a fresh clone

#### [fresh_clone_portability.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/fresh_clone_portability.md)

Purpose:

- portability assumptions for copying this folder into a fresh GVSoC clone

#### [target_integration.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/target_integration.md)

Purpose:

- explains how this baseline target fits the normal GVSoC target pattern

#### [rdma_write_lat_smoke.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/rdma_write_lat_smoke.md)

Purpose:

- explains the current minimal queue-backed `RDMA_WRITE` smoke scenario

#### [benchmark_notes.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/benchmark_notes.md)

Purpose:

- notes for extending the smoke path into benchmark experiments

#### [module_notes.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/module_notes.md)

Purpose:

- implementation notes and local reasoning about module behavior

#### [layered_host_plan.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/layered_host_plan.md)

Purpose:

- architecture note for the layered host-side model

#### [host_refactor_plan.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_refactor_plan.md)

Purpose:

- phased plan for the transition away from the monolithic host stub

### Package/Marker Files

#### [__init__.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/__init__.py)

Purpose:

- lightweight package marker for local Python import behavior

## Dependency Structure

### 1. Top-Level Runtime Dependency Graph

```text
Makefile
  -> baseline_target.py
     -> host_control_path_comp.py
        -> host_control_path.cpp
     -> rdma_engine_comp.py
        -> rdma_engine.cpp
     -> host_stub_comp.py
        -> host_stub.cpp
     -> firmware/host_ctrl_smoke/*.c|S|ld
```

### 2. Current Preferred Execution Path

```text
main.c
  -> MMIO writes to host_control_path
  -> host_control_path builds and submits request
  -> rdma_engine executes request
  -> host_control_path reports completion
  -> main.c polls completion and prints latency
```

### 3. Calibration Dependency Path

```text
real_board_calib workload
  -> raw CSV trace
  -> convert_calibration.py
  -> calibration JSON
  -> host_control_path_comp.py
  -> make run-host-fw HOST_CALIBRATION_PROFILE=...
```

## External GVSoC / Repository Dependencies

This folder is not a standalone simulator. It depends on the enclosing GVSoC
repository.

### Python-Side External Dependencies

The Python entrypoints bootstrap and rely on repo-provided packages such as:

- `gvsoc.runner`
- `gvsoc.systree`
- `gvrun`
- `gapylib`
- standard component wrappers under:
  - `core/models`
  - `gvrun/python`
  - `install/python`
  - `install/bin`
  - `gapy/bin`
  - `pulpos/python`

These paths are discovered dynamically by:

- [baseline_target.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/baseline_target.py)
- [run.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/run.py)
- [import_smoke_test.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/import_smoke_test.py)

### GVSoC Component Dependencies Outside This Folder

The target also depends on standard GVSoC-provided models outside this folder,
including classes and modules corresponding to:

- clock domain
- interconnect/router
- memory model
- RISC-V ISS
- CLINT
- PLIC
- UART
- loader / runner infrastructure

In practice, these come from the enclosing repository, not from
`host_centric_baseline/`.

### Firmware Toolchain Dependency

The firmware build expects a RISC-V cross toolchain capable of building:

- `rv64imafdc`

This is used by the `host-fw` / `run-host-fw` path in the
[Makefile](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/Makefile).

## Generated vs Source Files

### Source Files You Should Edit

- `.py`
- `.cpp`
- `.c`
- `.S`
- `.ld`
- `.md`
- `.json`
- `.sh`

### Generated / Build Output You Usually Should Not Edit

- `build/build/...`
- `build/work/...`
- `build/host_fw/...`
- `__pycache__/...`

These are generated artifacts from build, run, or Python execution.

## Recommended Reading Order

If someone is new to this baseline, the best reading order is:

1. this [README.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/README.md)
2. [quickstart.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/quickstart.md)
3. [baseline_target.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/baseline_target.py)
4. [host_control_path.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_control_path.cpp)
5. [firmware/host_ctrl_smoke/main.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/firmware/host_ctrl_smoke/main.c)
6. [rdma_engine.cpp](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/rdma_engine.cpp)
7. [debug_log.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/debug_log.md)
8. calibration docs under
   [real_board_calib](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/README.md)

## Current Status Summary

As of now, this folder already supports:

- a runnable `rv64` host-centric baseline in GVSoC
- a layered host-side control-path model
- a working local RDMA execution path
- firmware-driven latency reporting
- calibration-profile injection for host-control timing

The next major step is:

- calibrating the host-side timing buckets against a real Ubuntu RoCE / RoCEv2
  submission path
