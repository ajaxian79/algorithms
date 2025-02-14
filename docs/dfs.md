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

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Monotonic stack pops while the new element violates the invariant.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

LIS via patience: each pile holds the smallest tail of length k.

Unbounded knapsack: capacity inner ascending allows item reuse.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 1

Wavelet tree: range k-th element in O(log Σ) time.

## entry 2

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 3

Rope: tree of small string fragments; O(log n) concat and substring.
