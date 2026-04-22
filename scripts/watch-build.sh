#!/usr/bin/env bash
set -euo pipefail
while true; do cmake --build build || true; sleep 5; done
