#!/usr/bin/env bash
set -euo pipefail
grep -RnE 'TODO|FIXME|XXX' src tests || true
