# heavy-light

## entry 1

- LIS via patience: each pile holds the smallest tail of length k.

## entry 2

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 3

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 5

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 6

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 7

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 8

- Walk both pointers from each end inward; advance the smaller side.

## entry 9

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 10

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 11

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 12

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 13

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 14

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 15

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 16

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 17

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 18

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 19

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 20

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 21

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 22

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 23

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 24

- Euler tour flattens a tree into an array for range-query LCA.

## entry 25

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 26

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 27

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 28

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 29

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 30

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 31

- Monotonic stack pops while the new element violates the invariant.

## entry 32

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 33

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 34

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 35

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 36

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 37

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 38

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 39

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 40

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 41

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 42

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 43

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 44

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 45

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 46

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 47

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 48

- Euler tour flattens a tree into an array for range-query LCA.

## entry 49

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 50

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 51

- Greedy by end-time picks the most non-overlapping intervals.

## entry 52

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 53

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 54

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 55

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 56

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 57

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 58

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 59

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 60

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 61

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 62

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 63

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 64

- Heap when you only need top-k; full sort is wasted work.

## entry 65

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 66

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 67

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 68

- Stable sort matters when a secondary key was set in a prior pass.

## entry 69

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 70

- Monotonic stack pops while the new element violates the invariant.

## entry 71

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 72

- Splay tree: every access splays to the root; amortized O(log n).

## entry 73

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 74

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 75

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 76

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 77

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 78

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 79

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 80

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 81

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 82

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 83

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 84

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 85

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 86

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 87

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 88

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 89

- Heap when you only need top-k; full sort is wasted work.

## entry 90

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 91

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 92

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 93

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 94

- Monotonic stack pops while the new element violates the invariant.

## entry 95

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 96

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 97

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 98

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 99

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 100

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 101

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 102

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 103

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 104

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 105

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 106

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 107

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 108

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 109

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 110

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 111

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 112

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 113

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 114

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 115

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 116

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 117

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 118

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 119

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
