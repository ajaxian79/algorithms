# ascii-rules

## entry 1

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4

Persistent tree: every update creates a new version sharing unchanged nodes.
