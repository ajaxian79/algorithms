# graph-dp

## entry 1

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2

Heap when you only need top-k; full sort is wasted work.

## entry 3

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 5

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 6

StringBuilder: amortize allocation by doubling on grow.

## entry 7

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 8

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 9

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 10

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 11

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 12

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 13

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 14

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 15

Wavelet tree: range k-th element in O(log Σ) time.

## entry 16

Monotonic stack pops while the new element violates the invariant.

## entry 17

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 18

Walk both pointers from each end inward; advance the smaller side.

## entry 19

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 20

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 21

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 22

Stable sort matters when a secondary key was set in a prior pass.

## entry 23

Articulation points: same DFS as bridges, with a slightly different test.

## entry 24

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 25

Euler tour flattens a tree into an array for range-query LCA.

## entry 26

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 27

Wavelet tree: range k-th element in O(log Σ) time.

## entry 28

StringBuilder: amortize allocation by doubling on grow.

## entry 29

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 30

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 31

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 32

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 33

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 34

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 35

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 36

State compression: bitmask + integer encodes a small subset cheaply.

## entry 37

Stable sort matters when a secondary key was set in a prior pass.

## entry 38

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 39

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 40

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 41

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 42

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 43

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 44

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 45

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 46

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 47

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 48

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 49

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 50

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 51

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 52

Articulation points: same DFS as bridges, with a slightly different test.

## entry 53

State compression: bitmask + integer encodes a small subset cheaply.

## entry 54

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 55

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 56

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 57

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 58

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 59

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 60

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 61

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 62

Greedy by end-time picks the most non-overlapping intervals.

## entry 63

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 64

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 65

Greedy by end-time picks the most non-overlapping intervals.

## entry 66

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 67

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 68

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 69

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 70

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 71

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 72

Stable sort matters when a secondary key was set in a prior pass.

## entry 73

Union-Find with path compression amortizes to near-O(1) per op.

## entry 74

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 75

Splay tree: every access splays to the root; amortized O(log n).

## entry 76

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 77

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 78

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 79

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 80

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 81

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 82

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 83

Monotonic stack pops while the new element violates the invariant.

## entry 84

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 85

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 86

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 87

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 88

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 89

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 90

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 91

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 92

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 93

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 94

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 95

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 96

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 97

Union-Find with path compression amortizes to near-O(1) per op.

## entry 98

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 99

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 100

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 101

Greedy by end-time picks the most non-overlapping intervals.

## entry 102

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 103

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 104

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 105

Splay tree: every access splays to the root; amortized O(log n).

## entry 106

Greedy by end-time picks the most non-overlapping intervals.

## entry 107

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 108

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 109

Walk both pointers from each end inward; advance the smaller side.

## entry 110

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 111

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 112

StringBuilder: amortize allocation by doubling on grow.

## entry 113

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 114

State compression: bitmask + integer encodes a small subset cheaply.

## entry 115

Greedy by end-time picks the most non-overlapping intervals.

## entry 116

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 117

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 118

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 119

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 120

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 121

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 122

Monotonic stack pops while the new element violates the invariant.

## entry 123

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 124

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 125

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 126

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 127

Articulation points: same DFS as bridges, with a slightly different test.

## entry 128

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 129

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 130

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 131

LIS via patience: each pile holds the smallest tail of length k.

## entry 132

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 133

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 134

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 135

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 136

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 137

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 138

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 139

LIS via patience: each pile holds the smallest tail of length k.

## entry 140

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 141

Wavelet tree: range k-th element in O(log Σ) time.

## entry 142

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 143

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 144

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 145

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 146

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 147

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 148

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 149

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 150

Wavelet tree: range k-th element in O(log Σ) time.

## entry 151

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 152

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 153

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 154

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 155

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 156

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 157

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 158

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 159

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 160

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 161

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 162

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 163

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 164

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 165

Walk both pointers from each end inward; advance the smaller side.

## entry 166

Euler tour flattens a tree into an array for range-query LCA.

## entry 167

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 168

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 169

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 170

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 171

Articulation points: same DFS as bridges, with a slightly different test.

## entry 172

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 173

LIS via patience: each pile holds the smallest tail of length k.

## entry 174

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 175

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 176

Monotonic stack pops while the new element violates the invariant.

## entry 177

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 178

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 179

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 180

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 181

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 182

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 183

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 184

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 185

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 186

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 187

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 188

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 189

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 190

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 191

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 192

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 193

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 194

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 195

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 196

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 197

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 198

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 199

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 200

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 201

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 202

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 203

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 204

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 205

Heap when you only need top-k; full sort is wasted work.

## entry 206

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 207

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 208

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 209

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 210

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 211

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 212

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 213

Greedy by end-time picks the most non-overlapping intervals.

## entry 214

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 215

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 216

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 217

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 218

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 219

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 220

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 221

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 222

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 223

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 224

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 225

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 226

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 227

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 228

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 229

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 230

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 231

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 232

