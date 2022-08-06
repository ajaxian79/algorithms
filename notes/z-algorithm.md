# z-algorithm

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Walk both pointers from each end inward; advance the smaller side.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Greedy by end-time picks the most non-overlapping intervals.

- Stable sort matters when a secondary key was set in a prior pass.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Union-Find with path compression amortizes to near-O(1) per op.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- LIS via patience: each pile holds the smallest tail of length k.

- Heap when you only need top-k; full sort is wasted work.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 2

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 3

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 6

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 7

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 8

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 9

- Heap when you only need top-k; full sort is wasted work.

## entry 10

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 11

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 12

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 13

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 14

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 15

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 16

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 17

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 18

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 19

- Greedy by end-time picks the most non-overlapping intervals.

## entry 20

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 21

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 22

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 23

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 24

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 25

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 26

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 27

- ASCII rules are a strict subset of UTF-8; no special handling needed.
