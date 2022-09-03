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

## entry 19

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 20

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 21

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 22

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 23

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 24

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 25

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 26

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 27

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 28

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 29

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 30

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 31

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 32

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 33

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
