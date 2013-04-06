# ascii-rules

## entry 1

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5

StringBuilder: amortize allocation by doubling on grow.

## entry 6

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 7

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 8

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 9

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 10

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 11

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 12

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 13

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 14

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 15

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 16

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 17

Stable sort matters when a secondary key was set in a prior pass.

## entry 18

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 19

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 20

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 21

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 22

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 23

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 24

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 25

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 26

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 27

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 28

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 29

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 30

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 31

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 32

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 33

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 34

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 35

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 36

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 37

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 38

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 39

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 40

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 41

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 42

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 43

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 44

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 45

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 46

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 47

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 48

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 49

Wavelet tree: range k-th element in O(log Σ) time.

## entry 50

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 51

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 52

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 53

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 54

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 55

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 56

Stable sort matters when a secondary key was set in a prior pass.

## entry 57

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 58

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 59

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 60

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 61

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 62

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 63

Monotonic stack pops while the new element violates the invariant.

## entry 64

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 65

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 66

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 67

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 68

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 69

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 70

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 71

Greedy by end-time picks the most non-overlapping intervals.

## entry 72

Heap when you only need top-k; full sort is wasted work.

## entry 73

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 74

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 75

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 76

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 77

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 78

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 79

StringBuilder: amortize allocation by doubling on grow.

## entry 80

Splay tree: every access splays to the root; amortized O(log n).

## entry 81

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 82

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 83

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 84

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 85

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 86

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 87

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 88

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 89

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 90

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 91

Walk both pointers from each end inward; advance the smaller side.

## entry 92

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 93

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 94

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 95

Heap when you only need top-k; full sort is wasted work.

## entry 96

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 97

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 98

Greedy by end-time picks the most non-overlapping intervals.

## entry 99

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 100

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 101

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 102

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 103

Articulation points: same DFS as bridges, with a slightly different test.

## entry 104

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 105

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 106

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 107

Monotonic stack pops while the new element violates the invariant.

## entry 108

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 109

Stable sort matters when a secondary key was set in a prior pass.

## entry 110

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 111

Splay tree: every access splays to the root; amortized O(log n).

## entry 112

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 113

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 114

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 115

Heap when you only need top-k; full sort is wasted work.

## entry 116

Articulation points: same DFS as bridges, with a slightly different test.

## entry 117

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 118

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 119

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 120

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 121

StringBuilder: amortize allocation by doubling on grow.

## entry 122

Union-Find with path compression amortizes to near-O(1) per op.

## entry 123

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 124

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 125

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 126

Articulation points: same DFS as bridges, with a slightly different test.

## entry 127

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 128

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 129

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 130

LIS via patience: each pile holds the smallest tail of length k.

## entry 131

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 132

Splay tree: every access splays to the root; amortized O(log n).

## entry 133

Greedy by end-time picks the most non-overlapping intervals.

## entry 134

Splay tree: every access splays to the root; amortized O(log n).

## entry 135

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 136

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 137

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 138

Union-Find with path compression amortizes to near-O(1) per op.

## entry 139

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 140

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 141

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 142

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 143

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 144

State compression: bitmask + integer encodes a small subset cheaply.

## entry 145

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 146

StringBuilder: amortize allocation by doubling on grow.

## entry 147

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 148

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 149

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 150

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 151

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 152

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 153

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 154

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 155

Union-Find with path compression amortizes to near-O(1) per op.

## entry 156

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 157

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 158

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 159

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 160

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 161

StringBuilder: amortize allocation by doubling on grow.

## entry 162

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 163

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 164

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 165

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 166

Euler tour flattens a tree into an array for range-query LCA.

## entry 167

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 168

Splay tree: every access splays to the root; amortized O(log n).

## entry 169

LIS via patience: each pile holds the smallest tail of length k.

## entry 170

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 171

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 172

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 173

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 174

Splay tree: every access splays to the root; amortized O(log n).

## entry 175

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 176

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 177

Greedy by end-time picks the most non-overlapping intervals.

