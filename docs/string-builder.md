# string-builder

## entry 1

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 2

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 4

StringBuilder: amortize allocation by doubling on grow.

## entry 5

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 6

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 7

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 8

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 9

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 10

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 11

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 12

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 13

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 14

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 15

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 16

Monotonic stack pops while the new element violates the invariant.

## entry 17

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 18

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 19

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 20

StringBuilder: amortize allocation by doubling on grow.

## entry 21

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 22

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 23

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 24

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 25

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 26

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 27

Articulation points: same DFS as bridges, with a slightly different test.

## entry 28

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 29

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 30

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 31

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 32

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 33

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 34

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 35

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 36

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 37

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 38

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 39

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 40

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 41

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 42

Euler tour flattens a tree into an array for range-query LCA.

## entry 43

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 44

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 45

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 46

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 47

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 48

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 49

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 50

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 51

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 52

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 53

Monotonic stack pops while the new element violates the invariant.

## entry 54

Euler tour flattens a tree into an array for range-query LCA.

## entry 55

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 56

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 57

StringBuilder: amortize allocation by doubling on grow.

## entry 58

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 59

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 60

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 61

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 62

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 63

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 64

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 65

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 66

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 67

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 68

Greedy by end-time picks the most non-overlapping intervals.

## entry 69

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 70

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 71

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 72

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 73

State compression: bitmask + integer encodes a small subset cheaply.

## entry 74

Wavelet tree: range k-th element in O(log Σ) time.

## entry 75

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 76

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 77

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 78

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 79

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 80

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 81

Wavelet tree: range k-th element in O(log Σ) time.

## entry 82

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 83

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 84

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 85

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 86

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 87

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 88

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 89

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 90

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 91

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 92

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 93

Articulation points: same DFS as bridges, with a slightly different test.

## entry 94

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 95

Walk both pointers from each end inward; advance the smaller side.

## entry 96

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 97

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 98

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 99

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 100

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 101

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 102

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 103

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 104

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 105

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 106

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 107

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 108

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 109

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 110

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 111

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 112

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 113

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 114

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 115

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 116

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 117

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 118

Walk both pointers from each end inward; advance the smaller side.

## entry 119

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 120

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 121

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 122

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 123

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 124

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 125

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 126

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 127

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 128

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 129

Walk both pointers from each end inward; advance the smaller side.

## entry 130

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 131

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 132

Euler tour flattens a tree into an array for range-query LCA.

## entry 133

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 134

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 135

State compression: bitmask + integer encodes a small subset cheaply.

## entry 136

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 137

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 138

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 139

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 140

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 141

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 142

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 143

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 144

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 145

Walk both pointers from each end inward; advance the smaller side.

## entry 146

LIS via patience: each pile holds the smallest tail of length k.

## entry 147

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 148

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 149

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 150

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 151

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 152

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 153

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 154

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 155

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 156

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 157

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 158

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 159

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 160

Walk both pointers from each end inward; advance the smaller side.

## entry 161

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 162

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 163

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 164

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 165

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 166

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 167

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 168

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 169

Splay tree: every access splays to the root; amortized O(log n).

## entry 170

LIS via patience: each pile holds the smallest tail of length k.

## entry 171

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 172

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 173

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 174

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 175

Heap when you only need top-k; full sort is wasted work.

## entry 176

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 177

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 178

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 179

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 180

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 181

Splay tree: every access splays to the root; amortized O(log n).

## entry 182

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 183

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 184

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 185

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 186

Heap when you only need top-k; full sort is wasted work.

## entry 187

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 188

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 189

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 190

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 191

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 192

StringBuilder: amortize allocation by doubling on grow.

## entry 193

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 194

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 195

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 196

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 197

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 198

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 199

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 200

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 201

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 202

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 203

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 204

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 205

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 206

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 207

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 208

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 209

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 210

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 211

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 212

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 213

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 214

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 215

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 216

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 217

Union-Find with path compression amortizes to near-O(1) per op.

## entry 218

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 219

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 220

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 221

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 222

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 223

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 224

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 225

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 226

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 227

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 228

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 229

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 230

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 231

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 232

Monotonic stack pops while the new element violates the invariant.

## entry 233

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 234

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 235

StringBuilder: amortize allocation by doubling on grow.

## entry 236

Articulation points: same DFS as bridges, with a slightly different test.

## entry 237

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 238

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 239

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 240

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 241

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 242

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 243

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 244

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 245

StringBuilder: amortize allocation by doubling on grow.

## entry 246

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 247

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 248

LIS via patience: each pile holds the smallest tail of length k.

## entry 249

Union-Find with path compression amortizes to near-O(1) per op.

## entry 250

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 251

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 252

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 253

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 254

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 255

Splay tree: every access splays to the root; amortized O(log n).

## entry 256

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 257

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 258

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 259

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 260

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 261

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 262

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 263

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 264

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 265

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 266

Union-Find with path compression amortizes to near-O(1) per op.

## entry 267

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 268

State compression: bitmask + integer encodes a small subset cheaply.

## entry 269

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 270

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 271

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 272

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 273

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 274

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 275

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 276

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 277

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 278

StringBuilder: amortize allocation by doubling on grow.

## entry 279

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 280

Monotonic stack pops while the new element violates the invariant.

