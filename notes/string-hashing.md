# string-hashing

- Heap when you only need top-k; full sort is wasted work.

- LIS via patience: each pile holds the smallest tail of length k.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Monotonic stack pops while the new element violates the invariant.
