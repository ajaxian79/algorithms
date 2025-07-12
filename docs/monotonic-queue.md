# monotonic-queue

Pick a pivot, partition, recurse on the side that contains the kth slot.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Manacher expands around each center, reusing prior radii via mirror reflection.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Greedy by end-time picks the most non-overlapping intervals.

Union-Find with path compression amortizes to near-O(1) per op.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

BFS layers carry implicit shortest-path distance in unweighted graphs.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