## entry 281

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 282

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 283

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 284

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 285

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 286

Splay tree: every access splays to the root; amortized O(log n).

## entry 287

Euler tour flattens a tree into an array for range-query LCA.

## entry 288

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 289

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 290

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 291

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 292

LIS via patience: each pile holds the smallest tail of length k.

## entry 293

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 294

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 295

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 296

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 297

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 298

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 299

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 300

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 301

State compression: bitmask + integer encodes a small subset cheaply.

## entry 302

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 303

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 304

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 305

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 306

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 307

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 308

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 309

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 310

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 311

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 312

Wavelet tree: range k-th element in O(log Σ) time.

## entry 313

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 314

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 315

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 316

Euler tour flattens a tree into an array for range-query LCA.

## entry 317

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 318

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 319

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 320

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 321

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 322

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 323

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 324

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 325

StringBuilder: amortize allocation by doubling on grow.

## entry 326

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 327

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 328

Euler tour flattens a tree into an array for range-query LCA.

## entry 329

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 330

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 331

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 332

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 333

Articulation points: same DFS as bridges, with a slightly different test.

## entry 334

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 335

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 336

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 337

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 338

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 339

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 340

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 341

Heap when you only need top-k; full sort is wasted work.

## entry 342

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 343

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 344

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 345

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 346

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 347

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 348

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 349

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 350

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 351

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 352

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 353

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 354

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 355

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 356

Euler tour flattens a tree into an array for range-query LCA.

## entry 357

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 358

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 359

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 360

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 361

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 362

StringBuilder: amortize allocation by doubling on grow.

## entry 363

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 364

StringBuilder: amortize allocation by doubling on grow.

## entry 365

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 366

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 367

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 368

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 369

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 370

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 371

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 372

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 373

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 374

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 375

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 376

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 377

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 378

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 379

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 380

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 381

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 382

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 383

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 384

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 385

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 386

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 387

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 388

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 389

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 390

Walk both pointers from each end inward; advance the smaller side.

## entry 391

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 392

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 393

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 394

Walk both pointers from each end inward; advance the smaller side.

## entry 395

Greedy by end-time picks the most non-overlapping intervals.

## entry 396

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 397

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 398

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 399

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 400

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 401

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 402

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 403

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 404

State compression: bitmask + integer encodes a small subset cheaply.

## entry 405

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 406

State compression: bitmask + integer encodes a small subset cheaply.

## entry 407

State compression: bitmask + integer encodes a small subset cheaply.

## entry 408

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 409

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 410

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 411

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 412

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 413

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 414

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 415

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 416

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 417

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 418

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 419

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 420

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 421

LIS via patience: each pile holds the smallest tail of length k.

## entry 422

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 423

Articulation points: same DFS as bridges, with a slightly different test.

## entry 424

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 425

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 426

LIS via patience: each pile holds the smallest tail of length k.

## entry 427

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 428

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 429

Stable sort matters when a secondary key was set in a prior pass.

## entry 430

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 431

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 432

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 433

Walk both pointers from each end inward; advance the smaller side.

## entry 434

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 435

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 436

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 437

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 438

Greedy by end-time picks the most non-overlapping intervals.

## entry 439

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 440

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 441

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 442

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 443

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 444

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 445

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 446

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 447

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 448

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 449

Heap when you only need top-k; full sort is wasted work.

## entry 450

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 451

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 452

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 453

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 454

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 455

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 456

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 457

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 458

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 459

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 460

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 461

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 462

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 463

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 464

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 465

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 466

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 467

Heap when you only need top-k; full sort is wasted work.

## entry 468

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 469

State compression: bitmask + integer encodes a small subset cheaply.

## entry 470

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 471

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 472

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 473

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 474

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 475

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 476

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 477

Splay tree: every access splays to the root; amortized O(log n).

## entry 478

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 479

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 480

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 481

StringBuilder: amortize allocation by doubling on grow.

## entry 482

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 483

State compression: bitmask + integer encodes a small subset cheaply.

## entry 484

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 485

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 486

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 487

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 488

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 489

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 490

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 491

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 492

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 493

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 494

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 495

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 496

State compression: bitmask + integer encodes a small subset cheaply.

## entry 497

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 498

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 499

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 500

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 501

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 502

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 503

State compression: bitmask + integer encodes a small subset cheaply.

## entry 504

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 505

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 506

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 507

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 508

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 509

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 510

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 511

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 512

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 513

Heap when you only need top-k; full sort is wasted work.

## entry 514

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 515

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 516

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 517

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 518

StringBuilder: amortize allocation by doubling on grow.

## entry 519

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 520

Monotonic stack pops while the new element violates the invariant.

## entry 521

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 522

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 523

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 524

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 525

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 526

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 527

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 528

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 529

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 530

Splay tree: every access splays to the root; amortized O(log n).

## entry 531

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 532

State compression: bitmask + integer encodes a small subset cheaply.

## entry 533

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 534

Euler tour flattens a tree into an array for range-query LCA.

## entry 535

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 536

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 537

Monotonic stack pops while the new element violates the invariant.

## entry 538

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 539

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 540

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 541

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 542

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 543

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 544

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 545

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 546

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 547

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 548

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 549

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 550

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 551

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 552

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 553

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 554

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 555

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 556

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 557

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 558

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
