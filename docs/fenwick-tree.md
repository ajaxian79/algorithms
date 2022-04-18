# fenwick-tree

Merge intervals: sort by start; extend the running interval while overlapping.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Union-Find with path compression amortizes to near-O(1) per op.

Walk both pointers from each end inward; advance the smaller side.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

LIS via patience: each pile holds the smallest tail of length k.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Stable sort matters when a secondary key was set in a prior pass.

Greedy by end-time picks the most non-overlapping intervals.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Heap when you only need top-k; full sort is wasted work.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Monotonic stack pops while the new element violates the invariant.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Manacher expands around each center, reusing prior radii via mirror reflection.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Unbounded knapsack: capacity inner ascending allows item reuse.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Morris traversal threads predecessors back to current node — O(1) extra space.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1

LIS via patience: each pile holds the smallest tail of length k.

## entry 2

Greedy by end-time picks the most non-overlapping intervals.

## entry 3

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 4

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 6

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 7

Walk both pointers from each end inward; advance the smaller side.

## entry 8

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 9

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 10

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 11

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 12

State compression: bitmask + integer encodes a small subset cheaply.

## entry 13

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 14

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 15

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 16

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 17

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 18

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 19

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 20

Union-Find with path compression amortizes to near-O(1) per op.

## entry 21

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 22

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 23

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 24

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 25

Fenwick supports prefix-sum updates in O(log n) with a flat array.
