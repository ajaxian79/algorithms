# lca

## entry 1

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 3

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 4

Heap when you only need top-k; full sort is wasted work.

## entry 5

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 6

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 7

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 8

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 9

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 10

Stable sort matters when a secondary key was set in a prior pass.

## entry 11

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 12

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 13

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 14

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 15

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 16

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 17

StringBuilder: amortize allocation by doubling on grow.

## entry 18

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 19

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 20

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 21

Articulation points: same DFS as bridges, with a slightly different test.

## entry 22

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 23

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 24

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 25

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 26

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 27

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 28

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 29

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 30

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 31

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 32

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 33

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 34

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 35

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 36

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 37

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 38

Wavelet tree: range k-th element in O(log Σ) time.

## entry 39

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 40

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 41

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 42

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 43

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 44

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 45

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 46

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 47

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 48

State compression: bitmask + integer encodes a small subset cheaply.

## entry 49

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 50

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 51

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 52

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 53

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 54

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 55

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 56

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 57

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 58

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 59

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 60

Stable sort matters when a secondary key was set in a prior pass.

## entry 61

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 62

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 63

Monotonic stack pops while the new element violates the invariant.

## entry 64

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 65

Articulation points: same DFS as bridges, with a slightly different test.

## entry 66

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 67

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 68

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 69

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 70

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 71

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 72

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 73

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 74

State compression: bitmask + integer encodes a small subset cheaply.

## entry 75

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 76

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 77

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 78

Euler tour flattens a tree into an array for range-query LCA.

## entry 79

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 80

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 81

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 82

Greedy by end-time picks the most non-overlapping intervals.

## entry 83

Euler tour flattens a tree into an array for range-query LCA.

## entry 84

Greedy by end-time picks the most non-overlapping intervals.

## entry 85

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 86

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 87

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 88

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 89

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 90

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 91

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 92

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 93

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 94

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 95

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 96

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 97

Splay tree: every access splays to the root; amortized O(log n).

## entry 98

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 99

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 100

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 101

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 102

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 103

Euler tour flattens a tree into an array for range-query LCA.

## entry 104

Stable sort matters when a secondary key was set in a prior pass.

## entry 105

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 106

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 107

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 108

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 109

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 110

Heap when you only need top-k; full sort is wasted work.

## entry 111

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 112

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 113

Greedy by end-time picks the most non-overlapping intervals.

## entry 114

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 115

Heap when you only need top-k; full sort is wasted work.

## entry 116

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 117

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 118

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 119

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 120

Splay tree: every access splays to the root; amortized O(log n).

## entry 121

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 122

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 123

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 124

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 125

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 126

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 127

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 128

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 129

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 130

Euler tour flattens a tree into an array for range-query LCA.

## entry 131

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 132

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 133

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 134

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 135

Splay tree: every access splays to the root; amortized O(log n).

## entry 136

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 137

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 138

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 139

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 140

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 141

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 142

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 143

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 144

Union-Find with path compression amortizes to near-O(1) per op.

## entry 145

Union-Find with path compression amortizes to near-O(1) per op.

## entry 146

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 147

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 148

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 149

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 150

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 151

Euler tour flattens a tree into an array for range-query LCA.

## entry 152

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 153

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 154

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 155

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 156

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 157

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 158

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 159

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 160

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 161

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 162

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 163

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 164

State compression: bitmask + integer encodes a small subset cheaply.

## entry 165

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 166

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 167

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 168

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 169

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 170

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 171

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 172

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 173

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 174

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 175

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 176

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 177

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 178

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 179

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 180

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 181

Articulation points: same DFS as bridges, with a slightly different test.

## entry 182

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 183

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 184

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 185

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 186

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 187

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 188

StringBuilder: amortize allocation by doubling on grow.

## entry 189

StringBuilder: amortize allocation by doubling on grow.

## entry 190

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 191

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 192

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 193

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 194

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 195

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 196

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 197

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 198

Heap when you only need top-k; full sort is wasted work.

## entry 199

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 200

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 201

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 202

Monotonic stack pops while the new element violates the invariant.

## entry 203

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 204

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 205

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 206

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 207

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 208

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 209

LIS via patience: each pile holds the smallest tail of length k.

## entry 210

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 211

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 212

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 213

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 214

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 215

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 216

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 217

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 218

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 219

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 220

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 221

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 222

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 223

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 224

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 225

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 226

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 227

Walk both pointers from each end inward; advance the smaller side.

## entry 228

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 229

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 230

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 231

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 232

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 233

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 234

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 235

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 236

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 237

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 238

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 239

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 240

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 241

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 242

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 243

Wavelet tree: range k-th element in O(log Σ) time.

## entry 244

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 245

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 246

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 247

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 248

State compression: bitmask + integer encodes a small subset cheaply.

## entry 249

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 250

Splay tree: every access splays to the root; amortized O(log n).

## entry 251

Stable sort matters when a secondary key was set in a prior pass.

## entry 252

State compression: bitmask + integer encodes a small subset cheaply.

