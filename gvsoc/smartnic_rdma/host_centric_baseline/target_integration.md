# Target Integration Notes

## Purpose

This note explains how `baseline_target.py` is intended to fit the normal GVSoC target model.

## Current Shape

The file [baseline_target.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/baseline_target.py) now follows the common target pattern used in this repository:

- `BaselineSoc(parent, name, parser=None)`
- `BaselineTop(parent, name, parser=None, options=None)`
- `Target(parser, options)`

This mirrors the usual GVSoC board-model entrypoint style closely enough that the folder can be copied into another fresh GVSoC clone and adapted into the local target-registration flow.

## What This Means Practically

At the current stage:

- the target file has the right structural shape
- the component graph can be instantiated as a board model
- the target is not yet a fully validated runnable RDMA board

## Next Integration Step

The next engineering step is to connect this target into the normal launch flow of the fresh GVSoC clone.

That step will depend on how the clone expects local targets to be discovered, but the important part is already done:

- the board wrapper and `Target` entrypoint now match the expected construction pattern

## Remaining Work Before a True Run

Before the target can be used as a real host-centric RDMA experiment, the following still need to be completed:

1. implement a true host-managed single-WQE path
2. replace the behavioral copy trigger in `rdma_engine.cpp`
3. add a remote peer or equivalent responder path
4. add result export and timing counters
