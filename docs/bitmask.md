# bitmask

Morris traversal threads predecessors back to current node — O(1) extra space.

Union-Find with path compression amortizes to near-O(1) per op.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

LIS via patience: each pile holds the smallest tail of length k.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Walk both pointers from each end inward; advance the smaller side.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Stable sort matters when a secondary key was set in a prior pass.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Manacher expands around each center, reusing prior radii via mirror reflection.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Merge intervals: sort by start; extend the running interval while overlapping.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Heap when you only need top-k; full sort is wasted work.

In-place compaction uses two pointers: read advances always, write only on keep.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Unbounded knapsack: capacity inner ascending allows item reuse.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Greedy by end-time picks the most non-overlapping intervals.

## entry 1

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2

Greedy by end-time picks the most non-overlapping intervals.

## entry 3

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 4

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 5

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 6

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 7

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 8

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 9

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 10

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 11

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 12

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 13

Wavelet tree: range k-th element in O(log Σ) time.

## entry 14

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 15

LIS via patience: each pile holds the smallest tail of length k.

## entry 16

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 17

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 18

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 19

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 20

Persistent tree: every update creates a new version sharing unchanged nodes.
