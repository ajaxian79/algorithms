# bfs

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Stable sort matters when a secondary key was set in a prior pass.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Unbounded knapsack: capacity inner ascending allows item reuse.
