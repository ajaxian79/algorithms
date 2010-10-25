# euler-tour

## entry 1

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 2

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 5

Walk both pointers from each end inward; advance the smaller side.

## entry 6

Euler tour flattens a tree into an array for range-query LCA.

## entry 7

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 8

State compression: bitmask + integer encodes a small subset cheaply.

## entry 9

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 10

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 11

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 12

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 13

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 14

Wavelet tree: range k-th element in O(log Σ) time.

## entry 15

StringBuilder: amortize allocation by doubling on grow.

## entry 16

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 17

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 18

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 19

Euler tour flattens a tree into an array for range-query LCA.

## entry 20

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 21

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 22

StringBuilder: amortize allocation by doubling on grow.

## entry 23

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 24

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 25

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 26

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 27

Greedy by end-time picks the most non-overlapping intervals.

## entry 28

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 29

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 30

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 31

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 32

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 33

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 34

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 35

StringBuilder: amortize allocation by doubling on grow.

## entry 36

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 37

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 38

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 39

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 40

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 41

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 42

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 43

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 44

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 45

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 46

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 47

Wavelet tree: range k-th element in O(log Σ) time.

## entry 48

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 49

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 50

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 51

Union-Find with path compression amortizes to near-O(1) per op.

## entry 52

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 53

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 54

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 55

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 56

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 57

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 58

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 59

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 60

StringBuilder: amortize allocation by doubling on grow.

## entry 61

Articulation points: same DFS as bridges, with a slightly different test.

## entry 62

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 63

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 64

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 65

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 66

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 67

Heap when you only need top-k; full sort is wasted work.

## entry 68

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 69

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 70

Union-Find with path compression amortizes to near-O(1) per op.

## entry 71

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 72

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 73

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 74

Union-Find with path compression amortizes to near-O(1) per op.

## entry 75

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 76

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 77

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 78

Stable sort matters when a secondary key was set in a prior pass.

## entry 79

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 80

Euler tour flattens a tree into an array for range-query LCA.

## entry 81

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 82

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 83

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 84

StringBuilder: amortize allocation by doubling on grow.

## entry 85

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 86

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 87

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 88

State compression: bitmask + integer encodes a small subset cheaply.

## entry 89

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 90

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 91

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 92

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 93

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 94

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 95

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 96

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 97

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 98

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 99

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 100

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 101

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 102

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 103

State compression: bitmask + integer encodes a small subset cheaply.

## entry 104

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 105

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 106

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 107

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 108

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 109

Heap when you only need top-k; full sort is wasted work.

## entry 110

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 111

Wavelet tree: range k-th element in O(log Σ) time.

## entry 112

Heap when you only need top-k; full sort is wasted work.

## entry 113

Stable sort matters when a secondary key was set in a prior pass.

## entry 114

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 115

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 116

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 117

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 118

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 119

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 120

Articulation points: same DFS as bridges, with a slightly different test.

## entry 121

Walk both pointers from each end inward; advance the smaller side.

## entry 122

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 123

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 124

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 125

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 126

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 127

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 128

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 129

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 130

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 131

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 132

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 133

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 134

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 135

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 136

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 137

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 138

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 139

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 140

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 141

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 142

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 143

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 144

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 145

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 146

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 147

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 148

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 149

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 150

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 151

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 152

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 153

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 154

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 155

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 156

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 157

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 158

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 159

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 160

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 161

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 162

Articulation points: same DFS as bridges, with a slightly different test.

## entry 163

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 164

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 165

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 166

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 167

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 168

State compression: bitmask + integer encodes a small subset cheaply.

## entry 169

Stable sort matters when a secondary key was set in a prior pass.

## entry 170

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 171

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 172

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 173

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 174

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 175

Walk both pointers from each end inward; advance the smaller side.

## entry 176

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 177

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 178

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 179

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 180

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 181

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 182

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 183

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 184

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 185

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 186

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 187

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 188

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 189

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 190

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 191

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 192

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 193

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 194

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 195

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 196

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 197

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 198

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 199

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 200

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 201

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 202

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 203

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 204

Walk both pointers from each end inward; advance the smaller side.

## entry 205

State compression: bitmask + integer encodes a small subset cheaply.

## entry 206

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 207

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 208

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 209

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 210

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 211

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 212

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 213

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 214

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 215

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 216

Union-Find with path compression amortizes to near-O(1) per op.

