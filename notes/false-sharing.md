# false-sharing

## entry 1

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 3

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 6

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 7

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 8

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 9

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 10

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 11

- Splay tree: every access splays to the root; amortized O(log n).

## entry 12

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 13

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 14

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 15

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 16

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 17

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 18

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 19

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 20

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 21

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 22

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 23

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 24

- Splay tree: every access splays to the root; amortized O(log n).

## entry 25

- Euler tour flattens a tree into an array for range-query LCA.

## entry 26

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 27

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 28

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 29

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 30

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 31

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 32

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 33

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 34

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 35

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 36

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 37

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 38

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 39

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 40

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 41

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 42

- LIS via patience: each pile holds the smallest tail of length k.

## entry 43

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 44

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 45

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 46

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 47

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 48

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 49

- Splay tree: every access splays to the root; amortized O(log n).

## entry 50

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 51

- Walk both pointers from each end inward; advance the smaller side.

## entry 52

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 53

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 54

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 55

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 56

- LIS via patience: each pile holds the smallest tail of length k.

## entry 57

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 58

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 59

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 60

- Euler tour flattens a tree into an array for range-query LCA.

## entry 61

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 62

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 63

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 64

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 65

- Monotonic stack pops while the new element violates the invariant.

## entry 66

- Euler tour flattens a tree into an array for range-query LCA.

## entry 67

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 68

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 69

- Splay tree: every access splays to the root; amortized O(log n).

## entry 70

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 71

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 72

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 73

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 74

- Stable sort matters when a secondary key was set in a prior pass.

## entry 75

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 76

- Euler tour flattens a tree into an array for range-query LCA.

## entry 77

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 78

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 79

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 80

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 81

- Walk both pointers from each end inward; advance the smaller side.

## entry 82

- Stable sort matters when a secondary key was set in a prior pass.

## entry 83

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 84

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 85

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 86

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 87

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 88

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 89

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 90

- Euler tour flattens a tree into an array for range-query LCA.

## entry 91

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 92

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 93

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 94

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 95

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 96

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 97

- Walk both pointers from each end inward; advance the smaller side.

## entry 98

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 99

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 100

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 101

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 102

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 103

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 104

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 105

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 106

- Walk both pointers from each end inward; advance the smaller side.

## entry 107

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 108

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 109

- Stable sort matters when a secondary key was set in a prior pass.
