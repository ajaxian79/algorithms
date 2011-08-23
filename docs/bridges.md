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

## entry 235

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 236

Splay tree: every access splays to the root; amortized O(log n).

## entry 237

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 238

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 239

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 240

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 241

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 242

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 243

Articulation points: same DFS as bridges, with a slightly different test.

## entry 244

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 245

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 246

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 247

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 248

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 249

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 250

Heap when you only need top-k; full sort is wasted work.

## entry 251

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 252

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 253

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 254

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 255

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 256

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 257

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 258

Walk both pointers from each end inward; advance the smaller side.

## entry 259

Splay tree: every access splays to the root; amortized O(log n).

## entry 260

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 261

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 262

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 263

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 264

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 265

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 266

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 267

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 268

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 269

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 270

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 271

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 272

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 273

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 274

Union-Find with path compression amortizes to near-O(1) per op.

## entry 275

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 276

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 277

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 278

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 279

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 280

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 281

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 282

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 283

Stable sort matters when a secondary key was set in a prior pass.

## entry 284

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 285

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 286

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 287

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 288

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 289

Stable sort matters when a secondary key was set in a prior pass.

## entry 290

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 291

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 292

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 293

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 294

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 295

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 296

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 297

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 298

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 299

StringBuilder: amortize allocation by doubling on grow.

## entry 300

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 301

Splay tree: every access splays to the root; amortized O(log n).

## entry 302

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 303

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 304

Monotonic stack pops while the new element violates the invariant.

## entry 305

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 306

Articulation points: same DFS as bridges, with a slightly different test.

## entry 307

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 308

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 309

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 310

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 311

Articulation points: same DFS as bridges, with a slightly different test.

## entry 312

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 313

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 314

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 315

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 316

StringBuilder: amortize allocation by doubling on grow.

## entry 317

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 318

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 319

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 320

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 321

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 322

Greedy by end-time picks the most non-overlapping intervals.

## entry 323

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 324

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 325

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 326

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 327

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 328

LIS via patience: each pile holds the smallest tail of length k.

## entry 329

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 330

Union-Find with path compression amortizes to near-O(1) per op.

## entry 331

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 332

Walk both pointers from each end inward; advance the smaller side.

## entry 333

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 334

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 335

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 336

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 337

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 338

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 339

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 340

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 341

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 342

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 343

StringBuilder: amortize allocation by doubling on grow.

## entry 344

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 345

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 346

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 347

Wavelet tree: range k-th element in O(log Σ) time.

## entry 348

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 349

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 350

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 351

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 352

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 353

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 354

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 355

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 356

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 357

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 358

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 359

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 360

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 361

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 362

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 363

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 364

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 365

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 366

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 367

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 368

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 369

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 370

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 371

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 372

State compression: bitmask + integer encodes a small subset cheaply.

## entry 373

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 374

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 375

Monotonic stack pops while the new element violates the invariant.

## entry 376

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 377

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 378

Union-Find with path compression amortizes to near-O(1) per op.

## entry 379

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 380

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 381

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 382

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 383

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 384

LIS via patience: each pile holds the smallest tail of length k.

## entry 385

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 386

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 387

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 388

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 389

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 390

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 391

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 392

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 393

Greedy by end-time picks the most non-overlapping intervals.

## entry 394

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 395

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 396

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 397

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 398

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 399

Wavelet tree: range k-th element in O(log Σ) time.

## entry 400

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 401

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 402

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 403

Euler tour flattens a tree into an array for range-query LCA.

## entry 404

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 405

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 406

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 407

LIS via patience: each pile holds the smallest tail of length k.

## entry 408

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 409

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 410

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 411

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 412

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 413

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 414

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 415

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 416

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 417

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 418

Heap when you only need top-k; full sort is wasted work.

## entry 419

Heap when you only need top-k; full sort is wasted work.

## entry 420

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 421

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 422

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 423

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 424

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 425

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 426

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 427

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 428

Heap when you only need top-k; full sort is wasted work.

## entry 429

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 430

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 431

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 432

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 433

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 434

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 435

Euler tour flattens a tree into an array for range-query LCA.

## entry 436

LIS via patience: each pile holds the smallest tail of length k.

