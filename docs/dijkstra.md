# dijkstra

## entry 1

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 4

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 5

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 6

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 7

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 8

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 9

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 10

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 11

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 12

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 13

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 14

Monotonic stack pops while the new element violates the invariant.

## entry 15

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 16

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 17

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 18

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 19

Wavelet tree: range k-th element in O(log Σ) time.

## entry 20

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 21

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 22

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 23

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 24

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 25

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 26

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 27

State compression: bitmask + integer encodes a small subset cheaply.

## entry 28

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 29

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 30

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 31

Monotonic stack pops while the new element violates the invariant.

## entry 32

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 33

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 34

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 35

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 36

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 37

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 38

LIS via patience: each pile holds the smallest tail of length k.

## entry 39

State compression: bitmask + integer encodes a small subset cheaply.

## entry 40

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 41

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 42

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 43

Splay tree: every access splays to the root; amortized O(log n).

## entry 44

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 45

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 46

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 47

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 48

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 49

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 50

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 51

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 52

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 53

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 54

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 55

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 56

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 57

Union-Find with path compression amortizes to near-O(1) per op.

## entry 58

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 59

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 60

Greedy by end-time picks the most non-overlapping intervals.

## entry 61

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 62

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 63

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 64

Wavelet tree: range k-th element in O(log Σ) time.

## entry 65

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 66

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 67

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 68

LIS via patience: each pile holds the smallest tail of length k.

## entry 69

Greedy by end-time picks the most non-overlapping intervals.

## entry 70

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 71

Union-Find with path compression amortizes to near-O(1) per op.

## entry 72

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 73

Wavelet tree: range k-th element in O(log Σ) time.

## entry 74

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 75

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 76

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 77

Articulation points: same DFS as bridges, with a slightly different test.

## entry 78

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 79

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 80

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 81

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 82

StringBuilder: amortize allocation by doubling on grow.

## entry 83

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 84

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 85

Monotonic stack pops while the new element violates the invariant.

## entry 86

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 87

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 88

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 89

Greedy by end-time picks the most non-overlapping intervals.

## entry 90

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 91

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 92

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 93

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 94

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 95

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 96

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 97

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 98

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 99

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 100

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 101

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 102

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 103

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 104

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 105

Euler tour flattens a tree into an array for range-query LCA.

## entry 106

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 107

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 108

LIS via patience: each pile holds the smallest tail of length k.

## entry 109

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 110

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 111

Monotonic stack pops while the new element violates the invariant.

## entry 112

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 113

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 114

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 115

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 116

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 117

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 118

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 119

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 120

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 121

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 122

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 123

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 124

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 125

Splay tree: every access splays to the root; amortized O(log n).

## entry 126

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 127

State compression: bitmask + integer encodes a small subset cheaply.

## entry 128

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 129

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 130

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 131

Wavelet tree: range k-th element in O(log Σ) time.

## entry 132

Greedy by end-time picks the most non-overlapping intervals.

## entry 133

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 134

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 135

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 136

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 137

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 138

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 139

Union-Find with path compression amortizes to near-O(1) per op.

## entry 140

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 141

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 142

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 143

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 144

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 145

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 146

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 147

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 148

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 149

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 150

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 151

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 152

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 153

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 154

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 155

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 156

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 157

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 158

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 159

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 160

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 161

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 162

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 163

Euler tour flattens a tree into an array for range-query LCA.

## entry 164

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 165

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 166

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 167

Splay tree: every access splays to the root; amortized O(log n).

## entry 168

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 169

Splay tree: every access splays to the root; amortized O(log n).

## entry 170

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 171

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 172

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 173

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 174

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 175

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 176

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 177

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 178

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 179

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 180

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 181

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 182

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 183

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 184

Heap when you only need top-k; full sort is wasted work.

## entry 185

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 186

Stable sort matters when a secondary key was set in a prior pass.

## entry 187

StringBuilder: amortize allocation by doubling on grow.

## entry 188

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 189

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 190

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 191

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 192

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 193

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 194

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 195

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 196

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 197

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 198

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 199

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 200

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 201

Walk both pointers from each end inward; advance the smaller side.

## entry 202

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 203

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 204

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 205

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 206

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 207

Splay tree: every access splays to the root; amortized O(log n).

## entry 208

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 209

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 210

Stable sort matters when a secondary key was set in a prior pass.

## entry 211

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 212

Union-Find with path compression amortizes to near-O(1) per op.

## entry 213

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 214

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 215

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 216

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 217

State compression: bitmask + integer encodes a small subset cheaply.

## entry 218

Monotonic stack pops while the new element violates the invariant.

## entry 219

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 220

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 221

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 222

Greedy by end-time picks the most non-overlapping intervals.

## entry 223

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 224

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 225

Greedy by end-time picks the most non-overlapping intervals.

## entry 226

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 227

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 228

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 229

Wavelet tree: range k-th element in O(log Σ) time.

