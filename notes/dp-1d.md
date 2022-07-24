# dp-1d

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Union-Find with path compression amortizes to near-O(1) per op.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- LIS via patience: each pile holds the smallest tail of length k.

- Monotonic stack pops while the new element violates the invariant.

- Walk both pointers from each end inward; advance the smaller side.

- Stable sort matters when a secondary key was set in a prior pass.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Merge intervals: sort by start; extend the running interval while overlapping.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Heap when you only need top-k; full sort is wasted work.

- Greedy by end-time picks the most non-overlapping intervals.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 1

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 2

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 3

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 4

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 6

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 7

- Stable sort matters when a secondary key was set in a prior pass.

## entry 8

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 9

- Walk both pointers from each end inward; advance the smaller side.

## entry 10

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 11

- StringBuilder: amortize allocation by doubling on grow.

## entry 12

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 13

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 14

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 15

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 16

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 17

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 18

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 19

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 20

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 21

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 22

- Greedy by end-time picks the most non-overlapping intervals.

## entry 23

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 24

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 25

- LIS via patience: each pile holds the smallest tail of length k.

## entry 26

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 27

- LIS via patience: each pile holds the smallest tail of length k.

## entry 28

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 29

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 30

- LIS via patience: each pile holds the smallest tail of length k.

## entry 31

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 32

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.
