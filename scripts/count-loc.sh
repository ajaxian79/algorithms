#!/usr/bin/env bash
set -euo pipefail
find src -name '*.c' -o -name '*.h' | xargs wc -l
