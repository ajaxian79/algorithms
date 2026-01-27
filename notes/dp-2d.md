# dp-2d

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Manacher expands around each center, reusing prior radii via mirror reflection.
