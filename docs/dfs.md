# dfs

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Greedy by end-time picks the most non-overlapping intervals.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Union-Find with path compression amortizes to near-O(1) per op.

Heap when you only need top-k; full sort is wasted work.

Stable sort matters when a secondary key was set in a prior pass.

Walk both pointers from each end inward; advance the smaller side.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Iterative DFS with an explicit stack avoids recursion-limit issues.

In-place compaction uses two pointers: read advances always, write only on keep.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Merge intervals: sort by start; extend the running interval while overlapping.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
