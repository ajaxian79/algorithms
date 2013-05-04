# interval-tree

## entry 1

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 4

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5

State compression: bitmask + integer encodes a small subset cheaply.

## entry 6

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 7

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 8

State compression: bitmask + integer encodes a small subset cheaply.

## entry 9

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 10

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 11

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 12

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 13

Heap when you only need top-k; full sort is wasted work.

## entry 14

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 15

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 16

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 17

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 18

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 19

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 20

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 21

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 22

Euler tour flattens a tree into an array for range-query LCA.

## entry 23

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 24

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 25

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 26

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 27

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 28

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 29

Union-Find with path compression amortizes to near-O(1) per op.

## entry 30

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 31

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 32

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 33

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 34

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 35

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 36

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 37

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 38

Articulation points: same DFS as bridges, with a slightly different test.

## entry 39

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 40

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 41

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 42

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 43

Stable sort matters when a secondary key was set in a prior pass.

## entry 44

Greedy by end-time picks the most non-overlapping intervals.

## entry 45

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 46

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 47

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 48

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 49

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 50

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 51

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 52

Union-Find with path compression amortizes to near-O(1) per op.

## entry 53

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 54

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 55

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 56

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 57

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 58

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 59

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 60

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 61

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 62

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 63

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 64

Greedy by end-time picks the most non-overlapping intervals.

## entry 65

LIS via patience: each pile holds the smallest tail of length k.

## entry 66

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 67

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 68

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 69

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 70

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 71

Heap when you only need top-k; full sort is wasted work.

## entry 72

Union-Find with path compression amortizes to near-O(1) per op.

## entry 73

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 74

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 75

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 76

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 77

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 78

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 79

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 80

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 81

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 82

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 83

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 84

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 85

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 86

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 87

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 88

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 89

Wavelet tree: range k-th element in O(log Σ) time.

## entry 90

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 91

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 92

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 93

Wavelet tree: range k-th element in O(log Σ) time.

## entry 94

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 95

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 96

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 97

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 98

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 99

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 100

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 101

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 102

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 103

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 104

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 105

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 106

Articulation points: same DFS as bridges, with a slightly different test.

## entry 107

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 108

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 109

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 110

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 111

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 112

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 113

LIS via patience: each pile holds the smallest tail of length k.

## entry 114

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 115

Euler tour flattens a tree into an array for range-query LCA.

## entry 116

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 117

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 118

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 119

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 120

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 121

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 122

Union-Find with path compression amortizes to near-O(1) per op.

## entry 123

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 124

Greedy by end-time picks the most non-overlapping intervals.

## entry 125

StringBuilder: amortize allocation by doubling on grow.

## entry 126

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 127

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 128

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 129

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 130

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 131

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 132

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 133

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 134

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 135

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 136

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 137

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 138

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 139

Monotonic stack pops while the new element violates the invariant.

## entry 140

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 141

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 142

Greedy by end-time picks the most non-overlapping intervals.

## entry 143

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 144

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 145

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 146

StringBuilder: amortize allocation by doubling on grow.

## entry 147

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 148

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 149

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 150

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 151

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 152

State compression: bitmask + integer encodes a small subset cheaply.

## entry 153

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 154

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 155

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 156

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 157

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 158

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 159

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 160

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 161

State compression: bitmask + integer encodes a small subset cheaply.

## entry 162

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 163

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 164

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 165

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 166

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 167

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 168

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 169

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 170

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 171

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 172

Wavelet tree: range k-th element in O(log Σ) time.

## entry 173

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 174

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 175

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 176

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 177

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 178

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 179

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 180

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 181

Stable sort matters when a secondary key was set in a prior pass.

## entry 182

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 183

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 184

Stable sort matters when a secondary key was set in a prior pass.

## entry 185

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 186

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 187

Splay tree: every access splays to the root; amortized O(log n).

## entry 188

Heap when you only need top-k; full sort is wasted work.

## entry 189

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 190

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 191

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 192

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 193

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 194

