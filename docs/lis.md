# lis

Manacher expands around each center, reusing prior radii via mirror reflection.

Merge intervals: sort by start; extend the running interval while overlapping.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Union-Find with path compression amortizes to near-O(1) per op.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

LIS via patience: each pile holds the smallest tail of length k.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Greedy by end-time picks the most non-overlapping intervals.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Unbounded knapsack: capacity inner ascending allows item reuse.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Stable sort matters when a secondary key was set in a prior pass.

Morris traversal threads predecessors back to current node — O(1) extra space.

In-place compaction uses two pointers: read advances always, write only on keep.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Heap when you only need top-k; full sort is wasted work.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Monotonic stack pops while the new element violates the invariant.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Walk both pointers from each end inward; advance the smaller side.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 1

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 2

Walk both pointers from each end inward; advance the smaller side.

## entry 3

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4

Splay tree: every access splays to the root; amortized O(log n).

## entry 5

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 6

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 7

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 8

State compression: bitmask + integer encodes a small subset cheaply.

## entry 9

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 10

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 11

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 12

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 13

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 14

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 15

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 16

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 17

LIS via patience: each pile holds the smallest tail of length k.

## entry 18

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 19

Wavelet tree: range k-th element in O(log Σ) time.

## entry 20

Articulation points: same DFS as bridges, with a slightly different test.

## entry 21

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 22

Polynomial rolling hash with two moduli kills almost all collisions in practice.
