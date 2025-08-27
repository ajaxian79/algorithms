# trie

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Union-Find with path compression amortizes to near-O(1) per op.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Morris traversal threads predecessors back to current node — O(1) extra space.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

LIS via patience: each pile holds the smallest tail of length k.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Monotonic stack pops while the new element violates the invariant.

Manacher expands around each center, reusing prior radii via mirror reflection.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Fenwick supports prefix-sum updates in O(log n) with a flat array.
