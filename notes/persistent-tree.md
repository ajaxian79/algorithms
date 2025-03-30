# persistent-tree

## entry 1

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 2

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 4

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
