# binary-search

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

LIS via patience: each pile holds the smallest tail of length k.

Edit distance is LCS with a twist: substitution is a third option at each cell.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Stable sort matters when a secondary key was set in a prior pass.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Merge intervals: sort by start; extend the running interval while overlapping.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Morris traversal threads predecessors back to current node — O(1) extra space.

Monotonic stack pops while the new element violates the invariant.

Heap when you only need top-k; full sort is wasted work.

In-place compaction uses two pointers: read advances always, write only on keep.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Union-Find with path compression amortizes to near-O(1) per op.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Unbounded knapsack: capacity inner ascending allows item reuse.

Walk both pointers from each end inward; advance the smaller side.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 1

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 3

Stable sort matters when a secondary key was set in a prior pass.

## entry 4

Articulation points: same DFS as bridges, with a slightly different test.

## entry 5

Walk both pointers from each end inward; advance the smaller side.

## entry 6

State compression: bitmask + integer encodes a small subset cheaply.

## entry 7

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 8

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 9

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 10

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 11

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 12

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 13

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 14

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 15

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 16

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 17

Articulation points: same DFS as bridges, with a slightly different test.

## entry 18

StringBuilder: amortize allocation by doubling on grow.

## entry 19

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 20

Euler tour flattens a tree into an array for range-query LCA.

## entry 21

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 22

Walk both pointers from each end inward; advance the smaller side.

## entry 23

Walk both pointers from each end inward; advance the smaller side.

## entry 24

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
