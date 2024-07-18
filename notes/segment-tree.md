# segment-tree

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Merge intervals: sort by start; extend the running interval while overlapping.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- LIS via patience: each pile holds the smallest tail of length k.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Heap when you only need top-k; full sort is wasted work.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Stable sort matters when a secondary key was set in a prior pass.

- Monotonic stack pops while the new element violates the invariant.

- Union-Find with path compression amortizes to near-O(1) per op.

- Greedy by end-time picks the most non-overlapping intervals.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Walk both pointers from each end inward; advance the smaller side.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
