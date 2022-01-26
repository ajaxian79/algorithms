# cuckoo

## entry 1

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 2

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 3

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 4

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 6

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 7

- StringBuilder: amortize allocation by doubling on grow.

## entry 8

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 9

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 10

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 11

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 12

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 13

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 14

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 15

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 16

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 17

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 18

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 19

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 20

- Euler tour flattens a tree into an array for range-query LCA.

## entry 21

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 22

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 23

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 24

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 25

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 26

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 27

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 28

- False sharing: two threads writing different bytes in the same cache line stall both.
