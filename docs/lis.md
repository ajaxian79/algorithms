# lis

Manacher expands around each center, reusing prior radii via mirror reflection.

Merge intervals: sort by start; extend the running interval while overlapping.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Union-Find with path compression amortizes to near-O(1) per op.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

LIS via patience: each pile holds the smallest tail of length k.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Greedy by end-time picks the most non-overlapping intervals.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Unbounded knapsack: capacity inner ascending allows item reuse.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Stable sort matters when a secondary key was set in a prior pass.

Morris traversal threads predecessors back to current node — O(1) extra space.
