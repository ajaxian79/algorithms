# floyd-warshall

## entry 1

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4

Articulation points: same DFS as bridges, with a slightly different test.

## entry 5

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 6

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 7

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 8

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 9

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 10

Heap when you only need top-k; full sort is wasted work.

## entry 11

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 12

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 13

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 14

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 15

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 16

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 17

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 18

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 19

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 20

Stable sort matters when a secondary key was set in a prior pass.

## entry 21

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 22

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 23

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 24

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 25

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 26

Euler tour flattens a tree into an array for range-query LCA.

## entry 27

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 28

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 29

Walk both pointers from each end inward; advance the smaller side.

## entry 30

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 31

Monotonic stack pops while the new element violates the invariant.

## entry 32

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 33

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 34

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 35

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 36

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 37

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 38

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 39

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 40

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 41

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 42

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 43

Splay tree: every access splays to the root; amortized O(log n).

## entry 44

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 45

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 46

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 47

LIS via patience: each pile holds the smallest tail of length k.

## entry 48

Splay tree: every access splays to the root; amortized O(log n).

## entry 49

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 50

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 51

Wavelet tree: range k-th element in O(log Σ) time.

## entry 52

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 53

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 54

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 55

Euler tour flattens a tree into an array for range-query LCA.

## entry 56

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 57

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 58

Stable sort matters when a secondary key was set in a prior pass.

## entry 59

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 60

Articulation points: same DFS as bridges, with a slightly different test.

## entry 61

Euler tour flattens a tree into an array for range-query LCA.

## entry 62

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 63

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 64

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 65

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 66

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 67

Monotonic stack pops while the new element violates the invariant.

## entry 68

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 69

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 70

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 71

Euler tour flattens a tree into an array for range-query LCA.

## entry 72

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 73

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 74

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 75

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 76

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 77

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 78

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 79

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 80

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 81

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 82

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 83

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 84

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 85

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 86

LIS via patience: each pile holds the smallest tail of length k.

## entry 87

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 88

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 89

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 90

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 91

Walk both pointers from each end inward; advance the smaller side.

## entry 92

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 93

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 94

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 95

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 96

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 97

Euler tour flattens a tree into an array for range-query LCA.

## entry 98

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 99

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 100

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 101

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 102

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 103

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 104

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 105

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 106

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 107

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 108

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 109

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 110

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 111

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 112

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 113

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 114

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 115

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 116

Monotonic stack pops while the new element violates the invariant.

## entry 117

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 118

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 119

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 120

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 121

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 122

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 123

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 124

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 125

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 126

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 127

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 128

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 129

Splay tree: every access splays to the root; amortized O(log n).

## entry 130

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 131

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 132

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 133

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 134

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 135

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 136

Union-Find with path compression amortizes to near-O(1) per op.

## entry 137

LIS via patience: each pile holds the smallest tail of length k.

## entry 138

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 139

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 140

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 141

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 142

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 143

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 144

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 145

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 146

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 147

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 148

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 149

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 150

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 151

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 152

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 153

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 154

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 155

Euler tour flattens a tree into an array for range-query LCA.

## entry 156

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 157

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 158

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 159

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 160

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 161

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 162

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 163

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 164

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 165

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 166

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 167

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 168

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 169

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 170

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 171

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 172

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 173

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 174

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 175

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 176

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 177

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 178

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 179

LIS via patience: each pile holds the smallest tail of length k.

## entry 180

Wavelet tree: range k-th element in O(log Σ) time.

## entry 181

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 182

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 183

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 184

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 185

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 186

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 187

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 188

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 189

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 190

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 191

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 192

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 193

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 194

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 195

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 196

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 197

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 198

StringBuilder: amortize allocation by doubling on grow.

## entry 199

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 200

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 201

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 202

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 203

Articulation points: same DFS as bridges, with a slightly different test.

## entry 204

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 205

Splay tree: every access splays to the root; amortized O(log n).

## entry 206

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 207

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 208

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 209

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 210

State compression: bitmask + integer encodes a small subset cheaply.

## entry 211

