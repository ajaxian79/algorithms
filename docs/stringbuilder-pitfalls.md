# stringbuilder-pitfalls

## entry 1

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 2

StringBuilder: amortize allocation by doubling on grow.

## entry 3

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 5

Walk both pointers from each end inward; advance the smaller side.

## entry 6

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 7

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 8

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 9

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 10

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 11

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 12

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 13

Heap when you only need top-k; full sort is wasted work.

## entry 14

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 15

Wavelet tree: range k-th element in O(log Σ) time.

## entry 16

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 17

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 18

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 19

Euler tour flattens a tree into an array for range-query LCA.

## entry 20

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 21

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 22

State compression: bitmask + integer encodes a small subset cheaply.

## entry 23

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 24

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 25

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 26

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 27

Union-Find with path compression amortizes to near-O(1) per op.

## entry 28

StringBuilder: amortize allocation by doubling on grow.

## entry 29

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 30

Splay tree: every access splays to the root; amortized O(log n).

## entry 31

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 32

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 33

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 34

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 35

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 36

Union-Find with path compression amortizes to near-O(1) per op.

## entry 37

Articulation points: same DFS as bridges, with a slightly different test.

## entry 38

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 39

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 40

Monotonic stack pops while the new element violates the invariant.

## entry 41

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 42

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 43

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 44

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 45

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 46

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 47

Heap when you only need top-k; full sort is wasted work.

## entry 48

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 49

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 50

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 51

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 52

Greedy by end-time picks the most non-overlapping intervals.

## entry 53

State compression: bitmask + integer encodes a small subset cheaply.

## entry 54

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 55

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 56

Euler tour flattens a tree into an array for range-query LCA.

## entry 57

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 58

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 59

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 60

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 61

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 62

LIS via patience: each pile holds the smallest tail of length k.

## entry 63

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 64

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 65

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 66

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 67

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 68

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 69

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 70

Union-Find with path compression amortizes to near-O(1) per op.

## entry 71

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 72

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 73

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 74

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 75

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 76

Splay tree: every access splays to the root; amortized O(log n).

## entry 77

Splay tree: every access splays to the root; amortized O(log n).

## entry 78

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 79

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 80

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 81

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 82

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 83

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 84

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 85

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 86

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 87

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 88

Greedy by end-time picks the most non-overlapping intervals.

## entry 89

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 90

Splay tree: every access splays to the root; amortized O(log n).

## entry 91

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 92

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 93

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 94

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 95

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 96

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 97

StringBuilder: amortize allocation by doubling on grow.

## entry 98

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 99

Greedy by end-time picks the most non-overlapping intervals.

## entry 100

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 101

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 102

Heap when you only need top-k; full sort is wasted work.

## entry 103

Stable sort matters when a secondary key was set in a prior pass.

## entry 104

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 105

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 106

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 107

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 108

StringBuilder: amortize allocation by doubling on grow.

## entry 109

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 110

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 111

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 112

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 113

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 114

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 115

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 116

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 117

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 118

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 119

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 120

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 121

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 122

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 123

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 124

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 125

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 126

Stable sort matters when a secondary key was set in a prior pass.

## entry 127

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 128

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 129

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 130

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 131

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 132

Union-Find with path compression amortizes to near-O(1) per op.

## entry 133

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 134

Splay tree: every access splays to the root; amortized O(log n).

## entry 135

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 136

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 137

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 138

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 139

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 140

LIS via patience: each pile holds the smallest tail of length k.

## entry 141

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 142

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 143

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 144

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 145

Splay tree: every access splays to the root; amortized O(log n).
