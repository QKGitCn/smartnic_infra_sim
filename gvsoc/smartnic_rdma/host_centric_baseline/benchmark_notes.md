# Benchmark Notes

## First Benchmark Target

The first benchmark target is:

- repeated `rdma_write_lat`

This is still not a throughput benchmark.

## Recommended Short-Term Bring-Up Sequence

1. confirm import stability with `import_smoke_test.py`
2. confirm target entrypoint stability with `run.py`
3. validate the queue-backed smoke path described in `rdma_write_lat_smoke.md`
4. add destination-buffer verification
5. add latency timestamp capture points
6. run a repeated fixed-iteration latency loop
7. export the first structured latency result

## First Timestamps to Add

The first timestamp points should be:

- `t_host_issue`
- `t_doorbell`
- `t_cqe_visible`
- `t_host_completion`

These are enough to derive:

- host-intent to doorbell latency
- doorbell to completion latency
- host-intent to completion latency

## First Result Record

The host stub now runs a repeated fixed-iteration latency loop and reports:

- `iterations`
- `success`
- `avg_cycles`
- `min_cycles`
- `max_cycles`
- average host-to-doorbell latency
- average doorbell-to-CQE latency
- average CQE-to-host-completion latency

It also emits per-iteration CSV-style trace lines containing:

- iteration id
- `host_issue`
- `doorbell`
- `cqe_visible`
- `host_completion`
- `host_to_doorbell`
- `doorbell_to_cqe`
- `cqe_to_host_completion`
- `total_cycles`
- `buffers_ok`
- `cqe_ok`

The next step is to export one structured record in a simple format such as:

```text
case,op,msg_size,iterations,avg_lat_ns,min_lat_ns,max_lat_ns
```

At the current stage, the per-iteration and summary data are emitted as trace-friendly CSV-like lines:

```text
ITER_CSV,...
SUMMARY_CSV,...
```

For the first host-centric experiment:

- `case = host_centric`
- `op = rdma_write_lat`
