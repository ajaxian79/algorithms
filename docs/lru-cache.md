# lru-cache

## entry 1

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 2

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 3

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 4

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 5

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 6

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 7

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 8

Monotonic stack pops while the new element violates the invariant.

## entry 9

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 10

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 11

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 12

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 13

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 14

State compression: bitmask + integer encodes a small subset cheaply.

## entry 15

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 16

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 17

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 18

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 19

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 20

Union-Find with path compression amortizes to near-O(1) per op.

## entry 21

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 22

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 23

Union-Find with path compression amortizes to near-O(1) per op.

## entry 24

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 25

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 26

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 27

Stable sort matters when a secondary key was set in a prior pass.

## entry 28

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 29

Splay tree: every access splays to the root; amortized O(log n).

## entry 30

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 31

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 32

State compression: bitmask + integer encodes a small subset cheaply.

## entry 33

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 34

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 35

Articulation points: same DFS as bridges, with a slightly different test.

## entry 36

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 37

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 38

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 39

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 40

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 41

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 42

Union-Find with path compression amortizes to near-O(1) per op.

## entry 43

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 44

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 45

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 46

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 47

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 48

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 49

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 50

Union-Find with path compression amortizes to near-O(1) per op.

## entry 51

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 52

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 53

StringBuilder: amortize allocation by doubling on grow.

## entry 54

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 55

State compression: bitmask + integer encodes a small subset cheaply.

## entry 56

Greedy by end-time picks the most non-overlapping intervals.

## entry 57

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 58

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 59

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 60

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 61

Wavelet tree: range k-th element in O(log Σ) time.

## entry 62

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 63

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 64

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 65

Euler tour flattens a tree into an array for range-query LCA.

## entry 66

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 67

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 68

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 69

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 70

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 71

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 72

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 73

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 74

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 75

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 76

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 77

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 78

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 79

Walk both pointers from each end inward; advance the smaller side.

## entry 80

Union-Find with path compression amortizes to near-O(1) per op.

## entry 81

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 82

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 83

State compression: bitmask + integer encodes a small subset cheaply.

## entry 84

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 85

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 86

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 87

StringBuilder: amortize allocation by doubling on grow.

## entry 88

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 89

Splay tree: every access splays to the root; amortized O(log n).

## entry 90

Walk both pointers from each end inward; advance the smaller side.

## entry 91

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 92

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 93

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 94

Heap when you only need top-k; full sort is wasted work.

## entry 95

Greedy by end-time picks the most non-overlapping intervals.

## entry 96

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 97

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 98

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 99

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 100

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 101

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 102

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 103

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 104

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 105

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 106

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 107

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 108

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 109

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 110

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 111

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 112

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 113

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 114

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 115

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 116

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 117

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 118

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 119

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 120

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 121

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 122

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 123

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 124

LIS via patience: each pile holds the smallest tail of length k.

## entry 125

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 126

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 127

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 128

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 129

Monotonic stack pops while the new element violates the invariant.

## entry 130

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 131

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 132

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 133

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 134

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 135

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 136

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 137

Greedy by end-time picks the most non-overlapping intervals.

## entry 138

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 139

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 140

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 141

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 142

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 143

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 144

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 145

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 146

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 147

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 148

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 149

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 150

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 151

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 152

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 153

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 154

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 155

Stable sort matters when a secondary key was set in a prior pass.

## entry 156

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 157

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 158

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 159

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 160

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 161

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 162

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 163

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 164

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 165

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 166

Greedy by end-time picks the most non-overlapping intervals.

## entry 167

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 168

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 169

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 170

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 171

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 172

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 173

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 174

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 175

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 176

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 177

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 178

Articulation points: same DFS as bridges, with a slightly different test.

## entry 179

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 180

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 181

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 182

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 183

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 184

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 185

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 186

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 187

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 188

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 189

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 190

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 191

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 192

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 193

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 194

Walk both pointers from each end inward; advance the smaller side.

## entry 195

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 196

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 197

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 198

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 199

Heap when you only need top-k; full sort is wasted work.

## entry 200

Heap when you only need top-k; full sort is wasted work.

## entry 201

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 202

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 203

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 204

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 205

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 206

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 207

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 208

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 209

Monotonic stack pops while the new element violates the invariant.

## entry 210

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 211

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 212

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 213

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 214

LIS via patience: each pile holds the smallest tail of length k.

## entry 215

Articulation points: same DFS as bridges, with a slightly different test.

## entry 216

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 217

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 218

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 219

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 220

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 221

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 222

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 223

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 224

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 225

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 226

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 227

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 228

Greedy by end-time picks the most non-overlapping intervals.

## entry 229

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 230

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 231

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 232

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 233

Stable sort matters when a secondary key was set in a prior pass.

## entry 234

LIS via patience: each pile holds the smallest tail of length k.

## entry 235

LIS via patience: each pile holds the smallest tail of length k.

## entry 236

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 237

Greedy by end-time picks the most non-overlapping intervals.

## entry 238

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 239

Articulation points: same DFS as bridges, with a slightly different test.

## entry 240

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 241

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 242

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 243

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 244

Heap when you only need top-k; full sort is wasted work.

## entry 245

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 246

Heap when you only need top-k; full sort is wasted work.

## entry 247

Splay tree: every access splays to the root; amortized O(log n).

## entry 248

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 249

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 250

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 251

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 252

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 253

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 254

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 255

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 256

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 257

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 258

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 259

