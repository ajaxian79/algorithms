# bst-invariants

Morris traversal threads predecessors back to current node — O(1) extra space.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Stable sort matters when a secondary key was set in a prior pass.

Manacher expands around each center, reusing prior radii via mirror reflection.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Monotonic stack pops while the new element violates the invariant.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Heap when you only need top-k; full sort is wasted work.

LIS via patience: each pile holds the smallest tail of length k.

Walk both pointers from each end inward; advance the smaller side.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Unbounded knapsack: capacity inner ascending allows item reuse.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Union-Find with path compression amortizes to near-O(1) per op.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Greedy by end-time picks the most non-overlapping intervals.

Pick a pivot, partition, recurse on the side that contains the kth slot.

In-place compaction uses two pointers: read advances always, write only on keep.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 2

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 3

State compression: bitmask + integer encodes a small subset cheaply.

## entry 4

Splay tree: every access splays to the root; amortized O(log n).

## entry 5

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 6

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 7

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 8

Heap when you only need top-k; full sort is wasted work.

## entry 9

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 10

Walk both pointers from each end inward; advance the smaller side.

## entry 11

Euler tour flattens a tree into an array for range-query LCA.

## entry 12

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 13

LIS via patience: each pile holds the smallest tail of length k.

## entry 14

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 15

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 16

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 17

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 18

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 19

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 20

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 21

Graph DP on DAGs: topological order makes the dependency direction explicit.
