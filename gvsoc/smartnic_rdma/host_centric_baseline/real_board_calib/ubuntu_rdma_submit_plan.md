# Ubuntu RoCE Submission Calibration Plan

## Objective

Measure the host-side control-plane overhead of submitting a basic RoCE /
RoCEv2 RDMA operation from a real Linux node into the local RDMA NIC/queue
path.

This plan is intentionally focused on:

- userspace request preparation
- `libibverbs` submission overhead
- local queue / doorbell submission
- local completion visibility

This plan is not primarily focused on:

- remote-node execution time
- network propagation latency
- end-to-end application latency across nodes

The remote peer is only used to make a real RC QP path legal and runnable.
The target protocol family here is RoCE / RoCEv2 rather than InfiniBand fabric.

## What We Want to Extract

We want timestamps that can be mapped into the simulator's host-control
profile:

- `t_app_begin`
- `t_post_send_enter`
- `t_post_send_return`
- `t_first_poll`
- `t_local_cqe_seen`
- `t_userspace_done`

These map approximately to:

- `userspace_req_cycles`
- `driver_prepare_cycles`
- `pcie_submit_cycles`
- `poll_interval_cycles`
- completion return buckets

## Dependencies

Install the minimum verbs stack and host tools:

```bash
sudo apt update
sudo apt install -y \
  build-essential pkg-config \
  rdma-core ibverbs-providers ibverbs-utils \
  libibverbs-dev librdmacm-dev rdmacm-utils \
  perftest \
  util-linux linux-tools-common linux-tools-$(uname -r) \
  trace-cmd
```

What each package is for:

- `rdma-core`
  - base userspace RDMA stack
- `ibverbs-providers`
  - provider plugins for `libibverbs`
- `ibverbs-utils`
  - tools such as `ibv_devices` and `ibv_devinfo`
- `libibverbs-dev`
  - headers and linkable library for the custom workload
- `librdmacm-dev`
  - optional connection-management helpers
- `rdmacm-utils`
  - basic RDMA CM utilities
- `perftest`
  - sanity-check tools like `ib_write_lat`
- `perf`, `trace-cmd`, `taskset`
  - host-side measurement support

## Preconditions

You need one of these:

1. A real RoCE-capable NIC on both nodes.
2. Or a software RoCE device such as Soft-RoCE (`rxe`) for development.

You also need:

- one local node where you collect the host-side timing
- one remote peer to complete RC QP bring-up
- one pinned CPU core for the workload process

The remote peer is not the target of the measurement. It only makes the verbs
path runnable.

## Recommended Bring-Up Order

Prefer this order:

1. Soft-RoCE (`rxe`) on two Ubuntu nodes
2. Real RoCE-capable NICs

This keeps the measurement focused on host-side submission overhead while
reducing bring-up friction.

## Step 0: Optional Soft-RoCE Bring-Up

If you do not yet have real RoCE NICs ready, create an `rxe` device:

```bash
sudo modprobe rdma_rxe
sudo rdma link add rxe_0 type rxe netdev <ethernet_dev>
rdma link show
ibv_devices
```

Expected stdout shape:

```text
link rxe_0/1 state ACTIVE physical_state LINK_UP netdev <ethernet_dev>
device           node GUID
------           ----------------
rxe_0            ...
```

When using `rxe`, pass:

- `--dev rxe_0`
- `--gid-index 0`

## Step 1: Check RDMA Device Visibility

Run:

```bash
ibv_devices
ibv_devinfo
```

Expected stdout shape:

```text
device           node GUID
------           ----------------
rxe_0            ...
```

or:

```text
device           node GUID
------           ----------------
mlx5_0           ...
```

If no device appears, stop here. The real verbs workload will not run without
an RDMA device.

## Step 2: Optional Sanity Check with `perftest`

Before using the custom workload, verify that a basic RoCE write path works.

Server:

```bash
taskset -c 2 ib_write_lat -d <dev> -i 1 -s 128 -n 1000 -C
```

Client:

```bash
taskset -c 2 ib_write_lat -d <dev> -i 1 -s 128 -n 1000 -C <server_ip>
```

This is only a sanity check. The numbers from `ib_write_lat` are not directly
the profile we want to feed into GVSoC.

## Step 3: Build the Minimal Verbs Submission Workload

Source file:

- [test_verbs_submit.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/test_verbs_submit.c)

Build command:

```bash
gcc -O2 -Wall -Wextra \
  -o /tmp/test_verbs_submit \
  smartnic_rdma/host_centric_baseline/real_board_calib/test_verbs_submit.c \
  -libverbs
```

Expected stdout:

```text
```

No output means the build succeeded.

Current status:

- this file is a minimal verbs-based workload
- it uses a real `libibverbs` device path
- it creates `PD / MR / CQ / QP`, exchanges RC metadata over TCP, moves the QP
  to `INIT / RTR / RTS`, then measures `ibv_post_send()` and local CQ polling
