# binary-search

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Walk both pointers from each end inward; advance the smaller side.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Merge intervals: sort by start; extend the running interval while overlapping.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Union-Find with path compression amortizes to near-O(1) per op.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- LIS via patience: each pile holds the smallest tail of length k.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Heap when you only need top-k; full sort is wasted work.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Greedy by end-time picks the most non-overlapping intervals.
