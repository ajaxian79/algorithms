# wavelet-tree

## entry 1

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 4

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 6

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 7

Walk both pointers from each end inward; advance the smaller side.

## entry 8

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 9

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 10

State compression: bitmask + integer encodes a small subset cheaply.

## entry 11

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 12

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 13

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 14

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 15

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 16

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 17

Heap when you only need top-k; full sort is wasted work.

## entry 18

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 19

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 20

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 21

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 22

Greedy by end-time picks the most non-overlapping intervals.

## entry 23

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 24

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 25

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 26

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 27

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 28

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 29

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 30

Articulation points: same DFS as bridges, with a slightly different test.

## entry 31

Splay tree: every access splays to the root; amortized O(log n).

## entry 32

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 33

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 34

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 35

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 36

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 37

Union-Find with path compression amortizes to near-O(1) per op.

## entry 38

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 39

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 40

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 41

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 42

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 43

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 44

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 45

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 46

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 47

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 48

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 49

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 50

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 51

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 52

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 53

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 54

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 55

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 56

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 57

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 58

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 59

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 60

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 61

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 62

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 63

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 64

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 65

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 66

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 67

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 68

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 69

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 70

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 71

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 72

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 73

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 74

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 75

Stable sort matters when a secondary key was set in a prior pass.

## entry 76

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 77

Greedy by end-time picks the most non-overlapping intervals.

## entry 78

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 79

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 80

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 81

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 82

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 83

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 84

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 85

StringBuilder: amortize allocation by doubling on grow.

## entry 86

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 87

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 88

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 89

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 90

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 91

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 92

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 93

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 94

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 95

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 96

Wavelet tree: range k-th element in O(log Σ) time.

## entry 97

Wavelet tree: range k-th element in O(log Σ) time.

## entry 98

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 99

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 100

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 101

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 102

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 103

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 104

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 105

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 106

Monotonic stack pops while the new element violates the invariant.

## entry 107

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 108

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 109

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 110

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 111

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 112

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 113

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 114

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 115

Articulation points: same DFS as bridges, with a slightly different test.

## entry 116

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 117

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 118

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 119

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 120

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 121

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 122

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 123

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 124

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 125

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 126

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 127

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 128

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 129

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 130

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 131

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 132

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 133

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 134

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 135

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 136

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 137

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 138

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 139

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 140

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 141

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 142

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 143

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 144

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 145

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 146

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 147

Walk both pointers from each end inward; advance the smaller side.

## entry 148

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 149

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 150

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 151

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 152

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 153

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 154

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 155

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 156

Euler tour flattens a tree into an array for range-query LCA.

## entry 157

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 158

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 159

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 160

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 161

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 162

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 163

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 164

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 165

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 166

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 167

Walk both pointers from each end inward; advance the smaller side.

## entry 168

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 169

Monotonic stack pops while the new element violates the invariant.

## entry 170

Heap when you only need top-k; full sort is wasted work.

## entry 171

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 172

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 173

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 174

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 175

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 176

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 177

Articulation points: same DFS as bridges, with a slightly different test.

## entry 178

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 179

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 180

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 181

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 182

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 183

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 184

Splay tree: every access splays to the root; amortized O(log n).

## entry 185

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 186

State compression: bitmask + integer encodes a small subset cheaply.

## entry 187

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 188

Union-Find with path compression amortizes to near-O(1) per op.

## entry 189

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 190

Union-Find with path compression amortizes to near-O(1) per op.

## entry 191

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 192

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 193

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 194

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 195

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 196

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 197

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 198

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 199

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 200

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 201

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 202

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 203

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 204

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 205

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 206

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 207

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 208

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 209

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 210

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 211

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 212

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 213

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 214

LIS via patience: each pile holds the smallest tail of length k.

## entry 215

Union-Find with path compression amortizes to near-O(1) per op.

## entry 216

Union-Find with path compression amortizes to near-O(1) per op.

