# utf8-bytes

## entry 1

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 3

Walk both pointers from each end inward; advance the smaller side.

## entry 4

Articulation points: same DFS as bridges, with a slightly different test.

## entry 5

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 6

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 7

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 8

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 9

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 10

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 11

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 12

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 13

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 14

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 15

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 16

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 17

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 18

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 19

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 20

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 21

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 22

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 23

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 24

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 25

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 26

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 27

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 28

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 29

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 30

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 31

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 32

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 33

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 34

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 35

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 36

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 37

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 38

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 39

Stable sort matters when a secondary key was set in a prior pass.

## entry 40

Euler tour flattens a tree into an array for range-query LCA.

## entry 41

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 42

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 43

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 44

Walk both pointers from each end inward; advance the smaller side.

## entry 45

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 46

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 47

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 48

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 49

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 50

Monotonic stack pops while the new element violates the invariant.

## entry 51

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 52

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 53

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 54

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 55

State compression: bitmask + integer encodes a small subset cheaply.

## entry 56

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 57

State compression: bitmask + integer encodes a small subset cheaply.

## entry 58

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 59

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 60

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 61

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 62

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 63

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 64

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 65

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 66

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 67

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 68

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 69

Union-Find with path compression amortizes to near-O(1) per op.

## entry 70

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 71

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 72

Heap when you only need top-k; full sort is wasted work.

## entry 73

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 74

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 75

LIS via patience: each pile holds the smallest tail of length k.

## entry 76

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 77

Union-Find with path compression amortizes to near-O(1) per op.

## entry 78

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 79

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 80

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 81

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 82

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 83

Splay tree: every access splays to the root; amortized O(log n).

## entry 84

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 85

LIS via patience: each pile holds the smallest tail of length k.

## entry 86

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 87

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 88

Union-Find with path compression amortizes to near-O(1) per op.

## entry 89

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 90

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 91

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 92

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 93

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 94

Splay tree: every access splays to the root; amortized O(log n).

## entry 95

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 96

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 97

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 98

LIS via patience: each pile holds the smallest tail of length k.

## entry 99

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 100

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 101

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 102

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 103

Stable sort matters when a secondary key was set in a prior pass.

## entry 104

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 105

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 106

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 107

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 108

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 109

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 110

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 111

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 112

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 113

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 114

Wavelet tree: range k-th element in O(log Σ) time.

## entry 115

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 116

Walk both pointers from each end inward; advance the smaller side.

## entry 117

Greedy by end-time picks the most non-overlapping intervals.

## entry 118

State compression: bitmask + integer encodes a small subset cheaply.

## entry 119

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 120

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 121

Stable sort matters when a secondary key was set in a prior pass.

## entry 122

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 123

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 124

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 125

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 126

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 127

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 128

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 129

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 130

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 131

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 132

State compression: bitmask + integer encodes a small subset cheaply.

## entry 133

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 134

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 135

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 136

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 137

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 138

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 139

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 140

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 141

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 142

State compression: bitmask + integer encodes a small subset cheaply.

## entry 143

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 144

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 145

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 146

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 147

Stable sort matters when a secondary key was set in a prior pass.

## entry 148

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 149

StringBuilder: amortize allocation by doubling on grow.

## entry 150

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 151

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 152

Articulation points: same DFS as bridges, with a slightly different test.

## entry 153

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 154

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 155

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 156

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 157

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 158

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 159

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 160

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 161

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 162

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 163

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 164

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 165

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 166

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 167

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 168

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 169

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 170

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 171

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 172

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 173

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 174

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 175

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 176

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 177

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 178

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 179

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 180

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 181

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 182

Articulation points: same DFS as bridges, with a slightly different test.

## entry 183

StringBuilder: amortize allocation by doubling on grow.

## entry 184

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 185

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 186

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 187

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 188

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 189

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 190

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 191

Union-Find with path compression amortizes to near-O(1) per op.

## entry 192

