# splay

## entry 1

- Heap when you only need top-k; full sort is wasted work.

## entry 2

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 3

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 6

- LIS via patience: each pile holds the smallest tail of length k.

## entry 7

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 8

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 9

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 10

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 11

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 12

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 13

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 14

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 15

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 16

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 17

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 18

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 19

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 20

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 21

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 22

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 23

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 24

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 25

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 26

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 27

- Euler tour flattens a tree into an array for range-query LCA.

## entry 28

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 29

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 30

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 31

- Backtracking template: choose, recurse, un-choose. Mutate then revert.
