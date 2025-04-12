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

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Stable sort matters when a secondary key was set in a prior pass.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Greedy by end-time picks the most non-overlapping intervals.

- Walk both pointers from each end inward; advance the smaller side.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Union-Find with path compression amortizes to near-O(1) per op.

- Heap when you only need top-k; full sort is wasted work.

- BFS layers carry implicit shortest-path distance in unweighted graphs.
