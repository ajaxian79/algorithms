# topological-sort

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Pick a pivot, partition, recurse on the side that contains the kth slot.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Edit distance is LCS with a twist: substitution is a third option at each cell.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Union-Find with path compression amortizes to near-O(1) per op.

Manacher expands around each center, reusing prior radii via mirror reflection.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Morris traversal threads predecessors back to current node — O(1) extra space.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Stable sort matters when a secondary key was set in a prior pass.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Unbounded knapsack: capacity inner ascending allows item reuse.

Monotonic stack pops while the new element violates the invariant.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

LIS via patience: each pile holds the smallest tail of length k.

Greedy by end-time picks the most non-overlapping intervals.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Heap when you only need top-k; full sort is wasted work.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Merge intervals: sort by start; extend the running interval while overlapping.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Walk both pointers from each end inward; advance the smaller side.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 2

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 5

Articulation points: same DFS as bridges, with a slightly different test.

## entry 6

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 7

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 8

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 9

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 10

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 11

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 12

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 13

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 14

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 15

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 16

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 17

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 18

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 19

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 20

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 21

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 22

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 23

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 24

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 25

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 26

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 27

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 28

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 29

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 30

StringBuilder: amortize allocation by doubling on grow.

## entry 31

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 32

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 33

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 34

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 35

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 36

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 37

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 38

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 39

Stable sort matters when a secondary key was set in a prior pass.

## entry 40

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 41

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 42

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 43

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 44

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 45

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 46

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 47

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 48

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 49

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 50

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 51

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 52

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 53

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 54

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 55

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 56

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 57

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 58

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 59

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 60

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 61

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 62

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 63

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 64

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 65

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 66

Articulation points: same DFS as bridges, with a slightly different test.

## entry 67

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 68

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 69

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 70

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 71

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 72

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 73

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 74

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 75

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 76

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 77

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 78

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 79

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 80

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 81

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 82

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 83

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 84

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 85

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 86

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 87

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 88

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 89

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 90

Walk both pointers from each end inward; advance the smaller side.

## entry 91

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 92

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 93

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 94

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 95

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 96

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 97

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 98

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 99

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 100

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 101

Monotonic stack pops while the new element violates the invariant.

## entry 102

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 103

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 104

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 105

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 106

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 107

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 108

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 109

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 110

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 111

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 112

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
