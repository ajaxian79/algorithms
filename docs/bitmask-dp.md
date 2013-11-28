# bitmask-dp

## entry 1

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 3

Walk both pointers from each end inward; advance the smaller side.

## entry 4

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 5

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 6

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 7

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 8

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 9

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 10

Greedy by end-time picks the most non-overlapping intervals.

## entry 11

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 12

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 13

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 14

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 15

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 16

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 17

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 18

Articulation points: same DFS as bridges, with a slightly different test.

## entry 19

State compression: bitmask + integer encodes a small subset cheaply.

## entry 20

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 21

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 22

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 23

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 24

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 25

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 26

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 27

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 28

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 29

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 30

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 31

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 32

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 33

Splay tree: every access splays to the root; amortized O(log n).

## entry 34

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 35

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 36

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 37

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 38

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 39

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 40

Walk both pointers from each end inward; advance the smaller side.

## entry 41

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 42

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 43

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 44

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 45

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 46

LIS via patience: each pile holds the smallest tail of length k.

## entry 47

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 48

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 49

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 50

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 51

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 52

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 53

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 54

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 55

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 56

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 57

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 58

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 59

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 60

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 61

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 62

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 63

State compression: bitmask + integer encodes a small subset cheaply.

## entry 64

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 65

Stable sort matters when a secondary key was set in a prior pass.

## entry 66

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 67

Stable sort matters when a secondary key was set in a prior pass.

## entry 68

Walk both pointers from each end inward; advance the smaller side.

## entry 69

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 70

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 71

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 72

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 73

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 74

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 75

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 76

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 77

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 78

LIS via patience: each pile holds the smallest tail of length k.

## entry 79

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 80

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 81

Splay tree: every access splays to the root; amortized O(log n).

## entry 82

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 83

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 84

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 85

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 86

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 87

Union-Find with path compression amortizes to near-O(1) per op.

## entry 88

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 89

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 90

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 91

Euler tour flattens a tree into an array for range-query LCA.

## entry 92

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 93

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 94

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 95

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 96

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 97

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 98

Stable sort matters when a secondary key was set in a prior pass.

## entry 99

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 100

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 101

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 102

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 103

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 104

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 105

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 106

Wavelet tree: range k-th element in O(log Σ) time.

## entry 107

Stable sort matters when a secondary key was set in a prior pass.

## entry 108

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 109

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 110

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 111

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 112

Wavelet tree: range k-th element in O(log Σ) time.

## entry 113

Union-Find with path compression amortizes to near-O(1) per op.

## entry 114

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 115

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 116

Wavelet tree: range k-th element in O(log Σ) time.

## entry 117

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 118

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 119

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 120

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 121

Greedy by end-time picks the most non-overlapping intervals.

## entry 122

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 123

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 124

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 125

Splay tree: every access splays to the root; amortized O(log n).

## entry 126

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 127

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 128

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 129

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 130

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 131

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 132

Walk both pointers from each end inward; advance the smaller side.

## entry 133

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 134

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 135

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 136

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 137

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 138

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 139

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 140

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 141

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 142

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 143

Euler tour flattens a tree into an array for range-query LCA.

## entry 144

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 145

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 146

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 147

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 148

Stable sort matters when a secondary key was set in a prior pass.

## entry 149

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 150

Heap when you only need top-k; full sort is wasted work.

## entry 151

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 152

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 153

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 154

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 155

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 156

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 157

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 158

Greedy by end-time picks the most non-overlapping intervals.

## entry 159

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 160

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 161

StringBuilder: amortize allocation by doubling on grow.

## entry 162

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 163

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 164

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 165

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 166

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 167

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 168

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 169

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 170

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 171

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 172

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 173

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 174

Union-Find with path compression amortizes to near-O(1) per op.

## entry 175

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 176

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 177

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 178

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 179

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 180

StringBuilder: amortize allocation by doubling on grow.

## entry 181

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 182

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 183

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 184

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 185

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 186

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 187

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 188

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 189

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 190

