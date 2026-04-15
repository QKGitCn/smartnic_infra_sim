#!/usr/bin/env python3

import argparse
import csv
import json
from pathlib import Path


LOCAL_RAW_COLUMNS = [
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

VERBS_RAW_COLUMNS = [
    "iter",
    "t_app_begin",
    "t_post_send_enter",
    "t_post_send_return",
    "t_first_poll",
    "t_local_cqe_seen",
    "t_userspace_done",
]


def mean(values):
    if not values:
        raise RuntimeError("No values available to average")
    return sum(values) / len(values)


def to_sim_cycles(delta, input_unit, board_frequency_hz, sim_frequency_hz):
    if input_unit == "cycles":
        seconds = delta / board_frequency_hz
    else:
        seconds = delta / 1_000_000_000.0
    return max(1, round(seconds * sim_frequency_hz))


def load_rows(path):
    with Path(path).open("r", encoding="utf-8", newline="") as handle:
        reader = csv.DictReader(handle)
        if reader.fieldnames is None:
            raise RuntimeError("Input CSV is missing a header row")

        if all(column in reader.fieldnames for column in LOCAL_RAW_COLUMNS):
            schema = "local"
            columns = LOCAL_RAW_COLUMNS
        elif all(column in reader.fieldnames for column in VERBS_RAW_COLUMNS):
            schema = "verbs"
            columns = VERBS_RAW_COLUMNS
        else:
            raise RuntimeError(
                "Input CSV does not match a supported schema. "
                f"Expected either local columns ({', '.join(LOCAL_RAW_COLUMNS)}) "
                f"or verbs columns ({', '.join(VERBS_RAW_COLUMNS)})."
            )

        rows = []
        for row in reader:
            parsed = {}
            for key in columns:
                parsed[key] = int(row[key])
            rows.append(parsed)
    if not rows:
        raise RuntimeError("Input CSV has no data rows")
    return schema, rows


def derive_profile(rows, input_unit, board_frequency_hz, sim_frequency_hz):
    userspace_req = []
    kernel_req = []
    driver_prepare = []
    pcie_submit = []
    pcie_completion = []
    driver_completion = []
    kernel_completion = []
    userspace_completion = []

    for row in rows:
        userspace_req.append(row["t_syscall_enter"] - row["t_app_begin"])
        kernel_req.append(row["t_driver_begin"] - row["t_syscall_enter"])
        driver_prepare.append(row["t_wqe_ready"] - row["t_driver_begin"])
        pcie_submit.append(row["t_doorbell_write"] - row["t_wqe_ready"])
        pcie_completion.append(row["t_driver_cqe_seen"] - row["t_completion_visible"])
        driver_completion.append(row["t_kernel_return"] - row["t_driver_cqe_seen"])
        kernel_completion.append(row["t_userspace_done"] - row["t_kernel_return"])

        # For the current coarse-grain model, userspace completion is the final
        # software handoff. The converter keeps it separate so the model can
        # evolve without changing the raw trace format.
        userspace_completion.append(row["t_userspace_done"] - row["t_kernel_return"])

    profile = {
        "userspace_req_cycles": to_sim_cycles(mean(userspace_req), input_unit, board_frequency_hz, sim_frequency_hz),
        "kernel_req_cycles": to_sim_cycles(mean(kernel_req), input_unit, board_frequency_hz, sim_frequency_hz),
        "driver_prepare_cycles": to_sim_cycles(mean(driver_prepare), input_unit, board_frequency_hz, sim_frequency_hz),
        "pcie_submit_cycles": to_sim_cycles(mean(pcie_submit), input_unit, board_frequency_hz, sim_frequency_hz),
        "poll_interval_cycles": 2,
        "pcie_completion_cycles": to_sim_cycles(mean(pcie_completion), input_unit, board_frequency_hz, sim_frequency_hz),
        "driver_completion_cycles": to_sim_cycles(mean(driver_completion), input_unit, board_frequency_hz, sim_frequency_hz),
        "kernel_completion_cycles": to_sim_cycles(mean(kernel_completion), input_unit, board_frequency_hz, sim_frequency_hz),
        "userspace_completion_cycles": to_sim_cycles(mean(userspace_completion), input_unit, board_frequency_hz, sim_frequency_hz),
    }

    return profile


def derive_profile_from_verbs(rows, input_unit, board_frequency_hz, sim_frequency_hz):
    userspace_req = []
    post_send_total = []
    poll_wait = []
    userspace_completion = []

    for row in rows:
        userspace_req.append(row["t_post_send_enter"] - row["t_app_begin"])
        post_send_total.append(row["t_post_send_return"] - row["t_post_send_enter"])
        poll_wait.append(row["t_local_cqe_seen"] - row["t_first_poll"])
        userspace_completion.append(row["t_userspace_done"] - row["t_local_cqe_seen"])

    post_send_total_mean = mean(post_send_total)
    driver_prepare_mean = post_send_total_mean * 0.7
    pcie_submit_mean = post_send_total_mean * 0.3
    completion_mean = mean(userspace_completion)
    driver_completion_mean = completion_mean * 0.5
    kernel_completion_mean = completion_mean * 0.3
    userspace_completion_mean = completion_mean * 0.2

    profile = {
        "userspace_req_cycles": to_sim_cycles(mean(userspace_req), input_unit, board_frequency_hz, sim_frequency_hz),
        "kernel_req_cycles": 1,
        "driver_prepare_cycles": to_sim_cycles(driver_prepare_mean, input_unit, board_frequency_hz, sim_frequency_hz),
        "pcie_submit_cycles": to_sim_cycles(pcie_submit_mean, input_unit, board_frequency_hz, sim_frequency_hz),
        "poll_interval_cycles": to_sim_cycles(mean(poll_wait), input_unit, board_frequency_hz, sim_frequency_hz),
        "pcie_completion_cycles": 1,
        "driver_completion_cycles": to_sim_cycles(driver_completion_mean, input_unit, board_frequency_hz, sim_frequency_hz),
        "kernel_completion_cycles": to_sim_cycles(kernel_completion_mean, input_unit, board_frequency_hz, sim_frequency_hz),
        "userspace_completion_cycles": to_sim_cycles(userspace_completion_mean, input_unit, board_frequency_hz, sim_frequency_hz),
    }

    return profile


def main():
    parser = argparse.ArgumentParser(description="Convert real-board raw trace CSV into GVSoC host calibration JSON")
    parser.add_argument("--input", required=True, help="Raw trace CSV path")
    parser.add_argument("--output", required=True, help="Output JSON path")
    parser.add_argument(
        "--input-unit",
        choices=["cycles", "ns"],
        default="cycles",
        help="Unit of the timestamps in the input CSV",
    )
    parser.add_argument(
        "--board-frequency-hz",
        type=float,
        default=1_000_000_000.0,
        help="Real-board CPU frequency in Hz when input unit is cycles",
    )
    parser.add_argument(
        "--sim-frequency-hz",
        type=float,
        default=100_000_000.0,
        help="Simulator host clock frequency in Hz",
    )
    args = parser.parse_args()

    schema, rows = load_rows(args.input)
    if schema == "local":
        profile = derive_profile(rows, args.input_unit, args.board_frequency_hz, args.sim_frequency_hz)
    else:
        profile = derive_profile_from_verbs(rows, args.input_unit, args.board_frequency_hz, args.sim_frequency_hz)

    output_path = Path(args.output)
    output_path.write_text(json.dumps(profile, indent=2) + "\n", encoding="utf-8")


if __name__ == "__main__":
    main()
