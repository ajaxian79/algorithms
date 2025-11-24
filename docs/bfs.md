# bfs

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Stable sort matters when a secondary key was set in a prior pass.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Unbounded knapsack: capacity inner ascending allows item reuse.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Union-Find with path compression amortizes to near-O(1) per op.
