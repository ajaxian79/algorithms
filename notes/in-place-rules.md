# in-place-rules

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- LIS via patience: each pile holds the smallest tail of length k.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Monotonic stack pops while the new element violates the invariant.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Heap when you only need top-k; full sort is wasted work.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Walk both pointers from each end inward; advance the smaller side.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Union-Find with path compression amortizes to near-O(1) per op.

- Greedy by end-time picks the most non-overlapping intervals.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Stable sort matters when a secondary key was set in a prior pass.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 1

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 4

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 6

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 7

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 8

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 9

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 10

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 11

- Walk both pointers from each end inward; advance the smaller side.

## entry 12

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 13

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 14

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 15

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 16

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 17

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 18

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 19

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 20

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 21

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 22

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 23

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 24

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 25

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 26

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 27

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 28

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 29

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 30

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 31

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 32

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 33

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 34

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 35

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 36

- Stable sort matters when a secondary key was set in a prior pass.

## entry 37

- Walk both pointers from each end inward; advance the smaller side.

## entry 38

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 39

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 40

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 41

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 42

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 43

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 44

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 45

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 46

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 47

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 48

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 49

- Monotonic stack pops while the new element violates the invariant.

## entry 50

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 51

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 52

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 53

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 54

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 55

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 56

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 57

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 58

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 59

- Heap when you only need top-k; full sort is wasted work.

## entry 60

- Splay tree: every access splays to the root; amortized O(log n).

## entry 61

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 62

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 63

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 64

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 65

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 66

- Walk both pointers from each end inward; advance the smaller side.

## entry 67

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 68

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 69

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 70

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 71

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 72

- StringBuilder: amortize allocation by doubling on grow.

## entry 73

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 74

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 75

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 76

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 77

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 78

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 79

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 80

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 81

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 82

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 83

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 84

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 85

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 86

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 87

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 88

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 89

- Monotonic stack pops while the new element violates the invariant.

## entry 90

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 91

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 92

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 93

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 94

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 95

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 96

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 97

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 98

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 99

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 100

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 101

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 102

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 103

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 104

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 105

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 106

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 107

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 108

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 109

- StringBuilder: amortize allocation by doubling on grow.

## entry 110

- Walk both pointers from each end inward; advance the smaller side.

## entry 111

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
