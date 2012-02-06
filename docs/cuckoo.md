# cuckoo

## entry 1

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 2

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3

Walk both pointers from each end inward; advance the smaller side.

## entry 4

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 6

Greedy by end-time picks the most non-overlapping intervals.

## entry 7

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 8

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 9

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 10

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 11

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 12

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 13

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 14

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 15

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 16

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 17

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 18

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 19

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 20

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 21

Greedy by end-time picks the most non-overlapping intervals.

## entry 22

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 23

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 24

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 25

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 26

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 27

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 28

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 29

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 30

Euler tour flattens a tree into an array for range-query LCA.

## entry 31

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 32

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 33

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 34

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 35

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 36

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 37

Euler tour flattens a tree into an array for range-query LCA.

## entry 38

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 39

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 40

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 41

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 42

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 43

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 44

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 45

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 46

Walk both pointers from each end inward; advance the smaller side.

## entry 47

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 48

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 49

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 50

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 51

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 52

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 53

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 54

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 55

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 56

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 57

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 58

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 59

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 60

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 61

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 62

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 63

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 64

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 65

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 66

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 67

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 68

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 69

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 70

State compression: bitmask + integer encodes a small subset cheaply.

## entry 71

Wavelet tree: range k-th element in O(log Σ) time.

## entry 72

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 73

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 74

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 75

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 76

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 77

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 78

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 79

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 80

Articulation points: same DFS as bridges, with a slightly different test.

## entry 81

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 82

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 83

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 84

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 85

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 86

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 87

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 88

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 89

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 90

Heap when you only need top-k; full sort is wasted work.

## entry 91

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 92

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 93

Splay tree: every access splays to the root; amortized O(log n).

## entry 94

Greedy by end-time picks the most non-overlapping intervals.

## entry 95

Walk both pointers from each end inward; advance the smaller side.

## entry 96

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 97

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 98

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 99

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 100

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 101

Heap when you only need top-k; full sort is wasted work.

## entry 102

StringBuilder: amortize allocation by doubling on grow.

## entry 103

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 104

Heap when you only need top-k; full sort is wasted work.

## entry 105

Greedy by end-time picks the most non-overlapping intervals.

## entry 106

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 107

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 108

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 109

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 110

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 111

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 112

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 113

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 114

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 115

Union-Find with path compression amortizes to near-O(1) per op.

## entry 116

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 117

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 118

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 119

Union-Find with path compression amortizes to near-O(1) per op.

## entry 120

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 121

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 122

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 123

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 124

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 125

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 126

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 127

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 128

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 129

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 130

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 131

Wavelet tree: range k-th element in O(log Σ) time.

## entry 132

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 133

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 134

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 135

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 136

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 137

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 138

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 139

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 140

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 141

Articulation points: same DFS as bridges, with a slightly different test.

## entry 142

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 143

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 144

Splay tree: every access splays to the root; amortized O(log n).

## entry 145

Euler tour flattens a tree into an array for range-query LCA.

## entry 146

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 147

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 148

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 149

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 150

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 151

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 152

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 153

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 154

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 155

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 156

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 157

State compression: bitmask + integer encodes a small subset cheaply.

## entry 158

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 159

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 160

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 161

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 162

Greedy by end-time picks the most non-overlapping intervals.

## entry 163

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 164

Wavelet tree: range k-th element in O(log Σ) time.

## entry 165

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 166

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 167

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 168

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 169

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 170

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 171

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 172

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 173

Union-Find with path compression amortizes to near-O(1) per op.

## entry 174

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 175

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 176

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 177

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 178

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 179

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 180

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 181

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 182

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 183

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 184

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 185

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 186

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 187

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 188

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 189

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 190

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 191

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 192

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 193

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 194

LIS via patience: each pile holds the smallest tail of length k.

## entry 195

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 196

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 197

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 198

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 199

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 200

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 201

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 202

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 203

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 204

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 205

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 206

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 207

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 208

Euler tour flattens a tree into an array for range-query LCA.

## entry 209

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 210

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 211

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 212

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 213

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 214

Monotonic stack pops while the new element violates the invariant.

## entry 215

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 216

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 217

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 218

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 219

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 220

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 221

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 222

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 223

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 224

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 225

Greedy by end-time picks the most non-overlapping intervals.

## entry 226

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 227

Greedy by end-time picks the most non-overlapping intervals.

## entry 228

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 229

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 230

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 231

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 232

Splay tree: every access splays to the root; amortized O(log n).

## entry 233

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 234

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 235

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 236

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 237

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 238

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 239

State compression: bitmask + integer encodes a small subset cheaply.

## entry 240

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 241

StringBuilder: amortize allocation by doubling on grow.

## entry 242

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 243

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 244

State compression: bitmask + integer encodes a small subset cheaply.

## entry 245

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 246

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 247

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 248

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 249

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 250

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 251

State compression: bitmask + integer encodes a small subset cheaply.

## entry 252

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 253

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 254

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 255

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 256

Walk both pointers from each end inward; advance the smaller side.

## entry 257

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 258

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 259

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 260

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 261

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 262

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 263

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 264

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 265

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 266

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 267

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 268

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 269

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 270

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 271

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 272

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 273

