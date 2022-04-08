# knapsack-unbounded

- Monotonic stack pops while the new element violates the invariant.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Stable sort matters when a secondary key was set in a prior pass.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Greedy by end-time picks the most non-overlapping intervals.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- LIS via patience: each pile holds the smallest tail of length k.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Union-Find with path compression amortizes to near-O(1) per op.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Walk both pointers from each end inward; advance the smaller side.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 1

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 3

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 4

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 5

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 6

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 7

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 8

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 9

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 10

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 11

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 12

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 13

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 14

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 15

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 16

- Walk both pointers from each end inward; advance the smaller side.

## entry 17

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 18

- Heap when you only need top-k; full sort is wasted work.

## entry 19

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 20

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 21

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 22

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 23

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 24

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 25

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 26

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 27

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 28

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 29

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 30

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 31

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 32

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 33

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 34

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
