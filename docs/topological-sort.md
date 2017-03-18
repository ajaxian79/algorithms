# topological-sort

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Pick a pivot, partition, recurse on the side that contains the kth slot.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Edit distance is LCS with a twist: substitution is a third option at each cell.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Union-Find with path compression amortizes to near-O(1) per op.

Manacher expands around each center, reusing prior radii via mirror reflection.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Morris traversal threads predecessors back to current node — O(1) extra space.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Stable sort matters when a secondary key was set in a prior pass.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Unbounded knapsack: capacity inner ascending allows item reuse.

Monotonic stack pops while the new element violates the invariant.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

LIS via patience: each pile holds the smallest tail of length k.

Greedy by end-time picks the most non-overlapping intervals.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Heap when you only need top-k; full sort is wasted work.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Merge intervals: sort by start; extend the running interval while overlapping.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Walk both pointers from each end inward; advance the smaller side.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 2

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 5

Articulation points: same DFS as bridges, with a slightly different test.

## entry 6

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 7

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 8

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 9

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 10

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 11

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 12

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 13

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 14

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 15

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 16

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 17

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 18

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 19

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 20

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 21

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 22

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 23

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 24

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 25

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 26

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 27

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 28

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 29

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 30

StringBuilder: amortize allocation by doubling on grow.

## entry 31

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 32

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 33

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 34

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 35

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 36

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 37

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 38

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 39

Stable sort matters when a secondary key was set in a prior pass.

## entry 40

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 41

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 42

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 43

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 44

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 45

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 46

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 47

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 48

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 49

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 50

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 51

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 52

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 53

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 54

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 55

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 56

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 57

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 58

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 59

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 60

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 61

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 62

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 63

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 64

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 65

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 66

Articulation points: same DFS as bridges, with a slightly different test.

## entry 67

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 68

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 69

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 70

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 71

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 72

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 73

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 74

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 75

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 76

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 77

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 78

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 79

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 80

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 81

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 82

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 83

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 84

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 85

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 86

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 87

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 88

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 89

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 90

Walk both pointers from each end inward; advance the smaller side.

## entry 91

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 92

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 93

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 94

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 95

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 96

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 97

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 98

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 99

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 100

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 101

Monotonic stack pops while the new element violates the invariant.

## entry 102

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 103

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 104

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 105

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 106

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 107

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 108

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 109

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 110

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 111

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 112

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 113

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 114

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 115

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 116

Monotonic stack pops while the new element violates the invariant.

## entry 117

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 118

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 119

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 120

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 121

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 122

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 123

Wavelet tree: range k-th element in O(log Σ) time.

## entry 124

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 125

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 126

Union-Find with path compression amortizes to near-O(1) per op.

## entry 127

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 128

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 129

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 130

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 131

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 132

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 133

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 134

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 135

StringBuilder: amortize allocation by doubling on grow.

## entry 136

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 137

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 138

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 139

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 140

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 141

Splay tree: every access splays to the root; amortized O(log n).

## entry 142

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 143

Euler tour flattens a tree into an array for range-query LCA.

## entry 144

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 145

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 146

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 147

Union-Find with path compression amortizes to near-O(1) per op.

## entry 148

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 149

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 150

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 151

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 152

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 153

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 154

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 155

Greedy by end-time picks the most non-overlapping intervals.

## entry 156

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 157

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 158

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 159

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 160

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 161

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 162

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 163

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 164

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 165

Heap when you only need top-k; full sort is wasted work.

## entry 166

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 167

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 168

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 169

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 170

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 171

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 172

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 173

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 174

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 175

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 176

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 177

Euler tour flattens a tree into an array for range-query LCA.

## entry 178

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 179

LIS via patience: each pile holds the smallest tail of length k.

## entry 180

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 181

Wavelet tree: range k-th element in O(log Σ) time.

## entry 182

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 183

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 184

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 185

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 186

Greedy by end-time picks the most non-overlapping intervals.

## entry 187

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 188

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 189

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 190

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 191

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 192

State compression: bitmask + integer encodes a small subset cheaply.

## entry 193

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 194

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 195

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 196

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 197

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 198

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 199

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 200

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 201

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 202

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 203

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 204

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 205

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 206

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 207

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 208

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 209

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 210

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 211

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 212

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 213

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 214

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 215

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 216

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 217

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 218

Stable sort matters when a secondary key was set in a prior pass.

## entry 219

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 220

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 221

State compression: bitmask + integer encodes a small subset cheaply.

## entry 222

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 223

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 224

Euler tour flattens a tree into an array for range-query LCA.

## entry 225

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 226

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 227

Monotonic stack pops while the new element violates the invariant.

## entry 228

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 229

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 230

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 231

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 232

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 233

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 234

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 235

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 236

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 237

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 238

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 239

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 240

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 241

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 242

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 243

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 244

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 245

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 246

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 247

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 248

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 249

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 250

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 251

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 252

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 253

Union-Find with path compression amortizes to near-O(1) per op.

## entry 254

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 255

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 256

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 257

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 258

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 259

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 260

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 261

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 262

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 263

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 264

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 265

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 266

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 267

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 268

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 269

Stable sort matters when a secondary key was set in a prior pass.

## entry 270

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 271

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 272

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 273

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 274

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 275

StringBuilder: amortize allocation by doubling on grow.

## entry 276

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 277

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 278

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 279

LIS via patience: each pile holds the smallest tail of length k.

## entry 280

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 281

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 282

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 283

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 284

Walk both pointers from each end inward; advance the smaller side.

## entry 285

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 286

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 287

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 288

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 289

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 290

State compression: bitmask + integer encodes a small subset cheaply.

## entry 291

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 292

Greedy by end-time picks the most non-overlapping intervals.

## entry 293

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 294

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 295

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 296

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 297

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 298

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 299

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 300

Walk both pointers from each end inward; advance the smaller side.

## entry 301

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 302

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 303

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 304

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 305

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 306

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 307

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 308

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 309

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 310

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 311

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 312

Euler tour flattens a tree into an array for range-query LCA.

## entry 313

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 314

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 315

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 316

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 317

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 318

Splay tree: every access splays to the root; amortized O(log n).

## entry 319

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 320

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 321

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 322

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 323

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 324

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 325

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 326

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 327

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 328

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 329

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 330

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 331

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 332

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 333

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 334

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 335

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 336

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 337

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 338

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 339

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 340

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 341

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 342

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 343

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 344

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 345

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 346

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 347

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 348

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 349

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 350

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 351

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 352

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 353

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 354

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 355

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 356

LIS via patience: each pile holds the smallest tail of length k.

## entry 357

Articulation points: same DFS as bridges, with a slightly different test.

## entry 358

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 359

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 360

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 361

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 362

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 363

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 364

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 365

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 366

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 367

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 368

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 369

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 370

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 371

Heap when you only need top-k; full sort is wasted work.

## entry 372

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 373

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 374

State compression: bitmask + integer encodes a small subset cheaply.

## entry 375

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 376

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 377

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 378

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 379

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 380

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 381

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 382

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 383

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 384

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 385

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 386

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 387

LIS via patience: each pile holds the smallest tail of length k.

## entry 388

Articulation points: same DFS as bridges, with a slightly different test.

## entry 389

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 390

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 391

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 392

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 393

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 394

Monotonic stack pops while the new element violates the invariant.

## entry 395

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 396

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 397

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 398

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 399

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 400

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 401

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 402

Euler tour flattens a tree into an array for range-query LCA.