State compression: bitmask + integer encodes a small subset cheaply.

## entry 193

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 194

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 195

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 196

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 197

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 198

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 199

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 200

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 201

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 202

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 203

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 204

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 205

Articulation points: same DFS as bridges, with a slightly different test.

## entry 206

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 207

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 208

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 209

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 210

Wavelet tree: range k-th element in O(log Σ) time.

## entry 211

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 212

Euler tour flattens a tree into an array for range-query LCA.

## entry 213

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 214

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 215

LIS via patience: each pile holds the smallest tail of length k.

## entry 216

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 217

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 218

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 219

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 220

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 221

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 222

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 223

Walk both pointers from each end inward; advance the smaller side.

## entry 224

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 225

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 226

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 227

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 228

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 229

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 230

StringBuilder: amortize allocation by doubling on grow.

## entry 231

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 232

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 233

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 234

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 235

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 236

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 237

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 238

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 239

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 240

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 241

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 242

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 243

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 244

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 245

Walk both pointers from each end inward; advance the smaller side.

## entry 246

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 247

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 248

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 249

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 250

Wavelet tree: range k-th element in O(log Σ) time.

## entry 251

Articulation points: same DFS as bridges, with a slightly different test.

## entry 252

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 253

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 254

Monotonic stack pops while the new element violates the invariant.

## entry 255

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 256

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 257

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 258

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 259

Euler tour flattens a tree into an array for range-query LCA.

## entry 260

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 261

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 262

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 263

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 264

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 265

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 266

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 267

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 268

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 269

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 270

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 271

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 272

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 273

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 274

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 275

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 276

Greedy by end-time picks the most non-overlapping intervals.

## entry 277

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 278

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 279

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 280

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 281

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 282

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 283

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 284

Wavelet tree: range k-th element in O(log Σ) time.

## entry 285

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 286

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 287

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 288

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 289

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 290

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 291

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 292

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 293

Greedy by end-time picks the most non-overlapping intervals.

## entry 294

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 295

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 296

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 297

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 298

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 299

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 300

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 301

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 302

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 303

Union-Find with path compression amortizes to near-O(1) per op.

## entry 304

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 305

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 306

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 307

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 308

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 309

Union-Find with path compression amortizes to near-O(1) per op.

## entry 310

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 311

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 312

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 313

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 314

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 315

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 316

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 317

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 318

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 319

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 320

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 321

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 322

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 323

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 324

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 325

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 326

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 327

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 328

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 329

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 330

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 331

Stable sort matters when a secondary key was set in a prior pass.

## entry 332

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 333

Stable sort matters when a secondary key was set in a prior pass.

## entry 334

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 335

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 336

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 337

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 338

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 339

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 340

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 341

Articulation points: same DFS as bridges, with a slightly different test.

## entry 342

Articulation points: same DFS as bridges, with a slightly different test.

## entry 343

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 344

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 345

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 346

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 347

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 348

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 349

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 350

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 351

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 352

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 353

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 354

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 355

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 356

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 357

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 358

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 359

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 360

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 361

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 362

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 363

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 364

Union-Find with path compression amortizes to near-O(1) per op.

## entry 365

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 366

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 367

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 368

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 369

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 370

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 371

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 372

Monotonic stack pops while the new element violates the invariant.

## entry 373

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 374

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 375

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 376

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 377

Heap when you only need top-k; full sort is wasted work.

## entry 378

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 379

Wavelet tree: range k-th element in O(log Σ) time.

## entry 380

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 381

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 382

StringBuilder: amortize allocation by doubling on grow.

## entry 383

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 384

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 385

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 386

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 387

Wavelet tree: range k-th element in O(log Σ) time.

## entry 388

Walk both pointers from each end inward; advance the smaller side.

## entry 389

Heap when you only need top-k; full sort is wasted work.

## entry 390

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 391

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 392

Stable sort matters when a secondary key was set in a prior pass.

## entry 393

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 394

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