State compression: bitmask + integer encodes a small subset cheaply.

## entry 195

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 196

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 197

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 198

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 199

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 200

State compression: bitmask + integer encodes a small subset cheaply.

## entry 201

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 202

Union-Find with path compression amortizes to near-O(1) per op.

## entry 203

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 204

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 205

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 206

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 207

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 208

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 209

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 210

Splay tree: every access splays to the root; amortized O(log n).

## entry 211

Euler tour flattens a tree into an array for range-query LCA.

## entry 212

Articulation points: same DFS as bridges, with a slightly different test.

## entry 213

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 214

State compression: bitmask + integer encodes a small subset cheaply.

## entry 215

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 216

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 217

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 218

State compression: bitmask + integer encodes a small subset cheaply.

## entry 219

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 220

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 221

Monotonic stack pops while the new element violates the invariant.

## entry 222

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 223

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 224

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 225

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 226

Union-Find with path compression amortizes to near-O(1) per op.

## entry 227

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 228

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 229

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 230

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 231

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 232

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 233

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 234

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 235

Wavelet tree: range k-th element in O(log Σ) time.

## entry 236

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 237

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 238

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 239

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 240

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 241

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 242

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 243

Euler tour flattens a tree into an array for range-query LCA.

## entry 244

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 245

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 246

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 247

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 248

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 249

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 250

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 251

Euler tour flattens a tree into an array for range-query LCA.

## entry 252

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 253

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 254

Articulation points: same DFS as bridges, with a slightly different test.

## entry 255

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 256

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 257

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 258

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 259

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 260

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 261

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 262

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 263

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 264

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 265

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 266

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 267

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 268

Splay tree: every access splays to the root; amortized O(log n).

## entry 269

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 270

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 271

Articulation points: same DFS as bridges, with a slightly different test.

## entry 272

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 273

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 274

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 275

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 276

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 277

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 278

Wavelet tree: range k-th element in O(log Σ) time.

## entry 279

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 280

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 281

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 282

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 283

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 284

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 285

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 286

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 287

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 288

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 289

Greedy by end-time picks the most non-overlapping intervals.

## entry 290

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 291

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 292

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 293

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 294

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 295

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 296

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 297

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 298

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 299

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 300

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 301

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 302

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 303

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 304

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 305

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 306

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 307

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 308

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 309

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 310

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 311

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 312

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 313

Splay tree: every access splays to the root; amortized O(log n).

## entry 314

Monotonic stack pops while the new element violates the invariant.

## entry 315

Euler tour flattens a tree into an array for range-query LCA.

## entry 316

Greedy by end-time picks the most non-overlapping intervals.

## entry 317

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 318

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 319

Articulation points: same DFS as bridges, with a slightly different test.

## entry 320

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 321

Union-Find with path compression amortizes to near-O(1) per op.

## entry 322

Wavelet tree: range k-th element in O(log Σ) time.

## entry 323

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 324

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 325

Splay tree: every access splays to the root; amortized O(log n).

## entry 326

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 327

Articulation points: same DFS as bridges, with a slightly different test.

## entry 328

Union-Find with path compression amortizes to near-O(1) per op.

## entry 329

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 330

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 331

StringBuilder: amortize allocation by doubling on grow.

## entry 332

Stable sort matters when a secondary key was set in a prior pass.

## entry 333

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 334

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 335

Splay tree: every access splays to the root; amortized O(log n).

## entry 336

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 337

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 338

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 339

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 340

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 341

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 342

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 343

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 344

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 345

Union-Find with path compression amortizes to near-O(1) per op.

## entry 346

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 347

Walk both pointers from each end inward; advance the smaller side.

## entry 348

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 349

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 350

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 351

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 352

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 353

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 354

Union-Find with path compression amortizes to near-O(1) per op.

## entry 355

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 356

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 357

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 358

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 359

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 360

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 361

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 362

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 363

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 364

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 365

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 366

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 367

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 368

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 369

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 370

Splay tree: every access splays to the root; amortized O(log n).

