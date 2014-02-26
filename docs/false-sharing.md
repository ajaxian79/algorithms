# false-sharing

## entry 1

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 3

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 4

Splay tree: every access splays to the root; amortized O(log n).

## entry 5

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 6

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 7

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 8

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 9

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 10

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 11

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 12

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 13

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 14

Euler tour flattens a tree into an array for range-query LCA.

## entry 15

Union-Find with path compression amortizes to near-O(1) per op.

## entry 16

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 17

StringBuilder: amortize allocation by doubling on grow.

## entry 18

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 19

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 20

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 21

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 22

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 23

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 24

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 25

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 26

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 27

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 28

Walk both pointers from each end inward; advance the smaller side.

## entry 29

Union-Find with path compression amortizes to near-O(1) per op.

## entry 30

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 31

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 32

Walk both pointers from each end inward; advance the smaller side.

## entry 33

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 34

Greedy by end-time picks the most non-overlapping intervals.

## entry 35

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 36

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 37

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 38

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 39

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 40

Euler tour flattens a tree into an array for range-query LCA.

## entry 41

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 42

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 43

Wavelet tree: range k-th element in O(log Σ) time.

## entry 44

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 45

Greedy by end-time picks the most non-overlapping intervals.

## entry 46

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 47

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 48

Splay tree: every access splays to the root; amortized O(log n).

## entry 49

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 50

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 51

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 52

Euler tour flattens a tree into an array for range-query LCA.

## entry 53

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 54

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 55

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 56

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 57

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 58

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 59

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 60

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 61

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 62

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 63

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 64

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 65

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 66

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 67

Euler tour flattens a tree into an array for range-query LCA.

## entry 68

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 69

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 70

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 71

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 72

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 73

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 74

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 75

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 76

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 77

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 78

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 79

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 80

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 81

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 82

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 83

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 84

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 85

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 86

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 87

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 88

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 89

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 90

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 91

Heap when you only need top-k; full sort is wasted work.

## entry 92

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 93

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 94

Euler tour flattens a tree into an array for range-query LCA.

## entry 95

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 96

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 97

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 98

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 99

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 100

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 101

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 102

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 103

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 104

Euler tour flattens a tree into an array for range-query LCA.

## entry 105

LIS via patience: each pile holds the smallest tail of length k.

## entry 106

State compression: bitmask + integer encodes a small subset cheaply.

## entry 107

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 108

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 109

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 110

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 111

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 112

Monotonic stack pops while the new element violates the invariant.

## entry 113

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 114

Walk both pointers from each end inward; advance the smaller side.

## entry 115

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 116

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 117

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 118

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 119

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 120

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 121

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 122

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 123

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 124

Heap when you only need top-k; full sort is wasted work.

## entry 125

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 126

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 127

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 128

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 129

Euler tour flattens a tree into an array for range-query LCA.

## entry 130

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 131

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 132

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 133

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 134

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 135

Splay tree: every access splays to the root; amortized O(log n).

## entry 136

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 137

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 138

Heap when you only need top-k; full sort is wasted work.

## entry 139

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 140

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 141

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 142

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 143

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 144

Articulation points: same DFS as bridges, with a slightly different test.

## entry 145

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 146

Euler tour flattens a tree into an array for range-query LCA.

## entry 147

LIS via patience: each pile holds the smallest tail of length k.

## entry 148

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 149

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 150

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 151

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 152

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 153

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 154

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 155

Walk both pointers from each end inward; advance the smaller side.

## entry 156

Euler tour flattens a tree into an array for range-query LCA.

## entry 157

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 158

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 159

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 160

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 161

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 162

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 163

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 164

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 165

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 166

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 167

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 168

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 169

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 170

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 171

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 172

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 173

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 174

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 175

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 176

Heap when you only need top-k; full sort is wasted work.

## entry 177

Walk both pointers from each end inward; advance the smaller side.

## entry 178

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 179

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 180

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 181

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 182

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 183

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 184

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 185

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 186

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 187

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 188

Heap when you only need top-k; full sort is wasted work.

## entry 189

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 190

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 191

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 192

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 193

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 194

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 195

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 196

Articulation points: same DFS as bridges, with a slightly different test.

## entry 197

Walk both pointers from each end inward; advance the smaller side.

## entry 198

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 199

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 200

Monotonic stack pops while the new element violates the invariant.

## entry 201

Union-Find with path compression amortizes to near-O(1) per op.

## entry 202

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 203

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 204

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 205

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 206

Articulation points: same DFS as bridges, with a slightly different test.

## entry 207

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 208

Monotonic stack pops while the new element violates the invariant.

## entry 209

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 210

Monotonic stack pops while the new element violates the invariant.

## entry 211

Articulation points: same DFS as bridges, with a slightly different test.

## entry 212

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 213

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 214

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 215

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 216

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 217

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 218

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 219

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 220

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 221

StringBuilder: amortize allocation by doubling on grow.

## entry 222

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 223

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 224

Monotonic stack pops while the new element violates the invariant.

## entry 225

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 226

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 227

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 228

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 229

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 230

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 231

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 232

Heap when you only need top-k; full sort is wasted work.

## entry 233

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 234

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 235

Monotonic stack pops while the new element violates the invariant.

## entry 236

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 237

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 238

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 239

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 240

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 241

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 242

Greedy by end-time picks the most non-overlapping intervals.

## entry 243

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 244

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 245

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 246

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 247

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 248

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 249

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 250

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 251

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 252

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 253

LIS via patience: each pile holds the smallest tail of length k.

## entry 254

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 255

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 256

Monotonic stack pops while the new element violates the invariant.

