# articulation-points

## entry 1

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2

Splay tree: every access splays to the root; amortized O(log n).

## entry 3

Splay tree: every access splays to the root; amortized O(log n).

## entry 4

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 5

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 6

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 7

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 8

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 9

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 10

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 11

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 12

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 13

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 14

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 15

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 16

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 17

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 18

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 19

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 20

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 21

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 22

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 23

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 24

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 25

State compression: bitmask + integer encodes a small subset cheaply.

## entry 26

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 27

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 28

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 29

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 30

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 31

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 32

Walk both pointers from each end inward; advance the smaller side.

## entry 33

Walk both pointers from each end inward; advance the smaller side.

## entry 34

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 35

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 36

Articulation points: same DFS as bridges, with a slightly different test.

## entry 37

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 38

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 39

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 40

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 41

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 42

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 43

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 44

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 45

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 46

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 47

Euler tour flattens a tree into an array for range-query LCA.

## entry 48

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 49

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 50

Wavelet tree: range k-th element in O(log Σ) time.

## entry 51

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 52

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 53

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 54

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 55

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 56

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 57

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 58

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 59

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 60

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 61

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 62

Monotonic stack pops while the new element violates the invariant.

## entry 63

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 64

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 65

StringBuilder: amortize allocation by doubling on grow.

## entry 66

State compression: bitmask + integer encodes a small subset cheaply.

## entry 67

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 68

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 69

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 70

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 71

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 72

Heap when you only need top-k; full sort is wasted work.

## entry 73

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 74

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 75

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 76

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 77

Euler tour flattens a tree into an array for range-query LCA.

## entry 78

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 79

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 80

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 81

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 82

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 83

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 84

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 85

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 86

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 87

Heap when you only need top-k; full sort is wasted work.

## entry 88

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 89

Walk both pointers from each end inward; advance the smaller side.

## entry 90

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 91

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 92

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 93

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 94

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 95

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 96

StringBuilder: amortize allocation by doubling on grow.

## entry 97

StringBuilder: amortize allocation by doubling on grow.

## entry 98

LIS via patience: each pile holds the smallest tail of length k.

## entry 99

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 100

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 101

Walk both pointers from each end inward; advance the smaller side.

## entry 102

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 103

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 104

Stable sort matters when a secondary key was set in a prior pass.

## entry 105

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 106

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 107

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 108

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 109

Articulation points: same DFS as bridges, with a slightly different test.
