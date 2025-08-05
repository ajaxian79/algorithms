# lcs

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- LIS via patience: each pile holds the smallest tail of length k.

- Greedy by end-time picks the most non-overlapping intervals.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Monotonic stack pops while the new element violates the invariant.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Union-Find with path compression amortizes to near-O(1) per op.

- Walk both pointers from each end inward; advance the smaller side.

- Heap when you only need top-k; full sort is wasted work.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Stable sort matters when a secondary key was set in a prior pass.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 2

- Greedy by end-time picks the most non-overlapping intervals.

## entry 3

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 4

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 6

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 7

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 8

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 9

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 10

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 11

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 12

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 13

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 14

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 15

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 16

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 17

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 18

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 19

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 20

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 21

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 22

- Heap when you only need top-k; full sort is wasted work.

## entry 23

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 24

- Walk both pointers from each end inward; advance the smaller side.

## entry 25

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 26

- Euler tour flattens a tree into an array for range-query LCA.

## entry 27

- Splay tree: every access splays to the root; amortized O(log n).

## entry 28

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 29

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 30

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 31

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 32

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 33

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 34

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 35

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 36

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 37

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 38

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 39

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 40

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 41

- StringBuilder: amortize allocation by doubling on grow.

## entry 42

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 43

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 44

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 45

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 46

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 47

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 48

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 49

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 50

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 51

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 52

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 53

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 54

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 55

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 56

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 57

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 58

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 59

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 60

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 61

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 62

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 63

- Walk both pointers from each end inward; advance the smaller side.

## entry 64

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 65

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 66

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 67

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 68

- LIS via patience: each pile holds the smallest tail of length k.

## entry 69

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 70

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 71

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 72

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 73

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 74

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 75

- Walk both pointers from each end inward; advance the smaller side.

## entry 76

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 77

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 78

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 79

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 80

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 81

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 82

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 83

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 84

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 85

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 86

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 87

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 88

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 89

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 90

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 91

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 92

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 93

- Heap when you only need top-k; full sort is wasted work.

## entry 94

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 95

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 96

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 97

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 98

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 99

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 100

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 101

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 102

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 103

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 104

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 105

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 106

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 107

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 108

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 109

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 110

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 111

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 112

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 113

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 114

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 115

- Euler tour flattens a tree into an array for range-query LCA.

## entry 116

- StringBuilder: amortize allocation by doubling on grow.

## entry 117

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 118

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 119

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