## entry 217

Wavelet tree: range k-th element in O(log Σ) time.

## entry 218

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 219

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 220

Splay tree: every access splays to the root; amortized O(log n).

## entry 221

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 222

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 223

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 224

State compression: bitmask + integer encodes a small subset cheaply.

## entry 225

Greedy by end-time picks the most non-overlapping intervals.

## entry 226

LIS via patience: each pile holds the smallest tail of length k.

## entry 227

Monotonic stack pops while the new element violates the invariant.

## entry 228

State compression: bitmask + integer encodes a small subset cheaply.

## entry 229

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 230

State compression: bitmask + integer encodes a small subset cheaply.

## entry 231

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 232

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 233

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 234

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 235

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 236

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 237

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 238

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 239

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 240

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 241

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 242

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 243

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 244

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 245

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 246

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 247

Euler tour flattens a tree into an array for range-query LCA.

## entry 248

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 249

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 250

Monotonic stack pops while the new element violates the invariant.

## entry 251

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 252

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 253

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 254

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 255

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 256

Stable sort matters when a secondary key was set in a prior pass.

## entry 257

StringBuilder: amortize allocation by doubling on grow.

## entry 258

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 259

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 260

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 261

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 262

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 263

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 264

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 265

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 266

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 267

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 268

Union-Find with path compression amortizes to near-O(1) per op.

## entry 269

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 270

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 271

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 272

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 273

StringBuilder: amortize allocation by doubling on grow.

## entry 274

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 275

Union-Find with path compression amortizes to near-O(1) per op.

## entry 276

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 277

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 278

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 279

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 280

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 281

Walk both pointers from each end inward; advance the smaller side.

## entry 282

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 283

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 284

Articulation points: same DFS as bridges, with a slightly different test.

## entry 285

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 286

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 287

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 288

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 289

Greedy by end-time picks the most non-overlapping intervals.

## entry 290

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 291

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 292

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 293

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 294

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 295

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 296

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 297

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 298

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 299

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 300

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 301

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 302

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 303

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 304

Euler tour flattens a tree into an array for range-query LCA.

## entry 305

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 306

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 307

Greedy by end-time picks the most non-overlapping intervals.

## entry 308

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 309

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 310

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 311

Monotonic stack pops while the new element violates the invariant.

## entry 312

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 313

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 314

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 315

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 316

Greedy by end-time picks the most non-overlapping intervals.

## entry 317

Walk both pointers from each end inward; advance the smaller side.

## entry 318

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 319

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 320

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 321

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 322

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 323

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 324

Heap when you only need top-k; full sort is wasted work.

## entry 325

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 326

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 327

Euler tour flattens a tree into an array for range-query LCA.

## entry 328

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 329

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 330

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 331

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 332

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 333

Greedy by end-time picks the most non-overlapping intervals.

## entry 334

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 335

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 336

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 337

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 338

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 339

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 340

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 341

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 342

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 343

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 344

StringBuilder: amortize allocation by doubling on grow.

## entry 345

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 346

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 347

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 348

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 349

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 350

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 351

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 352

Monotonic stack pops while the new element violates the invariant.

## entry 353

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 354

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 355

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 356

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 357

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 358

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 359

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 360

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 361

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 362

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 363

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 364

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 365

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 366

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 367

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 368

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 369

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 370

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 371

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 372

Articulation points: same DFS as bridges, with a slightly different test.

## entry 373

Wavelet tree: range k-th element in O(log Σ) time.

## entry 374

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 375

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 376

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 377

Monotonic stack pops while the new element violates the invariant.

## entry 378

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 379

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 380

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 381

Walk both pointers from each end inward; advance the smaller side.

## entry 382

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 383

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 384

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 385

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 386

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 387

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 388

Heap when you only need top-k; full sort is wasted work.

## entry 389

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 390

Splay tree: every access splays to the root; amortized O(log n).

