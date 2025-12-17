# string-hashing

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Merge intervals: sort by start; extend the running interval while overlapping.

Union-Find with path compression amortizes to near-O(1) per op.

In-place compaction uses two pointers: read advances always, write only on keep.

Manacher expands around each center, reusing prior radii via mirror reflection.

Walk both pointers from each end inward; advance the smaller side.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
