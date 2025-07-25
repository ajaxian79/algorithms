# bitmask-dp

## entry 1

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 3

Walk both pointers from each end inward; advance the smaller side.

## entry 4

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 5

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 6

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 7

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 8

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 9

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 10

Greedy by end-time picks the most non-overlapping intervals.

## entry 11

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 12

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 13

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 14

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 15

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 16

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 17

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 18

Articulation points: same DFS as bridges, with a slightly different test.

## entry 19

State compression: bitmask + integer encodes a small subset cheaply.

## entry 20

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 21

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 22

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 23

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 24

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 25

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 26

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 27

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 28

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 29

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 30

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 31

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 32

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 33

Splay tree: every access splays to the root; amortized O(log n).

## entry 34

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 35

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 36

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 37

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 38

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 39

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 40

Walk both pointers from each end inward; advance the smaller side.

## entry 41

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 42

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 43

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 44

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 45

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 46

LIS via patience: each pile holds the smallest tail of length k.

## entry 47

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 48

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 49

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 50

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 51

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 52

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 53

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 54

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 55

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 56

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 57

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 58

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 59

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 60

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 61

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 62

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 63

State compression: bitmask + integer encodes a small subset cheaply.

## entry 64

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 65

Stable sort matters when a secondary key was set in a prior pass.

## entry 66

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 67

Stable sort matters when a secondary key was set in a prior pass.

## entry 68

Walk both pointers from each end inward; advance the smaller side.

## entry 69

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 70

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 71

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 72

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 73

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 74

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 75

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 76

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 77

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 78

LIS via patience: each pile holds the smallest tail of length k.

## entry 79

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 80

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 81

Splay tree: every access splays to the root; amortized O(log n).

## entry 82

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 83

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 84

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 85

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 86

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 87

Union-Find with path compression amortizes to near-O(1) per op.

## entry 88

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 89

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 90

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 91

Euler tour flattens a tree into an array for range-query LCA.

## entry 92

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 93

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 94

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 95

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 96

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 97

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 98

Stable sort matters when a secondary key was set in a prior pass.

## entry 99

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 100

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 101

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 102

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 103

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 104

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 105

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 106

Wavelet tree: range k-th element in O(log Σ) time.

## entry 107

Stable sort matters when a secondary key was set in a prior pass.

## entry 108

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 109

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 110

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 111

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 112

Wavelet tree: range k-th element in O(log Σ) time.

## entry 113

Union-Find with path compression amortizes to near-O(1) per op.

## entry 114

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 115

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 116

Wavelet tree: range k-th element in O(log Σ) time.

## entry 117

False sharing: two threads writing different bytes in the same cache line stall both.
