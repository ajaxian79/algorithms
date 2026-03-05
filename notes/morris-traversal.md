# morris-traversal

- Greedy by end-time picks the most non-overlapping intervals.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- LIS via patience: each pile holds the smallest tail of length k.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
