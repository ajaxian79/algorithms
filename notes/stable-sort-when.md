# stable-sort-when

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- In-place compaction uses two pointers: read advances always, write only on keep.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Stable sort matters when a secondary key was set in a prior pass.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Walk both pointers from each end inward; advance the smaller side.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- LIS via patience: each pile holds the smallest tail of length k.

- Greedy by end-time picks the most non-overlapping intervals.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Monotonic stack pops while the new element violates the invariant.

- Merge intervals: sort by start; extend the running interval while overlapping.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Heap when you only need top-k; full sort is wasted work.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Union-Find with path compression amortizes to near-O(1) per op.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 1

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 4

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 6

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 7

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 8

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 9

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 10

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 11

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 12

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 13

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 14

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 15

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 16

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 17

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 18

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 19

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 20

- Monotonic stack pops while the new element violates the invariant.

## entry 21

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 22

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 23

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 24

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 25

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 26

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 27

- Walk both pointers from each end inward; advance the smaller side.

## entry 28

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 29

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 30

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 31

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 32

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 33

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 34

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 35

- Stable sort matters when a secondary key was set in a prior pass.

## entry 36

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 37

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 38

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 39

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 40

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 41

- Euler tour flattens a tree into an array for range-query LCA.

## entry 42

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 43

- Stable sort matters when a secondary key was set in a prior pass.

## entry 44

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 45

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 46

- Greedy by end-time picks the most non-overlapping intervals.

## entry 47

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 48

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 49

- Splay tree: every access splays to the root; amortized O(log n).

## entry 50

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 51

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 52

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 53

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 54

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 55

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 56

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 57

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 58

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 59

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 60

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 61

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 62

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 63

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 64

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 65

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 66

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 67

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 68

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 69

- StringBuilder: amortize allocation by doubling on grow.

## entry 70

- Monotonic stack pops while the new element violates the invariant.

## entry 71

- Walk both pointers from each end inward; advance the smaller side.

## entry 72

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 73

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 74

- Monotonic stack pops while the new element violates the invariant.

## entry 75

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 76

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 77

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 78

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 79

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 80

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 81

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 82

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 83

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 84

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 85

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 86

- Walk both pointers from each end inward; advance the smaller side.

## entry 87

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 88

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 89

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 90

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 91

- Stable sort matters when a secondary key was set in a prior pass.

## entry 92

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 93

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 94

- LIS via patience: each pile holds the smallest tail of length k.

## entry 95

- LIS via patience: each pile holds the smallest tail of length k.

## entry 96

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 97

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 98

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 99

- LIS via patience: each pile holds the smallest tail of length k.

## entry 100

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 101

- Greedy by end-time picks the most non-overlapping intervals.

## entry 102

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 103

- Euler tour flattens a tree into an array for range-query LCA.

## entry 104

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 105

- Greedy by end-time picks the most non-overlapping intervals.

## entry 106

- Monotonic stack pops while the new element violates the invariant.

## entry 107

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 108

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
