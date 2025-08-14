# centroid-decomposition

## entry 1

Wavelet tree: range k-th element in O(log Σ) time.

## entry 2

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 4

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 5

Splay tree: every access splays to the root; amortized O(log n).

## entry 6

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 7

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 8

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 9

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 10

Union-Find with path compression amortizes to near-O(1) per op.

## entry 11

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 12

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 13

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 14

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 15

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 16

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 17

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 18

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 19

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 20

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 21

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 22

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 23

Splay tree: every access splays to the root; amortized O(log n).

## entry 24

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 25

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 26

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 27

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 28

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 29

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 30

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 31

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 32

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 33

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 34

StringBuilder: amortize allocation by doubling on grow.

## entry 35

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 36

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 37

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 38

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 39

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 40

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 41

Stable sort matters when a secondary key was set in a prior pass.

## entry 42

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 43

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 44

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 45

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 46

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 47

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 48

Splay tree: every access splays to the root; amortized O(log n).

## entry 49

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 50

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 51

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 52

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 53

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 54

Stable sort matters when a secondary key was set in a prior pass.

## entry 55

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 56

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 57

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 58

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 59

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 60

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 61

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 62

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 63

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 64

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 65

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 66

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 67

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 68

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 69

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 70

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 71

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 72

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 73

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 74

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 75

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 76

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 77

State compression: bitmask + integer encodes a small subset cheaply.

## entry 78

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 79

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 80

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 81

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 82

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 83

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 84

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 85

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 86

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 87

Monotonic stack pops while the new element violates the invariant.

## entry 88

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 89

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 90

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 91

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 92

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 93

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 94

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 95

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 96

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 97

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 98

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 99

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 100

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 101

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 102

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 103

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 104

Monotonic stack pops while the new element violates the invariant.

## entry 105

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 106

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 107

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 108

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 109

Stable sort matters when a secondary key was set in a prior pass.

## entry 110

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 111

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 112

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 113

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 114

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 115

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 116

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 117

Greedy by end-time picks the most non-overlapping intervals.

## entry 118

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 119

Walk both pointers from each end inward; advance the smaller side.

## entry 120

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 121

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 122

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 123

Articulation points: same DFS as bridges, with a slightly different test.

## entry 124

Interval DP: solve all `[l, r]` ranges from short to long.
