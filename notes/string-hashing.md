# string-hashing

- Heap when you only need top-k; full sort is wasted work.

- LIS via patience: each pile holds the smallest tail of length k.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Monotonic stack pops while the new element violates the invariant.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Union-Find with path compression amortizes to near-O(1) per op.

- Stable sort matters when a secondary key was set in a prior pass.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- In-place compaction uses two pointers: read advances always, write only on keep.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Walk both pointers from each end inward; advance the smaller side.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 1

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 2

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 3

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 4

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 5

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 6

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 7

- Splay tree: every access splays to the root; amortized O(log n).

## entry 8

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 9

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 10

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 11

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 12

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 13

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 14

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 15

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 16

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 17

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 18

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 19

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 20

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 21

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 22

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 23

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 24

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 25

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 26

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 27

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 28

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 29

- Monotonic stack pops while the new element violates the invariant.

## entry 30

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 31

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 32

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 33

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 34

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 35

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 36

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 37

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 38

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 39

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 40

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 41

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 42

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 43

- Greedy by end-time picks the most non-overlapping intervals.

## entry 44

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 45

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 46

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 47

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 48

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 49

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 50

- Splay tree: every access splays to the root; amortized O(log n).

## entry 51

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 52

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 53

- Heap when you only need top-k; full sort is wasted work.

## entry 54

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 55

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 56

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 57

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 58

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 59

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 60

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 61

- Stable sort matters when a secondary key was set in a prior pass.

## entry 62

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 63

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 64

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 65

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 66

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 67

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 68

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 69

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 70

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 71

- Heap when you only need top-k; full sort is wasted work.

## entry 72

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 73

- Splay tree: every access splays to the root; amortized O(log n).

## entry 74

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 75

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 76

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 77

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 78

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 79

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 80

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 81

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 82

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 83

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 84

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 85

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 86

- LIS via patience: each pile holds the smallest tail of length k.

## entry 87

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 88

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 89

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 90

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 91

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 92

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 93

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 94

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 95

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 96

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 97

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 98

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 99

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 100

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 101

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 102

- Greedy by end-time picks the most non-overlapping intervals.

## entry 103

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 104

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 105

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 106

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 107

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 108

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 109

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 110

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 111

- Euler tour flattens a tree into an array for range-query LCA.

## entry 112

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 113

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 114

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 115

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 116

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 117

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
