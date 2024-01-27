# endianness

## entry 1

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 2

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 3

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 5

Heap when you only need top-k; full sort is wasted work.

## entry 6

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 7

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 8

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 9

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 10

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 11

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 12

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 13

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 14

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 15

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 16

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 17

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 18

StringBuilder: amortize allocation by doubling on grow.
