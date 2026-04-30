#!/usr/bin/env bash
set -euo pipefail
grep -REc 'munit_assert' tests | sort
