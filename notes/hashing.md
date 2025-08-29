# hashing

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Stable sort matters when a secondary key was set in a prior pass.

- Walk both pointers from each end inward; advance the smaller side.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Monotonic stack pops while the new element violates the invariant.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