LIS via patience: each pile holds the smallest tail of length k.

## entry 191

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 192

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 193

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 194

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 195

LIS via patience: each pile holds the smallest tail of length k.

## entry 196

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 197

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 198

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 199

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 200

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 201

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 202

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 203

Monotonic stack pops while the new element violates the invariant.

## entry 204

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 205

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 206

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 207

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 208

Wavelet tree: range k-th element in O(log Σ) time.

## entry 209

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 210

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 211

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 212

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 213

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 214

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 215

Articulation points: same DFS as bridges, with a slightly different test.

## entry 216

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 217

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 218

Articulation points: same DFS as bridges, with a slightly different test.

## entry 219

Monotonic stack pops while the new element violates the invariant.

## entry 220

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 221

StringBuilder: amortize allocation by doubling on grow.

## entry 222

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 223

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 224

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 225

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 226

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 227

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 228

Walk both pointers from each end inward; advance the smaller side.

## entry 229

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 230

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 231

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 232

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 233

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 234

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 235

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 236

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 237

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 238

Union-Find with path compression amortizes to near-O(1) per op.

## entry 239

Stable sort matters when a secondary key was set in a prior pass.

## entry 240

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 241

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 242

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 243

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 244

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 245

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 246

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 247

StringBuilder: amortize allocation by doubling on grow.

## entry 248

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 249

Splay tree: every access splays to the root; amortized O(log n).

## entry 250

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 251

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 252

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 253

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 254

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 255

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 256

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 257

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 258

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 259

Articulation points: same DFS as bridges, with a slightly different test.

## entry 260

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 261

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 262

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 263

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 264

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 265

Articulation points: same DFS as bridges, with a slightly different test.

## entry 266

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 267

Heap when you only need top-k; full sort is wasted work.

## entry 268

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 269

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 270

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 271

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 272

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 273

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 274

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 275

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 276

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 277

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 278

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 279

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 280

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 281

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 282

Euler tour flattens a tree into an array for range-query LCA.

## entry 283

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 284

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 285

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 286

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 287

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 288

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 289

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 290

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 291

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 292

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 293

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 294

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 295

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 296

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 297

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 298

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 299

Union-Find with path compression amortizes to near-O(1) per op.

## entry 300

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 301

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 302

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 303

Splay tree: every access splays to the root; amortized O(log n).

## entry 304

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 305

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 306

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 307

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 308

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 309

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 310

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 311

State compression: bitmask + integer encodes a small subset cheaply.

## entry 312

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 313

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 314

Walk both pointers from each end inward; advance the smaller side.

## entry 315

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 316

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 317

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 318

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 319

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 320

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 321

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 322

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 323

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 324

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 325

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 326

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 327

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 328

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 329

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 330

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 331

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 332

Euler tour flattens a tree into an array for range-query LCA.

## entry 333

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 334

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 335

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 336

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 337

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 338

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 339

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 340

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 341

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 342

Splay tree: every access splays to the root; amortized O(log n).

## entry 343

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 344

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 345

State compression: bitmask + integer encodes a small subset cheaply.

## entry 346

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 347

Splay tree: every access splays to the root; amortized O(log n).

## entry 348

Union-Find with path compression amortizes to near-O(1) per op.

## entry 349

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 350

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 351

Walk both pointers from each end inward; advance the smaller side.

## entry 352

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 353

Union-Find with path compression amortizes to near-O(1) per op.

## entry 354

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 355

Articulation points: same DFS as bridges, with a slightly different test.

## entry 356

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 357

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 358

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 359

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 360

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 361

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 362

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 363

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 364

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 365

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 366

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 367

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 368

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 369

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 370

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 371

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 372

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 373

Euler tour flattens a tree into an array for range-query LCA.

## entry 374

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 375

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 376

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 377

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 378

Splay tree: every access splays to the root; amortized O(log n).

