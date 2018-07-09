# morris-traversal

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

LIS via patience: each pile holds the smallest tail of length k.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Monotonic stack pops while the new element violates the invariant.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Walk both pointers from each end inward; advance the smaller side.

Stable sort matters when a secondary key was set in a prior pass.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Manacher expands around each center, reusing prior radii via mirror reflection.

Greedy by end-time picks the most non-overlapping intervals.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Morris traversal threads predecessors back to current node — O(1) extra space.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Merge intervals: sort by start; extend the running interval while overlapping.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Union-Find with path compression amortizes to near-O(1) per op.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 1

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 2

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 3

StringBuilder: amortize allocation by doubling on grow.

## entry 4

Stable sort matters when a secondary key was set in a prior pass.

## entry 5

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 6

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 7

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 8

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 9

State compression: bitmask + integer encodes a small subset cheaply.

## entry 10

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 11

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 12

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 13

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 14

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 15

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 16

LIS via patience: each pile holds the smallest tail of length k.

## entry 17

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 18

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 19

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 20

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 21

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 22

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 23

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 24

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 25

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 26

Stable sort matters when a secondary key was set in a prior pass.

## entry 27

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 28

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 29

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 30

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 31

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 32

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 33

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 34

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 35

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 36

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 37

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 38

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 39

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 40

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 41

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 42

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 43

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 44

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 45

Greedy by end-time picks the most non-overlapping intervals.

## entry 46

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 47

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 48

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 49

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 50

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 51

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 52

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 53

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 54

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 55

State compression: bitmask + integer encodes a small subset cheaply.

## entry 56

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 57

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 58

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 59

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 60

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 61

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 62

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 63

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 64

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 65

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 66

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 67

Monotonic stack pops while the new element violates the invariant.

## entry 68

Articulation points: same DFS as bridges, with a slightly different test.

## entry 69

Wavelet tree: range k-th element in O(log Σ) time.

## entry 70

Splay tree: every access splays to the root; amortized O(log n).

## entry 71

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 72

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 73

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 74

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 75

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 76

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 77

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 78

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 79

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 80

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 81

Splay tree: every access splays to the root; amortized O(log n).

## entry 82

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 83

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 84

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 85

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 86

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 87

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 88

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 89

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 90

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 91

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 92

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 93

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 94

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 95

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 96

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 97

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 98

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 99

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 100

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 101

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 102

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 103

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 104

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 105

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 106

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 107

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 108

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 109

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 110

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 111

State compression: bitmask + integer encodes a small subset cheaply.

## entry 112

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 113

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 114

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 115

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 116

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 117

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 118

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 119

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 120

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 121

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 122

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 123

Articulation points: same DFS as bridges, with a slightly different test.

## entry 124

Splay tree: every access splays to the root; amortized O(log n).

## entry 125

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 126

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 127

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 128

LIS via patience: each pile holds the smallest tail of length k.

## entry 129

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 130

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 131

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 132

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 133

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 134

Wavelet tree: range k-th element in O(log Σ) time.

## entry 135

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 136

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 137

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 138

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 139

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 140

LIS via patience: each pile holds the smallest tail of length k.

## entry 141

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 142

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 143

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 144

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 145

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 146

Greedy by end-time picks the most non-overlapping intervals.

## entry 147

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 148

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 149

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 150

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 151

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 152

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 153

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 154

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 155

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 156

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 157

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 158

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 159

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 160

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 161

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 162

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 163

Euler tour flattens a tree into an array for range-query LCA.

## entry 164

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 165

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 166

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 167

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 168

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 169

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 170

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 171

Wavelet tree: range k-th element in O(log Σ) time.

## entry 172

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 173

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 174

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 175

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 176

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 177

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 178

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 179

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 180

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 181

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 182

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 183

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 184

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 185

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 186

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 187

Articulation points: same DFS as bridges, with a slightly different test.

## entry 188

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 189

StringBuilder: amortize allocation by doubling on grow.

## entry 190

Stable sort matters when a secondary key was set in a prior pass.

## entry 191

Stable sort matters when a secondary key was set in a prior pass.

## entry 192

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 193

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 194

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 195

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 196

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 197

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 198

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 199

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 200

Walk both pointers from each end inward; advance the smaller side.

## entry 201

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 202

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 203

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 204

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 205

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 206

State compression: bitmask + integer encodes a small subset cheaply.

## entry 207

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 208

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 209

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 210

Splay tree: every access splays to the root; amortized O(log n).

## entry 211

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 212

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 213

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 214

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 215

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 216

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 217

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 218

Articulation points: same DFS as bridges, with a slightly different test.

## entry 219

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 220

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 221

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 222

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 223

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 224

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 225

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 226

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 227

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 228

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 229

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 230

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 231

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 232

Articulation points: same DFS as bridges, with a slightly different test.

## entry 233

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 234

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 235

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 236

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 237

Articulation points: same DFS as bridges, with a slightly different test.

## entry 238

Stable sort matters when a secondary key was set in a prior pass.

## entry 239

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 240

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 241

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 242

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 243

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 244

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 245

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 246

Euler tour flattens a tree into an array for range-query LCA.

## entry 247

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 248

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 249

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 250

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 251

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 252

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 253

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 254

Union-Find with path compression amortizes to near-O(1) per op.

## entry 255

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 256

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 257

Euler tour flattens a tree into an array for range-query LCA.

## entry 258

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 259

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 260

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 261

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 262

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 263

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 264

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 265

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 266

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 267

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 268

LIS via patience: each pile holds the smallest tail of length k.

## entry 269

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 270

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 271

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 272

Euler tour flattens a tree into an array for range-query LCA.

## entry 273

Greedy by end-time picks the most non-overlapping intervals.

## entry 274

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 275

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 276

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 277

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 278

Union-Find with path compression amortizes to near-O(1) per op.

## entry 279

Union-Find with path compression amortizes to near-O(1) per op.

## entry 280

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 281

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 282

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 283

Heap when you only need top-k; full sort is wasted work.

## entry 284

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 285

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 286

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 287

Wavelet tree: range k-th element in O(log Σ) time.

## entry 288

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 289

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 290

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 291

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 292

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 293

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 294

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 295

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 296

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 297

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 298

Euler tour flattens a tree into an array for range-query LCA.

## entry 299

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 300

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 301

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 302

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 303

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 304

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 305

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 306

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 307

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 308

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 309

Monotonic stack pops while the new element violates the invariant.

## entry 310

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 311

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 312

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 313

Wavelet tree: range k-th element in O(log Σ) time.

## entry 314

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 315

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 316

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 317

Walk both pointers from each end inward; advance the smaller side.

## entry 318

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 319

Stable sort matters when a secondary key was set in a prior pass.

## entry 320

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 321

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 322

Heap when you only need top-k; full sort is wasted work.

## entry 323

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 324

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 325

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 326

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 327

Stable sort matters when a secondary key was set in a prior pass.

## entry 328

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 329

State compression: bitmask + integer encodes a small subset cheaply.

## entry 330

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 331

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 332

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 333

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 334

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 335

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 336

Monotonic stack pops while the new element violates the invariant.

## entry 337

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 338

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 339

Splay tree: every access splays to the root; amortized O(log n).

## entry 340

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 341

Manacher expands around each center, reusing prior radii via mirror reflection.
