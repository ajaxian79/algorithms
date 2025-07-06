# state-compression

## entry 1

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 2

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 4

- Walk both pointers from each end inward; advance the smaller side.

## entry 5

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 6

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 7

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 8

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 9

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 10

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 11

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 12

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 13

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 14

- Euler tour flattens a tree into an array for range-query LCA.

## entry 15

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 16

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 17

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 18

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 19

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 20

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 21

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 22

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 23

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 24

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 25

- StringBuilder: amortize allocation by doubling on grow.

## entry 26

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 27

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 28

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 29

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 30

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 31

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 32

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 33

- Greedy by end-time picks the most non-overlapping intervals.

## entry 34

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 35

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 36

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 37

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 38

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 39

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 40

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 41

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 42

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 43

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 44

- StringBuilder: amortize allocation by doubling on grow.

## entry 45

- StringBuilder: amortize allocation by doubling on grow.

## entry 46

- StringBuilder: amortize allocation by doubling on grow.

## entry 47

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 48

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 49

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 50

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 51

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 52

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 53

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 54

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 55

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 56

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 57

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 58

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 59

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 60

- Euler tour flattens a tree into an array for range-query LCA.

## entry 61

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 62

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 63

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 64

- Splay tree: every access splays to the root; amortized O(log n).

## entry 65

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 66

- Heap when you only need top-k; full sort is wasted work.

## entry 67

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 68

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 69

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 70

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 71

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 72

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 73

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 74

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 75

- Walk both pointers from each end inward; advance the smaller side.

## entry 76

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 77

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 78

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 79

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 80

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 81

- Euler tour flattens a tree into an array for range-query LCA.

## entry 82

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 83

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 84

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 85

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 86

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 87

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 88

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 89

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 90

- Heap when you only need top-k; full sort is wasted work.

## entry 91

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 92

- Stable sort matters when a secondary key was set in a prior pass.

## entry 93

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 94

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 95

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 96

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 97

- Walk both pointers from each end inward; advance the smaller side.

## entry 98

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 99

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 100

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 101

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 102

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 103

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 104

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 105

- Greedy by end-time picks the most non-overlapping intervals.

## entry 106

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 107

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 108

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 109

- Unbounded knapsack: capacity inner ascending allows item reuse.
