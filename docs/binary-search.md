# binary-search

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

LIS via patience: each pile holds the smallest tail of length k.

Edit distance is LCS with a twist: substitution is a third option at each cell.