## entry 371

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 372

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 373

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 374

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 375

Union-Find with path compression amortizes to near-O(1) per op.

## entry 376

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 377

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 378

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 379

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 380

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 381

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 382

Euler tour flattens a tree into an array for range-query LCA.

## entry 383

Splay tree: every access splays to the root; amortized O(log n).

## entry 384

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 385

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 386

Wavelet tree: range k-th element in O(log Σ) time.

## entry 387

Heap when you only need top-k; full sort is wasted work.

## entry 388

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 389

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 390

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 391

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 392

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 393

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 394

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 395

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 396

Euler tour flattens a tree into an array for range-query LCA.

## entry 397

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 398

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 399

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 400

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 401

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 402

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 403

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 404

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 405

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 406

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 407

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 408

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 409

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 410

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 411

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 412

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 413

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 414

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 415

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 416

Greedy by end-time picks the most non-overlapping intervals.

## entry 417

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 418

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 419

State compression: bitmask + integer encodes a small subset cheaply.

## entry 420

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 421

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 422

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 423

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 424

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 425

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 426

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 427

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 428

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 429

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 430

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 431

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 432

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 433

Euler tour flattens a tree into an array for range-query LCA.

## entry 434

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 435

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 436

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 437

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 438

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 439

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 440

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 441

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 442

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 443

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 444

LIS via patience: each pile holds the smallest tail of length k.

## entry 445

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 446

Monotonic stack pops while the new element violates the invariant.

## entry 447

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 448

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 449

Heap when you only need top-k; full sort is wasted work.

## entry 450

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 451

LIS via patience: each pile holds the smallest tail of length k.

## entry 452

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 453

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 454

Euler tour flattens a tree into an array for range-query LCA.

## entry 455

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 456

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 457

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 458

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 459

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 460

Greedy by end-time picks the most non-overlapping intervals.

## entry 461

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 462

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 463

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 464

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 465

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 466

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 467

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 468

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 469

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 470

LIS via patience: each pile holds the smallest tail of length k.

## entry 471

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 472

Greedy by end-time picks the most non-overlapping intervals.

## entry 473

Heap when you only need top-k; full sort is wasted work.

## entry 474

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 475

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 476

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 477

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 478

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 479

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 480

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 481

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 482

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 483

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 484

Euler tour flattens a tree into an array for range-query LCA.

## entry 485

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 486

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 487

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 488

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 489

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 490

Walk both pointers from each end inward; advance the smaller side.

## entry 491

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 492

Walk both pointers from each end inward; advance the smaller side.

## entry 493

Union-Find with path compression amortizes to near-O(1) per op.

## entry 494

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 495

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 496

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 497

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 498

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 499

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 500

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 501

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 502

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 503

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 504

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 505

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 506

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 507

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 508

Articulation points: same DFS as bridges, with a slightly different test.

## entry 509

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 510

Articulation points: same DFS as bridges, with a slightly different test.

## entry 511

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 512

Wavelet tree: range k-th element in O(log Σ) time.

## entry 513

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 514

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 515

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 516

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 517

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 518

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 519

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 520

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 521

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 522

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 523

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 524

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 525

Walk both pointers from each end inward; advance the smaller side.

## entry 526

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 527

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 528

Splay tree: every access splays to the root; amortized O(log n).

## entry 529

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 530

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 531

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 532

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 533

Articulation points: same DFS as bridges, with a slightly different test.

## entry 534

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 535

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 536

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 537

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 538

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 539

Heap when you only need top-k; full sort is wasted work.

## entry 540

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 541

Articulation points: same DFS as bridges, with a slightly different test.

## entry 542

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 543

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 544

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 545

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 546

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 547

Walk both pointers from each end inward; advance the smaller side.

## entry 548

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 549

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 550

Splay tree: every access splays to the root; amortized O(log n).

## entry 551

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 552

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 553

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 554

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 555

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 556

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 557

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 558

LIS via patience: each pile holds the smallest tail of length k.
