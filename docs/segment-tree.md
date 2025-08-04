# segment-tree

Morris traversal threads predecessors back to current node — O(1) extra space.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

LIS via patience: each pile holds the smallest tail of length k.

Manacher expands around each center, reusing prior radii via mirror reflection.

Union-Find with path compression amortizes to near-O(1) per op.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Stable sort matters when a secondary key was set in a prior pass.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Iterative DFS with an explicit stack avoids recursion-limit issues.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Heap when you only need top-k; full sort is wasted work.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Walk both pointers from each end inward; advance the smaller side.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Unbounded knapsack: capacity inner ascending allows item reuse.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Monotonic stack pops while the new element violates the invariant.

Merge intervals: sort by start; extend the running interval while overlapping.

Greedy by end-time picks the most non-overlapping intervals.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 2

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 3

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 4

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 6

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 7

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 8

Euler tour flattens a tree into an array for range-query LCA.

## entry 9

State compression: bitmask + integer encodes a small subset cheaply.

## entry 10

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 11

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 12

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 13

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 14

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 15

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 16

StringBuilder: amortize allocation by doubling on grow.

## entry 17

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 18

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 19

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 20

StringBuilder: amortize allocation by doubling on grow.

## entry 21

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 22

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 23

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 24

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 25

Monotonic stack pops while the new element violates the invariant.

## entry 26

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 27

Stable sort matters when a secondary key was set in a prior pass.

## entry 28

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 29

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 30

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 31

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 32

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 33

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 34

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 35

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 36

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 37

Articulation points: same DFS as bridges, with a slightly different test.

## entry 38

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 39

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 40

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 41

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 42

Euler tour flattens a tree into an array for range-query LCA.

## entry 43

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 44

Heap when you only need top-k; full sort is wasted work.

## entry 45

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 46

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 47

Monotonic stack pops while the new element violates the invariant.

## entry 48

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 49

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 50

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 51

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 52

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 53

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 54

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 55

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 56

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 57

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 58

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 59

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 60

Splay tree: every access splays to the root; amortized O(log n).

## entry 61

Heap when you only need top-k; full sort is wasted work.

## entry 62

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 63

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 64

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 65

StringBuilder: amortize allocation by doubling on grow.

## entry 66

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 67

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 68

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 69

Stable sort matters when a secondary key was set in a prior pass.

## entry 70

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 71

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 72

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 73

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 74

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 75

Monotonic stack pops while the new element violates the invariant.

## entry 76

Stable sort matters when a secondary key was set in a prior pass.

## entry 77

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 78

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 79

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 80

Monotonic stack pops while the new element violates the invariant.

## entry 81

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 82

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 83

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 84

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 85

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 86

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 87

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 88

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 89

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 90

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 91

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 92

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 93

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 94

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 95

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 96

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 97

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 98

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 99

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 100

State compression: bitmask + integer encodes a small subset cheaply.

## entry 101

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 102

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 103

State compression: bitmask + integer encodes a small subset cheaply.

## entry 104

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 105

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 106

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 107

Greedy by end-time picks the most non-overlapping intervals.

## entry 108

Articulation points: same DFS as bridges, with a slightly different test.

## entry 109

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 110

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 111

Wavelet tree: range k-th element in O(log Σ) time.

## entry 112

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 113

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 114

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 115

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 116

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 117

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 118

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 119

Monotonic stack pops while the new element violates the invariant.

## entry 120

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 121

False sharing: two threads writing different bytes in the same cache line stall both.
