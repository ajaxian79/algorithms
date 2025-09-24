# stable-sort-when

Merge intervals: sort by start; extend the running interval while overlapping.

Manacher expands around each center, reusing prior radii via mirror reflection.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

In-place compaction uses two pointers: read advances always, write only on keep.

Edit distance is LCS with a twist: substitution is a third option at each cell.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Morris traversal threads predecessors back to current node — O(1) extra space.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Monotonic stack pops while the new element violates the invariant.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Pick a pivot, partition, recurse on the side that contains the kth slot.
