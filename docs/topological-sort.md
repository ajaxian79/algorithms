# topological-sort

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Pick a pivot, partition, recurse on the side that contains the kth slot.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Edit distance is LCS with a twist: substitution is a third option at each cell.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Union-Find with path compression amortizes to near-O(1) per op.

Manacher expands around each center, reusing prior radii via mirror reflection.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Morris traversal threads predecessors back to current node — O(1) extra space.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Stable sort matters when a secondary key was set in a prior pass.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Unbounded knapsack: capacity inner ascending allows item reuse.

Monotonic stack pops while the new element violates the invariant.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

LIS via patience: each pile holds the smallest tail of length k.

Greedy by end-time picks the most non-overlapping intervals.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Heap when you only need top-k; full sort is wasted work.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Merge intervals: sort by start; extend the running interval while overlapping.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Walk both pointers from each end inward; advance the smaller side.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 2

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 5

Articulation points: same DFS as bridges, with a slightly different test.

## entry 6

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 7

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 8

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 9

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 10

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 11

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 12

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 13

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 14

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 15

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 16

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 17

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 18

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 19

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 20

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 21

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 22

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 23

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
