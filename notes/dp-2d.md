# dp-2d

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Pick a pivot, partition, recurse on the side that contains the kth slot.