## entry 178

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 179

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 180

Union-Find with path compression amortizes to near-O(1) per op.

## entry 181

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 182

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 183

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 184

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 185

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 186

Splay tree: every access splays to the root; amortized O(log n).

## entry 187

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 188

Walk both pointers from each end inward; advance the smaller side.

## entry 189

LIS via patience: each pile holds the smallest tail of length k.

## entry 190

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 191

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 192

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 193

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 194

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 195

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 196

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 197

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 198

StringBuilder: amortize allocation by doubling on grow.

## entry 199

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 200

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 201

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 202

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 203

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 204

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 205

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 206

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 207

Union-Find with path compression amortizes to near-O(1) per op.

## entry 208

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 209

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 210

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 211

Articulation points: same DFS as bridges, with a slightly different test.

## entry 212

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 213

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 214

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 215

LIS via patience: each pile holds the smallest tail of length k.

## entry 216

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 217

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 218

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 219

Heap when you only need top-k; full sort is wasted work.

## entry 220

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 221

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 222

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 223

Monotonic stack pops while the new element violates the invariant.

## entry 224

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 225

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 226

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 227

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 228

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 229

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 230

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 231

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 232

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 233

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 234

Articulation points: same DFS as bridges, with a slightly different test.

## entry 235

Monotonic stack pops while the new element violates the invariant.

## entry 236

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 237

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 238

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 239

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 240

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 241

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 242

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 243

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 244

Walk both pointers from each end inward; advance the smaller side.

## entry 245

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 246

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 247

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 248

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 249

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 250

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 251

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 252

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 253

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 254

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 255

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 256

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 257

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 258

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 259

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 260

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 261

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 262

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 263

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 264

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 265

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 266

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 267

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 268

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 269

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 270

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 271

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 272

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 273

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 274

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 275

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 276

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 277

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 278

Euler tour flattens a tree into an array for range-query LCA.

## entry 279

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 280

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 281

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 282

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 283

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 284

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 285

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 286

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 287

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 288

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 289

Heap when you only need top-k; full sort is wasted work.

## entry 290

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 291

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 292

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 293

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 294

Greedy by end-time picks the most non-overlapping intervals.

## entry 295

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 296

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 297

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 298

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 299

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 300

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 301

LIS via patience: each pile holds the smallest tail of length k.

## entry 302

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 303

Union-Find with path compression amortizes to near-O(1) per op.

## entry 304

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 305

StringBuilder: amortize allocation by doubling on grow.

## entry 306

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 307

Euler tour flattens a tree into an array for range-query LCA.

## entry 308

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 309

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 310

LIS via patience: each pile holds the smallest tail of length k.

## entry 311

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 312

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 313

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 314

Monotonic stack pops while the new element violates the invariant.

## entry 315

Articulation points: same DFS as bridges, with a slightly different test.

## entry 316

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 317

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 318

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 319

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 320

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 321

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 322

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 323

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 324

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 325

Monotonic stack pops while the new element violates the invariant.

## entry 326

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 327

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 328

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 329

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 330

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 331

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 332

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 333

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 334

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 335

Stable sort matters when a secondary key was set in a prior pass.

## entry 336

State compression: bitmask + integer encodes a small subset cheaply.

## entry 337

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 338

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 339

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 340

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 341

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 342

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 343

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 344

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 345

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 346

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 347

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 348

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 349

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 350

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 351

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 352

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 353

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 354

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 355

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 356

LIS via patience: each pile holds the smallest tail of length k.

## entry 357

Monotonic stack pops while the new element violates the invariant.

## entry 358

Euler tour flattens a tree into an array for range-query LCA.

## entry 359

Greedy by end-time picks the most non-overlapping intervals.

## entry 360

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 361

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 362

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 363

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 364

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 365

Greedy by end-time picks the most non-overlapping intervals.

## entry 366

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 367

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 368

StringBuilder: amortize allocation by doubling on grow.

## entry 369

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 370

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 371

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 372

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 373

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 374

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 375

