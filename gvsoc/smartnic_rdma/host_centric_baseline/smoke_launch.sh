#!/usr/bin/env bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

cd "${SCRIPT_DIR}"

echo "[1/2] Running import smoke test"
python3 import_smoke_test.py

echo "[2/2] Running local entrypoint"
python3 run.py

echo "Smoke launch completed."