## entry 253

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 254

StringBuilder: amortize allocation by doubling on grow.

## entry 255

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 256

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 257

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 258

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 259

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 260

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 261

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 262

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 263

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 264

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 265

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 266

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 267

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 268

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 269

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 270

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 271

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 272

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 273

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 274

Wavelet tree: range k-th element in O(log Σ) time.

## entry 275

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 276

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 277

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 278

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 279

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 280

Heap when you only need top-k; full sort is wasted work.

## entry 281

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 282

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 283

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 284

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 285

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 286

Walk both pointers from each end inward; advance the smaller side.

## entry 287

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 288

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 289

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 290

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 291

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 292

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 293

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 294

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 295

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 296

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 297

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 298

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 299

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 300

LIS via patience: each pile holds the smallest tail of length k.

## entry 301

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 302

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 303

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 304

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 305

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 306

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 307

Greedy by end-time picks the most non-overlapping intervals.

## entry 308

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 309

Splay tree: every access splays to the root; amortized O(log n).

## entry 310

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 311

State compression: bitmask + integer encodes a small subset cheaply.

## entry 312

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 313

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 314

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 315

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 316

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 317

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 318

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 319

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 320

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 321

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 322

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 323

Greedy by end-time picks the most non-overlapping intervals.

## entry 324

Union-Find with path compression amortizes to near-O(1) per op.

## entry 325

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 326

State compression: bitmask + integer encodes a small subset cheaply.

## entry 327

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 328

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 329

State compression: bitmask + integer encodes a small subset cheaply.

## entry 330

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 331

StringBuilder: amortize allocation by doubling on grow.

## entry 332

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 333

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 334

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 335

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 336

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 337

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 338

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 339

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 340

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 341

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 342

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 343

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 344

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 345

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 346

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 347

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 348

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 349

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 350

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 351

Wavelet tree: range k-th element in O(log Σ) time.

## entry 352

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 353

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 354

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 355

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 356

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 357

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 358

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 359

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 360

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 361

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 362

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 363

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 364

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 365

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 366

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 367

StringBuilder: amortize allocation by doubling on grow.

## entry 368

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 369

Stable sort matters when a secondary key was set in a prior pass.

## entry 370

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 371

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 372

Stable sort matters when a secondary key was set in a prior pass.

## entry 373

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 374

Stable sort matters when a secondary key was set in a prior pass.

## entry 375

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 376

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 377

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 378

Wavelet tree: range k-th element in O(log Σ) time.

## entry 379

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 380

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 381

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 382

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 383

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 384

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 385

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 386

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 387

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 388

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 389

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 390

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 391

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 392

Wavelet tree: range k-th element in O(log Σ) time.

## entry 393

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 394

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 395

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 396

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 397

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 398

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 399

Union-Find with path compression amortizes to near-O(1) per op.

## entry 400

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 401

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 402

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 403

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 404

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 405

State compression: bitmask + integer encodes a small subset cheaply.

## entry 406

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 407

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 408

Euler tour flattens a tree into an array for range-query LCA.

## entry 409

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 410

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 411

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 412

StringBuilder: amortize allocation by doubling on grow.

## entry 413

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 414

Stable sort matters when a secondary key was set in a prior pass.

## entry 415

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 416

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 417

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 418

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 419

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 420

Heap when you only need top-k; full sort is wasted work.

## entry 421

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 422

Euler tour flattens a tree into an array for range-query LCA.

## entry 423

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 424

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 425

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 426

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 427

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 428

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 429

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 430

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 431

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 432

Walk both pointers from each end inward; advance the smaller side.

## entry 433

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 434

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 435

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 436

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 437

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 438

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 439

StringBuilder: amortize allocation by doubling on grow.

## entry 440

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 441

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 442

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 443

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 444

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 445

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 446

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 447

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 448

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 449

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 450

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 451

Euler tour flattens a tree into an array for range-query LCA.

## entry 452

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 453

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 454

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 455

Stable sort matters when a secondary key was set in a prior pass.

## entry 456

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 457

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 458

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 459

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 460

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 461

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 462

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 463

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 464

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 465

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 466

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 467

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 468

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 469

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 470

Monotonic stack pops while the new element violates the invariant.

## entry 471

Greedy by end-time picks the most non-overlapping intervals.

## entry 472

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 473

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 474

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 475

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 476

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 477

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 478

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 479

Wavelet tree: range k-th element in O(log Σ) time.

## entry 480

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 481

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 482

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 483

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 484

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 485

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 486

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 487

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 488

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 489

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 490

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 491

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 492

LIS via patience: each pile holds the smallest tail of length k.

## entry 493

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 494

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 495

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 496

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 497

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 498

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 499

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 500

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 501

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 502

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 503

Monotonic stack pops while the new element violates the invariant.

## entry 504

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 505

LIS via patience: each pile holds the smallest tail of length k.

## entry 506

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 507

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 508

Polynomial rolling hash with two moduli kills almost all collisions in practice.
