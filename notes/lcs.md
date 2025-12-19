# lcs

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- LIS via patience: each pile holds the smallest tail of length k.

- Greedy by end-time picks the most non-overlapping intervals.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Monotonic stack pops while the new element violates the invariant.
