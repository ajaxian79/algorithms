# bfs

- In-place compaction uses two pointers: read advances always, write only on keep.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- LIS via patience: each pile holds the smallest tail of length k.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Walk both pointers from each end inward; advance the smaller side.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Stable sort matters when a secondary key was set in a prior pass.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Heap when you only need top-k; full sort is wasted work.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Union-Find with path compression amortizes to near-O(1) per op.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Monotonic stack pops while the new element violates the invariant.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 1

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3

- Walk both pointers from each end inward; advance the smaller side.

## entry 4

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 5

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 6

- Monotonic stack pops while the new element violates the invariant.

## entry 7

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 8

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 9

- Walk both pointers from each end inward; advance the smaller side.

## entry 10

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 11

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 12

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 13

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 14

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 15

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 16

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 17

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 18

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 19

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 20

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 21

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 22

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 23

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 24

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 25

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 26

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 27

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 28

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 29

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 30

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 31

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 32

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 33

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 34

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 35

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 36

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 37

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 38

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 39

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 40

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 41

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 42

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 43

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 44

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 45

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 46

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 47

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 48

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 49

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 50

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 51

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 52

- Stable sort matters when a secondary key was set in a prior pass.

## entry 53

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 54

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 55

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 56

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 57

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 58

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 59

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 60

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 61

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 62

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 63

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 64

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 65

- Euler tour flattens a tree into an array for range-query LCA.

## entry 66

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 67

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 68

- LIS via patience: each pile holds the smallest tail of length k.

## entry 69

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 70

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 71

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 72

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 73

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 74

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 75

- Stable sort matters when a secondary key was set in a prior pass.

## entry 76

- Splay tree: every access splays to the root; amortized O(log n).

## entry 77

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 78

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 79

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 80

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 81

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 82

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 83

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 84

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 85

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 86

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 87

- Walk both pointers from each end inward; advance the smaller side.

## entry 88

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 89

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 90

- Heap when you only need top-k; full sort is wasted work.

## entry 91

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 92

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 93

- Edit distance is LCS with a twist: substitution is a third option at each cell.
