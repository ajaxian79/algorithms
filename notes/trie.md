# trie

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Monotonic stack pops while the new element violates the invariant.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Stable sort matters when a secondary key was set in a prior pass.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Walk both pointers from each end inward; advance the smaller side.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Greedy by end-time picks the most non-overlapping intervals.

- Union-Find with path compression amortizes to near-O(1) per op.

- LIS via patience: each pile holds the smallest tail of length k.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Heap when you only need top-k; full sort is wasted work.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2

- Stable sort matters when a secondary key was set in a prior pass.

## entry 3

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 5

- Stable sort matters when a secondary key was set in a prior pass.

## entry 6

- LIS via patience: each pile holds the smallest tail of length k.

## entry 7

- StringBuilder: amortize allocation by doubling on grow.

## entry 8

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 9

- Walk both pointers from each end inward; advance the smaller side.

## entry 10

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 11

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 12

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 13

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 14

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 15

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 16

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 17

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 18

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 19

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 20

- LIS via patience: each pile holds the smallest tail of length k.

## entry 21

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 22

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 23

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 24

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 25

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 26

- Splay tree: every access splays to the root; amortized O(log n).

## entry 27

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 28

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 29

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 30

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 31

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 32

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 33

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 34

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 35

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 36

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 37

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 38

- Monotonic stack pops while the new element violates the invariant.

## entry 39

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 40

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 41

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 42

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 43

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 44

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 45

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 46

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 47

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 48

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 49

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 50

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 51

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 52

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 53

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 54

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 55

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 56

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 57

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 58

- Heap when you only need top-k; full sort is wasted work.

## entry 59

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 60

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 61

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 62

- Heap when you only need top-k; full sort is wasted work.

## entry 63

- Monotonic stack pops while the new element violates the invariant.

## entry 64

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 65

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 66

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 67

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 68

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 69

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 70

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 71

- Euler tour flattens a tree into an array for range-query LCA.

## entry 72

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 73

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 74

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 75

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 76

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 77

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 78

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 79

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 80

- Splay tree: every access splays to the root; amortized O(log n).

## entry 81

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 82

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 83

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 84

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 85

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 86

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 87

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 88

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 89

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 90

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 91

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 92

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 93

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 94

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 95

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 96

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 97

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 98

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 99

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 100

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 101

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 102

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 103

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 104

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 105

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 106

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 107

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 108

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 109

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 110

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
