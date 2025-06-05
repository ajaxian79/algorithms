# knapsack-01

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Heap when you only need top-k; full sort is wasted work.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- LIS via patience: each pile holds the smallest tail of length k.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Monotonic stack pops while the new element violates the invariant.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Union-Find with path compression amortizes to near-O(1) per op.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 1

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 2

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 4

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 5

- Splay tree: every access splays to the root; amortized O(log n).

## entry 6

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 7

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 8

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 9

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 10

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 11

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 12

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 13

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 14

- StringBuilder: amortize allocation by doubling on grow.

## entry 15

- Greedy by end-time picks the most non-overlapping intervals.

## entry 16

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 17

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 18

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 19

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 20

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 21

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 22

- LIS via patience: each pile holds the smallest tail of length k.

## entry 23

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 24

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 25

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 26

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 27

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 28

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 29

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 30

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 31

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 32

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 33

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 34

- Splay tree: every access splays to the root; amortized O(log n).

## entry 35

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 36

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 37

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 38

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 39

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 40

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 41

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 42

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 43

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 44

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 45

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 46

- StringBuilder: amortize allocation by doubling on grow.

## entry 47

- Euler tour flattens a tree into an array for range-query LCA.

## entry 48

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 49

- Monotonic stack pops while the new element violates the invariant.

## entry 50

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 51

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 52

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 53

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 54

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 55

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 56

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 57

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 58

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 59

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 60

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 61

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 62

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 63

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 64

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 65

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 66

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 67

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 68

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 69

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 70

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 71

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 72

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 73

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 74

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 75

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 76

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 77

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 78

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 79

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 80

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 81

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 82

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 83

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 84

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 85

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 86

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 87

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 88

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 89

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 90

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 91

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 92

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 93

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 94

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 95

- Heap when you only need top-k; full sort is wasted work.

## entry 96

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 97

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 98

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 99

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 100

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 101

- Euler tour flattens a tree into an array for range-query LCA.

## entry 102

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 103

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 104

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 105

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 106

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 107

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 108

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 109

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 110

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 111

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 112

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 113

- Monotonic stack pops while the new element violates the invariant.

## entry 114

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 115

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 116

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 117

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 118

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 119

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
