# Ubuntu Host Calibration Plan

## Objective

Extract host-side control-path timing from a normal Ubuntu node for a simple
local microbenchmark that resembles the current host-centric RDMA simulation.

We are not trying to measure:

- remote transport latency
- RDMA NIC performance
- multi-node bandwidth

We are trying to measure:

- request preparation overhead
- submission overhead
- polling overhead
- completion consumption overhead

## Why This Matches the Simulator

The current simulator already separates the host path into:

- userspace
- kernel
- driver
- PCIe/control submit
- completion return path

The first real-host calibration pass should therefore focus on:

- one pinned core
- one process
- repeated request/complete loops
- detailed timestamps around those phases

## Tooling

Required:

- `python3`
- `taskset`
- `perf`
- `trace-cmd`
- `gcc`

Optional later:

- `bpftrace`
- syscall-backed or `eventfd`/`futex` variants

## Concrete Execution Steps

### Step 0: Install Tools

On the Ubuntu node, run:

```bash
sudo apt update
sudo apt install -y \
  python3 python3-venv python3-pip \
  util-linux linux-tools-common linux-tools-$(uname -r) \
  trace-cmd build-essential
```

Expected stdout shape:

```text
Hit:1 http://archive.ubuntu.com/ubuntu ...
Reading package lists... Done
Building dependency tree... Done
The following NEW packages will be installed:
  build-essential linux-tools-common trace-cmd ...
Setting up trace-cmd ...
Setting up linux-tools-common ...
Setting up build-essential ...
```

### Step 1: Run Preflight Checks

Run:

```bash
bash smartnic_rdma/host_centric_baseline/real_board_calib/preflight_ubuntu_host.sh
```

Expected stdout shape:

```text
[preflight] uname:
Linux <hostname> <kernel-version> ...
[preflight] checking required commands
  ok: python3 -> /usr/bin/python3
  ok: taskset -> /usr/bin/taskset
  ok: perf -> /usr/bin/perf
  ok: trace-cmd -> /usr/bin/trace-cmd
[preflight] lscpu summary
Architecture:                         x86_64
CPU(s):                               ...
[preflight] tracefs availability
  ok: /sys/kernel/tracing
[preflight] done
```

If any command shows `missing:`, stop and install the missing package first.

### Step 2: Run the Simplest Python Workload

This uses:

- [local_ctrl_smoke.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/local_ctrl_smoke.py)

Run:

```bash
taskset -c 2 python3 smartnic_rdma/host_centric_baseline/real_board_calib/local_ctrl_smoke.py \
  --iterations 1000 \
  --output /tmp/local_ctrl_trace.csv
```

Expected stdout:

```text
```

This script is intentionally quiet on success. It writes:

- `/tmp/local_ctrl_trace.csv`

Verify the file:

```bash
head -n 5 /tmp/local_ctrl_trace.csv
```

Expected stdout shape:

```text
iter,t_app_begin,t_syscall_enter,t_driver_begin,t_wqe_ready,t_doorbell_write,t_completion_visible,t_driver_cqe_seen,t_kernel_return,t_userspace_done
0,....
1,....
2,....
3,....
```

### Step 3: Run the Same Workload Under `perf stat`

Run:

```bash
taskset -c 2 perf stat -e \
  cycles,instructions,task-clock,context-switches,cpu-migrations,page-faults \
  python3 smartnic_rdma/host_centric_baseline/real_board_calib/local_ctrl_smoke.py \
  --iterations 1000 \
  --output /tmp/local_ctrl_trace.csv
```

Expected stdout/stderr shape:

```text
 Performance counter stats for 'python3 ... local_ctrl_smoke.py ...':

        12,345,678      cycles
         9,876,543      instructions
             4.56 msec  task-clock
                 0      context-switches
                 0      cpu-migrations
               ...      page-faults

       0.00xxxx seconds time elapsed
```

What to save:

- raw `perf stat` text output
- `/tmp/local_ctrl_trace.csv`

### Step 4: Convert the Raw Trace to a Simulator Profile

Run:

```bash
python3 smartnic_rdma/host_centric_baseline/real_board_calib/convert_calibration.py \
  --input /tmp/local_ctrl_trace.csv \
  --input-unit ns \
  --sim-frequency-hz 100000000 \
  --output /tmp/ubuntu_host_profile.json
```

Expected stdout:

```text
```

Then inspect the generated profile:

```bash
cat /tmp/ubuntu_host_profile.json
```

Expected stdout shape:

```json
{
  "userspace_req_cycles": 1,
  "kernel_req_cycles": 1,
  "driver_prepare_cycles": 1,
  "pcie_submit_cycles": 1,
  "poll_interval_cycles": 2,
  "pcie_completion_cycles": 1,
  "driver_completion_cycles": 1,
  "kernel_completion_cycles": 1,
  "userspace_completion_cycles": 1
}
```

The exact numbers will depend on your host.

### Step 5: Feed the Profile into the Simulator

Run:

```bash
make -C smartnic_rdma/host_centric_baseline run-host-fw \
  HOST_CALIBRATION_PROFILE=/tmp/ubuntu_host_profile.json
```

Expected stdout shape:

```text
[rv64_fw] host_control_path latency loop start
[host_ctrl] userspace: ...
[host_ctrl] kernel: ...
[host_ctrl] driver: ...
[host_ctrl] pcie: ...
[rdma_engine] ...
[rv64_fw] summary iterations=4 ...
[rv64_fw] PASS
```

## Actual Illustrative Workloads

### Workload A: Python Version

