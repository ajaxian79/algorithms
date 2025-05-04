# bitmask

Morris traversal threads predecessors back to current node — O(1) extra space.

Union-Find with path compression amortizes to near-O(1) per op.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

LIS via patience: each pile holds the smallest tail of length k.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Walk both pointers from each end inward; advance the smaller side.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Stable sort matters when a secondary key was set in a prior pass.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Manacher expands around each center, reusing prior radii via mirror reflection.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Merge intervals: sort by start; extend the running interval while overlapping.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Heap when you only need top-k; full sort is wasted work.

In-place compaction uses two pointers: read advances always, write only on keep.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Unbounded knapsack: capacity inner ascending allows item reuse.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Greedy by end-time picks the most non-overlapping intervals.

## entry 1

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2

Greedy by end-time picks the most non-overlapping intervals.

## entry 3

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 4

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 5

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 6

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 7

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 8

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 9

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 10

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 11

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 12

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 13

Wavelet tree: range k-th element in O(log Σ) time.

## entry 14

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 15

LIS via patience: each pile holds the smallest tail of length k.

## entry 16

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 17

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 18

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 19

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 20

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 21

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 22

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 23

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 24

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 25

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 26

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 27

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 28

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 29

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 30

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 31

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 32

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 33

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 34

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 35

Stable sort matters when a secondary key was set in a prior pass.

## entry 36

LIS via patience: each pile holds the smallest tail of length k.

## entry 37

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 38

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 39

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 40

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 41

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 42

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 43

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 44

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 45

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 46

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 47

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 48

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 49

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 50

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 51

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 52

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 53

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 54

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 55

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 56

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 57

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 58

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 59

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 60

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 61

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 62

Stable sort matters when a secondary key was set in a prior pass.

## entry 63

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 64

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 65

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 66

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 67

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 68

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 69

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 70

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 71

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 72

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 73

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 74

Monotonic stack pops while the new element violates the invariant.

## entry 75

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 76

Union-Find with path compression amortizes to near-O(1) per op.

## entry 77

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 78

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 79

Walk both pointers from each end inward; advance the smaller side.

## entry 80

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 81

Wavelet tree: range k-th element in O(log Σ) time.

## entry 82

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 83

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 84

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 85

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 86

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 87

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 88

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 89

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 90

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 91

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 92

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 93

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 94

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 95

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 96

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 97

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 98

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 99

Monotonic stack pops while the new element violates the invariant.

## entry 100

In-place compaction uses two pointers: read advances always, write only on keep.
