# knapsack-unbounded

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Greedy by end-time picks the most non-overlapping intervals.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
