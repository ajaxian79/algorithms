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
