# Quickstart

## Purpose

This quickstart gives the first commands to run after copying `host_centric_baseline/` into a fresh GVSoC clone.

At the current draft stage, the baseline provides:

- local import stability
- a target/module scaffold
- a working host-stub smoke benchmark
- a working `rv64` firmware smoke benchmark through `host_control_path`

It does not yet provide a fully validated RDMA experiment.

## 1. Copy into a Fresh GVSoC Clone

Copy the whole folder into:

```text
<fresh-clone>/smartnic_rdma/host_centric_baseline/
```

## 2. Run the Import Smoke Test

From inside the copied folder:

```bash
python3 import_smoke_test.py
```

Expected result:

```text
Import smoke test passed.
```

## 3. Run the Local Entrypoint

From inside the copied folder:

```bash
python3 run.py
```

Expected result:

```text
Host-centric RDMA baseline workspace entrypoint loaded.
Use this script as the local launcher inside a fresh GVSoC clone.
```

This confirms that:

- local baseline files are visible
- the fresh GVSoC clone provides the expected repo-level Python modules

## 4. Try Building the Target

From inside the copied folder:

```bash
make gvsoc
```

This uses the normal GVSoC build flow and treats:

- `baseline_target.py` as the local target file
- this folder as the module directory

## 5. Run the Host-Stub Smoke Path

From inside the copied folder:

```bash
make run
```

Expected result:

- the host stub posts WQEs and the RDMA engine completes them
- the simulation exits cleanly with success

## 6. Run the CPU-Driven Smoke Path

From inside the copied folder:

```bash
make run-host-fw
```

Expected result:

- the tiny `rv64` firmware prints progress through semihosting
- the firmware writes `host_control_path` MMIO registers
- the RDMA engine completes one request
- the firmware prints `PASS` and exits cleanly

## 7. Current Functional Status

After the runs above, the baseline is beyond the scaffold stage.

Current validated checkpoints are:

- one host-stub-driven `RDMA_WRITE` smoke path
- one CPU-driven `rv64 -> host_control_path -> rdma_engine` smoke path

The next milestone is:

- richer firmware control flow
- more realistic host-side layering above `host_control_path`
- better RDMA timing realism

## 8. Next Engineering Tasks

The next steps are:

1. add a minimal run path that instantiates the target through the normal GVSoC runner flow
2. replace the behavioral copy trigger in `rdma_engine.cpp` with a queue-backed single-WQE flow
3. add a remote peer or second-node path
4. add result export for one latency sample

## 9. Practical Interpretation

At this stage, "runnable" means:

- importable
- locally launchable
- structurally consistent inside a fresh GVSoC clone

It does not yet mean:

- benchmark-complete
- timing-accurate host or RDMA modeling
- paper-ready experimental execution