## entry 257

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 258

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 259

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 260

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 261

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 262

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 263

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 264

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 265

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 266

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 267

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 268

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 269

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 270

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 271

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 272

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 273

Greedy by end-time picks the most non-overlapping intervals.

## entry 274

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 275

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 276

Walk both pointers from each end inward; advance the smaller side.

## entry 277

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 278

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 279

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 280

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 281

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 282

Heap when you only need top-k; full sort is wasted work.

## entry 283

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 284

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 285

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 286

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 287

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 288

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 289

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 290

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 291

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 292

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 293

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 294

Wavelet tree: range k-th element in O(log Σ) time.

## entry 295

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 296

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 297

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 298

Heap when you only need top-k; full sort is wasted work.

## entry 299

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 300

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 301

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 302

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 303

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 304

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 305

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 306

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 307

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 308

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 309

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 310

StringBuilder: amortize allocation by doubling on grow.

## entry 311

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 312

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 313

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 314

State compression: bitmask + integer encodes a small subset cheaply.

## entry 315

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 316

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 317

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 318

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 319

Articulation points: same DFS as bridges, with a slightly different test.

## entry 320

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 321

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 322

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 323

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 324

Stable sort matters when a secondary key was set in a prior pass.

## entry 325

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 326

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 327

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 328

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 329

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 330

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 331

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 332

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 333

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 334

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 335

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 336

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 337

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 338

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 339

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 340

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 341

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 342

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 343

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 344

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 345

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 346

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 347

Union-Find with path compression amortizes to near-O(1) per op.

## entry 348

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 349

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 350

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 351

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 352

Monotonic stack pops while the new element violates the invariant.

## entry 353

State compression: bitmask + integer encodes a small subset cheaply.

## entry 354

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 355

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 356

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 357

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 358

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 359

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 360

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 361

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 362

Splay tree: every access splays to the root; amortized O(log n).

## entry 363

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 364

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 365

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 366

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 367

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 368

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 369

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 370

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 371

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 372

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 373

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 374

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 375

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 376

Euler tour flattens a tree into an array for range-query LCA.

## entry 377

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 378

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 379

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 380

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 381

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 382

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 383

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 384

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 385

Splay tree: every access splays to the root; amortized O(log n).

## entry 386

Heap when you only need top-k; full sort is wasted work.

## entry 387

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 388

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 389

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 390

Stable sort matters when a secondary key was set in a prior pass.

## entry 391

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 392

Splay tree: every access splays to the root; amortized O(log n).

## entry 393

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 394

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 395

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 396

LIS via patience: each pile holds the smallest tail of length k.

## entry 397

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 398

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 399

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 400

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 401

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 402

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 403

Wavelet tree: range k-th element in O(log Σ) time.

## entry 404

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 405

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 406

LIS via patience: each pile holds the smallest tail of length k.

## entry 407

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 408

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 409

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 410

State compression: bitmask + integer encodes a small subset cheaply.

## entry 411

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 412

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 413

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 414

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 415

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 416

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 417

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 418

Heap when you only need top-k; full sort is wasted work.

## entry 419

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 420

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 421

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 422

StringBuilder: amortize allocation by doubling on grow.

## entry 423

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 424

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 425

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 426

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 427

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 428

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 429

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 430

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 431

Wavelet tree: range k-th element in O(log Σ) time.

## entry 432

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 433

LIS via patience: each pile holds the smallest tail of length k.

## entry 434

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 435

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 436

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 437

Walk both pointers from each end inward; advance the smaller side.

## entry 438

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 439

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 440

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 441

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 442

Monotonic stack pops while the new element violates the invariant.

## entry 443

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 444

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 445

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 446

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 447

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 448

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 449

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 450

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 451

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 452

Wavelet tree: range k-th element in O(log Σ) time.

## entry 453

StringBuilder: amortize allocation by doubling on grow.

## entry 454

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 455

Wavelet tree: range k-th element in O(log Σ) time.

## entry 456

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 457

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 458

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 459

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 460

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 461

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 462

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 463

Splay tree: every access splays to the root; amortized O(log n).

## entry 464

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 465

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 466

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 467

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 468

Wavelet tree: range k-th element in O(log Σ) time.

## entry 469

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 470

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 471

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 472

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 473

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 474

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 475

State compression: bitmask + integer encodes a small subset cheaply.

## entry 476

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 477

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 478

Greedy by end-time picks the most non-overlapping intervals.

## entry 479

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 480

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 481

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 482

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 483

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 484

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 485

State compression: bitmask + integer encodes a small subset cheaply.

## entry 486

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 487

Heap when you only need top-k; full sort is wasted work.

## entry 488

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 489

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 490

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 491

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 492

Heap when you only need top-k; full sort is wasted work.

## entry 493

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 494

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 495

Greedy by end-time picks the most non-overlapping intervals.

## entry 496

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 497

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 498

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 499

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 500

Wavelet tree: range k-th element in O(log Σ) time.

## entry 501

LIS via patience: each pile holds the smallest tail of length k.

## entry 502

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 503

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 504

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 505

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 506

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 507

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 508

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 509

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 510

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 511

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 512

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 513

Splay tree: every access splays to the root; amortized O(log n).

## entry 514

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 515

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 516

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 517

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 518

StringBuilder: amortize allocation by doubling on grow.

## entry 519

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 520

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 521

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 522

Stable sort matters when a secondary key was set in a prior pass.

## entry 523

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 524

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 525

Walk both pointers from each end inward; advance the smaller side.

## entry 526

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 527

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 528

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 529

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 530

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 531

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 532

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
