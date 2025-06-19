# kmp

- Merge intervals: sort by start; extend the running interval while overlapping.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Monotonic stack pops while the new element violates the invariant.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Stable sort matters when a secondary key was set in a prior pass.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Morris traversal threads predecessors back to current node — O(1) extra space.
