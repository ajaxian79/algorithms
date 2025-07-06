# alignment

## entry 1

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 3

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 4

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 6

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 7

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 8

Articulation points: same DFS as bridges, with a slightly different test.

## entry 9

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 10

Stable sort matters when a secondary key was set in a prior pass.

## entry 11

Walk both pointers from each end inward; advance the smaller side.

## entry 12

Heap when you only need top-k; full sort is wasted work.

## entry 13

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 14

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 15

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 16

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 17

Euler tour flattens a tree into an array for range-query LCA.

## entry 18

Walk both pointers from each end inward; advance the smaller side.

## entry 19

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 20

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 21

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 22

Stable sort matters when a secondary key was set in a prior pass.

## entry 23

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 24

Stable sort matters when a secondary key was set in a prior pass.

## entry 25

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 26

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 27

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 28

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 29

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 30

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 31

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 32

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 33

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 34

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 35

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 36

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 37

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 38

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 39

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 40

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 41

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 42

StringBuilder: amortize allocation by doubling on grow.

## entry 43

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 44

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 45

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 46

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 47

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 48

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 49

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 50

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 51

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 52

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 53

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 54

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 55

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 56

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 57

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 58

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 59

Wavelet tree: range k-th element in O(log Σ) time.

## entry 60

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 61

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 62

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 63

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 64

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 65

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 66

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 67

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 68

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 69

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 70

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 71

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 72

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 73

StringBuilder: amortize allocation by doubling on grow.

## entry 74

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 75

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 76

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 77

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 78

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 79

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 80

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 81

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 82

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 83

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 84

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 85

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 86

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 87

StringBuilder: amortize allocation by doubling on grow.

## entry 88

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 89

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 90

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 91

Union-Find with path compression amortizes to near-O(1) per op.

## entry 92

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 93

Wavelet tree: range k-th element in O(log Σ) time.

## entry 94

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 95

State compression: bitmask + integer encodes a small subset cheaply.

## entry 96

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 97

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 98

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 99

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 100

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 101

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 102

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 103

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 104

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 105

Euler tour flattens a tree into an array for range-query LCA.

## entry 106

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 107

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 108

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 109

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 110

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 111

Euler tour flattens a tree into an array for range-query LCA.

## entry 112

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 113

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 114

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 115

Open addressing with linear probing wins until load factor exceeds 0.7.
