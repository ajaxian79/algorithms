# backtracking

Morris traversal threads predecessors back to current node — O(1) extra space.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Manacher expands around each center, reusing prior radii via mirror reflection.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Union-Find with path compression amortizes to near-O(1) per op.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
