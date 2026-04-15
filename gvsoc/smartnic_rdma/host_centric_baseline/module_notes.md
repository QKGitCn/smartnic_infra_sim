# Module Notes

## Immediate Next Step

Replace the placeholder components in [baseline_target.py](/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/baseline_target.py) with actual GVSoC components and bindings.

## Minimum Components to Implement First

1. `host_stub`
2. `rdma_engine`
3. `local_mem`

## First Functional Path

The first full path to implement is:

`host_stub -> WQE write -> SQ doorbell -> rdma_engine -> CQE -> host_stub`

## First Metrics to Expose

- host-intent timestamp
- doorbell timestamp
- CQE visible timestamp
- host completion timestamp

## First Benchmark

- `rdma_write_lat`

## Why Start Here

This is the smallest host-centric path that:

- exercises direct host-managed RDMA control
- establishes the baseline for later MCU-offloaded comparison
- gives a meaningful latency number
