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
