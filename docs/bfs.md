# bfs

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Stable sort matters when a secondary key was set in a prior pass.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Unbounded knapsack: capacity inner ascending allows item reuse.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Union-Find with path compression amortizes to near-O(1) per op.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Greedy by end-time picks the most non-overlapping intervals.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Monotonic stack pops while the new element violates the invariant.

Merge intervals: sort by start; extend the running interval while overlapping.

Morris traversal threads predecessors back to current node — O(1) extra space.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Walk both pointers from each end inward; advance the smaller side.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
