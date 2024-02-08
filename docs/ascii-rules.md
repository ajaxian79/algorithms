# ascii-rules

## entry 1

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5

StringBuilder: amortize allocation by doubling on grow.

## entry 6

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 7

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 8

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 9

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 10

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 11

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 12

Interval DP: solve all `[l, r]` ranges from short to long.