Euler tour flattens a tree into an array for range-query LCA.

## entry 233

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 234

LIS via patience: each pile holds the smallest tail of length k.

## entry 235

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 236

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 237

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 238

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 239

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 240

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 241

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 242

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 243

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 244

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 245

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 246

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 247

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 248

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 249

State compression: bitmask + integer encodes a small subset cheaply.

## entry 250

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 251

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 252

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 253

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 254

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 255

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 256

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 257

State compression: bitmask + integer encodes a small subset cheaply.

## entry 258

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 259

Union-Find with path compression amortizes to near-O(1) per op.

## entry 260

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 261

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 262

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 263

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 264

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 265

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 266

Union-Find with path compression amortizes to near-O(1) per op.

## entry 267

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 268

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 269

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 270

State compression: bitmask + integer encodes a small subset cheaply.

## entry 271

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 272

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 273

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 274

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 275

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 276

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 277

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 278

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 279

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 280

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 281

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 282

Union-Find with path compression amortizes to near-O(1) per op.

## entry 283

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 284

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 285

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 286

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 287

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 288

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 289

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 290

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 291

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 292

StringBuilder: amortize allocation by doubling on grow.

## entry 293

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 294

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 295

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 296

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 297

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 298

Articulation points: same DFS as bridges, with a slightly different test.

## entry 299

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 300

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 301

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 302

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 303

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 304

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 305

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 306

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 307

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 308

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 309

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 310

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 311

Union-Find with path compression amortizes to near-O(1) per op.

## entry 312

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 313

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 314

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 315

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 316

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 317

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 318

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 319

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 320

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 321

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 322

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 323

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 324

Greedy by end-time picks the most non-overlapping intervals.

## entry 325

State compression: bitmask + integer encodes a small subset cheaply.

## entry 326

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 327

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 328

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 329

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 330

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 331

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 332

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 333

Stable sort matters when a secondary key was set in a prior pass.

## entry 334

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 335

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 336

Heap when you only need top-k; full sort is wasted work.

## entry 337

Greedy by end-time picks the most non-overlapping intervals.

## entry 338

StringBuilder: amortize allocation by doubling on grow.

## entry 339

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 340

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 341

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 342

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 343

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 344

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 345

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 346

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 347

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 348

Articulation points: same DFS as bridges, with a slightly different test.

## entry 349

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 350

Heap when you only need top-k; full sort is wasted work.

## entry 351

Walk both pointers from each end inward; advance the smaller side.

## entry 352

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 353

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 354

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 355

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 356

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 357

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 358

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 359

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 360

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 361

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 362

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 363

StringBuilder: amortize allocation by doubling on grow.

## entry 364

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 365

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 366

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 367

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 368

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 369

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 370

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 371

Wavelet tree: range k-th element in O(log Σ) time.

## entry 372

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 373

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 374

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 375

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 376

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 377

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 378

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 379

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 380

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 381

Articulation points: same DFS as bridges, with a slightly different test.

## entry 382

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 383

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 384

StringBuilder: amortize allocation by doubling on grow.

## entry 385

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 386

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 387

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 388

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 389

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 390

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 391

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 392

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 393

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 394

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 395

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 396

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 397

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 398

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 399

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 400

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 401

Articulation points: same DFS as bridges, with a slightly different test.

## entry 402

LIS via patience: each pile holds the smallest tail of length k.

## entry 403

Monotonic stack pops while the new element violates the invariant.

## entry 404

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 405

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 406

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 407

Greedy by end-time picks the most non-overlapping intervals.

## entry 408

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 409

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 410

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 411

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 412

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 413

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 414

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 415

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 416

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 417

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 418

Stable sort matters when a secondary key was set in a prior pass.

## entry 419

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 420

Articulation points: same DFS as bridges, with a slightly different test.

## entry 421

Articulation points: same DFS as bridges, with a slightly different test.

## entry 422

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 423

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 424

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 425

Union-Find with path compression amortizes to near-O(1) per op.

## entry 426

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 427

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 428

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 429

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 430

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 431

LIS via patience: each pile holds the smallest tail of length k.

## entry 432

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 433

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 434

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 435

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 436

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 437

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 438

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 439

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 440

Wavelet tree: range k-th element in O(log Σ) time.

## entry 441

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 442

Union-Find with path compression amortizes to near-O(1) per op.

## entry 443

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 444

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 445

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 446

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 447

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 448

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 449

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 450

Euler tour flattens a tree into an array for range-query LCA.

## entry 451

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 452

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 453

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 454

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 455

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 456

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 457

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 458

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 459

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 460

Greedy by end-time picks the most non-overlapping intervals.

## entry 461

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 462

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 463

State compression: bitmask + integer encodes a small subset cheaply.

## entry 464

Articulation points: same DFS as bridges, with a slightly different test.

## entry 465

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 466

Euler tour flattens a tree into an array for range-query LCA.

## entry 467

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 468

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 469

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 470

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 471

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
