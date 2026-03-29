# segment-tree

Morris traversal threads predecessors back to current node — O(1) extra space.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

LIS via patience: each pile holds the smallest tail of length k.
