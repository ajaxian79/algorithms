# kadane

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Greedy by end-time picks the most non-overlapping intervals.

- Heap when you only need top-k; full sort is wasted work.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- In-place compaction uses two pointers: read advances always, write only on keep.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Stable sort matters when a secondary key was set in a prior pass.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Iterative DFS with an explicit stack avoids recursion-limit issues.
