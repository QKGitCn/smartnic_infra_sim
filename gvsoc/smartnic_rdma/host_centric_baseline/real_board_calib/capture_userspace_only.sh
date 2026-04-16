#!/usr/bin/env bash
set -euo pipefail

CORE="${CORE:-2}"
ITERATIONS="${ITERATIONS:-1000}"
OUT="${OUT:-/tmp/local_ctrl_trace.csv}"

echo "[capture] core=$CORE iterations=$ITERATIONS out=$OUT"
taskset -c "$CORE" python3 smartnic_rdma/host_centric_baseline/real_board_calib/local_ctrl_smoke.py \
  --iterations "$ITERATIONS" \
  --output "$OUT"

echo "[capture] done"
