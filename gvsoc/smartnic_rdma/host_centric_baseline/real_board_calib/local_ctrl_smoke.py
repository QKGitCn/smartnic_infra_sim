#!/usr/bin/env python3

import argparse
import csv
import time


def now_ns():
    return time.perf_counter_ns()


def busy_wait_ns(duration_ns):
    start = now_ns()
    while now_ns() - start < duration_ns:
        pass


def main():
    parser = argparse.ArgumentParser(description="Simple local host-control-path smoke benchmark")
    parser.add_argument("--iterations", type=int, default=1000)
    parser.add_argument("--output", type=str, required=True)
    parser.add_argument("--prepare-ns", type=int, default=2000)
    parser.add_argument("--build-ns", type=int, default=4000)
    parser.add_argument("--submit-ns", type=int, default=1000)
    parser.add_argument("--device-ns", type=int, default=8000)
    parser.add_argument("--complete-ns", type=int, default=3000)
    args = parser.parse_args()

    fieldnames = [
        "iter",
        "t_app_begin",
        "t_syscall_enter",
        "t_driver_begin",
        "t_wqe_ready",
        "t_doorbell_write",
        "t_completion_visible",
        "t_driver_cqe_seen",
        "t_kernel_return",
        "t_userspace_done",
    ]

    with open(args.output, "w", encoding="utf-8", newline="") as handle:
        writer = csv.DictWriter(handle, fieldnames=fieldnames)
        writer.writeheader()

        for iteration in range(args.iterations):
            t_app_begin = now_ns()
            busy_wait_ns(args.prepare_ns)

            # In the first-stage benchmark, these boundaries are local logical
            # markers rather than true kernel/driver execution on hardware.
            t_syscall_enter = now_ns()
            busy_wait_ns(args.prepare_ns)

            t_driver_begin = now_ns()
            busy_wait_ns(args.build_ns)

            t_wqe_ready = now_ns()
            busy_wait_ns(args.submit_ns)

            t_doorbell_write = now_ns()
            busy_wait_ns(args.device_ns)

            t_completion_visible = now_ns()
            busy_wait_ns(args.complete_ns)

            t_driver_cqe_seen = now_ns()
            busy_wait_ns(args.complete_ns)

            t_kernel_return = now_ns()
            busy_wait_ns(args.complete_ns)

            t_userspace_done = now_ns()

            writer.writerow({
                "iter": iteration,
                "t_app_begin": t_app_begin,
                "t_syscall_enter": t_syscall_enter,
                "t_driver_begin": t_driver_begin,
                "t_wqe_ready": t_wqe_ready,
                "t_doorbell_write": t_doorbell_write,
                "t_completion_visible": t_completion_visible,
                "t_driver_cqe_seen": t_driver_cqe_seen,
                "t_kernel_return": t_kernel_return,
                "t_userspace_done": t_userspace_done,
            })


if __name__ == "__main__":
    main()
