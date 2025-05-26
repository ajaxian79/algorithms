# spfa

## entry 1

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 4

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 6

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 7

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 8

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 9

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 10

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 11

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 12

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 13

- Splay tree: every access splays to the root; amortized O(log n).

## entry 14

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 15

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 16

- Heap when you only need top-k; full sort is wasted work.

## entry 17

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 18

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 19

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 20

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 21

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 22

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 23

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 24

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 25

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 26

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 27

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 28

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 29

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 30

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 31

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 32

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 33

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 34

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 35

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 36

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 37

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 38

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 39

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 40

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 41

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 42

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 43

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 44

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 45

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 46

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 47

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 48

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 49

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 50

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 51

- StringBuilder: amortize allocation by doubling on grow.

## entry 52

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 53

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 54

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 55

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 56

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 57

- Stable sort matters when a secondary key was set in a prior pass.

## entry 58

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 59

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 60

- Greedy by end-time picks the most non-overlapping intervals.

## entry 61

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 62

- Stable sort matters when a secondary key was set in a prior pass.

## entry 63

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 64

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 65

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 66

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 67

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 68

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 69

- Splay tree: every access splays to the root; amortized O(log n).

## entry 70

- Walk both pointers from each end inward; advance the smaller side.

## entry 71

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 72

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 73

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 74

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 75

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 76

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 77

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 78

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 79

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 80

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 81

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 82

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 83

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 84

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 85

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 86

- StringBuilder: amortize allocation by doubling on grow.

## entry 87

- Walk both pointers from each end inward; advance the smaller side.

## entry 88

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 89

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 90

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 91

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 92

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 93

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 94

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 95

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 96

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 97

- Heap when you only need top-k; full sort is wasted work.

## entry 98

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 99

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 100

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
