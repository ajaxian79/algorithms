# open-addressing

## entry 1

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 2

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 5

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 6

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 7

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 8

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 9

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 10

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 11

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 12

- StringBuilder: amortize allocation by doubling on grow.

## entry 13

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 14

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 15

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 16

- Monotonic stack pops while the new element violates the invariant.

## entry 17

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 18

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 19

- StringBuilder: amortize allocation by doubling on grow.

## entry 20

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 21

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 22

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 23

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 24

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 25

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 26

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 27

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 28

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 29

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 30

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 31

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 32

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 33

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 34

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 35

- Heap when you only need top-k; full sort is wasted work.

## entry 36

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 37

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 38

- Splay tree: every access splays to the root; amortized O(log n).

## entry 39

- StringBuilder: amortize allocation by doubling on grow.

## entry 40

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 41

- Stable sort matters when a secondary key was set in a prior pass.

## entry 42

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 43

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 44

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 45

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 46

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 47

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 48

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 49

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 50

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 51

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 52

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 53

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 54

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 55

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 56

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 57

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 58

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 59

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 60

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 61

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 62

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 63

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 64

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 65

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 66

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 67

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 68

- Stable sort matters when a secondary key was set in a prior pass.

## entry 69

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 70

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 71

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 72

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 73

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 74

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 75

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 76

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 77

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 78

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 79

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 80

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 81

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 82

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 83

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 84

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 85

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 86

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 87

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 88

- Splay tree: every access splays to the root; amortized O(log n).

## entry 89

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 90

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 91

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 92

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 93

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 94

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 95

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 96

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 97

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 98

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 99

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 100

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 101

- Stable sort matters when a secondary key was set in a prior pass.

## entry 102

- LIS via patience: each pile holds the smallest tail of length k.

## entry 103

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 104

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 105

- Monotonic stack pops while the new element violates the invariant.

## entry 106

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 107

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 108

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 109

- Euler tour flattens a tree into an array for range-query LCA.

## entry 110

- Heap when you only need top-k; full sort is wasted work.

## entry 111

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 112

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 113

- Heap when you only need top-k; full sort is wasted work.

## entry 114

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 115

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 116

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 117

- StringBuilder: amortize allocation by doubling on grow.

## entry 118

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 119

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 120

- Heap when you only need top-k; full sort is wasted work.

## entry 121

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
