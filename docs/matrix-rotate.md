# matrix-rotate

In-place compaction uses two pointers: read advances always, write only on keep.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Merge intervals: sort by start; extend the running interval while overlapping.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Greedy by end-time picks the most non-overlapping intervals.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Walk both pointers from each end inward; advance the smaller side.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Heap when you only need top-k; full sort is wasted work.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Unbounded knapsack: capacity inner ascending allows item reuse.

Manacher expands around each center, reusing prior radii via mirror reflection.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Morris traversal threads predecessors back to current node — O(1) extra space.

Monotonic stack pops while the new element violates the invariant.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Stable sort matters when a secondary key was set in a prior pass.

LIS via patience: each pile holds the smallest tail of length k.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 1

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 3

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 4

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 5

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 6

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 7

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 8

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 9

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 10

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 11

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 12

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 13

Union-Find with path compression amortizes to near-O(1) per op.

## entry 14

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 15

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 16

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 17

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 18

Monotonic stack pops while the new element violates the invariant.

## entry 19

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 20

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 21

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 22

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 23

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 24

StringBuilder: amortize allocation by doubling on grow.

## entry 25

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 26

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 27

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 28

Articulation points: same DFS as bridges, with a slightly different test.

## entry 29

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 30

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 31

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 32

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 33

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 34

LIS via patience: each pile holds the smallest tail of length k.

## entry 35

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 36

Heap when you only need top-k; full sort is wasted work.

## entry 37

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 38

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 39

Wavelet tree: range k-th element in O(log Σ) time.

## entry 40

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 41

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 42

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 43

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 44

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 45

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 46

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 47

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 48

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 49

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 50

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 51

Stable sort matters when a secondary key was set in a prior pass.

## entry 52

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 53

Walk both pointers from each end inward; advance the smaller side.

## entry 54

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 55

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 56

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 57

StringBuilder: amortize allocation by doubling on grow.

## entry 58

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 59

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 60

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 61

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 62

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 63

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 64

Articulation points: same DFS as bridges, with a slightly different test.

## entry 65

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 66

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 67

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 68

Heap when you only need top-k; full sort is wasted work.

## entry 69

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 70

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 71

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 72

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 73

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 74

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 75

Articulation points: same DFS as bridges, with a slightly different test.

## entry 76

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 77

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 78

Wavelet tree: range k-th element in O(log Σ) time.

## entry 79

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 80

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 81

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 82

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 83

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 84

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 85

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 86

StringBuilder: amortize allocation by doubling on grow.

## entry 87

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 88

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 89

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 90

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 91

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 92

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 93

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 94

StringBuilder: amortize allocation by doubling on grow.

## entry 95

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 96

Heap when you only need top-k; full sort is wasted work.

## entry 97

Heap when you only need top-k; full sort is wasted work.

## entry 98

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
