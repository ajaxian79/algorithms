#!/usr/bin/env bash
set -euo pipefail
tree src -L 2 || find src -maxdepth 2
