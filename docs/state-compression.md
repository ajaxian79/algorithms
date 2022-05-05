# state-compression

## entry 1

Greedy by end-time picks the most non-overlapping intervals.

## entry 2

Splay tree: every access splays to the root; amortized O(log n).

## entry 3

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 6

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 7

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 8

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 9

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 10

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 11

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 12

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 13

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 14

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 15

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 16

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 17

LIS via patience: each pile holds the smallest tail of length k.

## entry 18

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 19

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 20

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 21

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 22

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 23

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 24

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 25

State compression: bitmask + integer encodes a small subset cheaply.

## entry 26

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 27

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 28

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 29

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 30

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 31

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 32

Wavelet tree: range k-th element in O(log Σ) time.

## entry 33

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 34

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 35

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 36

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 37

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 38

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 39

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 40

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 41

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 42

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 43

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 44

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 45

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 46

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 47

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 48

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 49

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 50

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 51

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 52

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 53

Stable sort matters when a secondary key was set in a prior pass.

## entry 54

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 55

Euler tour flattens a tree into an array for range-query LCA.

## entry 56

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 57

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 58

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 59

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 60

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 61

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 62

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 63

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 64

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 65

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 66

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 67

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 68

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 69

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 70

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 71

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 72

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 73

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 74

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 75

Union-Find with path compression amortizes to near-O(1) per op.

## entry 76

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 77

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 78

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 79

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 80

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 81

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 82

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 83

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 84

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 85

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 86

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 87

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 88

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 89

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 90

Euler tour flattens a tree into an array for range-query LCA.

## entry 91

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 92

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 93

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 94

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 95

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 96

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 97

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 98

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 99

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 100

Splay tree: every access splays to the root; amortized O(log n).

## entry 101

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 102

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 103

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 104

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 105

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 106

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 107

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 108

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 109

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 110

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 111

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 112

LIS via patience: each pile holds the smallest tail of length k.

## entry 113

StringBuilder: amortize allocation by doubling on grow.

## entry 114

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 115

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 116

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 117

StringBuilder: amortize allocation by doubling on grow.

## entry 118

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 119

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 120

Walk both pointers from each end inward; advance the smaller side.

## entry 121

LIS via patience: each pile holds the smallest tail of length k.

## entry 122

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 123

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 124

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 125

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 126

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 127

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 128

Greedy by end-time picks the most non-overlapping intervals.

## entry 129

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 130

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 131

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 132

Euler tour flattens a tree into an array for range-query LCA.

## entry 133

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 134

LIS via patience: each pile holds the smallest tail of length k.

## entry 135

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 136

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 137

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 138

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 139

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 140

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 141

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 142

Monotonic stack pops while the new element violates the invariant.

## entry 143

Monotonic stack pops while the new element violates the invariant.

## entry 144

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 145

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 146

Union-Find with path compression amortizes to near-O(1) per op.

## entry 147

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 148

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 149

Monotonic stack pops while the new element violates the invariant.

## entry 150

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 151

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 152

LIS via patience: each pile holds the smallest tail of length k.

## entry 153

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 154

Articulation points: same DFS as bridges, with a slightly different test.

## entry 155

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 156

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 157

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 158

Walk both pointers from each end inward; advance the smaller side.

## entry 159

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 160

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 161

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 162

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 163

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 164

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 165

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 166

LIS via patience: each pile holds the smallest tail of length k.

## entry 167

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 168

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 169

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 170

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 171

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 172

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 173

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 174

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 175

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 176

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 177

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 178

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 179

Wavelet tree: range k-th element in O(log Σ) time.

## entry 180

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 181

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 182

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 183

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 184

StringBuilder: amortize allocation by doubling on grow.

## entry 185

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 186

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 187

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 188

Tabulation wins when iteration order is obvious and stack depth would blow up.
