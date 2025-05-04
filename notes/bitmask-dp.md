# bitmask-dp

## entry 1

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 4

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 5

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 6

- Splay tree: every access splays to the root; amortized O(log n).

## entry 7

- Splay tree: every access splays to the root; amortized O(log n).

## entry 8

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 9

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 10

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 11

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 12

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 13

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 14

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 15

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 16

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 17

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 18

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 19

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 20

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 21

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 22

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 23

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 24

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 25

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 26

- StringBuilder: amortize allocation by doubling on grow.

## entry 27

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 28

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 29

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 30

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 31

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 32

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 33

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 34

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 35

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 36

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 37

- Walk both pointers from each end inward; advance the smaller side.

## entry 38

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 39

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 40

- Walk both pointers from each end inward; advance the smaller side.

## entry 41

- StringBuilder: amortize allocation by doubling on grow.

## entry 42

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 43

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 44

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 45

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 46

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 47

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 48

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 49

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 50

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 51

- Monotonic stack pops while the new element violates the invariant.

## entry 52

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 53

- StringBuilder: amortize allocation by doubling on grow.

## entry 54

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 55

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 56

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 57

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 58

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 59

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 60

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 61

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 62

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 63

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 64

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 65

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 66

- Monotonic stack pops while the new element violates the invariant.

## entry 67

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 68

- StringBuilder: amortize allocation by doubling on grow.

## entry 69

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 70

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 71

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 72

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 73

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 74

- Walk both pointers from each end inward; advance the smaller side.

## entry 75

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 76

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 77

- Walk both pointers from each end inward; advance the smaller side.

## entry 78

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 79

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 80

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 81

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 82

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 83

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 84

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 85

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 86

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 87

- Heap when you only need top-k; full sort is wasted work.

## entry 88

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 89

- Heap when you only need top-k; full sort is wasted work.

## entry 90

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 91

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 92

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 93

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 94

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 95

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 96

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 97

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 98

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 99

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 100

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 101

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 102

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 103

- Walk both pointers from each end inward; advance the smaller side.

## entry 104

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 105

- Stable sort matters when a secondary key was set in a prior pass.

## entry 106

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 107

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 108

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 109

- LIS via patience: each pile holds the smallest tail of length k.

## entry 110

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 111

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 112

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 113

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 114

- StringBuilder: amortize allocation by doubling on grow.

## entry 115

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 116

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 117

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 118

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 119

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 120

- Treap: BST + heap on random priorities; expected O(log n) per op.
