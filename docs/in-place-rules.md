# in-place-rules

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Pick a pivot, partition, recurse on the side that contains the kth slot.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