## entry 217

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 218

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 219

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 220

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 221

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 222

Heap when you only need top-k; full sort is wasted work.

## entry 223

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 224

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 225

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 226

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 227

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 228

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 229

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 230

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 231

Articulation points: same DFS as bridges, with a slightly different test.

## entry 232

Wavelet tree: range k-th element in O(log Σ) time.

## entry 233

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 234

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 235

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 236

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 237

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 238

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 239

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 240

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 241

State compression: bitmask + integer encodes a small subset cheaply.

## entry 242

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 243

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 244

State compression: bitmask + integer encodes a small subset cheaply.

## entry 245

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 246

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 247

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 248

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 249

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 250

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 251

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 252

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 253

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 254

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 255

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 256

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 257

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 258

LIS via patience: each pile holds the smallest tail of length k.

## entry 259

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 260

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 261

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 262

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 263

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 264

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 265

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 266

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 267

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 268

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 269

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 270

Splay tree: every access splays to the root; amortized O(log n).

## entry 271

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 272

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 273

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 274

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 275

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 276

StringBuilder: amortize allocation by doubling on grow.

## entry 277

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 278

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 279

StringBuilder: amortize allocation by doubling on grow.

## entry 280

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 281

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 282

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 283

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 284

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 285

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 286

Splay tree: every access splays to the root; amortized O(log n).

## entry 287

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 288

Articulation points: same DFS as bridges, with a slightly different test.

## entry 289

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 290

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 291

Monotonic stack pops while the new element violates the invariant.

## entry 292

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 293

LIS via patience: each pile holds the smallest tail of length k.

## entry 294

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 295

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 296

Heap when you only need top-k; full sort is wasted work.

## entry 297

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 298

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 299

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 300

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 301

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 302

Heap when you only need top-k; full sort is wasted work.

## entry 303

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 304

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 305

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 306

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 307

Articulation points: same DFS as bridges, with a slightly different test.

## entry 308

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 309

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 310

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 311

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 312

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 313

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 314

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 315

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 316

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 317

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 318

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 319

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 320

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 321

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 322

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 323

State compression: bitmask + integer encodes a small subset cheaply.

## entry 324

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 325

LIS via patience: each pile holds the smallest tail of length k.

## entry 326

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 327

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 328

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 329

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 330

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 331

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 332

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 333

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 334

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 335

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 336

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 337

LIS via patience: each pile holds the smallest tail of length k.

## entry 338

Euler tour flattens a tree into an array for range-query LCA.

## entry 339

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 340

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 341

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 342

Wavelet tree: range k-th element in O(log Σ) time.

## entry 343

Union-Find with path compression amortizes to near-O(1) per op.

## entry 344

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 345

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 346

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 347

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 348

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 349

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 350

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 351

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 352

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 353

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 354

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 355

Greedy by end-time picks the most non-overlapping intervals.

## entry 356

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 357

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 358

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 359

Splay tree: every access splays to the root; amortized O(log n).

## entry 360

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 361

Union-Find with path compression amortizes to near-O(1) per op.

## entry 362

StringBuilder: amortize allocation by doubling on grow.

## entry 363

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 364

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 365

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 366

Union-Find with path compression amortizes to near-O(1) per op.

## entry 367

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 368

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 369

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 370

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 371

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 372

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 373

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 374

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 375

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 376

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 377

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 378

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 379

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 380

Articulation points: same DFS as bridges, with a slightly different test.

## entry 381

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 382

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 383

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 384

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 385

Heap when you only need top-k; full sort is wasted work.

## entry 386

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 387

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 388

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 389

Splay tree: every access splays to the root; amortized O(log n).

## entry 390

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 391

Splay tree: every access splays to the root; amortized O(log n).

## entry 392

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 393

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 394

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 395

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 396

Walk both pointers from each end inward; advance the smaller side.

## entry 397

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 398

Walk both pointers from each end inward; advance the smaller side.

## entry 399

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 400

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 401

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 402

LIS via patience: each pile holds the smallest tail of length k.

## entry 403

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 404

Union-Find with path compression amortizes to near-O(1) per op.

## entry 405

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 406

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 407

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 408

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 409

Monotonic stack pops while the new element violates the invariant.

## entry 410

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 411

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 412

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 413

Walk both pointers from each end inward; advance the smaller side.

## entry 414

Monotonic stack pops while the new element violates the invariant.