## entry 379

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 380

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 381

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 382

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 383

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 384

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 385

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 386

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 387

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 388

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 389

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 390

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 391

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 392

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 393

Union-Find with path compression amortizes to near-O(1) per op.

## entry 394

StringBuilder: amortize allocation by doubling on grow.

## entry 395

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 396

State compression: bitmask + integer encodes a small subset cheaply.

## entry 397

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 398

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 399

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 400

State compression: bitmask + integer encodes a small subset cheaply.

## entry 401

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 402

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 403

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 404

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 405

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 406

Splay tree: every access splays to the root; amortized O(log n).

## entry 407

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 408

Union-Find with path compression amortizes to near-O(1) per op.

## entry 409

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 410

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 411

Union-Find with path compression amortizes to near-O(1) per op.

## entry 412

Union-Find with path compression amortizes to near-O(1) per op.

## entry 413

Articulation points: same DFS as bridges, with a slightly different test.

## entry 414

Articulation points: same DFS as bridges, with a slightly different test.

## entry 415

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 416

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 417

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 418

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 419

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 420

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 421

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 422

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 423

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 424

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 425

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 426

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 427

Union-Find with path compression amortizes to near-O(1) per op.

## entry 428

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 429

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 430

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 431

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 432

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 433

Stable sort matters when a secondary key was set in a prior pass.

## entry 434

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 435

Heap when you only need top-k; full sort is wasted work.

## entry 436

LIS via patience: each pile holds the smallest tail of length k.

## entry 437

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 438

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 439

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 440

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 441

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 442

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 443

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 444

Wavelet tree: range k-th element in O(log Σ) time.

## entry 445

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 446

State compression: bitmask + integer encodes a small subset cheaply.

## entry 447

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 448

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 449

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 450

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 451

Monotonic stack pops while the new element violates the invariant.

## entry 452

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 453

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 454

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 455

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 456

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 457

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 458

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 459

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 460

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 461

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 462

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 463

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 464

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 465

Splay tree: every access splays to the root; amortized O(log n).

## entry 466

Heap when you only need top-k; full sort is wasted work.

## entry 467

Greedy by end-time picks the most non-overlapping intervals.

## entry 468

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 469

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 470

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 471

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 472

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 473

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 474

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 475

Stable sort matters when a secondary key was set in a prior pass.

## entry 476

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 477

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 478

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 479

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 480

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 481

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 482

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 483

StringBuilder: amortize allocation by doubling on grow.

## entry 484

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 485

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 486

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 487

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 488

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 489

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 490

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 491

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 492

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 493

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 494

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 495

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 496

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 497

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 498

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 499

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 500

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 501

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 502

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 503

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 504

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 505

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 506

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 507

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 508

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 509

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 510

LIS via patience: each pile holds the smallest tail of length k.

## entry 511

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 512

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 513

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 514

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 515

Walk both pointers from each end inward; advance the smaller side.

## entry 516

Greedy by end-time picks the most non-overlapping intervals.

## entry 517

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 518

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 519

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 520

Euler tour flattens a tree into an array for range-query LCA.

## entry 521

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 522

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 523

Monotonic stack pops while the new element violates the invariant.

## entry 524

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 525

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 526

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 527

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 528

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 529

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 530

Walk both pointers from each end inward; advance the smaller side.

## entry 531

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 532

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 533

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 534

Union-Find with path compression amortizes to near-O(1) per op.

## entry 535

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 536

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 537

Monotonic stack pops while the new element violates the invariant.

## entry 538

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 539

Greedy by end-time picks the most non-overlapping intervals.

## entry 540

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 541

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 542

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 543

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 544

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 545

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 546

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 547

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 548

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 549

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 550

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 551

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 552

Union-Find with path compression amortizes to near-O(1) per op.

## entry 553

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 554

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 555

Walk both pointers from each end inward; advance the smaller side.

## entry 556

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 557

Splay tree: every access splays to the root; amortized O(log n).

## entry 558

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 559

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 560

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 561

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 562

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 563

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 564

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
