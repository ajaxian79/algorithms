# z-algorithm

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Unbounded knapsack: capacity inner ascending allows item reuse.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Merge intervals: sort by start; extend the running interval while overlapping.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

In-place compaction uses two pointers: read advances always, write only on keep.

LIS via patience: each pile holds the smallest tail of length k.

Manacher expands around each center, reusing prior radii via mirror reflection.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
