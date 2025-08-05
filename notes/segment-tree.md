# segment-tree

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Merge intervals: sort by start; extend the running interval while overlapping.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- LIS via patience: each pile holds the smallest tail of length k.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Heap when you only need top-k; full sort is wasted work.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Stable sort matters when a secondary key was set in a prior pass.

- Monotonic stack pops while the new element violates the invariant.

- Union-Find with path compression amortizes to near-O(1) per op.

- Greedy by end-time picks the most non-overlapping intervals.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Walk both pointers from each end inward; advance the smaller side.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 1

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 2

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 6

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 7

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 8

- Euler tour flattens a tree into an array for range-query LCA.

## entry 9

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 10

- Stable sort matters when a secondary key was set in a prior pass.

## entry 11

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 12

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 13

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 14

- Stable sort matters when a secondary key was set in a prior pass.

## entry 15

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 16

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 17

- Greedy by end-time picks the most non-overlapping intervals.

## entry 18

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 19

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 20

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 21

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 22

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 23

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 24

- Heap when you only need top-k; full sort is wasted work.

## entry 25

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 26

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 27

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 28

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 29

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 30

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 31

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 32

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 33

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 34

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 35

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 36

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 37

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 38

- Heap when you only need top-k; full sort is wasted work.

## entry 39

- Walk both pointers from each end inward; advance the smaller side.

## entry 40

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 41

- Euler tour flattens a tree into an array for range-query LCA.

## entry 42

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 43

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 44

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 45

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 46

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 47

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 48

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 49

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 50

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 51

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 52

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 53

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 54

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 55

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 56

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 57

- Heap when you only need top-k; full sort is wasted work.

## entry 58

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 59

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 60

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 61

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 62

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 63

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 64

- Greedy by end-time picks the most non-overlapping intervals.

## entry 65

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 66

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 67

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 68

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 69

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 70

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 71

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 72

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 73

- StringBuilder: amortize allocation by doubling on grow.

## entry 74

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 75

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 76

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 77

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 78

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 79

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 80

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 81

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 82

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 83

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 84

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 85

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 86

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 87

- Walk both pointers from each end inward; advance the smaller side.

## entry 88

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 89

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 90

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 91

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 92

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 93

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 94

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 95

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 96

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 97

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 98

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 99

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 100

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 101

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 102

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 103

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 104

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 105

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 106

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 107

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 108

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 109

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 110

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 111

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 112

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 113

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