- for RoCE and RoCEv2, `gid_index` should be treated as an explicit runtime
  parameter

## Step 4: Run the Workload

Target design:

- use a TCP side channel to exchange minimal QP information for RC bring-up
- measure host-side timestamps around `ibv_post_send()` and local CQ polling
- treat GID-based addressing as the normal path for RoCE / RoCEv2

Current behavior:

- opens the requested verbs device
- creates `PD / MR / CQ / QP`
- exchanges remote `QPN / PSN / rkey / vaddr / LID/GID`
- moves the QP to `INIT / RTR / RTS`
- client issues `IBV_WR_RDMA_WRITE`
- client polls the local send CQ
- client writes the measured CSV

### Server

```bash
taskset -c 2 /tmp/test_verbs_submit \
  --server \
  --dev <dev> \
  --ib-port 1 \
  --gid-index <gid_index> \
  --tcp-port 18515 \
  --iters 1000 \
  --size 128 \
  --out /tmp/verbs_submit_server.csv
```

### Client

```bash
taskset -c 2 /tmp/test_verbs_submit \
  --client <server_ip> \
  --dev <dev> \
  --ib-port 1 \
  --gid-index <gid_index> \
  --tcp-port 18515 \
  --iters 1000 \
  --size 128 \
  --out /tmp/verbs_submit_client.csv
```

```text
[verbs_submit] role=client dev=<dev> ib_port=1 gid_index=<gid_index> size=128 iters=1000
[verbs_submit] qp ready
[verbs_submit] iter 1 posted
[verbs_submit] iter 1 local_cqe_seen
...
[verbs_submit] done csv=/tmp/verbs_submit_client.csv
```

## Step 5: Collect Host CPU Counters

Run the same command under `perf stat`:

```bash
taskset -c 2 perf stat -e \
  cycles,instructions,task-clock,context-switches,cpu-migrations,page-faults \
  /tmp/test_verbs_submit \
  --client <server_ip> \
  --dev <dev> \
  --ib-port 1 \
  --gid-index <gid_index> \
  --tcp-port 18515 \
  --iters 1000 \
  --size 128 \
  --out /tmp/verbs_submit_client.csv
```

## Step 6: Optional Kernel Trace Context

If you want more detail around the host software stack:

```bash
sudo trace-cmd record \
  -p function_graph \
  -g 'ib_uverbs_*' \
  -g 'ibv_*' \
  -g 'mlx5_*' \
  -g 'rdma_*' \
  taskset -c 2 /tmp/test_verbs_submit \
  --client <server_ip> \
  --dev <dev> \
  --ib-port 1 \
  --tcp-port 18515 \
  --iters 1000 \
  --size 128 \
  --out /tmp/verbs_submit_client.csv
```

Adjust provider-specific globs as needed:

- `mlx5_*` for Mellanox/NVIDIA adapters
- `irdma_*` for Intel adapters
- `hns_roce_*` for HiSilicon
- `rxe_*` for Soft-RoCE

## Raw Trace Format for the Verbs Workload

The workload emits these CSV columns:

- `iter`
- `t_app_begin`
- `t_post_send_enter`
- `t_post_send_return`
- `t_first_poll`
- `t_local_cqe_seen`
- `t_userspace_done`

These are intentionally closer to the real host-side verbs path than the local
approximation traces.

The existing converter in:

- [convert_calibration.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/convert_calibration.py)

now understands this verbs-oriented schema directly.

## Mapping into the Current Simulator Model

The first-pass mapping should be:

- `userspace_req_cycles`
  - `t_post_send_enter - t_app_begin`
- `driver_prepare_cycles`
  - major part of `t_post_send_return - t_post_send_enter`
- `pcie_submit_cycles`
  - remainder of `t_post_send_return - t_post_send_enter`
- `poll_interval_cycles`
  - estimated from `t_local_cqe_seen - t_first_poll`
- `userspace_completion_cycles`
  - `t_userspace_done - t_local_cqe_seen`

Important note:

- a real verbs workload cannot perfectly separate userspace, driver, PCIe, and
  local device acceptance without deeper tracing
- in a RoCE / RoCEv2 setting, `gid_index` and provider behavior matter more
  than legacy InfiniBand-only assumptions
- keep the raw timestamps and any `trace-cmd` output so we can rebucket later

## Recommendation

Use the files in this order:

1. [test.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/test.c)
   - fastest local smoke approximation
2. [test_eventfd.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/test_eventfd.c)
   - better local control-path approximation
3. [test_verbs_submit.c](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/real_board_calib/test_verbs_submit.c)
   - real host-side RoCE submission path

For simulator calibration aimed at true RDMA submission overhead, prefer
`test_verbs_submit.c`.
