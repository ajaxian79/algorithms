# bellman-ford

## entry 1

Heap when you only need top-k; full sort is wasted work.

## entry 2

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3

Union-Find with path compression amortizes to near-O(1) per op.

## entry 4

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 5

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 6

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 7

Wavelet tree: range k-th element in O(log Σ) time.

## entry 8

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 9

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 10

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 11

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 12

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 13

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 14

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 15

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 16

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 17

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 18

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 19

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 20

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 21

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 22

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 23

Splay tree: every access splays to the root; amortized O(log n).

## entry 24

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 25

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 26

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 27

Articulation points: same DFS as bridges, with a slightly different test.

## entry 28

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 29

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 30

StringBuilder: amortize allocation by doubling on grow.

## entry 31

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 32

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 33

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 34

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 35

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 36

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 37

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 38

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 39

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 40

State compression: bitmask + integer encodes a small subset cheaply.

## entry 41

Heap when you only need top-k; full sort is wasted work.

## entry 42

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 43

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 44

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 45

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 46

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 47

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 48

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 49

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 50

Monotonic stack pops while the new element violates the invariant.

## entry 51

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 52

State compression: bitmask + integer encodes a small subset cheaply.

## entry 53

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 54

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 55

Stable sort matters when a secondary key was set in a prior pass.

## entry 56

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 57

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 58

Stable sort matters when a secondary key was set in a prior pass.

## entry 59

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 60

Union-Find with path compression amortizes to near-O(1) per op.

## entry 61

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 62

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 63

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 64

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 65

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 66

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 67

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 68

Monotonic stack pops while the new element violates the invariant.

## entry 69

Walk both pointers from each end inward; advance the smaller side.

## entry 70

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 71

State compression: bitmask + integer encodes a small subset cheaply.

## entry 72

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 73

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 74

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 75

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 76

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 77

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 78

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 79

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 80

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 81

LIS via patience: each pile holds the smallest tail of length k.

## entry 82

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 83

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 84

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 85

Wavelet tree: range k-th element in O(log Σ) time.

## entry 86

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 87

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 88

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 89

Articulation points: same DFS as bridges, with a slightly different test.

## entry 90

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 91

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 92

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 93

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 94

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 95

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 96

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 97

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 98

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 99

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 100

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 101

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 102

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 103

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 104

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 105

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 106

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 107

LIS via patience: each pile holds the smallest tail of length k.

## entry 108

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 109

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 110

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 111

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 112

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 113

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 114

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 115

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 116

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 117

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 118

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 119

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 120

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 121

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 122

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 123

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 124

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 125

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 126

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 127

Heap when you only need top-k; full sort is wasted work.

## entry 128

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 129

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 130

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 131

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 132

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 133

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 134

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 135

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 136

Wavelet tree: range k-th element in O(log Σ) time.

## entry 137

Greedy by end-time picks the most non-overlapping intervals.

## entry 138

StringBuilder: amortize allocation by doubling on grow.

## entry 139

Greedy by end-time picks the most non-overlapping intervals.

## entry 140

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 141

LIS via patience: each pile holds the smallest tail of length k.

## entry 142

LIS via patience: each pile holds the smallest tail of length k.

## entry 143

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 144

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 145

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 146

Union-Find with path compression amortizes to near-O(1) per op.

## entry 147

Heap when you only need top-k; full sort is wasted work.

## entry 148

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 149

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 150

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 151

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 152

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 153

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 154

Greedy by end-time picks the most non-overlapping intervals.

## entry 155

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 156

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 157

LIS via patience: each pile holds the smallest tail of length k.

## entry 158

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 159

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 160

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 161

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 162

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 163

Stable sort matters when a secondary key was set in a prior pass.

## entry 164

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 165

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 166

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 167

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 168

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 169

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 170

LIS via patience: each pile holds the smallest tail of length k.

## entry 171

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 172

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 173

Splay tree: every access splays to the root; amortized O(log n).

## entry 174

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 175

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 176

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 177

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 178

Monotonic stack pops while the new element violates the invariant.

## entry 179

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 180

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 181

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 182

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 183

Splay tree: every access splays to the root; amortized O(log n).

## entry 184

Union-Find with path compression amortizes to near-O(1) per op.

## entry 185

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 186

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 187

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 188

LIS via patience: each pile holds the smallest tail of length k.

## entry 189

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 190

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 191

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 192

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 193

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 194

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 195

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 196

Union-Find with path compression amortizes to near-O(1) per op.

## entry 197

Monotonic stack pops while the new element violates the invariant.

## entry 198

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 199

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 200

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 201

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 202

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 203

State compression: bitmask + integer encodes a small subset cheaply.

## entry 204

Monotonic stack pops while the new element violates the invariant.

## entry 205

Heap when you only need top-k; full sort is wasted work.

## entry 206

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 207

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 208

Heap when you only need top-k; full sort is wasted work.

