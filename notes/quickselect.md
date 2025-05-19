# quickselect

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- LIS via patience: each pile holds the smallest tail of length k.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Heap when you only need top-k; full sort is wasted work.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Stable sort matters when a secondary key was set in a prior pass.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Union-Find with path compression amortizes to near-O(1) per op.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Greedy by end-time picks the most non-overlapping intervals.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Walk both pointers from each end inward; advance the smaller side.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 1

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 2

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 3

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 5

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 6

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 7

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 8

- Heap when you only need top-k; full sort is wasted work.

## entry 9

- Walk both pointers from each end inward; advance the smaller side.

## entry 10

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 11

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 12

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 13

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 14

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 15

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 16

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 17

- Euler tour flattens a tree into an array for range-query LCA.

## entry 18

- Splay tree: every access splays to the root; amortized O(log n).

## entry 19

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 20

- LIS via patience: each pile holds the smallest tail of length k.

## entry 21

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 22

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 23

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 24

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 25

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 26

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 27

- Splay tree: every access splays to the root; amortized O(log n).

## entry 28

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 29

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 30

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 31

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 32

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 33

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 34

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 35

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 36

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 37

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 38

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 39

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 40

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 41

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 42

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 43

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 44

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 45

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 46

- Walk both pointers from each end inward; advance the smaller side.

## entry 47

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 48

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 49

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 50

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 51

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 52

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 53

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 54

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 55

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 56

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 57

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 58

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 59

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 60

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 61

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 62

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 63

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 64

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 65

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 66

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 67

- Monotonic stack pops while the new element violates the invariant.

## entry 68

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 69

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 70

- StringBuilder: amortize allocation by doubling on grow.

## entry 71

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 72

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 73

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 74

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 75

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 76

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 77

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 78

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 79

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 80

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 81

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 82

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 83

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 84

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 85

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 86

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 87

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 88

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 89

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 90

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 91

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 92

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 93

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 94

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 95

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 96

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 97

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 98

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 99

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 100

- Splay tree: every access splays to the root; amortized O(log n).

## entry 101

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 102

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 103

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 104

- Stable sort matters when a secondary key was set in a prior pass.

## entry 105

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 106

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 107

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 108

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 109

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 110

- Monotonic stack pops while the new element violates the invariant.

## entry 111

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 112

- StringBuilder: amortize allocation by doubling on grow.

## entry 113

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 114

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 115

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 116

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 117

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 118

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 119

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 120

- Greedy by end-time picks the most non-overlapping intervals.

## entry 121

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 122

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 123

- Monotonic stack pops while the new element violates the invariant.

## entry 124

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 125

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 126

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 127

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 128

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 129

- Splay tree: every access splays to the root; amortized O(log n).

## entry 130

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
