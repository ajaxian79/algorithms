# z-algorithm

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Unbounded knapsack: capacity inner ascending allows item reuse.

DFS on a grid: write a sentinel into the visited cell; restore if needed.
