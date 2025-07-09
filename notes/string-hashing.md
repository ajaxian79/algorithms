# string-hashing

- Heap when you only need top-k; full sort is wasted work.

- LIS via patience: each pile holds the smallest tail of length k.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Monotonic stack pops while the new element violates the invariant.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Union-Find with path compression amortizes to near-O(1) per op.

- Stable sort matters when a secondary key was set in a prior pass.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- In-place compaction uses two pointers: read advances always, write only on keep.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
