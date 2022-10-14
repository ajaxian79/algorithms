# knapsack-01

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Unbounded knapsack: capacity inner ascending allows item reuse.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Morris traversal threads predecessors back to current node — O(1) extra space.

Walk both pointers from each end inward; advance the smaller side.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Manacher expands around each center, reusing prior radii via mirror reflection.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

LIS via patience: each pile holds the smallest tail of length k.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Pick a pivot, partition, recurse on the side that contains the kth slot.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Stable sort matters when a secondary key was set in a prior pass.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Merge intervals: sort by start; extend the running interval while overlapping.

In-place compaction uses two pointers: read advances always, write only on keep.

Greedy by end-time picks the most non-overlapping intervals.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Heap when you only need top-k; full sort is wasted work.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Union-Find with path compression amortizes to near-O(1) per op.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 1

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 2

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 4

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 6

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 7

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 8

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 9

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 10

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 11

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 12

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 13

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 14

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 15

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 16

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 17

Splay tree: every access splays to the root; amortized O(log n).

## entry 18

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 19

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 20

Articulation points: same DFS as bridges, with a slightly different test.

## entry 21

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 22

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 23

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 24

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 25

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 26

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
