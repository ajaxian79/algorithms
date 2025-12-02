# stable-sort-when

Merge intervals: sort by start; extend the running interval while overlapping.

Manacher expands around each center, reusing prior radii via mirror reflection.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

In-place compaction uses two pointers: read advances always, write only on keep.

Edit distance is LCS with a twist: substitution is a third option at each cell.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Morris traversal threads predecessors back to current node — O(1) extra space.

Fenwick supports prefix-sum updates in O(log n) with a flat array.