File:

- [local_ctrl_smoke.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/local_ctrl_smoke.py)

Use it when:

- you want zero compile friction
- you want to verify the data flow first

### Workload B: C Version

File:

- [test.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/test.c)

Build it with:

```bash
gcc -O2 -Wall -Wextra \
  -o /tmp/local_ctrl_test \
  smartnic_rdma/host_centric_baseline/real_board_calib/test.c
```

Expected stdout:

```text
```

Run it with:

```bash
taskset -c 2 /tmp/local_ctrl_test 1000 /tmp/local_ctrl_trace_c.csv
```

Expected stdout:

```text
[local_ctrl_test] iterations=1000 output=/tmp/local_ctrl_trace_c.csv
[local_ctrl_test] done
```

Check the CSV:

```bash
head -n 5 /tmp/local_ctrl_trace_c.csv
```

Expected stdout shape:

```text
iter,t_app_begin,t_syscall_enter,t_driver_begin,t_wqe_ready,t_doorbell_write,t_completion_visible,t_driver_cqe_seen,t_kernel_return,t_userspace_done
0,....
1,....
2,....
3,....
```

Then convert it exactly like the Python trace:

```bash
python3 smartnic_rdma/host_centric_baseline/real_board_calib/convert_calibration.py \
  --input /tmp/local_ctrl_trace_c.csv \
  --input-unit ns \
  --sim-frequency-hz 100000000 \
  --output /tmp/ubuntu_host_profile_c.json
```

### Workload C: `eventfd`-Backed C Version

This is the recommended next step because it is closer to the current
simulation’s control-plane structure than the pure busy-wait version.

File:

- [test_eventfd.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/test_eventfd.c)

What it adds:

- real syscall crossing through `eventfd`
- a doorbell-like submit syscall
- a completion-wait syscall
- a worker thread that plays the role of a very small local “device-side” control engine

This is still not a real RDMA NIC, but it is much closer to:

- submit
- wait
- completion delivery

than the pure userspace-only workload.

#### Build

```bash
gcc -O2 -Wall -Wextra -pthread \
  -o /tmp/local_ctrl_eventfd \
  smartnic_rdma/host_centric_baseline/real_board_calib/test_eventfd.c
```

Expected stdout:

```text
```

#### Run

```bash
taskset -c 2 /tmp/local_ctrl_eventfd 1000 /tmp/local_ctrl_trace_eventfd.csv
```

Expected stdout shape:

```text
[local_ctrl_eventfd] iterations=1000 output=/tmp/local_ctrl_trace_eventfd.csv
[local_ctrl_eventfd] done
```

Inspect the CSV:

```bash
head -n 5 /tmp/local_ctrl_trace_eventfd.csv
```

Expected stdout shape:

```text
iter,t_app_begin,t_syscall_enter,t_driver_begin,t_wqe_ready,t_doorbell_write,t_completion_visible,t_driver_cqe_seen,t_kernel_return,t_userspace_done
0,....
1,....
2,....
3,....
```

#### Run With `perf stat`

```bash
taskset -c 2 perf stat -e \
  cycles,instructions,task-clock,context-switches,cpu-migrations,page-faults \
  /tmp/local_ctrl_eventfd 1000 /tmp/local_ctrl_trace_eventfd.csv
```

Expected stdout/stderr shape:

```text
 Performance counter stats for '/tmp/local_ctrl_eventfd 1000 /tmp/local_ctrl_trace_eventfd.csv':

        12,345,678      cycles
         9,876,543      instructions
             4.56 msec  task-clock
                 0      context-switches
                 0      cpu-migrations
               ...      page-faults
```

#### Convert to Simulator Profile

```bash
python3 smartnic_rdma/host_centric_baseline/real_board_calib/convert_calibration.py \
  --input /tmp/local_ctrl_trace_eventfd.csv \
  --input-unit ns \
  --sim-frequency-hz 100000000 \
  --output /tmp/ubuntu_host_profile_eventfd.json
```

Inspect the result:

```bash
cat /tmp/ubuntu_host_profile_eventfd.json
```

Expected stdout shape:

```json
{
  "userspace_req_cycles": ...,
  "kernel_req_cycles": ...,
  "driver_prepare_cycles": ...,
  "pcie_submit_cycles": ...,
  "poll_interval_cycles": 2,
  "pcie_completion_cycles": ...,
  "driver_completion_cycles": ...,
  "kernel_completion_cycles": ...,
  "userspace_completion_cycles": ...
}
```

#### Feed Back Into GVSoC

```bash
make -C smartnic_rdma/host_centric_baseline run-host-fw \
  HOST_CALIBRATION_PROFILE=/tmp/ubuntu_host_profile_eventfd.json
```

Expected stdout shape:

```text
[rv64_fw] host_control_path latency loop start
[host_ctrl] userspace: ...
[host_ctrl] kernel: ...
[host_ctrl] driver: ...
[host_ctrl] pcie: ...
[rdma_engine] ...
[rv64_fw] summary iterations=4 ...
[rv64_fw] PASS
```

## Next Refinement Steps

After this simplest pass works, the next refinements should be:

1. treat `test_eventfd.c` as the default calibration path instead of the pure busy-wait path
2. add `trace-cmd` around the `eventfd` path
3. if needed later, replace `eventfd` worker logic with `futex` or a tiny kernel-assisted path
4. keep the same raw trace schema, only add more timestamps if needed

## Data Retention Rule

Always save:

- raw CSV
- `perf stat` text
- trace report text

Never keep only the final calibration JSON.
