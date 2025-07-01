# binary-search

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

LIS via patience: each pile holds the smallest tail of length k.

Edit distance is LCS with a twist: substitution is a third option at each cell.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Stable sort matters when a secondary key was set in a prior pass.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Merge intervals: sort by start; extend the running interval while overlapping.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Morris traversal threads predecessors back to current node — O(1) extra space.

Monotonic stack pops while the new element violates the invariant.

Heap when you only need top-k; full sort is wasted work.

In-place compaction uses two pointers: read advances always, write only on keep.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Union-Find with path compression amortizes to near-O(1) per op.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Unbounded knapsack: capacity inner ascending allows item reuse.

Walk both pointers from each end inward; advance the smaller side.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 1

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 3

Stable sort matters when a secondary key was set in a prior pass.

## entry 4

Articulation points: same DFS as bridges, with a slightly different test.

## entry 5

Walk both pointers from each end inward; advance the smaller side.

## entry 6

State compression: bitmask + integer encodes a small subset cheaply.

## entry 7

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 8

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 9

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 10

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 11

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 12

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 13

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 14

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 15

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 16

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 17

Articulation points: same DFS as bridges, with a slightly different test.

## entry 18

StringBuilder: amortize allocation by doubling on grow.

## entry 19

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 20

Euler tour flattens a tree into an array for range-query LCA.

## entry 21

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 22

Walk both pointers from each end inward; advance the smaller side.

## entry 23

Walk both pointers from each end inward; advance the smaller side.

## entry 24

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 25

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 26

Walk both pointers from each end inward; advance the smaller side.

## entry 27

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 28

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 29

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 30

Euler tour flattens a tree into an array for range-query LCA.

## entry 31

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 32

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 33

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 34

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 35

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 36

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 37

Articulation points: same DFS as bridges, with a slightly different test.

## entry 38

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 39

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 40

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 41

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 42

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 43

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 44

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 45

Splay tree: every access splays to the root; amortized O(log n).

## entry 46

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 47

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 48

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 49

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 50

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 51

Walk both pointers from each end inward; advance the smaller side.

## entry 52

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 53

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 54

StringBuilder: amortize allocation by doubling on grow.

## entry 55

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 56

Greedy by end-time picks the most non-overlapping intervals.

## entry 57

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 58

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 59

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 60

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 61

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 62

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 63

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 64

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 65

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 66

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 67

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 68

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 69

Heap when you only need top-k; full sort is wasted work.

## entry 70

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 71

Monotonic stack pops while the new element violates the invariant.

## entry 72

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 73

Wavelet tree: range k-th element in O(log Σ) time.

## entry 74

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 75

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 76

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 77

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 78

StringBuilder: amortize allocation by doubling on grow.

## entry 79

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 80

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 81

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 82

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 83

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 84

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 85

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 86

Stable sort matters when a secondary key was set in a prior pass.

## entry 87

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 88

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 89

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 90

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 91

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 92

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 93

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 94

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 95

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 96

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 97

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 98

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 99

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 100

Walk both pointers from each end inward; advance the smaller side.

## entry 101

LIS via patience: each pile holds the smallest tail of length k.

## entry 102

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 103

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 104

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 105

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 106

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 107

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 108

Walk both pointers from each end inward; advance the smaller side.
