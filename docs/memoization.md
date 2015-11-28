# memoization

## entry 1

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 3

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4

Articulation points: same DFS as bridges, with a slightly different test.

## entry 5

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 6

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 7

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 8

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 9

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 10

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 11

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 12

State compression: bitmask + integer encodes a small subset cheaply.

## entry 13

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 14

LIS via patience: each pile holds the smallest tail of length k.

## entry 15

Wavelet tree: range k-th element in O(log Σ) time.

## entry 16

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 17

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 18

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 19

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 20

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 21

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 22

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 23

Heap when you only need top-k; full sort is wasted work.

## entry 24

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 25

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 26

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 27

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 28

Euler tour flattens a tree into an array for range-query LCA.

## entry 29

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 30

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 31

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 32

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 33

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 34

Union-Find with path compression amortizes to near-O(1) per op.

## entry 35

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 36

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 37

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 38

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 39

Euler tour flattens a tree into an array for range-query LCA.

## entry 40

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 41

Walk both pointers from each end inward; advance the smaller side.

## entry 42

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 43

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 44

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 45

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 46

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 47

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 48

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 49

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 50

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 51

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 52

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 53

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 54

Articulation points: same DFS as bridges, with a slightly different test.

## entry 55

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 56

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 57

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 58

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 59

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 60

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 61

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 62

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 63

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 64

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 65

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 66

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 67

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 68

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 69

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 70

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 71

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 72

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 73

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 74

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 75

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 76

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 77

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 78

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 79

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 80

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 81

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 82

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 83

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 84

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 85

Union-Find with path compression amortizes to near-O(1) per op.

## entry 86

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 87

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 88

Walk both pointers from each end inward; advance the smaller side.

## entry 89

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 90

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 91

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 92

Euler tour flattens a tree into an array for range-query LCA.

## entry 93

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 94

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 95

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 96

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 97

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 98

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 99

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 100

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 101

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 102

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 103

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 104

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 105

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 106

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 107

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 108

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 109

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 110

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 111

Articulation points: same DFS as bridges, with a slightly different test.

## entry 112

Wavelet tree: range k-th element in O(log Σ) time.

## entry 113

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 114

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 115

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 116

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 117

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 118

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 119

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 120

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 121

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 122

Articulation points: same DFS as bridges, with a slightly different test.

## entry 123

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 124

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 125

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 126

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 127

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 128

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 129

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 130

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 131

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 132

Articulation points: same DFS as bridges, with a slightly different test.

## entry 133

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 134

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 135

Euler tour flattens a tree into an array for range-query LCA.

## entry 136

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 137

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 138

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 139

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 140

Euler tour flattens a tree into an array for range-query LCA.

## entry 141

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 142

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 143

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 144

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 145

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 146

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 147

Stable sort matters when a secondary key was set in a prior pass.

## entry 148

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 149

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 150

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 151

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 152

Monotonic stack pops while the new element violates the invariant.

## entry 153

Wavelet tree: range k-th element in O(log Σ) time.

## entry 154

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 155

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 156

Splay tree: every access splays to the root; amortized O(log n).

## entry 157

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 158

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 159

State compression: bitmask + integer encodes a small subset cheaply.

## entry 160

Euler tour flattens a tree into an array for range-query LCA.

## entry 161

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 162

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 163

State compression: bitmask + integer encodes a small subset cheaply.

## entry 164

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 165

StringBuilder: amortize allocation by doubling on grow.

## entry 166

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 167

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 168

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 169

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 170

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 171

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 172

Heap when you only need top-k; full sort is wasted work.

## entry 173

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 174

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 175

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 176

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 177

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 178

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 179

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 180

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 181

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 182

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 183

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 184

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 185

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 186

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 187

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 188

State compression: bitmask + integer encodes a small subset cheaply.

## entry 189

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 190

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 191

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 192

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 193

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 194

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 195

LIS via patience: each pile holds the smallest tail of length k.

## entry 196

Greedy by end-time picks the most non-overlapping intervals.

## entry 197

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 198

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 199

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 200

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 201

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 202

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 203

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 204

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 205

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 206

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 207

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 208

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 209

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 210

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 211

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 212

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 213

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 214

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 215

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 216

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 217

Greedy by end-time picks the most non-overlapping intervals.

## entry 218

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 219

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 220

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 221

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 222

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 223

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 224

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 225

StringBuilder: amortize allocation by doubling on grow.

## entry 226

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 227

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 228

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 229

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 230

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 231

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 232

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 233

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 234

Heap when you only need top-k; full sort is wasted work.

## entry 235

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 236

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 237

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 238

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 239

LIS via patience: each pile holds the smallest tail of length k.

## entry 240

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 241

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 242

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 243

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 244

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 245

Wavelet tree: range k-th element in O(log Σ) time.

