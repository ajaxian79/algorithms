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
