# kmp

- Merge intervals: sort by start; extend the running interval while overlapping.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Manacher expands around each center, reusing prior radii via mirror reflection.