Monotonic stack pops while the new element violates the invariant.

## entry 274

Articulation points: same DFS as bridges, with a slightly different test.

## entry 275

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 276

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 277

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 278

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 279

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 280

Heap when you only need top-k; full sort is wasted work.

## entry 281

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 282

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 283

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 284

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 285

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 286

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 287

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 288

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 289

Greedy by end-time picks the most non-overlapping intervals.

## entry 290

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 291

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 292

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 293

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 294

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 295

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 296

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 297

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 298

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 299

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 300

Monotonic stack pops while the new element violates the invariant.

## entry 301

Heap when you only need top-k; full sort is wasted work.

## entry 302

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 303

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 304

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 305

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 306

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 307

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 308

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 309

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 310

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 311

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 312

Wavelet tree: range k-th element in O(log Σ) time.

## entry 313

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 314

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 315

Wavelet tree: range k-th element in O(log Σ) time.

## entry 316

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 317

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 318

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 319

Greedy by end-time picks the most non-overlapping intervals.

## entry 320

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 321

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 322

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 323

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 324

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 325

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 326

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 327

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 328

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 329

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 330

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 331

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 332

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 333

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 334

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 335

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 336

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 337

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 338

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 339

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 340

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 341

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 342

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 343

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 344

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 345

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 346

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 347

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 348

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 349

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 350

Union-Find with path compression amortizes to near-O(1) per op.

## entry 351

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 352

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 353

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 354

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 355

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 356

Monotonic stack pops while the new element violates the invariant.

## entry 357

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 358

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 359

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 360

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 361

State compression: bitmask + integer encodes a small subset cheaply.

## entry 362

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 363

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 364

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 365

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 366

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 367

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 368

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 369

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 370

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 371

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 372

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 373

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 374

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 375

Wavelet tree: range k-th element in O(log Σ) time.

## entry 376

Articulation points: same DFS as bridges, with a slightly different test.

## entry 377

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 378

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 379

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 380

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 381

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 382

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 383

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 384

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 385

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 386

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 387

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 388

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 389

StringBuilder: amortize allocation by doubling on grow.

## entry 390

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 391

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 392

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 393

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 394

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 395

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 396

Articulation points: same DFS as bridges, with a slightly different test.

## entry 397

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 398

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 399

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 400

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 401

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 402

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 403

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 404

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 405

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 406

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 407

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 408

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 409

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 410

LIS via patience: each pile holds the smallest tail of length k.

## entry 411

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 412

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 413

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 414

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 415

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 416

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 417

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 418

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 419

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 420

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 421

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 422

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 423

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 424

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 425

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 426

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 427

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 428

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 429

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 430

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 431

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 432

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 433

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 434

Articulation points: same DFS as bridges, with a slightly different test.

## entry 435

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 436

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 437

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 438

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 439

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 440

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 441

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 442

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 443

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 444

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 445

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 446

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 447

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 448

Greedy by end-time picks the most non-overlapping intervals.

## entry 449

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 450

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 451

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 452

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 453

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 454

Greedy by end-time picks the most non-overlapping intervals.

## entry 455

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 456

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 457

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 458

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 459

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 460

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 461

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 462

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 463

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 464

Stable sort matters when a secondary key was set in a prior pass.

## entry 465

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 466

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 467

Stable sort matters when a secondary key was set in a prior pass.

## entry 468

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 469

Articulation points: same DFS as bridges, with a slightly different test.

## entry 470

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 471

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 472

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 473

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 474

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 475

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 476

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 477

Monotonic stack pops while the new element violates the invariant.

## entry 478

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 479

Stable sort matters when a secondary key was set in a prior pass.

## entry 480

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 481

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 482

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 483

Greedy by end-time picks the most non-overlapping intervals.

## entry 484

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 485

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 486

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 487

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 488

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 489

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 490

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 491

Euler tour flattens a tree into an array for range-query LCA.

## entry 492

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 493

Wavelet tree: range k-th element in O(log Σ) time.

## entry 494

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 495

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 496

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 497

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 498

Union-Find with path compression amortizes to near-O(1) per op.

## entry 499

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 500

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 501

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 502

Monotonic stack pops while the new element violates the invariant.

## entry 503

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 504

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 505

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 506

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 507

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 508

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 509

Walk both pointers from each end inward; advance the smaller side.

## entry 510

Greedy by end-time picks the most non-overlapping intervals.

## entry 511

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 512

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 513

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 514

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 515

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 516

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 517

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 518

Stable sort matters when a secondary key was set in a prior pass.

## entry 519

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 520

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 521

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 522

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 523

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 524

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 525

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 526

LIS via patience: each pile holds the smallest tail of length k.

## entry 527

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 528

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 529

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 530

Union-Find with path compression amortizes to near-O(1) per op.

## entry 531

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 532

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 533

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 534

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 535

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 536

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 537

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 538

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 539

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 540

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 541

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 542

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 543

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 544

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 545

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 546

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 547

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 548

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 549

Splay tree: every access splays to the root; amortized O(log n).

## entry 550

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 551

Z-array `z[i]` is the longest substring starting at i that matches a prefix.
