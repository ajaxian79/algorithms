# dijkstra

## entry 1

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 2

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 4

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 6

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 7

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 8

- StringBuilder: amortize allocation by doubling on grow.

## entry 9

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 10

- Euler tour flattens a tree into an array for range-query LCA.

## entry 11

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 12

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 13

- StringBuilder: amortize allocation by doubling on grow.

## entry 14

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 15

- LIS via patience: each pile holds the smallest tail of length k.

## entry 16

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 17

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 18

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 19

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 20

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 21

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 22

- Walk both pointers from each end inward; advance the smaller side.

## entry 23

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 24

- LIS via patience: each pile holds the smallest tail of length k.

## entry 25

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 26

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 27

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 28

- Splay tree: every access splays to the root; amortized O(log n).

## entry 29

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 30

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 31

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 32

- LIS via patience: each pile holds the smallest tail of length k.

## entry 33

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 34

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 35

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 36

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 37

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 38

- Euler tour flattens a tree into an array for range-query LCA.

## entry 39

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 40

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 41

- StringBuilder: amortize allocation by doubling on grow.

## entry 42

- Euler tour flattens a tree into an array for range-query LCA.

## entry 43

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 44

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 45

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 46

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 47

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 48

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 49

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 50

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 51

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 52

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 53

- Greedy by end-time picks the most non-overlapping intervals.

## entry 54

- Stable sort matters when a secondary key was set in a prior pass.

## entry 55

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 56

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 57

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 58

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 59

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 60

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 61

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 62

- Euler tour flattens a tree into an array for range-query LCA.

## entry 63

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 64

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 65

- LIS via patience: each pile holds the smallest tail of length k.

## entry 66

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 67

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 68

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 69

- Walk both pointers from each end inward; advance the smaller side.

## entry 70

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 71

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 72

- Walk both pointers from each end inward; advance the smaller side.

## entry 73

- Walk both pointers from each end inward; advance the smaller side.

## entry 74

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 75

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 76

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 77

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 78

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 79

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 80

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 81

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 82

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 83

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 84

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 85

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 86

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 87

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 88

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 89

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 90

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 91

- Stable sort matters when a secondary key was set in a prior pass.

## entry 92

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 93

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 94

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 95

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 96

- LIS via patience: each pile holds the smallest tail of length k.

## entry 97

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 98

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 99

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 100

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 101

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 102

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 103

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 104

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 105

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 106

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 107

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 108

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 109

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 110

- Fenwick supports prefix-sum updates in O(log n) with a flat array.
