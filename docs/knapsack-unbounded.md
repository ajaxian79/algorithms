# knapsack-unbounded

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Greedy by end-time picks the most non-overlapping intervals.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Walk both pointers from each end inward; advance the smaller side.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Unbounded knapsack: capacity inner ascending allows item reuse.

Monotonic stack pops while the new element violates the invariant.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

BFS layers carry implicit shortest-path distance in unweighted graphs.

LIS via patience: each pile holds the smallest tail of length k.

Heap when you only need top-k; full sort is wasted work.

In-place compaction uses two pointers: read advances always, write only on keep.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Stable sort matters when a secondary key was set in a prior pass.

Morris traversal threads predecessors back to current node — O(1) extra space.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Union-Find with path compression amortizes to near-O(1) per op.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 1

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 2

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 4

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 5

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 6

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 7

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 8

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 9

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 10

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 11

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 12

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 13

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 14

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 15

LIS via patience: each pile holds the smallest tail of length k.

## entry 16

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 17

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 18

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 19

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 20

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 21

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 22

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 23

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 24

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 25

Walk both pointers from each end inward; advance the smaller side.

## entry 26

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 27

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 28

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 29

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 30

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 31

Euler tour flattens a tree into an array for range-query LCA.

## entry 32

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 33

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 34

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 35

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 36

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 37

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 38

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 39

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 40

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 41

Euler tour flattens a tree into an array for range-query LCA.

## entry 42

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 43

StringBuilder: amortize allocation by doubling on grow.

## entry 44

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 45

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 46

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 47

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 48

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 49

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 50

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 51

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 52

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 53

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 54

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 55

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 56

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 57

Stable sort matters when a secondary key was set in a prior pass.

## entry 58

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 59

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 60

Stable sort matters when a secondary key was set in a prior pass.

## entry 61

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 62

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 63

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 64

LIS via patience: each pile holds the smallest tail of length k.

## entry 65

Walk both pointers from each end inward; advance the smaller side.

## entry 66

Heap when you only need top-k; full sort is wasted work.

## entry 67

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 68

Union-Find with path compression amortizes to near-O(1) per op.

## entry 69

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 70

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 71

Stable sort matters when a secondary key was set in a prior pass.

## entry 72

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 73

Walk both pointers from each end inward; advance the smaller side.

## entry 74

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 75

Greedy by end-time picks the most non-overlapping intervals.

## entry 76

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 77

Monotonic stack pops while the new element violates the invariant.

## entry 78

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 79

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 80

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 81

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 82

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 83

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 84

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 85

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 86

Greedy by end-time picks the most non-overlapping intervals.

## entry 87

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 88

Greedy by end-time picks the most non-overlapping intervals.

## entry 89

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 90

State compression: bitmask + integer encodes a small subset cheaply.

## entry 91

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 92

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 93

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 94

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 95

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 96

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 97

Union-Find with path compression amortizes to near-O(1) per op.

## entry 98

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 99

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 100

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 101

Heap when you only need top-k; full sort is wasted work.

## entry 102

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 103

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 104

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 105

LIS via patience: each pile holds the smallest tail of length k.

## entry 106

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 107

Stable sort matters when a secondary key was set in a prior pass.

## entry 108

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 109

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 110

Euler tour flattens a tree into an array for range-query LCA.

## entry 111

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 112

Euler tour flattens a tree into an array for range-query LCA.

## entry 113

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 114

Euler tour flattens a tree into an array for range-query LCA.

## entry 115

Union-Find with path compression amortizes to near-O(1) per op.

## entry 116

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 117

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 118

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 119

Splay tree: every access splays to the root; amortized O(log n).

## entry 120

Heap when you only need top-k; full sort is wasted work.

## entry 121

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 122

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 123

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 124

State compression: bitmask + integer encodes a small subset cheaply.

## entry 125

Wavelet tree: range k-th element in O(log Σ) time.

## entry 126

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 127

Wavelet tree: range k-th element in O(log Σ) time.

## entry 128

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 129

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 130

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 131

Wavelet tree: range k-th element in O(log Σ) time.

## entry 132

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 133

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 134

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 135

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 136

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 137

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 138

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 139

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 140

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 141

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 142

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 143

Heap when you only need top-k; full sort is wasted work.

## entry 144

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 145

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 146

Wavelet tree: range k-th element in O(log Σ) time.

## entry 147

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 148

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 149

Union-Find with path compression amortizes to near-O(1) per op.

## entry 150

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 151

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 152

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 153

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 154

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 155

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 156

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 157

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 158

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 159

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 160

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 161

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 162

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 163

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 164

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 165

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 166

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 167

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 168

Union-Find with path compression amortizes to near-O(1) per op.

## entry 169

Heap when you only need top-k; full sort is wasted work.

## entry 170

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 171

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 172

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 173

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 174

Stable sort matters when a secondary key was set in a prior pass.

## entry 175

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 176

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 177

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 178

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 179

Monotonic stack pops while the new element violates the invariant.

## entry 180

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 181

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 182

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 183

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 184

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 185

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 186

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 187

Greedy by end-time picks the most non-overlapping intervals.

## entry 188

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 189

Monotonic stack pops while the new element violates the invariant.

## entry 190

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 191

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 192

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 193

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 194

Stable sort matters when a secondary key was set in a prior pass.

## entry 195

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 196

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 197

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 198

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 199

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 200

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 201

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 202

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 203

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 204

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 205

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 206

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 207

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 208

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 209

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 210

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 211

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 212

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 213

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 214

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 215

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 216

Articulation points: same DFS as bridges, with a slightly different test.

## entry 217

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 218

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 219

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 220

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 221

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 222

ASCII rules are a strict subset of UTF-8; no special handling needed.
