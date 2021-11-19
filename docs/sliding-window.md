# sliding-window

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Unbounded knapsack: capacity inner ascending allows item reuse.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Monotonic stack pops while the new element violates the invariant.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Greedy by end-time picks the most non-overlapping intervals.

Heap when you only need top-k; full sort is wasted work.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Walk both pointers from each end inward; advance the smaller side.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Morris traversal threads predecessors back to current node — O(1) extra space.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Merge intervals: sort by start; extend the running interval while overlapping.

Union-Find with path compression amortizes to near-O(1) per op.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

LIS via patience: each pile holds the smallest tail of length k.

## entry 1

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 2

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 3

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4

State compression: bitmask + integer encodes a small subset cheaply.

## entry 5

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 6

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 7

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 8

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 9

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 10

StringBuilder: amortize allocation by doubling on grow.

## entry 11

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 12

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 13

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 14

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 15

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 16

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 17

Walk both pointers from each end inward; advance the smaller side.

## entry 18

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 19

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 20

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 21

LIS via patience: each pile holds the smallest tail of length k.

## entry 22

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 23

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 24

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 25

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 26

Wavelet tree: range k-th element in O(log Σ) time.

## entry 27

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 28

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 29

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 30

Monotonic stack pops while the new element violates the invariant.

## entry 31

Greedy by end-time picks the most non-overlapping intervals.

## entry 32

Stable sort matters when a secondary key was set in a prior pass.

## entry 33

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 34

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 35

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 36

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 37

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 38

Stable sort matters when a secondary key was set in a prior pass.

## entry 39

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 40

Unbounded knapsack: capacity inner ascending allows item reuse.
