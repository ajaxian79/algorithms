# knapsack-01

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Unbounded knapsack: capacity inner ascending allows item reuse.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Morris traversal threads predecessors back to current node — O(1) extra space.
