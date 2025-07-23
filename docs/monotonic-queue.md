# monotonic-queue

Pick a pivot, partition, recurse on the side that contains the kth slot.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Manacher expands around each center, reusing prior radii via mirror reflection.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Greedy by end-time picks the most non-overlapping intervals.

Union-Find with path compression amortizes to near-O(1) per op.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

BFS layers carry implicit shortest-path distance in unweighted graphs.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Heap when you only need top-k; full sort is wasted work.

Stable sort matters when a secondary key was set in a prior pass.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Morris traversal threads predecessors back to current node — O(1) extra space.

Unbounded knapsack: capacity inner ascending allows item reuse.

In-place compaction uses two pointers: read advances always, write only on keep.

Monotonic stack pops while the new element violates the invariant.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Walk both pointers from each end inward; advance the smaller side.

Merge intervals: sort by start; extend the running interval while overlapping.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

LIS via patience: each pile holds the smallest tail of length k.

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 1

LIS via patience: each pile holds the smallest tail of length k.

## entry 2

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4

Splay tree: every access splays to the root; amortized O(log n).

## entry 5

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 6

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 7

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 8

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 9

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 10

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 11

Euler tour flattens a tree into an array for range-query LCA.

## entry 12

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 13

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 14

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 15

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 16

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 17

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 18

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 19

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 20

LIS via patience: each pile holds the smallest tail of length k.

## entry 21

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 22

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 23

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 24

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 25

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 26

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 27

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 28

LIS via patience: each pile holds the smallest tail of length k.

## entry 29

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 30

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 31

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 32

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 33

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 34

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 35

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 36

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 37

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 38

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 39

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 40

Euler tour flattens a tree into an array for range-query LCA.

## entry 41

LIS via patience: each pile holds the smallest tail of length k.

## entry 42

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 43

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 44

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 45

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 46

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 47

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 48

State compression: bitmask + integer encodes a small subset cheaply.

## entry 49

Stable sort matters when a secondary key was set in a prior pass.

## entry 50

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 51

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 52

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 53

Greedy by end-time picks the most non-overlapping intervals.

## entry 54

Splay tree: every access splays to the root; amortized O(log n).

## entry 55

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 56

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 57

State compression: bitmask + integer encodes a small subset cheaply.

## entry 58

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 59

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 60

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 61

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 62

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 63

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 64

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 65

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 66

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 67

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 68

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 69

Stable sort matters when a secondary key was set in a prior pass.

## entry 70

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 71

Union-Find with path compression amortizes to near-O(1) per op.

## entry 72

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 73

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 74

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 75

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 76

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 77

Union-Find with path compression amortizes to near-O(1) per op.

## entry 78

Articulation points: same DFS as bridges, with a slightly different test.

## entry 79

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 80

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 81

Union-Find with path compression amortizes to near-O(1) per op.

## entry 82

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 83

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 84

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 85

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 86

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 87

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 88

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 89

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 90

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 91

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 92

Wavelet tree: range k-th element in O(log Σ) time.

## entry 93

StringBuilder: amortize allocation by doubling on grow.

## entry 94

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 95

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 96

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 97

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 98

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 99

Greedy by end-time picks the most non-overlapping intervals.

## entry 100

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 101

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 102

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 103

Monotonic stack pops while the new element violates the invariant.

## entry 104

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 105

LIS via patience: each pile holds the smallest tail of length k.

## entry 106

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 107

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 108

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 109

Euler tour flattens a tree into an array for range-query LCA.

## entry 110

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
