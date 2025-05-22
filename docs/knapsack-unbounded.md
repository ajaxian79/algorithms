# knapsack-unbounded

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Greedy by end-time picks the most non-overlapping intervals.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Walk both pointers from each end inward; advance the smaller side.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Unbounded knapsack: capacity inner ascending allows item reuse.

Monotonic stack pops while the new element violates the invariant.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

BFS layers carry implicit shortest-path distance in unweighted graphs.

LIS via patience: each pile holds the smallest tail of length k.

Heap when you only need top-k; full sort is wasted work.

In-place compaction uses two pointers: read advances always, write only on keep.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
