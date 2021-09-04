# intervals-merge

LIS via patience: each pile holds the smallest tail of length k.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Union-Find with path compression amortizes to near-O(1) per op.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Morris traversal threads predecessors back to current node — O(1) extra space.

In-place compaction uses two pointers: read advances always, write only on keep.

Walk both pointers from each end inward; advance the smaller side.

Heap when you only need top-k; full sort is wasted work.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Monotonic stack pops while the new element violates the invariant.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Merge intervals: sort by start; extend the running interval while overlapping.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Manacher expands around each center, reusing prior radii via mirror reflection.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Greedy by end-time picks the most non-overlapping intervals.

Unbounded knapsack: capacity inner ascending allows item reuse.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Stable sort matters when a secondary key was set in a prior pass.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1

Splay tree: every access splays to the root; amortized O(log n).

## entry 2

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3

Articulation points: same DFS as bridges, with a slightly different test.

## entry 4

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 5

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 6

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 7

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 8

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 9

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 10

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 11

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 12

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 13

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 14

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 15

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 16

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 17

Monotonic stack pops while the new element violates the invariant.

## entry 18

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 19

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 20

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 21

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 22

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 23

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 24

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 25

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 26

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 27

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 28

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 29

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 30

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 31

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
