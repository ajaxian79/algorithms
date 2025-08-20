# bitmask

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Stable sort matters when a secondary key was set in a prior pass.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Heap when you only need top-k; full sort is wasted work.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Merge intervals: sort by start; extend the running interval while overlapping.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.
