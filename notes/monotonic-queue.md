# monotonic-queue

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Heap when you only need top-k; full sort is wasted work.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Union-Find with path compression amortizes to near-O(1) per op.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- LIS via patience: each pile holds the smallest tail of length k.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Walk both pointers from each end inward; advance the smaller side.