## entry 230

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 231

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 232

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 233

LIS via patience: each pile holds the smallest tail of length k.

## entry 234

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 235

Splay tree: every access splays to the root; amortized O(log n).

## entry 236

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 237

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 238

Euler tour flattens a tree into an array for range-query LCA.

## entry 239

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 240

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 241

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 242

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 243

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 244

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 245

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 246

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 247

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 248

Monotonic stack pops while the new element violates the invariant.

## entry 249

Greedy by end-time picks the most non-overlapping intervals.

## entry 250

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 251

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 252

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 253

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 254

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 255

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 256

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 257

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 258

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 259

State compression: bitmask + integer encodes a small subset cheaply.

## entry 260

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 261

Walk both pointers from each end inward; advance the smaller side.

## entry 262

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 263

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 264

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 265

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 266

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 267

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 268

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 269

Heap when you only need top-k; full sort is wasted work.

## entry 270

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 271

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 272

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 273

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 274

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 275

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 276

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 277

LIS via patience: each pile holds the smallest tail of length k.

## entry 278

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 279

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 280

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 281

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 282

StringBuilder: amortize allocation by doubling on grow.

## entry 283

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 284

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 285

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 286

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 287

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 288

Greedy by end-time picks the most non-overlapping intervals.

## entry 289

Splay tree: every access splays to the root; amortized O(log n).

## entry 290

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 291

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 292

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 293

Euler tour flattens a tree into an array for range-query LCA.

## entry 294

Monotonic stack pops while the new element violates the invariant.

## entry 295

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 296

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 297

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 298

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 299

Stable sort matters when a secondary key was set in a prior pass.

## entry 300

Monotonic stack pops while the new element violates the invariant.

## entry 301

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 302

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 303

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 304

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 305

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 306

Monotonic stack pops while the new element violates the invariant.

## entry 307

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 308

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 309

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 310

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 311

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 312

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 313

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 314

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 315

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 316

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 317

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 318

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 319

Monotonic stack pops while the new element violates the invariant.

## entry 320

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 321

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 322

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 323

Monotonic stack pops while the new element violates the invariant.

## entry 324

Walk both pointers from each end inward; advance the smaller side.

## entry 325

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 326

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 327

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 328

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 329

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 330

Wavelet tree: range k-th element in O(log Σ) time.

## entry 331

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 332

Monotonic stack pops while the new element violates the invariant.

## entry 333

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 334

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 335

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 336

Wavelet tree: range k-th element in O(log Σ) time.

## entry 337

State compression: bitmask + integer encodes a small subset cheaply.

## entry 338

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 339

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 340

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 341

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 342

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 343

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 344

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 345

Euler tour flattens a tree into an array for range-query LCA.

## entry 346

LIS via patience: each pile holds the smallest tail of length k.

## entry 347

Stable sort matters when a secondary key was set in a prior pass.

## entry 348

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 349

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 350

Stable sort matters when a secondary key was set in a prior pass.

## entry 351

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 352

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 353

Stable sort matters when a secondary key was set in a prior pass.

## entry 354

Monotonic stack pops while the new element violates the invariant.

## entry 355

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 356

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 357

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 358

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 359

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 360

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 361

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 362

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 363

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 364

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 365

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 366

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 367

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 368

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 369

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 370

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 371

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 372

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 373

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 374

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 375

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 376

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 377

Splay tree: every access splays to the root; amortized O(log n).

## entry 378

Splay tree: every access splays to the root; amortized O(log n).

## entry 379

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 380

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 381

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 382

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 383

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 384

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 385

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 386

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 387

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 388

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 389

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 390

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 391

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 392

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 393

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 394

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 395

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 396

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 397

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 398

Articulation points: same DFS as bridges, with a slightly different test.

## entry 399

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 400

Articulation points: same DFS as bridges, with a slightly different test.

## entry 401

Stable sort matters when a secondary key was set in a prior pass.

## entry 402

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 403

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 404

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 405

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 406

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 407

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 408

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 409

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 410

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 411

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 412

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 413

Heap when you only need top-k; full sort is wasted work.

## entry 414

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 415

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 416

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 417

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 418

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 419

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 420

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 421

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 422

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 423

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 424

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 425

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 426

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 427

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 428

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 429

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 430

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 431

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 432

Heap when you only need top-k; full sort is wasted work.

## entry 433

Wavelet tree: range k-th element in O(log Σ) time.

## entry 434

Wavelet tree: range k-th element in O(log Σ) time.

## entry 435

Stable sort matters when a secondary key was set in a prior pass.

## entry 436

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 437

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 438

State compression: bitmask + integer encodes a small subset cheaply.

## entry 439

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 440

Monotonic stack pops while the new element violates the invariant.

## entry 441

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 442

Articulation points: same DFS as bridges, with a slightly different test.

## entry 443

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 444

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 445

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 446

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 447

Interval tree: stores intervals on the median; query traverses O(log n) levels.
