# backtracking

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Greedy by end-time picks the most non-overlapping intervals.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Stable sort matters when a secondary key was set in a prior pass.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Iterative DFS with an explicit stack avoids recursion-limit issues.
