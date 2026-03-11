# bst-invariants

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Monotonic stack pops while the new element violates the invariant.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Walk both pointers from each end inward; advance the smaller side.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Heap when you only need top-k; full sort is wasted work.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Stable sort matters when a secondary key was set in a prior pass.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- LIS via patience: each pile holds the smallest tail of length k.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Greedy by end-time picks the most non-overlapping intervals.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 1

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