Wavelet tree: range k-th element in O(log Σ) time.

## entry 212

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 213

Stable sort matters when a secondary key was set in a prior pass.

## entry 214

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 215

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 216

Monotonic stack pops while the new element violates the invariant.

## entry 217

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 218

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 219

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 220

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 221

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 222

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 223

Stable sort matters when a secondary key was set in a prior pass.

## entry 224

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 225

StringBuilder: amortize allocation by doubling on grow.

## entry 226

Articulation points: same DFS as bridges, with a slightly different test.

## entry 227

LIS via patience: each pile holds the smallest tail of length k.

## entry 228

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 229

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 230

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 231

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 232

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 233

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 234

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 235

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 236

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 237

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 238

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 239

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 240

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 241

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 242

Articulation points: same DFS as bridges, with a slightly different test.

## entry 243

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 244

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 245

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 246

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 247

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 248

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 249

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 250

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 251

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 252

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 253

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 254

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 255

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 256

LIS via patience: each pile holds the smallest tail of length k.

## entry 257

Stable sort matters when a secondary key was set in a prior pass.

## entry 258

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 259

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 260

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 261

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 262

Euler tour flattens a tree into an array for range-query LCA.

## entry 263

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 264

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 265

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 266

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 267

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 268

Heap when you only need top-k; full sort is wasted work.

## entry 269

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 270

Wavelet tree: range k-th element in O(log Σ) time.

## entry 271

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 272

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 273

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 274

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 275

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 276

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 277

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 278

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 279

Articulation points: same DFS as bridges, with a slightly different test.

## entry 280

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 281

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 282

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 283

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 284

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 285

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 286

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 287

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 288

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 289

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 290

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 291

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 292

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 293

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 294

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 295

LIS via patience: each pile holds the smallest tail of length k.

## entry 296

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 297

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 298

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 299

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 300

Greedy by end-time picks the most non-overlapping intervals.

## entry 301

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 302

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 303

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 304

Walk both pointers from each end inward; advance the smaller side.

## entry 305

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 306

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 307

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 308

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 309

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 310

Union-Find with path compression amortizes to near-O(1) per op.

## entry 311

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 312

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 313

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 314

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 315

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 316

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 317

Walk both pointers from each end inward; advance the smaller side.

## entry 318

Wavelet tree: range k-th element in O(log Σ) time.

## entry 319

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 320

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 321

Splay tree: every access splays to the root; amortized O(log n).

## entry 322

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 323

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 324

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 325

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 326

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 327

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 328

Articulation points: same DFS as bridges, with a slightly different test.

## entry 329

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 330

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 331

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 332

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 333

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 334

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 335

Splay tree: every access splays to the root; amortized O(log n).

## entry 336

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 337

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 338

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 339

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 340

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 341

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 342

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 343

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 344

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 345

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 346

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 347

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 348

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 349

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 350

Union-Find with path compression amortizes to near-O(1) per op.

## entry 351

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 352

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 353

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 354

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 355

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 356

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 357

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 358

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 359

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 360

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 361

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 362

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 363

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 364

Monotonic stack pops while the new element violates the invariant.

## entry 365

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 366

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 367

Wavelet tree: range k-th element in O(log Σ) time.

## entry 368

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 369

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 370

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 371

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 372

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 373

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 374

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 375

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 376

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 377

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 378

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 379

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 380

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 381

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 382

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 383

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 384

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 385

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 386

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 387

StringBuilder: amortize allocation by doubling on grow.

## entry 388

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 389

State compression: bitmask + integer encodes a small subset cheaply.

## entry 390

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 391

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 392

StringBuilder: amortize allocation by doubling on grow.

## entry 393

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 394

Splay tree: every access splays to the root; amortized O(log n).

## entry 395

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 396

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 397

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 398

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 399

Walk both pointers from each end inward; advance the smaller side.

## entry 400

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 401

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 402

Stable sort matters when a secondary key was set in a prior pass.

## entry 403

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 404

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 405

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 406

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 407

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 408

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 409

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 410

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 411

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 412

State compression: bitmask + integer encodes a small subset cheaply.

