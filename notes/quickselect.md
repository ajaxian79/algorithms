# quickselect

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- LIS via patience: each pile holds the smallest tail of length k.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Heap when you only need top-k; full sort is wasted work.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Edit distance is LCS with a twist: substitution is a third option at each cell.
