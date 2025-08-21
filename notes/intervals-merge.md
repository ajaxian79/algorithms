# intervals-merge

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Monotonic stack pops while the new element violates the invariant.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Union-Find with path compression amortizes to near-O(1) per op.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Greedy by end-time picks the most non-overlapping intervals.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Stable sort matters when a secondary key was set in a prior pass.

- Walk both pointers from each end inward; advance the smaller side.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- In-place compaction uses two pointers: read advances always, write only on keep.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Heap when you only need top-k; full sort is wasted work.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- LIS via patience: each pile holds the smallest tail of length k.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 1

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 4

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 5

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 6

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 7

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 8

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 9

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 10

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 11

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 12

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 13

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 14

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 15

- Walk both pointers from each end inward; advance the smaller side.

## entry 16

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 17

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 18

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 19

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 20

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 21

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 22

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 23

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 24

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 25

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 26

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 27

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 28

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 29

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 30

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 31

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 32

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 33

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 34

- StringBuilder: amortize allocation by doubling on grow.

## entry 35

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 36

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 37

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 38

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 39

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 40

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 41

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 42

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 43

- Euler tour flattens a tree into an array for range-query LCA.

## entry 44

- Greedy by end-time picks the most non-overlapping intervals.

## entry 45

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 46

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 47

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 48

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 49

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 50

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 51

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 52

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 53

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 54

- StringBuilder: amortize allocation by doubling on grow.

## entry 55

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 56

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 57

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 58

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 59

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 60

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 61

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 62

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 63

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 64

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 65

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 66

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 67

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 68

- LIS via patience: each pile holds the smallest tail of length k.

## entry 69

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 70

- Splay tree: every access splays to the root; amortized O(log n).

## entry 71

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 72

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 73

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 74

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 75

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 76

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 77

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 78

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 79

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 80

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 81

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 82

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 83

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 84

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 85

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 86

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 87

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 88

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 89

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 90

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 91

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 92

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 93

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 94

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 95

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 96

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 97

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 98

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 99

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 100

- Greedy by end-time picks the most non-overlapping intervals.

## entry 101

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 102

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 103

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 104

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 105

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 106

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 107

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 108

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 109

- Heap when you only need top-k; full sort is wasted work.

## entry 110

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 111

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 112

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 113

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 114

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 115

- Splay tree: every access splays to the root; amortized O(log n).

## entry 116

- Euler tour flattens a tree into an array for range-query LCA.

## entry 117

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 118

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 119

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 120

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 121

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 122

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 123

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 124

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 125

- Walk both pointers from each end inward; advance the smaller side.

## entry 126

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 127

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 128

- Persistent tree: every update creates a new version sharing unchanged nodes.
