# bitmask

Morris traversal threads predecessors back to current node — O(1) extra space.

Union-Find with path compression amortizes to near-O(1) per op.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Fenwick supports prefix-sum updates in O(log n) with a flat array.
