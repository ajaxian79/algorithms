#!/usr/bin/env bash
set -euo pipefail
grep -RnE ' +$' src tests || true
