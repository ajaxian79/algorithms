# in-place-rules

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Pick a pivot, partition, recurse on the side that contains the kth slot.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Walk both pointers from each end inward; advance the smaller side.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Union-Find with path compression amortizes to near-O(1) per op.

Greedy by end-time picks the most non-overlapping intervals.

Unbounded knapsack: capacity inner ascending allows item reuse.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

LIS via patience: each pile holds the smallest tail of length k.

Manacher expands around each center, reusing prior radii via mirror reflection.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Heap when you only need top-k; full sort is wasted work.

Stable sort matters when a secondary key was set in a prior pass.

Monotonic stack pops while the new element violates the invariant.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 1

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 4

Greedy by end-time picks the most non-overlapping intervals.

## entry 5

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 6

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 7

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 8

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 9

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 10

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 11

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 12

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 13

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 14

Walk both pointers from each end inward; advance the smaller side.

## entry 15

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 16

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 17

Articulation points: same DFS as bridges, with a slightly different test.

## entry 18

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 19

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 20

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 21

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 22

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 23

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 24

Stable sort matters when a secondary key was set in a prior pass.

## entry 25

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 26

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 27

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 28

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 29

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 30

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 31

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 32

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 33

StringBuilder: amortize allocation by doubling on grow.

## entry 34

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 35

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 36

StringBuilder: amortize allocation by doubling on grow.

## entry 37

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 38

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 39

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 40

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 41

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 42

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 43

Articulation points: same DFS as bridges, with a slightly different test.

## entry 44

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 45

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 46

Walk both pointers from each end inward; advance the smaller side.

## entry 47

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 48

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 49

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 50

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 51

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 52

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 53

Stable sort matters when a secondary key was set in a prior pass.

## entry 54

Articulation points: same DFS as bridges, with a slightly different test.

## entry 55

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 56

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 57

State compression: bitmask + integer encodes a small subset cheaply.

## entry 58

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 59

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 60

Monotonic stack pops while the new element violates the invariant.

## entry 61

Stable sort matters when a secondary key was set in a prior pass.

## entry 62

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 63

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 64

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 65

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 66

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 67

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 68

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 69

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 70

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 71

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 72

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 73

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 74

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 75

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 76

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 77

Wavelet tree: range k-th element in O(log Σ) time.

## entry 78

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 79

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 80

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 81

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 82

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 83

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 84

Heap when you only need top-k; full sort is wasted work.

## entry 85

State compression: bitmask + integer encodes a small subset cheaply.

## entry 86

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 87

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 88

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 89

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 90

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 91

Union-Find with path compression amortizes to near-O(1) per op.

## entry 92

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 93

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 94

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 95

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 96

LIS via patience: each pile holds the smallest tail of length k.

## entry 97

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 98

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 99

Splay tree: every access splays to the root; amortized O(log n).

## entry 100

Union-Find with path compression amortizes to near-O(1) per op.

## entry 101

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 102

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 103

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 104

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 105

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 106

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 107

State compression: bitmask + integer encodes a small subset cheaply.

## entry 108

Wavelet tree: range k-th element in O(log Σ) time.

## entry 109

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 110

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 111

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 112

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 113

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 114

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 115

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 116

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 117

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 118

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 119

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 120

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 121

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 122

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 123

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 124

StringBuilder: amortize allocation by doubling on grow.

## entry 125

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 126

State compression: bitmask + integer encodes a small subset cheaply.

## entry 127

Stable sort matters when a secondary key was set in a prior pass.

## entry 128

Euler tour flattens a tree into an array for range-query LCA.

## entry 129

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 130

Walk both pointers from each end inward; advance the smaller side.

## entry 131

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 132

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 133

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 134

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 135

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 136

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 137

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 138

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 139

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 140

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 141

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 142

StringBuilder: amortize allocation by doubling on grow.

## entry 143

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 144

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 145

Interval DP: solve all `[l, r]` ranges from short to long.
