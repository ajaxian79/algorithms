# stable-sort-when

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- In-place compaction uses two pointers: read advances always, write only on keep.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Stable sort matters when a secondary key was set in a prior pass.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
