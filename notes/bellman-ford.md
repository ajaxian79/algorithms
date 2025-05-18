# bellman-ford

## entry 1

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 2

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 6

- Splay tree: every access splays to the root; amortized O(log n).

## entry 7

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 8

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 9

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 10

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 11

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 12

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 13

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 14

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 15

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 16

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 17

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 18

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 19

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 20

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 21

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 22

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 23

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 24

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 25

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 26

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 27

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 28

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 29

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 30

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 31

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 32

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 33

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 34

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 35

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 36

- StringBuilder: amortize allocation by doubling on grow.

## entry 37

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 38

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 39

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 40

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 41

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 42

- LIS via patience: each pile holds the smallest tail of length k.

## entry 43

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 44

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 45

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 46

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 47

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 48

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 49

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 50

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 51

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 52

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 53

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 54

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 55

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 56

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 57

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 58

- StringBuilder: amortize allocation by doubling on grow.

## entry 59

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 60

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 61

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 62

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 63

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 64

- Heap when you only need top-k; full sort is wasted work.

## entry 65

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 66

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 67

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 68

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 69

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 70

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 71

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 72

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 73

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 74

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 75

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 76

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 77

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 78

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 79

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 80

- Heap when you only need top-k; full sort is wasted work.

## entry 81

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 82

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 83

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 84

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 85

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 86

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 87

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 88

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 89

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 90

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 91

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 92

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 93

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 94

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 95

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 96

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 97

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 98

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 99

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 100

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 101

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 102

- Euler tour flattens a tree into an array for range-query LCA.

## entry 103

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 104

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 105

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 106

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 107

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 108

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 109

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 110

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 111

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 112

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 113

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 114

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 115

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 116

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 117

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 118

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 119

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 120

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 121

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 122

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 123

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 124

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 125

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 126

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 127

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 128

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 129

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 130

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 131

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 132

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 133

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 134

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