## entry 415

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 416

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 417

Euler tour flattens a tree into an array for range-query LCA.

## entry 418

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 419

Splay tree: every access splays to the root; amortized O(log n).

## entry 420

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 421

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 422

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 423

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 424

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 425

Articulation points: same DFS as bridges, with a slightly different test.

## entry 426

LIS via patience: each pile holds the smallest tail of length k.

## entry 427

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 428

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 429

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 430

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 431

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 432

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 433

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 434

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 435

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 436

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 437

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 438

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 439

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 440

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 441

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 442

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 443

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 444

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 445

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 446

Union-Find with path compression amortizes to near-O(1) per op.

## entry 447

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 448

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 449

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 450

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 451

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 452

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 453

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 454

Heap when you only need top-k; full sort is wasted work.

## entry 455

StringBuilder: amortize allocation by doubling on grow.

## entry 456

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 457

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 458

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 459

Walk both pointers from each end inward; advance the smaller side.

## entry 460

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 461

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 462

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 463

Walk both pointers from each end inward; advance the smaller side.

## entry 464

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 465

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 466

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 467

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 468

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 469

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 470

State compression: bitmask + integer encodes a small subset cheaply.

## entry 471

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 472

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 473

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 474

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 475

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 476

Splay tree: every access splays to the root; amortized O(log n).

## entry 477

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 478

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 479

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 480

LIS via patience: each pile holds the smallest tail of length k.

## entry 481

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 482

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 483

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 484

Heap when you only need top-k; full sort is wasted work.

## entry 485

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 486

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 487

State compression: bitmask + integer encodes a small subset cheaply.

## entry 488

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 489

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 490

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 491

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 492

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 493

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 494

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 495

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 496

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 497

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 498

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 499

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 500

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 501

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 502

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 503

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 504

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 505

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 506

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 507

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 508

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 509

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 510

StringBuilder: amortize allocation by doubling on grow.

## entry 511

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 512

Articulation points: same DFS as bridges, with a slightly different test.

## entry 513

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 514

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 515

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 516

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 517

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 518

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 519

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 520

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 521

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 522

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 523

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 524

Articulation points: same DFS as bridges, with a slightly different test.

## entry 525

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 526

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 527

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 528

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 529

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 530

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 531

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 532

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 533

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 534

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 535

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 536

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 537

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 538

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 539

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 540

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 541

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 542

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 543

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 544

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 545

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 546

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 547

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 548

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 549

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 550

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 551

Articulation points: same DFS as bridges, with a slightly different test.

## entry 552

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 553

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 554

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 555

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 556

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 557

LIS via patience: each pile holds the smallest tail of length k.

## entry 558

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 559

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 560

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 561

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 562

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 563

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 564

Walk both pointers from each end inward; advance the smaller side.

## entry 565

Monotonic stack pops while the new element violates the invariant.

## entry 566

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 567

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 568

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 569

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 570

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 571

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 572

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 573

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 574

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 575

Splay tree: every access splays to the root; amortized O(log n).

## entry 576

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 577

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 578

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 579

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 580

Union-Find with path compression amortizes to near-O(1) per op.

## entry 581

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 582

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 583

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 584

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 585

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 586

Monotonic stack pops while the new element violates the invariant.

## entry 587

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 588

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 589

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 590

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 591

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 592

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 593

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 594

Stable sort matters when a secondary key was set in a prior pass.

## entry 595

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 596

Euler tour flattens a tree into an array for range-query LCA.

## entry 597

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 598

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 599

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 600

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 601

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 602

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 603

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 604

State compression: bitmask + integer encodes a small subset cheaply.

## entry 605

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 606

Articulation points: same DFS as bridges, with a slightly different test.

## entry 607

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 608

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 609

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 610

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 611

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 612

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 613

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 614

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 615

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 616

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 617

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 618

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 619

Wavelet tree: range k-th element in O(log Σ) time.

## entry 620

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 621

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 622

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 623

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 624

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 625

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 626

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 627

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 628

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 629

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 630

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 631

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 632

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 633

Euler tour flattens a tree into an array for range-query LCA.

## entry 634

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 635

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 636

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 637

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 638

Heap when you only need top-k; full sort is wasted work.

## entry 639

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 640

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 641

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 642

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 643

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 644

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 645

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 646

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 647

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 648

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 649

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 650

LCA via binary lifting: jump up powers of two until depths match, then converge.
