# monotonic-queue

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Heap when you only need top-k; full sort is wasted work.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Union-Find with path compression amortizes to near-O(1) per op.