## entry 209

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 210

Monotonic stack pops while the new element violates the invariant.

## entry 211

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 212

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 213

Walk both pointers from each end inward; advance the smaller side.

## entry 214

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 215

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 216

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 217

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 218

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 219

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 220

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 221

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 222

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 223

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 224

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 225

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 226

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 227

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 228

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 229

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 230

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 231

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 232

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 233

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 234

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 235

StringBuilder: amortize allocation by doubling on grow.

## entry 236

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 237

LIS via patience: each pile holds the smallest tail of length k.

## entry 238

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 239

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 240

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 241

Stable sort matters when a secondary key was set in a prior pass.

## entry 242

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 243

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 244

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 245

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 246

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 247

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 248

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 249

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 250

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 251

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 252

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 253

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 254

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 255

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 256

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 257

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 258

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 259

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 260

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 261

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 262

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 263

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 264

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 265

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 266

Heap when you only need top-k; full sort is wasted work.

## entry 267

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 268

Heap when you only need top-k; full sort is wasted work.

## entry 269

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 270

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 271

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 272

State compression: bitmask + integer encodes a small subset cheaply.

## entry 273

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 274

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 275

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 276

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 277

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 278

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 279

Union-Find with path compression amortizes to near-O(1) per op.

## entry 280

Articulation points: same DFS as bridges, with a slightly different test.

## entry 281

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 282

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 283

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 284

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 285

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 286

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 287

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 288

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 289

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 290

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 291

Splay tree: every access splays to the root; amortized O(log n).

## entry 292

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 293

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 294

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 295

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 296

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 297

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 298

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 299

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 300

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 301

Euler tour flattens a tree into an array for range-query LCA.

## entry 302

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 303

Walk both pointers from each end inward; advance the smaller side.

## entry 304

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 305

Stable sort matters when a secondary key was set in a prior pass.

## entry 306

Articulation points: same DFS as bridges, with a slightly different test.

## entry 307

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 308

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 309

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 310

Stable sort matters when a secondary key was set in a prior pass.

## entry 311

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 312

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 313

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 314

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 315

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 316

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 317

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 318

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 319

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 320

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 321

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 322

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 323

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 324

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 325

Stable sort matters when a secondary key was set in a prior pass.

## entry 326

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 327

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 328

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 329

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 330

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 331

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 332

Walk both pointers from each end inward; advance the smaller side.

## entry 333

Heap when you only need top-k; full sort is wasted work.

## entry 334

StringBuilder: amortize allocation by doubling on grow.

## entry 335

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 336

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 337

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 338

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 339

Monotonic stack pops while the new element violates the invariant.

## entry 340

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 341

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 342

Wavelet tree: range k-th element in O(log Σ) time.

## entry 343

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 344

Greedy by end-time picks the most non-overlapping intervals.

## entry 345

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 346

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 347

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 348

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 349

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 350

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 351

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 352

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 353

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 354

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 355

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 356

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 357

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 358

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 359

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 360

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 361

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 362

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 363

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 364

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 365

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 366

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 367

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 368

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 369

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 370

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 371

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 372

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 373

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 374

Stable sort matters when a secondary key was set in a prior pass.

## entry 375

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 376

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 377

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 378

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 379

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 380

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 381

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 382

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 383

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 384

Monotonic stack pops while the new element violates the invariant.

## entry 385

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 386

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 387

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 388

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 389

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 390

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 391

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 392

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 393

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 394

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 395

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 396

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 397

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 398

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 399

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 400

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 401

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 402

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 403

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 404

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 405

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 406

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 407

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 408

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 409

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 410

Splay tree: every access splays to the root; amortized O(log n).

## entry 411

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 412

Walk both pointers from each end inward; advance the smaller side.

## entry 413

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 414

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 415

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 416

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 417

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 418

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 419

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 420

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 421

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 422

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 423

Euler tour flattens a tree into an array for range-query LCA.

## entry 424

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 425

Monotonic stack pops while the new element violates the invariant.

## entry 426

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 427

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 428

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 429

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 430

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 431

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 432

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 433

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 434

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 435

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 436

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 437

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 438

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 439

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 440

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 441

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 442

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 443

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 444

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 445

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 446

Wavelet tree: range k-th element in O(log Σ) time.

## entry 447

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 448

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 449

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 450

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 451

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 452

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 453

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 454

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 455

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 456

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 457

Splay tree: every access splays to the root; amortized O(log n).

## entry 458

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 459

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 460

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 461

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 462

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 463

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 464

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 465

Walk both pointers from each end inward; advance the smaller side.

## entry 466

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 467

Monotonic stack pops while the new element violates the invariant.

## entry 468

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 469

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 470

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 471

Walk both pointers from each end inward; advance the smaller side.

## entry 472

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 473

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 474

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 475

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 476

Manacher expands around each center, reusing prior radii via mirror reflection.
