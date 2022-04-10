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

## entry 19

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 20

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 21

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 22

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 23

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 24

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 25

- StringBuilder: amortize allocation by doubling on grow.

## entry 26

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 27

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 28

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 29

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
