# monotonic-stack

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Stable sort matters when a secondary key was set in a prior pass.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Union-Find with path compression amortizes to near-O(1) per op.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Walk both pointers from each end inward; advance the smaller side.

- LIS via patience: each pile holds the smallest tail of length k.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
