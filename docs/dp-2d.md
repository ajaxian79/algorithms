# dp-2d

Unbounded knapsack: capacity inner ascending allows item reuse.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Walk both pointers from each end inward; advance the smaller side.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Morris traversal threads predecessors back to current node — O(1) extra space.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Merge intervals: sort by start; extend the running interval while overlapping.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Union-Find with path compression amortizes to near-O(1) per op.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

BFS layers carry implicit shortest-path distance in unweighted graphs.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Manacher expands around each center, reusing prior radii via mirror reflection.

Stable sort matters when a secondary key was set in a prior pass.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

In-place compaction uses two pointers: read advances always, write only on keep.

Heap when you only need top-k; full sort is wasted work.

## entry 1

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 6

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 7

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 8

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 9

LIS via patience: each pile holds the smallest tail of length k.

## entry 10

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 11

StringBuilder: amortize allocation by doubling on grow.

## entry 12

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 13

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 14

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 15

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 16

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 17

StringBuilder: amortize allocation by doubling on grow.

## entry 18

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 19

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 20

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 21

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 22

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 23

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 24

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 25

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 26

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 27

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 28

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 29

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 30

LCA via binary lifting: jump up powers of two until depths match, then converge.
