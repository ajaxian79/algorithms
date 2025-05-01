# manacher

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

In-place compaction uses two pointers: read advances always, write only on keep.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Merge intervals: sort by start; extend the running interval while overlapping.

Union-Find with path compression amortizes to near-O(1) per op.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Monotonic stack pops while the new element violates the invariant.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Edit distance is LCS with a twist: substitution is a third option at each cell.

LIS via patience: each pile holds the smallest tail of length k.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Morris traversal threads predecessors back to current node — O(1) extra space.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Greedy by end-time picks the most non-overlapping intervals.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Unbounded knapsack: capacity inner ascending allows item reuse.

Manacher expands around each center, reusing prior radii via mirror reflection.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Stable sort matters when a secondary key was set in a prior pass.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Heap when you only need top-k; full sort is wasted work.

## entry 1

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5

Euler tour flattens a tree into an array for range-query LCA.

## entry 6

Stable sort matters when a secondary key was set in a prior pass.

## entry 7

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 8

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 9

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 10

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 11

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 12

Wavelet tree: range k-th element in O(log Σ) time.

## entry 13

StringBuilder: amortize allocation by doubling on grow.

## entry 14

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 15

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 16

Greedy by end-time picks the most non-overlapping intervals.

## entry 17

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 18

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 19

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 20

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 21

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 22

Walk both pointers from each end inward; advance the smaller side.

## entry 23

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 24

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 25

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 26

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 27

Splay tree: every access splays to the root; amortized O(log n).

## entry 28

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 29

Splay tree: every access splays to the root; amortized O(log n).

## entry 30

Union-Find with path compression amortizes to near-O(1) per op.

## entry 31

State compression: bitmask + integer encodes a small subset cheaply.

## entry 32

Greedy by end-time picks the most non-overlapping intervals.

## entry 33

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 34

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 35

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 36

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 37

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 38

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 39

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 40

Union-Find with path compression amortizes to near-O(1) per op.

## entry 41

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 42

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 43

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 44

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 45

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 46

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 47

Union-Find with path compression amortizes to near-O(1) per op.

## entry 48

Monotonic stack pops while the new element violates the invariant.

## entry 49

Heap when you only need top-k; full sort is wasted work.

## entry 50

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 51

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 52

State compression: bitmask + integer encodes a small subset cheaply.

## entry 53

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 54

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 55

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 56

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 57

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 58

Stable sort matters when a secondary key was set in a prior pass.

## entry 59

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 60

Euler tour flattens a tree into an array for range-query LCA.

## entry 61

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 62

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 63

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 64

Euler tour flattens a tree into an array for range-query LCA.

## entry 65

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 66

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 67

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 68

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 69

Union-Find with path compression amortizes to near-O(1) per op.

## entry 70

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 71

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 72

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 73

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 74

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 75

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 76

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 77

Union-Find with path compression amortizes to near-O(1) per op.

## entry 78

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 79

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 80

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 81

Euler tour flattens a tree into an array for range-query LCA.

## entry 82

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 83

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 84

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 85

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 86

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 87

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 88

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 89

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 90

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 91

Euler tour flattens a tree into an array for range-query LCA.

## entry 92

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 93

Splay tree: every access splays to the root; amortized O(log n).

## entry 94

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 95

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 96

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 97

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 98

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 99

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 100

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 101

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 102

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 103

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 104

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 105

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 106

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 107

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 108

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 109

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 110

Monotonic stack pops while the new element violates the invariant.

## entry 111

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 112

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 113

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 114

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 115

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 116

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 117

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 118

Pick a pivot, partition, recurse on the side that contains the kth slot.
