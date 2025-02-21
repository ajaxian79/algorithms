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

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Union-Find with path compression amortizes to near-O(1) per op.

- Walk both pointers from each end inward; advance the smaller side.

- Heap when you only need top-k; full sort is wasted work.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Stable sort matters when a secondary key was set in a prior pass.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.
