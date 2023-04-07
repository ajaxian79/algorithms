# state-compression

## entry 1

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 2

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 4

- Walk both pointers from each end inward; advance the smaller side.

## entry 5

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 6

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 7

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 8

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 9

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 10

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 11

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 12

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 13

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 14

- Euler tour flattens a tree into an array for range-query LCA.

## entry 15

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 16

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 17

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 18

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
