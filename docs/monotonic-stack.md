# monotonic-stack

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

In-place compaction uses two pointers: read advances always, write only on keep.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Stable sort matters when a secondary key was set in a prior pass.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Walk both pointers from each end inward; advance the smaller side.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Edit distance is LCS with a twist: substitution is a third option at each cell.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Pick a pivot, partition, recurse on the side that contains the kth slot.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Monotonic stack pops while the new element violates the invariant.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Unbounded knapsack: capacity inner ascending allows item reuse.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Morris traversal threads predecessors back to current node — O(1) extra space.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

LIS via patience: each pile holds the smallest tail of length k.

Heap when you only need top-k; full sort is wasted work.

Greedy by end-time picks the most non-overlapping intervals.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 1

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 3

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 5

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 6

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 7

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 8

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 9

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 10

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 11

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 12

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 13

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 14

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 15

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 16

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 17

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 18

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 19

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 20

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 21

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 22

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 23

Stable sort matters when a secondary key was set in a prior pass.

## entry 24

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 25

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 26

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 27

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 28

Stable sort matters when a secondary key was set in a prior pass.

## entry 29

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
