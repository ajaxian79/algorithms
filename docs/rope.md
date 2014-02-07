# rope

## entry 1

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 2

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 5

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 6

Euler tour flattens a tree into an array for range-query LCA.

## entry 7

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 8

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 9

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 10

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 11

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 12

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 13

State compression: bitmask + integer encodes a small subset cheaply.

## entry 14

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 15

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 16

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 17

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 18

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 19

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 20

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 21

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 22

Articulation points: same DFS as bridges, with a slightly different test.

## entry 23

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 24

Euler tour flattens a tree into an array for range-query LCA.

## entry 25

Monotonic stack pops while the new element violates the invariant.

## entry 26

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 27

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 28

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 29

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 30

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 31

StringBuilder: amortize allocation by doubling on grow.

## entry 32

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 33

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 34

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 35

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 36

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 37

Greedy by end-time picks the most non-overlapping intervals.

## entry 38

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 39

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 40

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 41

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 42

Union-Find with path compression amortizes to near-O(1) per op.

## entry 43

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 44

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 45

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 46

Walk both pointers from each end inward; advance the smaller side.

## entry 47

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 48

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 49

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 50

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 51

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 52

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 53

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 54

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 55

Heap when you only need top-k; full sort is wasted work.

## entry 56

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 57

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 58

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 59

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 60

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 61

Walk both pointers from each end inward; advance the smaller side.

## entry 62

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 63

Splay tree: every access splays to the root; amortized O(log n).

## entry 64

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 65

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 66

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 67

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 68

Greedy by end-time picks the most non-overlapping intervals.

## entry 69

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 70

State compression: bitmask + integer encodes a small subset cheaply.

## entry 71

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 72

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 73

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 74

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 75

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 76

StringBuilder: amortize allocation by doubling on grow.

## entry 77

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 78

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 79

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 80

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 81

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 82

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 83

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 84

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 85

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 86

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 87

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 88

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 89

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 90

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 91

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 92

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 93

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 94

Wavelet tree: range k-th element in O(log Σ) time.

## entry 95

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 96

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 97

LIS via patience: each pile holds the smallest tail of length k.

## entry 98

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 99

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 100

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 101

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 102

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 103

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 104

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 105

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 106

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 107

Greedy by end-time picks the most non-overlapping intervals.

## entry 108

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 109

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 110

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 111

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 112

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 113

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 114

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 115

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 116

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 117

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 118

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 119

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 120

Euler tour flattens a tree into an array for range-query LCA.

## entry 121

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 122

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 123

Walk both pointers from each end inward; advance the smaller side.

## entry 124

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 125

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 126

Wavelet tree: range k-th element in O(log Σ) time.

## entry 127

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 128

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 129

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 130

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 131

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 132

Splay tree: every access splays to the root; amortized O(log n).

## entry 133

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 134

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 135

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 136

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 137

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 138

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 139

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 140

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 141

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 142

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 143

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 144

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 145

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 146

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 147

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 148

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 149

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 150

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 151

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 152

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 153

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 154

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 155

Greedy by end-time picks the most non-overlapping intervals.

## entry 156

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 157

Stable sort matters when a secondary key was set in a prior pass.

## entry 158

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 159

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 160

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 161

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 162

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 163

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 164

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 165

Monotonic stack pops while the new element violates the invariant.

## entry 166

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 167

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 168

StringBuilder: amortize allocation by doubling on grow.

## entry 169

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 170

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 171

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 172

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 173

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 174

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 175

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 176

Greedy by end-time picks the most non-overlapping intervals.

## entry 177

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 178

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 179

Heap when you only need top-k; full sort is wasted work.

## entry 180

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 181

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 182

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 183

Monotonic stack pops while the new element violates the invariant.

## entry 184

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 185

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 186

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 187

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 188

Walk both pointers from each end inward; advance the smaller side.

## entry 189

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 190

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 191

Heap when you only need top-k; full sort is wasted work.

## entry 192

Splay tree: every access splays to the root; amortized O(log n).

## entry 193

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 194

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 195

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 196

LIS via patience: each pile holds the smallest tail of length k.

## entry 197

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 198

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 199

State compression: bitmask + integer encodes a small subset cheaply.

## entry 200

Euler tour flattens a tree into an array for range-query LCA.

## entry 201

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 202

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 203

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 204

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 205

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 206

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 207

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 208

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 209

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 210

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 211

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 212

Monotonic stack pops while the new element violates the invariant.

## entry 213

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 214

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 215

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 216

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 217

Splay tree: every access splays to the root; amortized O(log n).

## entry 218

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 219

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 220

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 221

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 222

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 223

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 224

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 225

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 226

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 227

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 228

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 229

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 230

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 231

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 232

Splay tree: every access splays to the root; amortized O(log n).

## entry 233

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 234

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 235

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 236

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 237

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 238

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 239

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 240

Walk both pointers from each end inward; advance the smaller side.

## entry 241

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 242

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 243

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 244

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 245

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 246

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 247

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 248

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 249

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 250

StringBuilder: amortize allocation by doubling on grow.

