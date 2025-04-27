# euler-tour

## entry 1

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 2

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 5

Walk both pointers from each end inward; advance the smaller side.

## entry 6

Euler tour flattens a tree into an array for range-query LCA.

## entry 7

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 8

State compression: bitmask + integer encodes a small subset cheaply.

## entry 9

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 10

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 11

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 12

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 13

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 14

Wavelet tree: range k-th element in O(log Σ) time.

## entry 15

StringBuilder: amortize allocation by doubling on grow.

## entry 16

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 17

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 18

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 19

Euler tour flattens a tree into an array for range-query LCA.

## entry 20

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 21

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 22

StringBuilder: amortize allocation by doubling on grow.

## entry 23

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 24

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 25

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 26

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 27

Greedy by end-time picks the most non-overlapping intervals.

## entry 28

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 29

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 30

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 31

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 32

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 33

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 34

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 35

StringBuilder: amortize allocation by doubling on grow.

## entry 36

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 37

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 38

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 39

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 40

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 41

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 42

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 43

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 44

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 45

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 46

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 47

Wavelet tree: range k-th element in O(log Σ) time.

## entry 48

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 49

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 50

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 51

Union-Find with path compression amortizes to near-O(1) per op.

## entry 52

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 53

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 54

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 55

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 56

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 57

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 58

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 59

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 60

StringBuilder: amortize allocation by doubling on grow.

## entry 61

Articulation points: same DFS as bridges, with a slightly different test.

## entry 62

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 63

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 64

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 65

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 66

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 67

Heap when you only need top-k; full sort is wasted work.

## entry 68

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 69

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 70

Union-Find with path compression amortizes to near-O(1) per op.

## entry 71

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 72

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 73

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 74

Union-Find with path compression amortizes to near-O(1) per op.

## entry 75

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 76

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 77

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 78

Stable sort matters when a secondary key was set in a prior pass.

## entry 79

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 80

Euler tour flattens a tree into an array for range-query LCA.

## entry 81

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 82

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 83

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 84

StringBuilder: amortize allocation by doubling on grow.

## entry 85

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 86

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 87

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 88

State compression: bitmask + integer encodes a small subset cheaply.

## entry 89

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 90

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 91

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 92

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 93

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 94

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 95

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 96

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 97

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 98

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 99

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 100

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 101

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 102

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 103

State compression: bitmask + integer encodes a small subset cheaply.

## entry 104

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 105

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 106

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 107

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 108

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 109

Heap when you only need top-k; full sort is wasted work.

## entry 110

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 111

Wavelet tree: range k-th element in O(log Σ) time.

## entry 112

Heap when you only need top-k; full sort is wasted work.

## entry 113

Stable sort matters when a secondary key was set in a prior pass.

## entry 114

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 115

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 116

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 117

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 118

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 119

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 120

Articulation points: same DFS as bridges, with a slightly different test.

## entry 121

Walk both pointers from each end inward; advance the smaller side.

## entry 122

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
