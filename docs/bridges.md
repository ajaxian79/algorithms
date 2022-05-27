# bridges

## entry 1

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 2

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 4

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 5

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 6

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 7

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 8

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 9

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 10

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 11

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 12

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 13

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 14

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 15

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 16

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 17

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 18

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 19

Stable sort matters when a secondary key was set in a prior pass.

## entry 20

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 21

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 22

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 23

Greedy by end-time picks the most non-overlapping intervals.

## entry 24

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 25

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 26

Euler tour flattens a tree into an array for range-query LCA.

## entry 27

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 28

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 29

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 30

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 31

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 32

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 33

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 34

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 35

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 36

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 37

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 38

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 39

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 40

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 41

Stable sort matters when a secondary key was set in a prior pass.

## entry 42

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 43

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 44

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 45

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 46

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 47

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 48

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 49

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 50

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 51

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 52

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 53

Stable sort matters when a secondary key was set in a prior pass.

## entry 54

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 55

Union-Find with path compression amortizes to near-O(1) per op.

## entry 56

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 57

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 58

LIS via patience: each pile holds the smallest tail of length k.

## entry 59

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 60

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 61

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 62

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 63

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 64

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 65

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 66

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 67

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 68

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 69

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 70

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 71

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 72

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 73

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 74

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 75

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 76

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 77

Union-Find with path compression amortizes to near-O(1) per op.

## entry 78

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 79

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 80

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 81

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 82

Wavelet tree: range k-th element in O(log Σ) time.

## entry 83

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 84

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 85

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 86

Union-Find with path compression amortizes to near-O(1) per op.

## entry 87

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 88

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 89

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 90

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 91

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 92

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 93

Walk both pointers from each end inward; advance the smaller side.

## entry 94

Euler tour flattens a tree into an array for range-query LCA.

## entry 95

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 96

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 97

LIS via patience: each pile holds the smallest tail of length k.

## entry 98

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 99

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 100

Greedy by end-time picks the most non-overlapping intervals.

## entry 101

Walk both pointers from each end inward; advance the smaller side.

## entry 102

State compression: bitmask + integer encodes a small subset cheaply.

## entry 103

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 104

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 105

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 106

StringBuilder: amortize allocation by doubling on grow.

## entry 107

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 108

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 109

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 110

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 111

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 112

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 113

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 114

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 115

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 116

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 117

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 118

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 119

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 120

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 121

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 122

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 123

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 124

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 125

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 126

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 127

Walk both pointers from each end inward; advance the smaller side.

## entry 128

Greedy by end-time picks the most non-overlapping intervals.

## entry 129

Splay tree: every access splays to the root; amortized O(log n).

## entry 130

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 131

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 132

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 133

State compression: bitmask + integer encodes a small subset cheaply.

## entry 134

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 135

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 136

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 137

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 138

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 139

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 140

StringBuilder: amortize allocation by doubling on grow.

## entry 141

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 142

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 143

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 144

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 145

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 146

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 147

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 148

Monotonic stack pops while the new element violates the invariant.

## entry 149

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 150

Wavelet tree: range k-th element in O(log Σ) time.

## entry 151

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 152

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 153

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 154

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 155

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 156

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 157

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 158

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 159

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 160

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 161

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 162

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 163

Euler tour flattens a tree into an array for range-query LCA.

## entry 164

Heap when you only need top-k; full sort is wasted work.

## entry 165

State compression: bitmask + integer encodes a small subset cheaply.

## entry 166

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 167

Stable sort matters when a secondary key was set in a prior pass.

## entry 168

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 169

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 170

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 171

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 172

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 173

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 174

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 175

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 176

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 177

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 178

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 179

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 180

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 181

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 182

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 183

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 184

Monotonic stack pops while the new element violates the invariant.

## entry 185

Greedy by end-time picks the most non-overlapping intervals.

## entry 186

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 187

Heap when you only need top-k; full sort is wasted work.

## entry 188

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 189

LIS via patience: each pile holds the smallest tail of length k.

## entry 190

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 191

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 192

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 193

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 194

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 195

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 196

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 197

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 198

Stable sort matters when a secondary key was set in a prior pass.

## entry 199

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 200

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 201

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 202

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 203

StringBuilder: amortize allocation by doubling on grow.

## entry 204

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 205

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 206

Union-Find with path compression amortizes to near-O(1) per op.

## entry 207

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 208

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 209

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 210

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 211

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 212

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 213

State compression: bitmask + integer encodes a small subset cheaply.

## entry 214

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 215

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 216

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 217

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 218

Union-Find with path compression amortizes to near-O(1) per op.

## entry 219

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 220

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 221

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 222

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 223

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 224

StringBuilder: amortize allocation by doubling on grow.

## entry 225

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 226

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 227

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 228

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 229

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 230

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 231

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 232

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 233

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 234

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
