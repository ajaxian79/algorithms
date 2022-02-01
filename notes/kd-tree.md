# kd-tree

## entry 1

- StringBuilder: amortize allocation by doubling on grow.

## entry 2

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 4

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 5

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 6

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 7

- Walk both pointers from each end inward; advance the smaller side.

## entry 8

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 9

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 10

- Splay tree: every access splays to the root; amortized O(log n).

## entry 11

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 12

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 13

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 14

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 15

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 16

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 17

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 18

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 19

- StringBuilder: amortize allocation by doubling on grow.

## entry 20

- Splay tree: every access splays to the root; amortized O(log n).

## entry 21

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 22

- Greedy by end-time picks the most non-overlapping intervals.

## entry 23

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 24

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 25

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 26

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 27

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 28

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 29

- Heap when you only need top-k; full sort is wasted work.

## entry 30

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 31

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 32

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 33

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 34

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 35

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
