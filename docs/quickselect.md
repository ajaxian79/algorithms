# quickselect

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Monotonic stack pops while the new element violates the invariant.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Morris traversal threads predecessors back to current node — O(1) extra space.

Walk both pointers from each end inward; advance the smaller side.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Unbounded knapsack: capacity inner ascending allows item reuse.

Greedy by end-time picks the most non-overlapping intervals.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

BFS layers carry implicit shortest-path distance in unweighted graphs.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Pick a pivot, partition, recurse on the side that contains the kth slot.
