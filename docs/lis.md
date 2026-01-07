# lis

Manacher expands around each center, reusing prior radii via mirror reflection.

Merge intervals: sort by start; extend the running interval while overlapping.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Union-Find with path compression amortizes to near-O(1) per op.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

LIS via patience: each pile holds the smallest tail of length k.