## entry 391

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 392

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 393

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 394

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 395

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 396

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 397

Monotonic stack pops while the new element violates the invariant.

## entry 398

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 399

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 400

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 401

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 402

Walk both pointers from each end inward; advance the smaller side.

## entry 403

Heap when you only need top-k; full sort is wasted work.

## entry 404

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 405

Euler tour flattens a tree into an array for range-query LCA.

## entry 406

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 407

Splay tree: every access splays to the root; amortized O(log n).

## entry 408

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 409

StringBuilder: amortize allocation by doubling on grow.

## entry 410

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 411

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 412

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 413

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 414

Splay tree: every access splays to the root; amortized O(log n).

## entry 415

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 416

Monotonic stack pops while the new element violates the invariant.

## entry 417

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 418

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 419

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 420

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 421

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 422

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 423

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 424

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 425

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 426

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 427

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 428

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 429

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 430

Stable sort matters when a secondary key was set in a prior pass.

## entry 431

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 432

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 433

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 434

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 435

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 436

Walk both pointers from each end inward; advance the smaller side.

## entry 437

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 438

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 439

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 440

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 441

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 442

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 443

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 444

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 445

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 446

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 447

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 448

Monotonic stack pops while the new element violates the invariant.

## entry 449

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 450

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 451

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 452

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 453

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 454

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 455

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 456

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 457

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 458

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 459

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 460

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 461

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 462

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 463

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 464

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 465

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 466

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 467

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 468

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 469

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 470

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 471

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 472

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 473

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 474

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 475

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 476

Walk both pointers from each end inward; advance the smaller side.

## entry 477

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 478

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 479

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 480

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 481

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 482

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 483

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 484

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 485

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 486

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 487

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 488

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 489

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 490

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 491

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 492

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 493

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 494

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 495

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 496

State compression: bitmask + integer encodes a small subset cheaply.

## entry 497

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 498

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 499

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 500

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 501

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 502

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 503

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 504

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 505

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 506

Monotonic stack pops while the new element violates the invariant.

## entry 507

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 508

Union-Find with path compression amortizes to near-O(1) per op.

## entry 509

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 510

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 511

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 512

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 513

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 514

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 515

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 516

State compression: bitmask + integer encodes a small subset cheaply.

## entry 517

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 518

StringBuilder: amortize allocation by doubling on grow.

## entry 519

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 520

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 521

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 522

Heap when you only need top-k; full sort is wasted work.

## entry 523

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 524

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 525

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 526

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 527

Walk both pointers from each end inward; advance the smaller side.

## entry 528

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 529

Splay tree: every access splays to the root; amortized O(log n).

## entry 530

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 531

Heap when you only need top-k; full sort is wasted work.

## entry 532

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 533

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 534

Monotonic stack pops while the new element violates the invariant.

## entry 535

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 536

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 537

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 538

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 539

Articulation points: same DFS as bridges, with a slightly different test.

## entry 540

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 541

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 542

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 543

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 544

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 545

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 546

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 547

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 548

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 549

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 550

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 551

Articulation points: same DFS as bridges, with a slightly different test.

## entry 552

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 553

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 554

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 555

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 556

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 557

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 558

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 559

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 560

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 561

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 562

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 563

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 564

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 565

Union-Find with path compression amortizes to near-O(1) per op.

## entry 566

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 567

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 568

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 569

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 570

Euler tour flattens a tree into an array for range-query LCA.

## entry 571

Articulation points: same DFS as bridges, with a slightly different test.

## entry 572

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 573

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 574

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 575

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 576

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 577

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 578

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 579

Splay tree: every access splays to the root; amortized O(log n).

## entry 580

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 581

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 582

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 583

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 584

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 585

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 586

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 587

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 588

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 589

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 590

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 591

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 592

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 593

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 594

Articulation points: same DFS as bridges, with a slightly different test.

## entry 595

Stable sort matters when a secondary key was set in a prior pass.