## entry 251

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 252

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 253

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 254

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 255

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 256

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 257

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 258

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 259

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 260

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 261

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 262

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 263

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 264

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 265

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 266

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 267

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 268

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 269

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 270

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 271

LIS via patience: each pile holds the smallest tail of length k.

## entry 272

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 273

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 274

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 275

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 276

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 277

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 278

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 279

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 280

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 281

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 282

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 283

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 284

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 285

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 286

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 287

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 288

Greedy by end-time picks the most non-overlapping intervals.

## entry 289

Union-Find with path compression amortizes to near-O(1) per op.

## entry 290

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 291

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 292

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 293

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 294

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 295

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 296

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 297

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 298

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 299

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 300

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 301

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 302

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 303

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 304

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 305

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 306

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 307

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 308

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 309

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 310

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 311

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 312

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 313

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 314

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 315

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 316

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 317

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 318

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 319

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 320

StringBuilder: amortize allocation by doubling on grow.

## entry 321

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 322

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 323

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 324

Euler tour flattens a tree into an array for range-query LCA.

## entry 325

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 326

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 327

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 328

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 329

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 330

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 331

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 332

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 333

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 334

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 335

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 336

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 337

Articulation points: same DFS as bridges, with a slightly different test.

## entry 338

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 339

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 340

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 341

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 342

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 343

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 344

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 345

Heap when you only need top-k; full sort is wasted work.

## entry 346

Monotonic stack pops while the new element violates the invariant.

## entry 347

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 348

StringBuilder: amortize allocation by doubling on grow.

## entry 349

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 350

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 351

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 352

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 353

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 354

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 355

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 356

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 357

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 358

Union-Find with path compression amortizes to near-O(1) per op.

## entry 359

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 360

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 361

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 362

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 363

Wavelet tree: range k-th element in O(log Σ) time.

## entry 364

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 365

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 366

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 367

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 368

Walk both pointers from each end inward; advance the smaller side.

## entry 369

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 370

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 371

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 372

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 373

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 374

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 375

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 376

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 377

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 378

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 379

Monotonic stack pops while the new element violates the invariant.

## entry 380

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 381

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 382

Articulation points: same DFS as bridges, with a slightly different test.

## entry 383

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 384

Heap when you only need top-k; full sort is wasted work.

## entry 385

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 386

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 387

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 388

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 389

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 390

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 391

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 392

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 393

Splay tree: every access splays to the root; amortized O(log n).

## entry 394

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 395

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 396

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 397

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 398

Splay tree: every access splays to the root; amortized O(log n).

## entry 399

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 400

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 401

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 402

Euler tour flattens a tree into an array for range-query LCA.

## entry 403

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 404

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 405

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 406

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 407

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 408

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 409

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 410

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 411

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 412

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 413

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 414

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 415

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 416

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 417

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 418

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 419

LIS via patience: each pile holds the smallest tail of length k.

## entry 420

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 421

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 422

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 423

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 424

State compression: bitmask + integer encodes a small subset cheaply.

## entry 425

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 426

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 427

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 428

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 429

Stable sort matters when a secondary key was set in a prior pass.

## entry 430

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 431

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 432

Euler tour flattens a tree into an array for range-query LCA.

## entry 433

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 434

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 435

State compression: bitmask + integer encodes a small subset cheaply.

## entry 436

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 437

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 438

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 439

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 440

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 441

Stable sort matters when a secondary key was set in a prior pass.

## entry 442

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 443

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 444

Monotonic stack pops while the new element violates the invariant.

## entry 445

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 446

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 447

Splay tree: every access splays to the root; amortized O(log n).

## entry 448

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 449

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 450

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 451

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 452

StringBuilder: amortize allocation by doubling on grow.

## entry 453

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 454

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 455

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 456

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 457

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 458

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 459

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 460

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 461

Stable sort matters when a secondary key was set in a prior pass.

## entry 462

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 463

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 464

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 465

Walk both pointers from each end inward; advance the smaller side.

## entry 466

State compression: bitmask + integer encodes a small subset cheaply.

## entry 467

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 468

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 469

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 470

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 471

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 472

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 473

Union-Find with path compression amortizes to near-O(1) per op.

## entry 474

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 475

Monotonic stack pops while the new element violates the invariant.

## entry 476

Articulation points: same DFS as bridges, with a slightly different test.

## entry 477

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 478

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 479

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 480

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 481

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 482

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 483

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 484

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 485

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 486

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 487

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 488

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 489

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 490

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 491

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 492

Greedy by end-time picks the most non-overlapping intervals.

## entry 493

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 494

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 495

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 496

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 497

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 498

Stable sort matters when a secondary key was set in a prior pass.

## entry 499

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 500

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 501

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 502

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 503

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 504

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 505

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 506

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 507

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 508

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 509

State compression: bitmask + integer encodes a small subset cheaply.

## entry 510

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 511

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 512

LIS via patience: each pile holds the smallest tail of length k.

## entry 513

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 514

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 515

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 516

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 517

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 518

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 519

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 520

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 521

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 522

Union-Find with path compression amortizes to near-O(1) per op.

## entry 523

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 524

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
