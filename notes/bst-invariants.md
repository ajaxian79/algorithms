# bst-invariants

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Monotonic stack pops while the new element violates the invariant.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
