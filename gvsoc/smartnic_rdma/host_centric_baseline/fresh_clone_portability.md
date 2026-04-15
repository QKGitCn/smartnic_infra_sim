# Fresh-Clone Portability Checklist

## Goal

This folder is intended to be copied into another fresh GVSoC repository clone and still work without copying large parts of the original repo.

The portability model is:

- baseline-specific code lives entirely inside this folder
- standard GVSoC modules are taken from the fresh clone
- local Python imports are resolved from this folder without requiring package installation

## Copy Procedure

1. clone a fresh GVSoC repository
2. copy this whole folder into:

```text
<fresh-clone>/smartnic_rdma/host_centric_baseline/
```

3. from inside the copied folder, run:

```text
python3 import_smoke_test.py
```

If the smoke test passes, the local Python/module assumptions are correct.

## Required Repo-Provided Dependencies

The copied folder assumes the fresh GVSoC clone still provides:

- `gvsoc.runner`
- `gvsoc.systree`
- `interco.router`
- `memory.memory`
- `vp.clock_domain`

These are treated as standard repo dependencies, not local baseline-specific files.

## Local Files That Must Stay Together

These files form the minimum local baseline package and should always be copied together:

- `baseline_target.py`
- `host_stub_comp.py`
- `rdma_engine_comp.py`
- `host_stub.cpp`
- `rdma_engine.cpp`
- `run.py`
- `import_smoke_test.py`

## Current Portability Rules

- no package-relative imports are used for local baseline modules
- the local folder is added to `sys.path` at runtime

## Current Limitations

This checklist only guarantees:

- local import stability
- baseline-specific file cohesion
- dependency expectations relative to a normal GVSoC clone

It does not yet guarantee:

- successful full build of the C++ components
- successful execution of a complete RDMA experiment
- independence from the GVSoC repository itself

Those are the next engineering milestones.
