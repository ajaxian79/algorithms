# dp-1d

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Unbounded knapsack: capacity inner ascending allows item reuse.

Walk both pointers from each end inward; advance the smaller side.

BFS layers carry implicit shortest-path distance in unweighted graphs.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Union-Find with path compression amortizes to near-O(1) per op.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

LIS via patience: each pile holds the smallest tail of length k.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Stable sort matters when a secondary key was set in a prior pass.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
