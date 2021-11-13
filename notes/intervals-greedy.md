# intervals-greedy

- Stable sort matters when a secondary key was set in a prior pass.

- Greedy by end-time picks the most non-overlapping intervals.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Monotonic stack pops while the new element violates the invariant.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Walk both pointers from each end inward; advance the smaller side.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Heap when you only need top-k; full sort is wasted work.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Merge intervals: sort by start; extend the running interval while overlapping.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- LIS via patience: each pile holds the smallest tail of length k.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 2

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 3

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4

- Stable sort matters when a secondary key was set in a prior pass.

## entry 5

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 6

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 7

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 8

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 9

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 10

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 11

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 12

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 13

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 14

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 15

- Splay tree: every access splays to the root; amortized O(log n).

## entry 16

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 17

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 18

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 19

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 20

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 21

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 22

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 23

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 24

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 25

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 26

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 27

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 28

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 29

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 30

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 31

- Union-Find with path compression amortizes to near-O(1) per op.
