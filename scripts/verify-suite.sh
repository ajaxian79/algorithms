#!/usr/bin/env bash
set -euo pipefail
cmake --build build --target unittests
./build/unittests --no-fork