## entry 437

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 438

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 439

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 440

Euler tour flattens a tree into an array for range-query LCA.

## entry 441

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 442

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 443

Euler tour flattens a tree into an array for range-query LCA.

## entry 444

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 445

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 446

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 447

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 448

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 449

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 450

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 451

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 452

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 453

Articulation points: same DFS as bridges, with a slightly different test.

## entry 454

Stable sort matters when a secondary key was set in a prior pass.

## entry 455

LIS via patience: each pile holds the smallest tail of length k.

## entry 456

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 457

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 458

Greedy by end-time picks the most non-overlapping intervals.

## entry 459

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 460

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 461

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 462

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 463

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 464

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 465

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 466

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 467

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 468

Walk both pointers from each end inward; advance the smaller side.

## entry 469

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 470

LIS via patience: each pile holds the smallest tail of length k.

## entry 471

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 472

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 473

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 474

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 475

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 476

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 477

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 478

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 479

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 480

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 481

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 482

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 483

Union-Find with path compression amortizes to near-O(1) per op.

## entry 484

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 485

Splay tree: every access splays to the root; amortized O(log n).

## entry 486

Monotonic stack pops while the new element violates the invariant.

## entry 487

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 488

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 489

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 490

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 491

Euler tour flattens a tree into an array for range-query LCA.

## entry 492

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 493

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 494

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 495

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 496

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 497

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 498

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 499

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 500

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 501

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 502

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 503

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 504

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 505

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 506

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 507

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 508

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 509

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 510

LIS via patience: each pile holds the smallest tail of length k.

## entry 511

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 512

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 513

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 514

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 515

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 516

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 517

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 518

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 519

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 520

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 521

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 522

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 523

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 524

Splay tree: every access splays to the root; amortized O(log n).

## entry 525

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 526

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 527

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 528

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 529

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 530

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 531

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 532

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 533

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 534

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 535

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 536

Union-Find with path compression amortizes to near-O(1) per op.

## entry 537

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 538

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 539

Greedy by end-time picks the most non-overlapping intervals.

## entry 540

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 541

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 542

StringBuilder: amortize allocation by doubling on grow.

## entry 543

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 544

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 545

Euler tour flattens a tree into an array for range-query LCA.

## entry 546

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 547

State compression: bitmask + integer encodes a small subset cheaply.

## entry 548

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 549

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 550

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 551

Union-Find with path compression amortizes to near-O(1) per op.

## entry 552

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 553

Monotonic stack pops while the new element violates the invariant.

## entry 554

Articulation points: same DFS as bridges, with a slightly different test.

## entry 555

Stable sort matters when a secondary key was set in a prior pass.

## entry 556

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 557

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 558

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 559

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 560

Wavelet tree: range k-th element in O(log Σ) time.

## entry 561

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 562

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 563

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 564

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 565

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 566

Monotonic stack pops while the new element violates the invariant.

## entry 567

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 568

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 569

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 570

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 571

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 572

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 573

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 574

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 575

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 576

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 577

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 578

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 579

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 580

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 581

Wavelet tree: range k-th element in O(log Σ) time.

## entry 582

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 583

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 584

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 585

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 586

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 587

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 588

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 589

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 590

Union-Find with path compression amortizes to near-O(1) per op.

## entry 591

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 592

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 593

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 594

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 595

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 596

Greedy by end-time picks the most non-overlapping intervals.

## entry 597

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 598

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 599

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 600

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 601

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 602

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 603

StringBuilder: amortize allocation by doubling on grow.

## entry 604

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 605

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 606

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 607

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 608

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 609

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 610

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 611

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 612

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 613

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 614

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 615

State compression: bitmask + integer encodes a small subset cheaply.

## entry 616

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 617

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 618

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 619

Stable sort matters when a secondary key was set in a prior pass.

## entry 620

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 621

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 622

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 623

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 624

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 625

Stable sort matters when a secondary key was set in a prior pass.

## entry 626

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 627

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 628

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 629

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 630

Greedy by end-time picks the most non-overlapping intervals.

## entry 631

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 632

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 633

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 634

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 635

Splay tree: every access splays to the root; amortized O(log n).

## entry 636

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 637

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 638

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 639

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 640

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
