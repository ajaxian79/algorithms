# tarjan-scc

## entry 1

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 2

Articulation points: same DFS as bridges, with a slightly different test.

## entry 3

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 5

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 6

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 7

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 8

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 9

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 10

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 11

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 12

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 13

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 14

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 15

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 16

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 17

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 18

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 19

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 20

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 21

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 22

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 23

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 24

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 25

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 26

Splay tree: every access splays to the root; amortized O(log n).

## entry 27

Walk both pointers from each end inward; advance the smaller side.

## entry 28

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 29

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 30

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 31

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 32

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 33

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 34

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 35

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 36

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 37

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 38

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 39

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 40

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 41

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 42

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 43

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 44

Articulation points: same DFS as bridges, with a slightly different test.

## entry 45

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 46

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 47

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 48

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 49

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 50

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 51

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 52

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 53

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 54

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 55

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 56

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 57

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 58

Heap when you only need top-k; full sort is wasted work.

## entry 59

Articulation points: same DFS as bridges, with a slightly different test.

## entry 60

Walk both pointers from each end inward; advance the smaller side.

## entry 61

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 62

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 63

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 64

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 65

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 66

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 67

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 68

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 69

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 70

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 71

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 72

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 73

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 74

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 75

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 76

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 77

Monotonic stack pops while the new element violates the invariant.

## entry 78

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 79

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 80

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 81

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 82

StringBuilder: amortize allocation by doubling on grow.

## entry 83

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 84

State compression: bitmask + integer encodes a small subset cheaply.

## entry 85

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 86

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 87

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 88

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 89

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 90

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 91

Walk both pointers from each end inward; advance the smaller side.

## entry 92

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 93

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 94

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 95

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 96

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 97

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 98

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 99

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 100

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 101

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 102

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 103

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 104

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 105

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 106

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 107

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 108

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 109

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
