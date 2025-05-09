# iterative-traversals

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Monotonic stack pops while the new element violates the invariant.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- LIS via patience: each pile holds the smallest tail of length k.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Greedy by end-time picks the most non-overlapping intervals.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Walk both pointers from each end inward; advance the smaller side.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Union-Find with path compression amortizes to near-O(1) per op.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Heap when you only need top-k; full sort is wasted work.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Stable sort matters when a secondary key was set in a prior pass.

## entry 1

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 2

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 3

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 4

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 5

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 6

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 7

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 8

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 9

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 10

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 11

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 12

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 13

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 14

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 15

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 16

- Splay tree: every access splays to the root; amortized O(log n).

## entry 17

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 18

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 19

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 20

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 21

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 22

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 23

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 24

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 25

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 26

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 27

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 28

- Euler tour flattens a tree into an array for range-query LCA.

## entry 29

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 30

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 31

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 32

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 33

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 34

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 35

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 36

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 37

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 38

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 39

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 40

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 41

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 42

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 43

- StringBuilder: amortize allocation by doubling on grow.

## entry 44

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 45

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 46

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 47

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 48

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 49

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 50

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 51

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 52

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 53

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 54

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 55

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 56

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 57

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 58

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 59

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 60

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 61

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 62

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 63

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 64

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 65

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 66

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 67

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 68

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 69

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 70

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 71

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 72

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 73

- Splay tree: every access splays to the root; amortized O(log n).

## entry 74

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 75

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 76

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 77

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 78

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 79

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 80

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 81

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 82

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 83

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 84

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 85

- Monotonic stack pops while the new element violates the invariant.

## entry 86

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 87

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 88

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 89

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 90

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 91

- LIS via patience: each pile holds the smallest tail of length k.

## entry 92

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 93

- Monotonic stack pops while the new element violates the invariant.

## entry 94

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 95

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 96

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 97

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 98

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 99

- Euler tour flattens a tree into an array for range-query LCA.

## entry 100

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 101

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 102

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 103

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 104

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 105

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 106

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 107

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 108

- Morris traversal threads predecessors back to current node — O(1) extra space.
