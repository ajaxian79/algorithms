# quickselect

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Monotonic stack pops while the new element violates the invariant.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Morris traversal threads predecessors back to current node — O(1) extra space.

Walk both pointers from each end inward; advance the smaller side.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Unbounded knapsack: capacity inner ascending allows item reuse.

Greedy by end-time picks the most non-overlapping intervals.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

BFS layers carry implicit shortest-path distance in unweighted graphs.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Merge intervals: sort by start; extend the running interval while overlapping.

Manacher expands around each center, reusing prior radii via mirror reflection.

In-place compaction uses two pointers: read advances always, write only on keep.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Heap when you only need top-k; full sort is wasted work.

LIS via patience: each pile holds the smallest tail of length k.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Union-Find with path compression amortizes to near-O(1) per op.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 1

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 3

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 4

Greedy by end-time picks the most non-overlapping intervals.

## entry 5

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 6

Greedy by end-time picks the most non-overlapping intervals.

## entry 7

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 8

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 9

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 10

Stable sort matters when a secondary key was set in a prior pass.

## entry 11

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 12

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 13

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 14

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 15

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 16

Euler tour flattens a tree into an array for range-query LCA.

## entry 17

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 18

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 19

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 20

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 21

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 22

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 23

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 24

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 25

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 26

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 27

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 28

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 29

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 30

Greedy by end-time picks the most non-overlapping intervals.

## entry 31

Greedy by end-time picks the most non-overlapping intervals.

## entry 32

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 33

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 34

Articulation points: same DFS as bridges, with a slightly different test.

## entry 35

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 36

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 37

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 38

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 39

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 40

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 41

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 42

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 43

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 44

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 45

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 46

Wavelet tree: range k-th element in O(log Σ) time.

## entry 47

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 48

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 49

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 50

Heap when you only need top-k; full sort is wasted work.

## entry 51

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 52

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 53

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 54

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 55

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 56

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 57

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 58

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 59

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 60

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 61

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 62

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 63

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 64

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 65

State compression: bitmask + integer encodes a small subset cheaply.

## entry 66

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 67

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 68

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 69

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 70

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 71

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 72

Monotonic stack pops while the new element violates the invariant.

## entry 73

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 74

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 75

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 76

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 77

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 78

Euler tour flattens a tree into an array for range-query LCA.

## entry 79

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 80

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 81

Splay tree: every access splays to the root; amortized O(log n).

## entry 82

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 83

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 84

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 85

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 86

Monotonic stack pops while the new element violates the invariant.

## entry 87

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 88

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 89

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 90

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 91

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 92

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 93

Monotonic stack pops while the new element violates the invariant.

## entry 94

Euler tour flattens a tree into an array for range-query LCA.

## entry 95

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 96

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 97

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 98

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 99

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 100

Stable sort matters when a secondary key was set in a prior pass.

## entry 101

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 102

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 103

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 104

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 105

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 106

Heap when you only need top-k; full sort is wasted work.

## entry 107

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 108

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 109

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 110

Heap when you only need top-k; full sort is wasted work.

## entry 111

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 112

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 113

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 114

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 115

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 116

Wavelet tree: range k-th element in O(log Σ) time.
