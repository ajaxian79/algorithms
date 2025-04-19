# lcs

Manacher expands around each center, reusing prior radii via mirror reflection.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

In-place compaction uses two pointers: read advances always, write only on keep.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Greedy by end-time picks the most non-overlapping intervals.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

LIS via patience: each pile holds the smallest tail of length k.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Stable sort matters when a secondary key was set in a prior pass.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Morris traversal threads predecessors back to current node — O(1) extra space.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Union-Find with path compression amortizes to near-O(1) per op.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Monotonic stack pops while the new element violates the invariant.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Heap when you only need top-k; full sort is wasted work.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Merge intervals: sort by start; extend the running interval while overlapping.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Unbounded knapsack: capacity inner ascending allows item reuse.

Walk both pointers from each end inward; advance the smaller side.

## entry 1

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 2

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 5

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 6

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 7

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 8

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 9

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 10

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 11

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 12

Heap when you only need top-k; full sort is wasted work.

## entry 13

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 14

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 15

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 16

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 17

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 18

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 19

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 20

Heap when you only need top-k; full sort is wasted work.

## entry 21

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 22

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 23

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 24

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 25

Splay tree: every access splays to the root; amortized O(log n).

## entry 26

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 27

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 28

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 29

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 30

Euler tour flattens a tree into an array for range-query LCA.

## entry 31

StringBuilder: amortize allocation by doubling on grow.

## entry 32

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 33

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 34

Union-Find with path compression amortizes to near-O(1) per op.

## entry 35

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 36

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 37

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 38

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 39

Walk both pointers from each end inward; advance the smaller side.

## entry 40

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 41

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 42

Heap when you only need top-k; full sort is wasted work.

## entry 43

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 44

Stable sort matters when a secondary key was set in a prior pass.

## entry 45

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 46

Wavelet tree: range k-th element in O(log Σ) time.

## entry 47

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 48

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 49

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 50

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 51

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 52

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 53

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 54

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 55

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 56

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 57

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 58

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 59

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 60

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 61

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 62

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 63

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 64

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 65

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 66

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 67

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 68

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 69

Heap when you only need top-k; full sort is wasted work.

## entry 70

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 71

Heap when you only need top-k; full sort is wasted work.

## entry 72

Walk both pointers from each end inward; advance the smaller side.

## entry 73

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 74

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 75

Monotonic stack pops while the new element violates the invariant.

## entry 76

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 77

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 78

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 79

Greedy by end-time picks the most non-overlapping intervals.

## entry 80

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 81

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 82

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 83

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 84

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 85

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 86

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 87

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 88

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 89

Stable sort matters when a secondary key was set in a prior pass.

## entry 90

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 91

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 92

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 93

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 94

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 95

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 96

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 97

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 98

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 99

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 100

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 101

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 102

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 103

Euler tour flattens a tree into an array for range-query LCA.

## entry 104

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 105

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 106

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 107

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 108

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 109

Articulation points: same DFS as bridges, with a slightly different test.

## entry 110

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
