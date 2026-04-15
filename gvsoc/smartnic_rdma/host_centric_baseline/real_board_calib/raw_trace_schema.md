# Raw Trace Schema

The recommended raw trace format is one CSV row per request iteration.

## Columns

- `iter`
  request sequence number
- `t_app_begin`
  userspace begins preparing the request
- `t_syscall_enter`
  request enters kernel or runtime boundary
- `t_driver_begin`
  driver begins request handling
- `t_wqe_ready`
  WQE fully prepared in host memory
- `t_doorbell_write`
  doorbell/MMIO submit point
- `t_completion_visible`
  completion becomes visible to host software
- `t_driver_cqe_seen`
  driver observes and accepts completion
- `t_kernel_return`
  kernel returns completion upward
- `t_userspace_done`
  userspace observes request completion

## Units

Preferred unit:

- board CPU cycles

Alternative unit:

- nanoseconds

If using nanoseconds, set `--input-unit ns` in the converter.

## Important Notes

- timestamps should be monotonic
- use one row per completed request
- keep the instrumentation consistent across all iterations
- do not mix single-core and multi-core runs in one calibration file
