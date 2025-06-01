# centroid-decomposition

## entry 1

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 2

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 6

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 7

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 8

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 9

- Greedy by end-time picks the most non-overlapping intervals.

## entry 10

- Monotonic stack pops while the new element violates the invariant.

## entry 11

- Stable sort matters when a secondary key was set in a prior pass.

## entry 12

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 13

- Stable sort matters when a secondary key was set in a prior pass.

## entry 14

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 15

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 16

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 17

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 18

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 19

- Monotonic stack pops while the new element violates the invariant.

## entry 20

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 21

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 22

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 23

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 24

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 25

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 26

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 27

- Walk both pointers from each end inward; advance the smaller side.

## entry 28

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 29

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 30

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 31

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 32

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 33

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 34

- StringBuilder: amortize allocation by doubling on grow.

## entry 35

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 36

- Greedy by end-time picks the most non-overlapping intervals.

## entry 37

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 38

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 39

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 40

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 41

- Walk both pointers from each end inward; advance the smaller side.

## entry 42

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 43

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 44

- Stable sort matters when a secondary key was set in a prior pass.

## entry 45

- StringBuilder: amortize allocation by doubling on grow.

## entry 46

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 47

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 48

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 49

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 50

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 51

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 52

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 53

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 54

- Monotonic stack pops while the new element violates the invariant.

## entry 55

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 56

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 57

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 58

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 59

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 60

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 61

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 62

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 63

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 64

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 65

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 66

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 67

- Euler tour flattens a tree into an array for range-query LCA.

## entry 68

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 69

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 70

- Euler tour flattens a tree into an array for range-query LCA.

## entry 71

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 72

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 73

- Heap when you only need top-k; full sort is wasted work.

## entry 74

- Stable sort matters when a secondary key was set in a prior pass.

## entry 75

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 76

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 77

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 78

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 79

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 80

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 81

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 82

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 83

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 84

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 85

- Walk both pointers from each end inward; advance the smaller side.

## entry 86

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 87

- Splay tree: every access splays to the root; amortized O(log n).

## entry 88

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 89

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 90

- Greedy by end-time picks the most non-overlapping intervals.

## entry 91

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 92

- LIS via patience: each pile holds the smallest tail of length k.

## entry 93

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 94

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 95

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 96

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 97

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 98

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 99

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 100

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 101

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 102

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 103

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 104

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 105

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 106

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 107

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 108

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 109

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 110

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 111

- Backtracking template: choose, recurse, un-choose. Mutate then revert.
