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

Iterative DFS with an explicit stack avoids recursion-limit issues.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Morris traversal threads predecessors back to current node — O(1) extra space.

Monotonic stack pops while the new element violates the invariant.

Greedy by end-time picks the most non-overlapping intervals.

Merge intervals: sort by start; extend the running interval while overlapping.

Manacher expands around each center, reusing prior radii via mirror reflection.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 1

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 3

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 4

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5

Walk both pointers from each end inward; advance the smaller side.

## entry 6

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 7

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 8

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 9

Greedy by end-time picks the most non-overlapping intervals.

## entry 10

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 11

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 12

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 13

Heap when you only need top-k; full sort is wasted work.

## entry 14

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 15

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 16

Monotonic stack pops while the new element violates the invariant.

## entry 17

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 18

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 19

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 20

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 21

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 22

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 23

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 24

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 25

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 26

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 27

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 28

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 29

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 30

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 31

State compression: bitmask + integer encodes a small subset cheaply.

## entry 32

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 33

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 34

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 35

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 36

Open addressing with linear probing wins until load factor exceeds 0.7.
