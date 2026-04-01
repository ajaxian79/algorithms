# manacher

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- LIS via patience: each pile holds the smallest tail of length k.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
