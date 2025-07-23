# floyd-warshall

## entry 1

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4

Articulation points: same DFS as bridges, with a slightly different test.

## entry 5

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 6

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 7

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 8

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 9

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 10

Heap when you only need top-k; full sort is wasted work.

## entry 11

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 12

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 13

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 14

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 15

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 16

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 17

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 18

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 19

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 20

Stable sort matters when a secondary key was set in a prior pass.

## entry 21

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 22

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 23

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 24

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 25

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 26

Euler tour flattens a tree into an array for range-query LCA.

## entry 27

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 28

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 29

Walk both pointers from each end inward; advance the smaller side.

## entry 30

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 31

Monotonic stack pops while the new element violates the invariant.

## entry 32

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 33

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 34

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 35

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 36

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 37

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 38

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 39

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 40

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 41

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 42

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 43

Splay tree: every access splays to the root; amortized O(log n).

## entry 44

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 45

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 46

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 47

LIS via patience: each pile holds the smallest tail of length k.

## entry 48

Splay tree: every access splays to the root; amortized O(log n).

## entry 49

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 50

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 51

Wavelet tree: range k-th element in O(log Σ) time.

## entry 52

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 53

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 54

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 55

Euler tour flattens a tree into an array for range-query LCA.

## entry 56

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 57

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 58

Stable sort matters when a secondary key was set in a prior pass.

## entry 59

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 60

Articulation points: same DFS as bridges, with a slightly different test.

## entry 61

Euler tour flattens a tree into an array for range-query LCA.

## entry 62

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 63

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 64

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 65

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 66

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 67

Monotonic stack pops while the new element violates the invariant.

## entry 68

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 69

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 70

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 71

Euler tour flattens a tree into an array for range-query LCA.

## entry 72

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 73

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 74

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 75

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 76

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 77

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 78

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 79

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 80

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 81

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 82

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 83

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 84

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 85

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 86

LIS via patience: each pile holds the smallest tail of length k.

## entry 87

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 88

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 89

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 90

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 91

Walk both pointers from each end inward; advance the smaller side.

## entry 92

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 93

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 94

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 95

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 96

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 97

Euler tour flattens a tree into an array for range-query LCA.

## entry 98

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 99

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 100

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 101

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 102

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 103

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 104

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 105

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 106

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 107

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 108

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 109

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 110

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 111

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 112

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 113

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 114

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 115

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 116

Monotonic stack pops while the new element violates the invariant.

## entry 117

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 118

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 119

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 120

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 121

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 122

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 123

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 124

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 125

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
