# boyer-moore

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Monotonic stack pops while the new element violates the invariant.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Union-Find with path compression amortizes to near-O(1) per op.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

BFS layers carry implicit shortest-path distance in unweighted graphs.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Morris traversal threads predecessors back to current node — O(1) extra space.

Heap when you only need top-k; full sort is wasted work.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

LIS via patience: each pile holds the smallest tail of length k.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Walk both pointers from each end inward; advance the smaller side.

Unbounded knapsack: capacity inner ascending allows item reuse.

Merge intervals: sort by start; extend the running interval while overlapping.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Edit distance is LCS with a twist: substitution is a third option at each cell.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

In-place compaction uses two pointers: read advances always, write only on keep.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 5

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 6

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 7

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 8

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 9

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 10

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 11

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 12

Walk both pointers from each end inward; advance the smaller side.

## entry 13

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 14

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 15

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 16

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 17

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 18

Wavelet tree: range k-th element in O(log Σ) time.

## entry 19

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 20

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 21

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 22

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 23

Walk both pointers from each end inward; advance the smaller side.

## entry 24

Articulation points: same DFS as bridges, with a slightly different test.

## entry 25

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 26

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 27

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 28

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 29

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 30

Walk both pointers from each end inward; advance the smaller side.

## entry 31

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 32

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 33

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 34

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 35

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 36

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 37

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 38

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 39

Splay tree: every access splays to the root; amortized O(log n).

## entry 40

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 41

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 42

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 43

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 44

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 45

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 46

StringBuilder: amortize allocation by doubling on grow.

## entry 47

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 48

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 49

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 50

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 51

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 52

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 53

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 54

Monotonic stack pops while the new element violates the invariant.

## entry 55

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 56

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 57

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 58

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 59

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 60

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 61

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 62

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 63

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 64

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 65

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 66

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 67

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 68

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 69

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 70

State compression: bitmask + integer encodes a small subset cheaply.

## entry 71

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 72

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 73

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 74

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 75

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 76

Union-Find with path compression amortizes to near-O(1) per op.

## entry 77

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 78

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 79

Monotonic stack pops while the new element violates the invariant.

## entry 80

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 81

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 82

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 83

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 84

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 85

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 86

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 87

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 88

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 89

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 90

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 91

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 92

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 93

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 94

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 95

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 96

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 97

LIS via patience: each pile holds the smallest tail of length k.

## entry 98

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 99

Monotonic stack pops while the new element violates the invariant.

## entry 100

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 101

StringBuilder pitfall: reuse forces a deep copy on the first read.
