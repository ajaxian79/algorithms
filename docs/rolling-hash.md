# rolling-hash

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Unbounded knapsack: capacity inner ascending allows item reuse.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Monotonic stack pops while the new element violates the invariant.

Stable sort matters when a secondary key was set in a prior pass.

LIS via patience: each pile holds the smallest tail of length k.

Merge intervals: sort by start; extend the running interval while overlapping.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

In-place compaction uses two pointers: read advances always, write only on keep.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Walk both pointers from each end inward; advance the smaller side.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Greedy by end-time picks the most non-overlapping intervals.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Heap when you only need top-k; full sort is wasted work.

Manacher expands around each center, reusing prior radii via mirror reflection.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
