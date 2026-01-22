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
