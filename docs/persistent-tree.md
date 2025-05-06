# persistent-tree

## entry 1

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 2

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 3

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4

Wavelet tree: range k-th element in O(log Σ) time.

## entry 5

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 6

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 7

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 8

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 9

StringBuilder: amortize allocation by doubling on grow.

## entry 10

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 11

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 12

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 13

Walk both pointers from each end inward; advance the smaller side.

## entry 14

LIS via patience: each pile holds the smallest tail of length k.

## entry 15

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 16

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 17

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 18

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 19

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 20

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 21

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 22

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 23

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 24

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 25

Heap when you only need top-k; full sort is wasted work.

## entry 26

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 27

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 28

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 29

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 30

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 31

Stable sort matters when a secondary key was set in a prior pass.

## entry 32

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 33

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 34

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 35

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 36

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 37

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 38

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 39

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 40

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 41

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 42

Articulation points: same DFS as bridges, with a slightly different test.

## entry 43

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 44

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 45

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 46

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 47

LIS via patience: each pile holds the smallest tail of length k.

## entry 48

Greedy by end-time picks the most non-overlapping intervals.

## entry 49

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 50

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 51

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 52

Heap when you only need top-k; full sort is wasted work.

## entry 53

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 54

Splay tree: every access splays to the root; amortized O(log n).

## entry 55

StringBuilder: amortize allocation by doubling on grow.

## entry 56

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 57

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 58

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 59

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 60

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 61

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 62

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 63

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 64

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 65

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 66

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 67

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 68

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 69

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 70

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 71

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 72

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 73

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 74

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 75

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 76

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 77

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 78

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 79

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 80

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 81

Splay tree: every access splays to the root; amortized O(log n).

## entry 82

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 83

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 84

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 85

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 86

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 87

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 88

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 89

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 90

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 91

Heap when you only need top-k; full sort is wasted work.

## entry 92

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 93

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 94

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 95

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 96

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 97

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 98

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 99

Monotonic stack pops while the new element violates the invariant.

## entry 100

LIS via patience: each pile holds the smallest tail of length k.

## entry 101

State compression: bitmask + integer encodes a small subset cheaply.

## entry 102

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 103

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 104

Euler tour flattens a tree into an array for range-query LCA.

## entry 105

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 106

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 107

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 108

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 109

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 110

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 111

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 112

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 113

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 114

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 115

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 116

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 117

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 118

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 119

Articulation points: same DFS as bridges, with a slightly different test.

## entry 120

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 121

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 122

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 123

StringBuilder: amortize allocation by doubling on grow.

## entry 124

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 125

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 126

Monotonic stack pops while the new element violates the invariant.

## entry 127

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 128

Wavelet tree: range k-th element in O(log Σ) time.

## entry 129

Rope: tree of small string fragments; O(log n) concat and substring.