## entry 413

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 414

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 415

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 416

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 417

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 418

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 419

State compression: bitmask + integer encodes a small subset cheaply.

## entry 420

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 421

Splay tree: every access splays to the root; amortized O(log n).

## entry 422

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 423

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 424

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 425

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 426

StringBuilder: amortize allocation by doubling on grow.

## entry 427

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 428

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 429

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 430

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 431

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 432

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 433

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 434

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 435

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 436

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 437

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 438

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 439

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 440

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 441

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 442

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 443

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 444

Stable sort matters when a secondary key was set in a prior pass.

## entry 445

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 446

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 447

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 448

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 449

StringBuilder: amortize allocation by doubling on grow.

## entry 450

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 451

Euler tour flattens a tree into an array for range-query LCA.

## entry 452

Wavelet tree: range k-th element in O(log Σ) time.

## entry 453

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 454

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 455

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 456

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 457

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 458

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 459

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 460

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 461

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 462

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 463

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 464

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 465

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 466

Walk both pointers from each end inward; advance the smaller side.

## entry 467

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 468

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 469

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 470

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 471

Monotonic stack pops while the new element violates the invariant.

## entry 472

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 473

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 474

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 475

StringBuilder: amortize allocation by doubling on grow.

## entry 476

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 477

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 478

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 479

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 480

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 481

Stable sort matters when a secondary key was set in a prior pass.

## entry 482

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 483

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 484

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 485

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 486

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 487

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 488

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 489

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 490

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 491

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 492

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 493

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 494

Walk both pointers from each end inward; advance the smaller side.

## entry 495

Greedy by end-time picks the most non-overlapping intervals.

## entry 496

Walk both pointers from each end inward; advance the smaller side.

## entry 497

State compression: bitmask + integer encodes a small subset cheaply.

## entry 498

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 499

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 500

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 501

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 502

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 503

Articulation points: same DFS as bridges, with a slightly different test.

## entry 504

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 505

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 506

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 507

StringBuilder: amortize allocation by doubling on grow.

## entry 508

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 509

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 510

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 511

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 512

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 513

State compression: bitmask + integer encodes a small subset cheaply.

## entry 514

Euler tour flattens a tree into an array for range-query LCA.

## entry 515

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 516

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 517

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 518

Euler tour flattens a tree into an array for range-query LCA.

## entry 519

Greedy by end-time picks the most non-overlapping intervals.

## entry 520

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 521

Heap when you only need top-k; full sort is wasted work.

## entry 522

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 523

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 524

Monotonic stack pops while the new element violates the invariant.

## entry 525

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 526

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 527

Euler tour flattens a tree into an array for range-query LCA.

## entry 528

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 529

Monotonic stack pops while the new element violates the invariant.

## entry 530

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 531

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 532

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 533

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 534

Wavelet tree: range k-th element in O(log Σ) time.

## entry 535

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 536

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 537

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 538

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 539

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 540

Splay tree: every access splays to the root; amortized O(log n).

## entry 541

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 542

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 543

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 544

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 545

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 546

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 547

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 548

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 549

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 550

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 551

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 552

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 553

Greedy by end-time picks the most non-overlapping intervals.

## entry 554

Splay tree: every access splays to the root; amortized O(log n).

## entry 555

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 556

Euler tour flattens a tree into an array for range-query LCA.

## entry 557

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 558

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 559

Splay tree: every access splays to the root; amortized O(log n).

## entry 560

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 561

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 562

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 563

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 564

Monotonic stack pops while the new element violates the invariant.

## entry 565

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 566

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 567

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 568

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 569

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 570

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 571

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 572

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 573

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 574

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 575

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 576

Stable sort matters when a secondary key was set in a prior pass.

## entry 577

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 578

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 579

Stable sort matters when a secondary key was set in a prior pass.

## entry 580

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 581

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 582

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 583

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 584

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 585

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 586

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 587

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 588

Monotonic stack pops while the new element violates the invariant.

## entry 589

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 590

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 591

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 592

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 593

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 594

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 595

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 596

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 597

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 598

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 599

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 600

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 601

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
