# dp-2d

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Stable sort matters when a secondary key was set in a prior pass.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Greedy by end-time picks the most non-overlapping intervals.

- Walk both pointers from each end inward; advance the smaller side.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Union-Find with path compression amortizes to near-O(1) per op.

- Heap when you only need top-k; full sort is wasted work.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Monotonic stack pops while the new element violates the invariant.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- LIS via patience: each pile holds the smallest tail of length k.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 1

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 2

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 4

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 5

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 6

- Greedy by end-time picks the most non-overlapping intervals.

## entry 7

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 8

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 9

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 10

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 11

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 12

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 13

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 14

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 15

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 16

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 17

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 18

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 19

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 20

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 21

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 22

- Monotonic stack pops while the new element violates the invariant.

## entry 23

- Euler tour flattens a tree into an array for range-query LCA.

## entry 24

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 25

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 26

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 27

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 28

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 29

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 30

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 31

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 32

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 33

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 34

- StringBuilder: amortize allocation by doubling on grow.

## entry 35

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 36

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 37

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 38

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 39

- Euler tour flattens a tree into an array for range-query LCA.

## entry 40

- Monotonic stack pops while the new element violates the invariant.

## entry 41

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 42

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 43

- Stable sort matters when a secondary key was set in a prior pass.

## entry 44

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 45

- Greedy by end-time picks the most non-overlapping intervals.

## entry 46

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 47

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 48

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 49

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 50

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 51

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 52

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 53

- Heap when you only need top-k; full sort is wasted work.

## entry 54

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 55

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 56

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 57

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 58

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 59

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 60

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 61

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 62

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 63

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 64

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 65

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 66

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 67

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 68

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 69

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 70

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 71

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 72

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 73

- StringBuilder: amortize allocation by doubling on grow.

## entry 74

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 75

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 76

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 77

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 78

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 79

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 80

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 81

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 82

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 83

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 84

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 85

- Monotonic stack pops while the new element violates the invariant.

## entry 86

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 87

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 88

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 89

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 90

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 91

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 92

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 93

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 94

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 95

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 96

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 97

- Stable sort matters when a secondary key was set in a prior pass.

## entry 98

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 99

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 100

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 101

- Greedy by end-time picks the most non-overlapping intervals.

## entry 102

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 103

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 104

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 105

- Walk both pointers from each end inward; advance the smaller side.

## entry 106

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 107

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 108

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 109

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 110

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 111

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 112

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 113

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 114

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
