# dfs

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Union-Find with path compression amortizes to near-O(1) per op.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Greedy by end-time picks the most non-overlapping intervals.

- Stable sort matters when a secondary key was set in a prior pass.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- In-place compaction uses two pointers: read advances always, write only on keep.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- LIS via patience: each pile holds the smallest tail of length k.

- Heap when you only need top-k; full sort is wasted work.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Walk both pointers from each end inward; advance the smaller side.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Monotonic stack pops while the new element violates the invariant.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 1

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 2

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 3

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 4

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 5

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 6

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 7

- LIS via patience: each pile holds the smallest tail of length k.

## entry 8

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 9

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 10

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 11

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 12

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 13

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 14

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 15

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 16

- StringBuilder: amortize allocation by doubling on grow.

## entry 17

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 18

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 19

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 20

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 21

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 22

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 23

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 24

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 25

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 26

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 27

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 28

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 29

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 30

- Walk both pointers from each end inward; advance the smaller side.

## entry 31

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 32

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 33

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 34

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 35

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 36

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 37

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 38

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 39

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 40

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 41

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 42

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 43

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 44

- Splay tree: every access splays to the root; amortized O(log n).

## entry 45

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 46

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 47

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 48

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 49

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 50

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 51

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 52

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 53

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 54

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 55

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 56

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 57

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 58

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 59

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 60

- Euler tour flattens a tree into an array for range-query LCA.

## entry 61

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 62

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 63

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 64

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 65

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 66

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 67

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 68

- Walk both pointers from each end inward; advance the smaller side.

## entry 69

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 70

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 71

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 72

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 73

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 74

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 75

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 76

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 77

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 78

- StringBuilder: amortize allocation by doubling on grow.

## entry 79

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 80

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 81

- Heap when you only need top-k; full sort is wasted work.

## entry 82

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 83

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 84

- Heap when you only need top-k; full sort is wasted work.

## entry 85

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 86

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 87

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 88

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 89

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 90

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 91

- StringBuilder: amortize allocation by doubling on grow.

## entry 92

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 93

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 94

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 95

- Greedy by end-time picks the most non-overlapping intervals.

## entry 96

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 97

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 98

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 99

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 100

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 101

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 102

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 103

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 104

- LIS via patience: each pile holds the smallest tail of length k.

## entry 105

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 106

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 107

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 108

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 109

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 110

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 111

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
