# quickselect

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- LIS via patience: each pile holds the smallest tail of length k.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
