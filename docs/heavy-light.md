# heavy-light

## entry 1

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 2

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 3

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 4

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 5

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 6

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 7

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 8

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 9

Monotonic stack pops while the new element violates the invariant.

## entry 10

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 11

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 12

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 13

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 14

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 15

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 16

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 17

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 18

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 19

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 20

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 21

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 22

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 23

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 24

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 25

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 26

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 27

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 28

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 29

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 30

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 31

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 32

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 33

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 34

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 35

Splay tree: every access splays to the root; amortized O(log n).

## entry 36

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 37

Articulation points: same DFS as bridges, with a slightly different test.

## entry 38

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 39

Stable sort matters when a secondary key was set in a prior pass.

## entry 40

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 41

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 42

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 43

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 44

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 45

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 46

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 47

LIS via patience: each pile holds the smallest tail of length k.

## entry 48

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 49

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 50

Monotonic stack pops while the new element violates the invariant.

## entry 51

Walk both pointers from each end inward; advance the smaller side.

## entry 52

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 53

Stable sort matters when a secondary key was set in a prior pass.

## entry 54

Euler tour flattens a tree into an array for range-query LCA.

## entry 55

Heap when you only need top-k; full sort is wasted work.

## entry 56

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 57

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 58

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 59

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 60

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 61

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 62

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 63

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 64

Walk both pointers from each end inward; advance the smaller side.

## entry 65

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 66

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 67

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 68

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 69

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 70

Splay tree: every access splays to the root; amortized O(log n).

## entry 71

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 72

Greedy by end-time picks the most non-overlapping intervals.

## entry 73

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 74

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 75

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 76

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 77

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 78

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 79

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 80

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 81

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 82

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 83

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 84

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 85

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 86

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 87

Walk both pointers from each end inward; advance the smaller side.

## entry 88

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 89

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 90

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 91

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 92

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 93

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 94

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 95

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 96

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 97

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 98

Monotonic stack pops while the new element violates the invariant.

## entry 99

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 100

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 101

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 102

State compression: bitmask + integer encodes a small subset cheaply.

## entry 103

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 104

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 105

Monotonic stack pops while the new element violates the invariant.

## entry 106

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 107

State compression: bitmask + integer encodes a small subset cheaply.

## entry 108

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 109

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 110

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 111

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 112

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 113

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 114

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 115

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 116

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 117

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 118

Greedy by end-time picks the most non-overlapping intervals.

## entry 119

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 120

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 121

Walk both pointers from each end inward; advance the smaller side.

## entry 122

Articulation points: same DFS as bridges, with a slightly different test.

## entry 123

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 124

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 125

Iterative DFS with an explicit stack avoids recursion-limit issues.