## entry 246

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 247

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 248

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 249

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 250

LIS via patience: each pile holds the smallest tail of length k.

## entry 251

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 252

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 253

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 254

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 255

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 256

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 257

Monotonic stack pops while the new element violates the invariant.

## entry 258

Stable sort matters when a secondary key was set in a prior pass.

## entry 259

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 260

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 261

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 262

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 263

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 264

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 265

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 266

Heap when you only need top-k; full sort is wasted work.

## entry 267

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 268

Splay tree: every access splays to the root; amortized O(log n).

## entry 269

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 270

Wavelet tree: range k-th element in O(log Σ) time.

## entry 271

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 272

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 273

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 274

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 275

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 276

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 277

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 278

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 279

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 280

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 281

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 282

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 283

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 284

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 285

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 286

Stable sort matters when a secondary key was set in a prior pass.

## entry 287

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 288

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 289

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 290

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 291

Walk both pointers from each end inward; advance the smaller side.

## entry 292

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 293

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 294

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 295

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 296

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 297

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 298

Monotonic stack pops while the new element violates the invariant.

## entry 299

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 300

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 301

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 302

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 303

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 304

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 305

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 306

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 307

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 308

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 309

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 310

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 311

LIS via patience: each pile holds the smallest tail of length k.

## entry 312

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 313

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 314

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 315

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 316

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 317

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 318

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 319

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 320

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 321

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 322

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 323

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 324

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 325

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 326

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 327

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 328

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 329

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 330

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 331

Heap when you only need top-k; full sort is wasted work.

## entry 332

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 333

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 334

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 335

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 336

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 337

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 338

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 339

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 340

Monotonic stack pops while the new element violates the invariant.

## entry 341

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 342

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 343

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 344

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 345

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 346

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 347

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 348

Union-Find with path compression amortizes to near-O(1) per op.

## entry 349

Articulation points: same DFS as bridges, with a slightly different test.

## entry 350

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 351

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 352

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 353

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 354

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 355

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 356

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 357

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 358

Monotonic stack pops while the new element violates the invariant.

## entry 359

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 360

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 361

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 362

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 363

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 364

Greedy by end-time picks the most non-overlapping intervals.

## entry 365

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 366

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 367

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 368

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 369

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 370

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 371

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 372

Articulation points: same DFS as bridges, with a slightly different test.

## entry 373

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 374

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 375

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 376

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 377

Splay tree: every access splays to the root; amortized O(log n).

## entry 378

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 379

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 380

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 381

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 382

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 383

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 384

Euler tour flattens a tree into an array for range-query LCA.

## entry 385

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 386

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 387

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 388

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 389

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 390

Euler tour flattens a tree into an array for range-query LCA.

## entry 391

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 392

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 393

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 394

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 395

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 396

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 397

Greedy by end-time picks the most non-overlapping intervals.

## entry 398

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 399

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 400

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 401

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 402

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 403

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 404

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 405

Greedy by end-time picks the most non-overlapping intervals.

## entry 406

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 407

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 408

Euler tour flattens a tree into an array for range-query LCA.

## entry 409

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 410

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 411

Monotonic stack pops while the new element violates the invariant.

## entry 412

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 413

Stable sort matters when a secondary key was set in a prior pass.

## entry 414

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 415

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 416

Articulation points: same DFS as bridges, with a slightly different test.

## entry 417

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 418

StringBuilder: amortize allocation by doubling on grow.

## entry 419

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 420

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 421

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 422

Stable sort matters when a secondary key was set in a prior pass.

## entry 423

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 424

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 425

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 426

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 427

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 428

Splay tree: every access splays to the root; amortized O(log n).

## entry 429

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 430

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 431

StringBuilder: amortize allocation by doubling on grow.

## entry 432

Walk both pointers from each end inward; advance the smaller side.

## entry 433

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 434

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 435

Union-Find with path compression amortizes to near-O(1) per op.

## entry 436

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 437

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 438

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 439

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 440

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 441

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 442

Walk both pointers from each end inward; advance the smaller side.

## entry 443

Splay tree: every access splays to the root; amortized O(log n).

## entry 444

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 445

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 446

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 447

Wavelet tree: range k-th element in O(log Σ) time.

## entry 448

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 449

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 450

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 451

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 452

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 453

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 454

LIS via patience: each pile holds the smallest tail of length k.

## entry 455

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 456

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 457

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 458

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 459

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 460

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 461

Wavelet tree: range k-th element in O(log Σ) time.

## entry 462

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 463

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 464

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 465

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 466

Monotonic stack pops while the new element violates the invariant.

## entry 467

Greedy by end-time picks the most non-overlapping intervals.

## entry 468

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 469

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 470

Splay tree: every access splays to the root; amortized O(log n).

## entry 471

LIS via patience: each pile holds the smallest tail of length k.
