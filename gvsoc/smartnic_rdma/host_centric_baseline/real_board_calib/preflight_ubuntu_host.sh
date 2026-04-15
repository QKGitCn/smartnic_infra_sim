#!/usr/bin/env bash
set -euo pipefail

echo "[preflight] uname:"
uname -a

echo "[preflight] checking required commands"
for cmd in python3 taskset perf trace-cmd; do
  if command -v "$cmd" >/dev/null 2>&1; then
    echo "  ok: $cmd -> $(command -v "$cmd")"
  else
    echo "  missing: $cmd"
    exit 1
  fi
done

echo "[preflight] lscpu summary"
lscpu | sed -n '1,20p'

echo "[preflight] tracefs availability"
if test -d /sys/kernel/tracing; then
  echo "  ok: /sys/kernel/tracing"
elif test -d /sys/kernel/debug/tracing; then
  echo "  ok: /sys/kernel/debug/tracing"
else
  echo "  warning: tracefs not visible"
fi

echo "[preflight] done"
