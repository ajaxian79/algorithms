# morris-traversal

- Greedy by end-time picks the most non-overlapping intervals.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- LIS via patience: each pile holds the smallest tail of length k.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Walk both pointers from each end inward; advance the smaller side.

- Monotonic stack pops while the new element violates the invariant.

- Stable sort matters when a secondary key was set in a prior pass.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Union-Find with path compression amortizes to near-O(1) per op.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Heap when you only need top-k; full sort is wasted work.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- In-place compaction uses two pointers: read advances always, write only on keep.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 2

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 3

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 4

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 6

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 7

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 8

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 9

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 10

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 11

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 12

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 13

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 14

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 15

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 16

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 17

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 18

- Walk both pointers from each end inward; advance the smaller side.

## entry 19

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 20

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 21

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 22

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 23

- Walk both pointers from each end inward; advance the smaller side.

## entry 24

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 25

- Walk both pointers from each end inward; advance the smaller side.

## entry 26

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 27

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 28

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 29

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 30

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 31

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 32

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 33

- Interval DP: solve all `[l, r]` ranges from short to long.
