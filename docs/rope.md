# rope

## entry 1

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 2

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 5

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 6

Euler tour flattens a tree into an array for range-query LCA.

## entry 7

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 8

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 9

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 10

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 11

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 12

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 13

State compression: bitmask + integer encodes a small subset cheaply.

## entry 14

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 15

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 16

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 17

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 18

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 19

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 20

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 21

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 22

Articulation points: same DFS as bridges, with a slightly different test.

## entry 23

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 24

Euler tour flattens a tree into an array for range-query LCA.

## entry 25

Monotonic stack pops while the new element violates the invariant.

## entry 26

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 27

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 28

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 29

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 30

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 31

StringBuilder: amortize allocation by doubling on grow.

## entry 32

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 33

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 34

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 35

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 36

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 37

Greedy by end-time picks the most non-overlapping intervals.

## entry 38

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 39

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 40

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 41

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 42

Union-Find with path compression amortizes to near-O(1) per op.

## entry 43

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 44

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 45

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 46

Walk both pointers from each end inward; advance the smaller side.

## entry 47

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 48

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 49

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 50

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 51

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 52

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 53

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 54

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 55

Heap when you only need top-k; full sort is wasted work.

## entry 56

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 57

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 58

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 59

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 60

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 61

Walk both pointers from each end inward; advance the smaller side.

## entry 62

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 63

Splay tree: every access splays to the root; amortized O(log n).

## entry 64

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 65

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 66

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 67

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 68

Greedy by end-time picks the most non-overlapping intervals.

## entry 69

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 70

State compression: bitmask + integer encodes a small subset cheaply.

## entry 71

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 72

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 73

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 74

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 75

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 76

StringBuilder: amortize allocation by doubling on grow.

## entry 77

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 78

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 79

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 80

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 81

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 82

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 83

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 84

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 85

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 86

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 87

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 88

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 89

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 90

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 91

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 92

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 93

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 94

Wavelet tree: range k-th element in O(log Σ) time.

## entry 95

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 96

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 97

LIS via patience: each pile holds the smallest tail of length k.

## entry 98

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 99

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 100

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 101

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 102

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 103

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 104

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 105

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 106

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 107

Greedy by end-time picks the most non-overlapping intervals.

## entry 108

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 109

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 110

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 111

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 112

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 113

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 114

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 115

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 116

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 117

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 118

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 119

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 120

Euler tour flattens a tree into an array for range-query LCA.

## entry 121

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 122

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 123

Walk both pointers from each end inward; advance the smaller side.

## entry 124

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 125

LRU cache: doubly-linked list + hash map; O(1) get/put.
