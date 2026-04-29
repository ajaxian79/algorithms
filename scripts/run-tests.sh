#!/usr/bin/env bash
set -euo pipefail
cmake --build build && ./build/unittests
