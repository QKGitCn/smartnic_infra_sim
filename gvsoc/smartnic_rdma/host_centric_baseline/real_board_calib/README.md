# Real Board Calibration

This folder is for extracting host-side timing constants from a normal Ubuntu
Linux node and converting them into simulator inputs for the host-centric GVSoC
baseline.

The default first-pass path intentionally avoids:

- RISC-V-specific board dependencies
- RDMA NIC hardware requirements
- remote-node performance comparisons

The goal is to keep the experiment as simple as possible while still measuring
the host-side configuration and completion overheads that matter for the
host-centric control path, while also allowing a second-stage migration to a
real verbs-based RDMA submission experiment.

## Goal

We want to measure host-control-path timing on a normal Ubuntu node, then
convert that into a simulator calibration profile compatible with:

- [host_calibration_profile.example.json](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/host_calibration_profile.example.json)
- `make run-host-fw HOST_CALIBRATION_PROFILE=...`

The important design rule is:

- keep raw measurements
- derive simulator constants from the raw measurements

This keeps the flow extensible when the simulation grows more detailed later.

## Folder Contents

- [README.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/README.md)
  - this runbook
- [ubuntu_host_plan.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/ubuntu_host_plan.md)
  - complete experiment plan and staging
- [preflight_ubuntu_host.sh](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/preflight_ubuntu_host.sh)
  - tool and kernel-capability checks
- [capture_userspace_only.sh](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/capture_userspace_only.sh)
  - first-stage capture command wrapper
- [local_ctrl_smoke.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/local_ctrl_smoke.py)
  - minimal single-node local control-path microbenchmark
- [raw_trace_example.csv](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/raw_trace_example.csv)
  - example per-iteration raw timestamp trace
- [raw_trace_schema.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/raw_trace_schema.md)
  - meaning of each timestamp column
- [convert_calibration.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/convert_calibration.py)
  - converts either local-approximation CSV or verbs-submission CSV into a simulator calibration JSON
- [ubuntu_rdma_submit_plan.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/ubuntu_rdma_submit_plan.md)
  - real RoCE verbs submission calibration plan for measuring host-side submit overhead
- [test_verbs_submit.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/test_verbs_submit.c)
  - `libibverbs` workload for measuring host-side RoCE submission timing

## Minimal Experiment Philosophy

For the first pass, do not use:

- real RDMA NICs
- Soft-RoCE
- remote peers
- custom kernel modules

Instead, measure only the host-side configuration path on one Ubuntu node.

The first-stage local microbenchmark models:

- userspace request preparation
- a syscall-like handoff point
- WQE-like preparation
- a doorbell-like submit point
- completion polling
- completion delivery back to userspace

This matches the current GVSoC host-centric simulation more closely than a full
network benchmark does. Once the local approximation flow is stable, move to
the real verbs-based submission path in
[ubuntu_rdma_submit_plan.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/ubuntu_rdma_submit_plan.md).

## Two Calibration Tiers

There are now two distinct calibration tiers in this folder.

### Tier 1: Local Approximation

Use these when:

- you do not have RDMA hardware available
- you want to validate the analysis flow quickly
- you want a coarse host-control approximation

Files:

- [local_ctrl_smoke.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/local_ctrl_smoke.py)
- [test.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/test.c)
- [test_eventfd.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/test_eventfd.c)

These do not use real RDMA verbs.

### Tier 2: Real RDMA Submission Path

Use this when:

- you want host-side RDMA submission overhead from a real Linux verbs stack
- you want host-side RoCE submission overhead from a real Linux verbs stack
- you want the closest calibration target for the current simulator

Files:

- [ubuntu_rdma_submit_plan.md](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/ubuntu_rdma_submit_plan.md)
- [test_verbs_submit.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/test_verbs_submit.c)

This path requires a RoCE-capable RDMA device or Soft-RoCE and a minimal peer
for RC QP bring-up, but the measurement target remains the local host-side
submission overhead.

## Dependencies

Install these on the Ubuntu node:

```bash
sudo apt update
sudo apt install -y \
  python3 python3-venv python3-pip \
  util-linux linux-tools-common linux-tools-$(uname -r) \
  trace-cmd
```

Why these:

- `python3`
  - runs the local calibration microbenchmark and conversion scripts
- `util-linux`
  - provides `taskset` for pinning to one CPU core
- `linux-tools-*`
  - provides `perf`
- `trace-cmd`
  - simple kernel tracing frontend built on `ftrace`

These are standard Ubuntu packages and do not depend on RDMA hardware.

## Single-Core Guidance

For calibration runs:

- pin the process to one core
- minimize background load
- disable or minimize CPU migration
- keep the CPU frequency stable if possible

The calibration target is one active host core, matching the current GVSoC
single-core host model.

## Staged Plan

### Stage 0: Preflight

Run:

```bash
bash smartnic_rdma/host_centric_baseline/real_board_calib/preflight_ubuntu_host.sh
```

This checks:

- `python3`
- `taskset`
- `perf`
- `trace-cmd`
- basic tracefs availability

### Stage 1: Userspace-Only Local Control Path

Run the minimal microbenchmark pinned to one core:

```bash
taskset -c 2 python3 smartnic_rdma/host_centric_baseline/real_board_calib/local_ctrl_smoke.py \
  --iterations 1000 \
  --output /tmp/local_ctrl_trace.csv
```

This produces a raw CSV trace with one row per request.

### Stage 2: Add CPU Counter Context

Run the same microbenchmark under `perf stat`:

```bash
taskset -c 2 perf stat -e \
  cycles,instructions,task-clock,context-switches,cpu-migrations,page-faults \
  python3 smartnic_rdma/host_centric_baseline/real_board_calib/local_ctrl_smoke.py \
  --iterations 1000 \
  --output /tmp/local_ctrl_trace.csv
```

This gives:

- total cycles
- instructions
- scheduling noise indicators

### Stage 3: Optional Kernel Trace Context

If later you add a syscall-backed variant, record it with:

```bash
sudo trace-cmd record \
  -p function_graph \
  -g 'sys_*' \
  -g 'do_sys*' \
  -g 'vfs_*' \
  taskset -c 2 python3 smartnic_rdma/host_centric_baseline/real_board_calib/local_ctrl_smoke.py \
  --iterations 1000 \
  --output /tmp/local_ctrl_trace.csv
```

For the current first-stage userspace-only path, this is optional.

## Conversion Flow

1. collect raw trace CSV on the Ubuntu node
2. run the converter:

```bash
python3 smartnic_rdma/host_centric_baseline/real_board_calib/convert_calibration.py \
  --input /tmp/local_ctrl_trace.csv \
  --board-frequency-hz 3000000000 \
  --sim-frequency-hz 100000000 \
  --output /tmp/ubuntu_host_profile.json
```

3. use the generated profile in simulation:

```bash
make -C smartnic_rdma/host_centric_baseline run-host-fw \
  HOST_CALIBRATION_PROFILE=/tmp/ubuntu_host_profile.json
```

## Current Derived Fields

The converter currently emits:

- `userspace_req_cycles`
- `kernel_req_cycles`
- `driver_prepare_cycles`
- `pcie_submit_cycles`
- `poll_interval_cycles`
- `pcie_completion_cycles`
- `driver_completion_cycles`
- `kernel_completion_cycles`
- `userspace_completion_cycles`

For the current no-RDMA-hardware path:

- kernel- and PCIe-related values are approximations or placeholders unless a
  deeper instrumentation stage is added
- that is acceptable for the first calibration pass, as long as raw data is
  preserved for later refinement