Splay tree: every access splays to the root; amortized O(log n).

## entry 260

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 261

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 262

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 263

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 264

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 265

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 266

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 267

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 268

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 269

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 270

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 271

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 272

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 273

Splay tree: every access splays to the root; amortized O(log n).

## entry 274

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 275

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 276

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 277

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 278

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 279

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 280

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 281

Splay tree: every access splays to the root; amortized O(log n).

## entry 282

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 283

Walk both pointers from each end inward; advance the smaller side.

## entry 284

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 285

Articulation points: same DFS as bridges, with a slightly different test.

## entry 286

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 287

LIS via patience: each pile holds the smallest tail of length k.

## entry 288

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 289

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 290

Greedy by end-time picks the most non-overlapping intervals.

## entry 291

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 292

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 293

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 294

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 295

State compression: bitmask + integer encodes a small subset cheaply.

## entry 296

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 297

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 298

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 299

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 300

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 301

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 302

Heap when you only need top-k; full sort is wasted work.

## entry 303

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 304

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 305

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 306

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 307

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 308

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 309

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 310

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 311

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 312

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 313

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 314

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 315

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 316

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 317

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 318

Union-Find with path compression amortizes to near-O(1) per op.

## entry 319

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 320

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 321

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 322

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 323

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 324

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 325

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 326

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 327

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 328

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 329

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 330

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 331

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 332

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 333

Articulation points: same DFS as bridges, with a slightly different test.

## entry 334

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 335

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 336

Stable sort matters when a secondary key was set in a prior pass.

## entry 337

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 338

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 339

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 340

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 341

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 342

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 343

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 344

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 345

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 346

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 347

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 348

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 349

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 350

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 351

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 352

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 353

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 354

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 355

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 356

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 357

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 358

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 359

StringBuilder: amortize allocation by doubling on grow.

## entry 360

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 361

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 362

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 363

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 364

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 365

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 366

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 367

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 368

State compression: bitmask + integer encodes a small subset cheaply.

## entry 369

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 370

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 371

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 372

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 373

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 374

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 375

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 376

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 377

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 378

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 379

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 380

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 381

Splay tree: every access splays to the root; amortized O(log n).

## entry 382

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 383

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 384

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 385

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 386

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 387

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 388

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 389

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 390

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 391

LIS via patience: each pile holds the smallest tail of length k.

## entry 392

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 393

Euler tour flattens a tree into an array for range-query LCA.

## entry 394

Euler tour flattens a tree into an array for range-query LCA.

## entry 395

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 396

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 397

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 398

Union-Find with path compression amortizes to near-O(1) per op.

## entry 399

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 400

Euler tour flattens a tree into an array for range-query LCA.

## entry 401

Articulation points: same DFS as bridges, with a slightly different test.

## entry 402

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 403

Wavelet tree: range k-th element in O(log Σ) time.

## entry 404

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 405

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 406

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 407

Walk both pointers from each end inward; advance the smaller side.

## entry 408

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 409

Euler tour flattens a tree into an array for range-query LCA.

## entry 410

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 411

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 412

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 413

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 414

Stable sort matters when a secondary key was set in a prior pass.

## entry 415

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 416

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 417

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 418

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 419

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 420

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 421

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 422

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 423

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 424

Stable sort matters when a secondary key was set in a prior pass.

## entry 425

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 426

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 427

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 428

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 429

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 430

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 431

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 432

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 433

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 434

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 435

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 436

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 437

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 438

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 439

Greedy by end-time picks the most non-overlapping intervals.

## entry 440

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 441

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 442

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 443

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 444

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 445

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 446

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 447

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 448

Wavelet tree: range k-th element in O(log Σ) time.

## entry 449

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 450

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 451

State compression: bitmask + integer encodes a small subset cheaply.

## entry 452

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 453

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 454

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 455

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 456

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 457

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 458

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 459

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 460

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 461

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 462

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 463

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 464

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 465

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 466

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 467

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 468

Wavelet tree: range k-th element in O(log Σ) time.

## entry 469

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 470

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 471

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 472

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 473

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 474

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 475

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 476

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 477

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 478

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 479

Greedy by end-time picks the most non-overlapping intervals.

## entry 480

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 481

StringBuilder: amortize allocation by doubling on grow.

## entry 482

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 483

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 484

Wavelet tree: range k-th element in O(log Σ) time.

## entry 485

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 486

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 487

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 488

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 489

Euler tour flattens a tree into an array for range-query LCA.

## entry 490

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 491

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 492

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 493

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 494

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 495

Euler tour flattens a tree into an array for range-query LCA.

## entry 496

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 497

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 498

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 499

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 500

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 501

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 502

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 503

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 504

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 505

Euler tour flattens a tree into an array for range-query LCA.

## entry 506

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 507

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 508

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 509

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 510

LIS via patience: each pile holds the smallest tail of length k.

## entry 511

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 512

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 513

Stable sort matters when a secondary key was set in a prior pass.

## entry 514

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 515

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 516

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 517

Articulation points: same DFS as bridges, with a slightly different test.

## entry 518

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 519

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 520

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 521

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 522

Union-Find with path compression amortizes to near-O(1) per op.

## entry 523

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 524

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 525

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 526

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 527

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 528

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 529

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 530

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 531

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 532

State compression: bitmask + integer encodes a small subset cheaply.