Monotonic stack pops while the new element violates the invariant.

## entry 376

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 377

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 378

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 379

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 380

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 381

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 382

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 383

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 384

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 385

Euler tour flattens a tree into an array for range-query LCA.

## entry 386

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 387

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 388

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 389

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 390

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 391

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 392

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 393

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 394

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 395

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 396

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 397

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 398

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 399

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 400

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 401

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 402

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 403

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 404

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 405

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 406

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 407

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 408

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 409

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 410

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 411

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 412

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 413

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 414

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 415

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 416

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 417

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 418

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 419

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 420

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 421

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 422

LIS via patience: each pile holds the smallest tail of length k.

## entry 423

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 424

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 425

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 426

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 427

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 428

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 429

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 430

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 431

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 432

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 433

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 434

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 435

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 436

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 437

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 438

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 439

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 440

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 441

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 442

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 443

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 444

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 445

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 446

Greedy by end-time picks the most non-overlapping intervals.

## entry 447

Stable sort matters when a secondary key was set in a prior pass.

## entry 448

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 449

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 450

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 451

State compression: bitmask + integer encodes a small subset cheaply.

## entry 452

Articulation points: same DFS as bridges, with a slightly different test.

## entry 453

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 454

Monotonic stack pops while the new element violates the invariant.

## entry 455

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 456

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 457

Walk both pointers from each end inward; advance the smaller side.

## entry 458

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 459

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 460

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 461

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 462

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 463

Greedy by end-time picks the most non-overlapping intervals.

## entry 464

Greedy by end-time picks the most non-overlapping intervals.

## entry 465

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 466

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 467

Walk both pointers from each end inward; advance the smaller side.

## entry 468

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 469

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 470

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 471

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 472

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 473

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 474

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 475

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 476

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 477

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 478

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 479

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 480

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 481

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 482

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 483

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 484

Euler tour flattens a tree into an array for range-query LCA.

## entry 485

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 486

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 487

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 488

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 489

LIS via patience: each pile holds the smallest tail of length k.

## entry 490

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 491

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 492

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 493

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 494

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 495

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 496

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 497

Union-Find with path compression amortizes to near-O(1) per op.

## entry 498

State compression: bitmask + integer encodes a small subset cheaply.

## entry 499

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 500

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 501

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 502

Monotonic stack pops while the new element violates the invariant.

## entry 503

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 504

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 505

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 506

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 507

Union-Find with path compression amortizes to near-O(1) per op.

## entry 508

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 509

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 510

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 511

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 512

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 513

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 514

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 515

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 516

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 517

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 518

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 519

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 520

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 521

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 522

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 523

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 524

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 525

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 526

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 527

Union-Find with path compression amortizes to near-O(1) per op.

## entry 528

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 529

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 530

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 531

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 532

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 533

Heap when you only need top-k; full sort is wasted work.

## entry 534

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 535

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 536

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 537

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 538

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 539

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 540

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 541

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 542

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 543

Heap when you only need top-k; full sort is wasted work.

## entry 544

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 545

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 546

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 547

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 548

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 549

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 550

Splay tree: every access splays to the root; amortized O(log n).

## entry 551

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 552

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 553

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 554

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 555

Articulation points: same DFS as bridges, with a slightly different test.

## entry 556

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 557

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 558

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 559

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 560

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 561

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 562

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 563

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 564

Monotonic stack pops while the new element violates the invariant.

## entry 565

Walk both pointers from each end inward; advance the smaller side.

## entry 566

Union-Find with path compression amortizes to near-O(1) per op.

## entry 567

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 568

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 569

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 570

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 571

Splay tree: every access splays to the root; amortized O(log n).

## entry 572

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 573

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 574

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 575

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 576

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 577

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 578

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 579

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 580

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 581

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 582

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 583

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 584

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 585

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 586

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 587

Heap when you only need top-k; full sort is wasted work.

## entry 588

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 589

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 590

k-d tree: median-split each axis; nearest-neighbor average O(log n).
