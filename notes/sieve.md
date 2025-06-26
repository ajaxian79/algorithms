# sieve

- LIS via patience: each pile holds the smallest tail of length k.

- Union-Find with path compression amortizes to near-O(1) per op.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Heap when you only need top-k; full sort is wasted work.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Greedy by end-time picks the most non-overlapping intervals.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Stable sort matters when a secondary key was set in a prior pass.
