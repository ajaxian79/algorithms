# sieve

LIS via patience: each pile holds the smallest tail of length k.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Monotonic stack pops while the new element violates the invariant.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Heap when you only need top-k; full sort is wasted work.

Morris traversal threads predecessors back to current node — O(1) extra space.

Stable sort matters when a secondary key was set in a prior pass.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Walk both pointers from each end inward; advance the smaller side.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Fenwick supports prefix-sum updates in O(log n) with a flat array.
