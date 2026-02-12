# segment-tree

Morris traversal threads predecessors back to current node — O(1) extra space.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

LIS via patience: each pile holds the smallest tail of length k.

Manacher expands around each center, reusing prior radii via mirror reflection.

Union-Find with path compression amortizes to near-O(1) per op.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Stable sort matters when a secondary key was set in a prior pass.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Pick a pivot, partition, recurse on the side that contains the kth slot.
