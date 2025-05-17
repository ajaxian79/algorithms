# union-find

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Monotonic stack pops while the new element violates the invariant.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Heap when you only need top-k; full sort is wasted work.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

In-place compaction uses two pointers: read advances always, write only on keep.

Morris traversal threads predecessors back to current node — O(1) extra space.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Unbounded knapsack: capacity inner ascending allows item reuse.

Walk both pointers from each end inward; advance the smaller side.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Greedy by end-time picks the most non-overlapping intervals.

Manacher expands around each center, reusing prior radii via mirror reflection.

Union-Find with path compression amortizes to near-O(1) per op.

Pick a pivot, partition, recurse on the side that contains the kth slot.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Merge intervals: sort by start; extend the running interval while overlapping.

Stable sort matters when a secondary key was set in a prior pass.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3

Splay tree: every access splays to the root; amortized O(log n).

## entry 4

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 5

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 6

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 7

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 8

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 9

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 10

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 11

Wavelet tree: range k-th element in O(log Σ) time.

## entry 12

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 13

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 14

StringBuilder: amortize allocation by doubling on grow.

## entry 15

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 16

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 17

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 18

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 19

LIS via patience: each pile holds the smallest tail of length k.

## entry 20

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 21

Euler tour flattens a tree into an array for range-query LCA.

## entry 22

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 23

Union-Find with path compression amortizes to near-O(1) per op.

## entry 24

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 25

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 26

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 27

State compression: bitmask + integer encodes a small subset cheaply.

## entry 28

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 29

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 30

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 31

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 32

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 33

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 34

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 35

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 36

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 37

StringBuilder: amortize allocation by doubling on grow.

## entry 38

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 39

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 40

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 41

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 42

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 43

Stable sort matters when a secondary key was set in a prior pass.

## entry 44

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 45

Greedy by end-time picks the most non-overlapping intervals.

## entry 46

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 47

StringBuilder: amortize allocation by doubling on grow.

## entry 48

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 49

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 50

Union-Find with path compression amortizes to near-O(1) per op.

## entry 51

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 52

Greedy by end-time picks the most non-overlapping intervals.

## entry 53

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 54

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 55

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 56

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 57

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 58

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 59

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 60

StringBuilder: amortize allocation by doubling on grow.

## entry 61

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 62

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 63

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 64

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 65

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 66

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 67

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 68

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 69

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 70

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 71

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 72

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 73

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 74

Monotonic stack pops while the new element violates the invariant.

## entry 75

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 76

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 77

Stable sort matters when a secondary key was set in a prior pass.

## entry 78

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 79

Greedy by end-time picks the most non-overlapping intervals.

## entry 80

Stable sort matters when a secondary key was set in a prior pass.

## entry 81

Monotonic stack pops while the new element violates the invariant.

## entry 82

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 83

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 84

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 85

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 86

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 87

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 88

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 89

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 90

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 91

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 92

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 93

Stable sort matters when a secondary key was set in a prior pass.

## entry 94

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 95

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 96

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 97

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 98

Heap when you only need top-k; full sort is wasted work.

## entry 99

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 100

Wavelet tree: range k-th element in O(log Σ) time.

## entry 101

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 102

Euler tour flattens a tree into an array for range-query LCA.

## entry 103

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 104

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 105

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 106

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 107

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 108

Splay tree: every access splays to the root; amortized O(log n).

## entry 109

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 110

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 111

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 112

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 113

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 114

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 115

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 116

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 117

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 118

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 119

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 120

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 121

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 122

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 123

LRU cache: doubly-linked list + hash map; O(1) get/put.
