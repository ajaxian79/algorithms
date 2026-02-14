# lis

Manacher expands around each center, reusing prior radii via mirror reflection.

Merge intervals: sort by start; extend the running interval while overlapping.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

DFS on a grid: write a sentinel into the visited cell; restore if needed.
