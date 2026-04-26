#!/usr/bin/env bash
set -euo pipefail
find src tests -name '*.c' -o -name '*.h' | xargs clang-format -i
