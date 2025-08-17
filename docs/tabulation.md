# tabulation

## entry 1

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 3

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 4

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 5

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 6

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 7

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 8

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 9

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 10

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 11

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 12

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 13

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 14

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 15

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 16

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 17

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 18

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 19

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 20

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 21

State compression: bitmask + integer encodes a small subset cheaply.

## entry 22

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 23

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 24

State compression: bitmask + integer encodes a small subset cheaply.

## entry 25

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 26

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 27

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 28

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 29

Articulation points: same DFS as bridges, with a slightly different test.

## entry 30

StringBuilder: amortize allocation by doubling on grow.

## entry 31

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 32

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 33

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 34

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 35

Heap when you only need top-k; full sort is wasted work.

## entry 36

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 37

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 38

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 39

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 40

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 41

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 42

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 43

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 44

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 45

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 46

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 47

Stable sort matters when a secondary key was set in a prior pass.

## entry 48

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 49

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 50

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 51

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 52

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 53

LIS via patience: each pile holds the smallest tail of length k.

## entry 54

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 55

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 56

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 57

Monotonic stack pops while the new element violates the invariant.

## entry 58

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 59

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 60

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 61

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 62

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 63

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 64

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 65

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 66

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 67

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 68

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 69

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 70

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 71

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 72

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 73

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 74

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 75

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 76

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 77

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 78

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 79

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 80

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 81

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 82

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 83

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 84

StringBuilder: amortize allocation by doubling on grow.

## entry 85

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 86

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 87

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 88

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 89

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 90

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 91

Articulation points: same DFS as bridges, with a slightly different test.

## entry 92

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 93

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 94

Greedy by end-time picks the most non-overlapping intervals.

## entry 95

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 96

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 97

Articulation points: same DFS as bridges, with a slightly different test.

## entry 98

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 99

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 100

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 101

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 102

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 103

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 104

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 105

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 106

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 107

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 108

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 109

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 110

Articulation points: same DFS as bridges, with a slightly different test.

## entry 111

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 112

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 113

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 114

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 115

Memoization: top-down with a cache map; tabulation: bottom-up with an array.
