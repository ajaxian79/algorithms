# iterative-traversals

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Unbounded knapsack: capacity inner ascending allows item reuse.

Merge intervals: sort by start; extend the running interval while overlapping.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

In-place compaction uses two pointers: read advances always, write only on keep.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

LIS via patience: each pile holds the smallest tail of length k.

Heap when you only need top-k; full sort is wasted work.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Stable sort matters when a secondary key was set in a prior pass.

Monotonic stack pops while the new element violates the invariant.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Union-Find with path compression amortizes to near-O(1) per op.

Pick a pivot, partition, recurse on the side that contains the kth slot.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Greedy by end-time picks the most non-overlapping intervals.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Walk both pointers from each end inward; advance the smaller side.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

BFS layers carry implicit shortest-path distance in unweighted graphs.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 1

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 2

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 6

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 7

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 8

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 9

Articulation points: same DFS as bridges, with a slightly different test.

## entry 10

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 11

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 12

State compression: bitmask + integer encodes a small subset cheaply.

## entry 13

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 14

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 15

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 16

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 17

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 18

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 19

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 20

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 21

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 22

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 23

Monotonic stack pops while the new element violates the invariant.

## entry 24

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 25

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 26

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 27

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 28

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 29

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 30

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 31

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 32

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 33

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 34

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 35

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 36

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 37

Euler tour flattens a tree into an array for range-query LCA.

## entry 38

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 39

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 40

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 41

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 42

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 43

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 44

StringBuilder: amortize allocation by doubling on grow.

## entry 45

Splay tree: every access splays to the root; amortized O(log n).

## entry 46

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 47

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 48

Union-Find with path compression amortizes to near-O(1) per op.

## entry 49

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 50

Stable sort matters when a secondary key was set in a prior pass.

## entry 51

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 52

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 53

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 54

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 55

State compression: bitmask + integer encodes a small subset cheaply.

## entry 56

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 57

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 58

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 59

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 60

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 61

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 62

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 63

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 64

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 65

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 66

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 67

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 68

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 69

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 70

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 71

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 72

Greedy by end-time picks the most non-overlapping intervals.

## entry 73

Splay tree: every access splays to the root; amortized O(log n).

## entry 74

State compression: bitmask + integer encodes a small subset cheaply.

## entry 75

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 76

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 77

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 78

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 79

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 80

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 81

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 82

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 83

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 84

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 85

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 86

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 87

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 88

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 89

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 90

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 91

State compression: bitmask + integer encodes a small subset cheaply.

## entry 92

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 93

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 94

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 95

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 96

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 97

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 98

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 99

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 100

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 101

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 102

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 103

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 104

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 105

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 106

Heap when you only need top-k; full sort is wasted work.

## entry 107

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 108

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 109

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 110

Euler tour flattens a tree into an array for range-query LCA.

## entry 111

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 112

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 113

Heap when you only need top-k; full sort is wasted work.

## entry 114

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 115

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 116

Heap when you only need top-k; full sort is wasted work.

## entry 117

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 118

Monotonic stack pops while the new element violates the invariant.

## entry 119

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 120

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 121

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 122

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 123

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 124

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 125

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 126

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 127

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 128

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 129

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 130

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 131

Walk both pointers from each end inward; advance the smaller side.

## entry 132

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 133

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 134

Monotonic stack pops while the new element violates the invariant.

## entry 135

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 136

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 137

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 138

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 139

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 140

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 141

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 142

Monotonic stack pops while the new element violates the invariant.

## entry 143

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 144

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 145

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 146

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 147

State compression: bitmask + integer encodes a small subset cheaply.

## entry 148

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 149

Wavelet tree: range k-th element in O(log Σ) time.

## entry 150

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 151

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 152

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 153

Articulation points: same DFS as bridges, with a slightly different test.

## entry 154

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 155

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 156

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 157

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 158

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 159

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 160

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 161

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 162

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 163

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 164

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 165

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 166

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 167

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 168

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 169

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 170

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 171

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 172

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 173

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 174

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 175

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 176

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 177

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 178

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 179

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 180

Monotonic stack pops while the new element violates the invariant.

## entry 181

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 182

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 183

Euler tour flattens a tree into an array for range-query LCA.

## entry 184

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 185

Monotonic stack pops while the new element violates the invariant.

## entry 186

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 187

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 188

Stable sort matters when a secondary key was set in a prior pass.

## entry 189

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 190

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 191

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 192

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 193

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 194

Wavelet tree: range k-th element in O(log Σ) time.

## entry 195

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 196

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 197

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 198

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 199

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 200

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 201

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 202

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 203

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 204

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 205

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 206

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 207

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 208

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 209

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 210

LIS via patience: each pile holds the smallest tail of length k.

## entry 211

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 212

Union-Find with path compression amortizes to near-O(1) per op.

## entry 213

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 214

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 215

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 216

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 217

Union-Find with path compression amortizes to near-O(1) per op.

## entry 218

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 219

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 220

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 221

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 222

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 223

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 224

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 225

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 226

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 227

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 228

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 229

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 230

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 231

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 232

Walk both pointers from each end inward; advance the smaller side.

## entry 233

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 234

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 235

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 236

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 237

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 238

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 239

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 240

StringBuilder: amortize allocation by doubling on grow.

## entry 241

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 242

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 243

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 244

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 245

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 246

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 247

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 248

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 249

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 250

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 251

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 252

Stable sort matters when a secondary key was set in a prior pass.

## entry 253

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 254

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 255

Articulation points: same DFS as bridges, with a slightly different test.

## entry 256

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 257

Splay tree: every access splays to the root; amortized O(log n).

## entry 258

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 259

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 260

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 261

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 262

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 263

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 264

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 265

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 266

Articulation points: same DFS as bridges, with a slightly different test.

## entry 267

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 268

Union-Find with path compression amortizes to near-O(1) per op.

## entry 269

State compression: bitmask + integer encodes a small subset cheaply.

## entry 270

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 271

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 272

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 273

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 274

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 275

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 276

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 277

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 278

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 279

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 280

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 281

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 282

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 283

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 284

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 285

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 286

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 287

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 288

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 289

Splay tree: every access splays to the root; amortized O(log n).

## entry 290

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 291

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 292

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 293

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 294

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 295

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 296

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 297

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 298

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 299

Euler tour flattens a tree into an array for range-query LCA.

## entry 300

LIS via patience: each pile holds the smallest tail of length k.

## entry 301

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 302

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 303

Walk both pointers from each end inward; advance the smaller side.

## entry 304

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 305

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 306

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 307

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 308

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 309

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 310

In-place compaction uses two pointers: read advances always, write only on keep.
