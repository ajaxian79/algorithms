# lfu-cache

## entry 1

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 2

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 4

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 5

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 6

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 7

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 8

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 9

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 10

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 11

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 12

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 13

- Stable sort matters when a secondary key was set in a prior pass.

## entry 14

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 15

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 16

- Heap when you only need top-k; full sort is wasted work.

## entry 17

- Monotonic stack pops while the new element violates the invariant.

## entry 18

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 19

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 20

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 21

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 22

- LIS via patience: each pile holds the smallest tail of length k.

## entry 23

- StringBuilder: amortize allocation by doubling on grow.

## entry 24

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 25

- Walk both pointers from each end inward; advance the smaller side.

## entry 26

- Polynomial rolling hash with two moduli kills almost all collisions in practice.
