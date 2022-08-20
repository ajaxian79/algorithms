# backtracking

Morris traversal threads predecessors back to current node — O(1) extra space.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Manacher expands around each center, reusing prior radii via mirror reflection.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Union-Find with path compression amortizes to near-O(1) per op.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Merge intervals: sort by start; extend the running interval while overlapping.

Stable sort matters when a secondary key was set in a prior pass.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Monotonic stack pops while the new element violates the invariant.

Greedy by end-time picks the most non-overlapping intervals.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Unbounded knapsack: capacity inner ascending allows item reuse.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

LIS via patience: each pile holds the smallest tail of length k.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Heap when you only need top-k; full sort is wasted work.

## entry 1

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 2

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 3

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 6

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 7

Wavelet tree: range k-th element in O(log Σ) time.

## entry 8

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 9

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 10

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 11

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 12

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 13

Monotonic stack pops while the new element violates the invariant.

## entry 14

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 15

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 16

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 17

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 18

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 19

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 20

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 21

Splay tree: every access splays to the root; amortized O(log n).

## entry 22

Heap when you only need top-k; full sort is wasted work.

## entry 23

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 24

Tabulation wins when iteration order is obvious and stack depth would blow up.
