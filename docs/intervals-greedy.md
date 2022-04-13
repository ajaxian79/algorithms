# intervals-greedy

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Greedy by end-time picks the most non-overlapping intervals.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

LIS via patience: each pile holds the smallest tail of length k.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Morris traversal threads predecessors back to current node — O(1) extra space.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Heap when you only need top-k; full sort is wasted work.

Unbounded knapsack: capacity inner ascending allows item reuse.

Manacher expands around each center, reusing prior radii via mirror reflection.

Monotonic stack pops while the new element violates the invariant.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

BFS layers carry implicit shortest-path distance in unweighted graphs.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Stable sort matters when a secondary key was set in a prior pass.

Union-Find with path compression amortizes to near-O(1) per op.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Merge intervals: sort by start; extend the running interval while overlapping.

Walk both pointers from each end inward; advance the smaller side.

In-place compaction uses two pointers: read advances always, write only on keep.

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 1

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5

Heap when you only need top-k; full sort is wasted work.

## entry 6

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 7

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 8

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 9

State compression: bitmask + integer encodes a small subset cheaply.

## entry 10

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 11

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 12

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 13

Walk both pointers from each end inward; advance the smaller side.

## entry 14

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 15

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 16

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 17

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 18

Splay tree: every access splays to the root; amortized O(log n).

## entry 19

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 20

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 21

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 22

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 23

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 24

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 25

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 26

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 27

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 28

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 29

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 30

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 31

Heap when you only need top-k; full sort is wasted work.

## entry 32

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 33

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 34

State compression: bitmask + integer encodes a small subset cheaply.

## entry 35

State compression: bitmask + integer encodes a small subset cheaply.

## entry 36

Heap when you only need top-k; full sort is wasted work.

## entry 37

Stable sort matters when a secondary key was set in a prior pass.
