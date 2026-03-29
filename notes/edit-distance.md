# edit-distance

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Union-Find with path compression amortizes to near-O(1) per op.
