#!/usr/bin/env bash
set -euo pipefail
echo "problems: $(ls -1 src | wc -l)"
echo "tests: $(grep -RE 'munit_assert' tests | wc -l)"
