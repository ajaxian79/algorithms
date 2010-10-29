# open-addressing

## entry 1

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 2

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 4

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 6

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 7

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 8

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 9

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 10

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 11

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 12

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 13

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 14

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 15

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 16

Walk both pointers from each end inward; advance the smaller side.

## entry 17

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 18

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 19

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 20

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 21

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 22

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 23

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 24

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 25

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 26

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 27

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 28

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 29

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 30

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 31

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 32

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 33

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 34

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 35

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 36

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 37

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 38

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 39

Monotonic stack pops while the new element violates the invariant.

## entry 40

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 41

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 42

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 43

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 44

Stable sort matters when a secondary key was set in a prior pass.

## entry 45

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 46

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 47

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 48

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 49

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 50

Euler tour flattens a tree into an array for range-query LCA.

## entry 51

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 52

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 53

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 54

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 55

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 56

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 57

Wavelet tree: range k-th element in O(log Σ) time.

## entry 58

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 59

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 60

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 61

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 62

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 63

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 64

Splay tree: every access splays to the root; amortized O(log n).

## entry 65

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 66

Union-Find with path compression amortizes to near-O(1) per op.

## entry 67

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 68

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 69

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 70

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 71

StringBuilder: amortize allocation by doubling on grow.

## entry 72

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 73

Walk both pointers from each end inward; advance the smaller side.

## entry 74

StringBuilder: amortize allocation by doubling on grow.

## entry 75

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 76

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 77

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 78

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 79

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 80

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 81

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 82

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 83

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 84

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 85

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 86

Greedy by end-time picks the most non-overlapping intervals.

## entry 87

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 88

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 89

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 90

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 91

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 92

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 93

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 94

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 95

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 96

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 97

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 98

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 99

State compression: bitmask + integer encodes a small subset cheaply.

## entry 100

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 101

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 102

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 103

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 104

Splay tree: every access splays to the root; amortized O(log n).

## entry 105

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 106

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 107

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 108

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 109

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 110

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 111

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 112

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 113

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 114

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 115

Heap when you only need top-k; full sort is wasted work.

## entry 116

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 117

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 118

Monotonic stack pops while the new element violates the invariant.

## entry 119

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 120

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 121

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 122

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 123

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 124

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 125

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 126

StringBuilder: amortize allocation by doubling on grow.

## entry 127

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 128

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 129

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 130

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 131

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 132

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 133

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 134

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 135

LIS via patience: each pile holds the smallest tail of length k.

## entry 136

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 137

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 138

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 139

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 140

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 141

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 142

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 143

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 144

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 145

Union-Find with path compression amortizes to near-O(1) per op.

## entry 146

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 147

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 148

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 149

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 150

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 151

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 152

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 153

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 154

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 155

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 156

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 157

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 158

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 159

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 160

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 161

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 162

Walk both pointers from each end inward; advance the smaller side.

## entry 163

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 164

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 165

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 166

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 167

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 168

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 169

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 170

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 171

Euler tour flattens a tree into an array for range-query LCA.

## entry 172

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 173

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 174

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 175

Walk both pointers from each end inward; advance the smaller side.

## entry 176

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 177

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 178

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 179

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 180

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 181

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 182

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 183

Euler tour flattens a tree into an array for range-query LCA.

## entry 184

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 185

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 186

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 187

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 188

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 189

Euler tour flattens a tree into an array for range-query LCA.

## entry 190

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 191

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 192

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 193

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 194

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 195

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 196

Monotonic stack pops while the new element violates the invariant.

## entry 197

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 198

Monotonic stack pops while the new element violates the invariant.

## entry 199

Wavelet tree: range k-th element in O(log Σ) time.

## entry 200

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 201

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 202

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 203

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 204

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 205

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 206

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 207

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 208

Heap when you only need top-k; full sort is wasted work.

## entry 209

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 210

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 211

Greedy by end-time picks the most non-overlapping intervals.

## entry 212

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 213

Splay tree: every access splays to the root; amortized O(log n).

## entry 214

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 215

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 216

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 217

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 218

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 219

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 220

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 221

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 222

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 223

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 224

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 225

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 226

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 227

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 228

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 229

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 230

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 231

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 232

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 233

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 234

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 235

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 236

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 237

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 238

State compression: bitmask + integer encodes a small subset cheaply.

## entry 239

Euler tour flattens a tree into an array for range-query LCA.

## entry 240

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 241

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 242

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 243

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 244

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 245

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 246

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 247

Wavelet tree: range k-th element in O(log Σ) time.

## entry 248

Euler tour flattens a tree into an array for range-query LCA.

## entry 249

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 250

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 251

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 252

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 253

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 254

LIS via patience: each pile holds the smallest tail of length k.

## entry 255

StringBuilder: amortize allocation by doubling on grow.

## entry 256

Splay tree: every access splays to the root; amortized O(log n).

## entry 257

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 258

Euler tour flattens a tree into an array for range-query LCA.

## entry 259

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 260

Heap when you only need top-k; full sort is wasted work.

## entry 261

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 262

Heap when you only need top-k; full sort is wasted work.

## entry 263

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 264

Stable sort matters when a secondary key was set in a prior pass.

## entry 265

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 266

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 267

Splay tree: every access splays to the root; amortized O(log n).

## entry 268

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 269

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 270

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 271

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 272

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 273

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 274

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 275

LIS via patience: each pile holds the smallest tail of length k.

## entry 276

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 277

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 278

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 279

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 280

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 281

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 282

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 283

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 284

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 285

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 286

Splay tree: every access splays to the root; amortized O(log n).

## entry 287

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 288

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 289

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 290

Stable sort matters when a secondary key was set in a prior pass.

## entry 291

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 292

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 293

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 294

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 295

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 296

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 297

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 298

Walk both pointers from each end inward; advance the smaller side.

## entry 299

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 300

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 301

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 302

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 303

StringBuilder: amortize allocation by doubling on grow.

## entry 304

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 305

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 306

Union-Find with path compression amortizes to near-O(1) per op.

## entry 307

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 308

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 309

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 310

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 311

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 312

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 313

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 314

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 315

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 316

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 317

StringBuilder: amortize allocation by doubling on grow.

## entry 318

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 319

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 320

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 321

Articulation points: same DFS as bridges, with a slightly different test.

## entry 322

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 323

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 324

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 325

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 326

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 327

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 328

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 329

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 330

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 331

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 332

Union-Find with path compression amortizes to near-O(1) per op.

## entry 333

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 334

Monotonic stack pops while the new element violates the invariant.

## entry 335

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 336

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 337

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 338

Euler tour flattens a tree into an array for range-query LCA.

## entry 339

LIS via patience: each pile holds the smallest tail of length k.

## entry 340

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 341

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 342

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 343

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 344

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 345

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 346

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 347

Union-Find with path compression amortizes to near-O(1) per op.

## entry 348

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 349

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 350

Euler tour flattens a tree into an array for range-query LCA.

## entry 351

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 352

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 353

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 354

LIS via patience: each pile holds the smallest tail of length k.

## entry 355

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 356

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 357

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 358

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 359

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 360

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 361

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 362

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 363

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 364

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 365

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 366

Euler tour flattens a tree into an array for range-query LCA.

## entry 367

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 368

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 369

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 370

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 371

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 372

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 373

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 374

Euler tour flattens a tree into an array for range-query LCA.

## entry 375

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 376

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 377

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 378

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 379

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 380

Walk both pointers from each end inward; advance the smaller side.

## entry 381

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 382

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 383

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 384

Euler tour flattens a tree into an array for range-query LCA.

## entry 385

LIS via patience: each pile holds the smallest tail of length k.

## entry 386

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 387

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 388

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 389

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 390

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 391

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 392

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 393

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 394

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 395

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 396

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 397

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 398

State compression: bitmask + integer encodes a small subset cheaply.

## entry 399

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 400

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 401

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 402

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 403

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 404

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 405

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 406

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 407

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 408

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 409

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 410

LIS via patience: each pile holds the smallest tail of length k.

## entry 411

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 412

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 413

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 414

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 415

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 416

Greedy by end-time picks the most non-overlapping intervals.

## entry 417

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 418

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 419

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 420

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 421

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 422

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 423

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 424

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 425

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 426

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 427

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 428

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 429

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 430

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 431

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 432

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 433

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 434

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 435

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 436

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 437

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 438

Heap when you only need top-k; full sort is wasted work.

## entry 439

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 440

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 441

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 442

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 443

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 444

Greedy by end-time picks the most non-overlapping intervals.

## entry 445

Walk both pointers from each end inward; advance the smaller side.

## entry 446

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 447

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 448

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 449

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 450

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 451

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 452

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 453

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 454

Greedy by end-time picks the most non-overlapping intervals.

## entry 455

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 456

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 457

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 458

State compression: bitmask + integer encodes a small subset cheaply.

## entry 459

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 460

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 461

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 462

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 463

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 464

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 465

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 466

Heap when you only need top-k; full sort is wasted work.

## entry 467

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 468

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 469

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 470

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 471

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 472

Articulation points: same DFS as bridges, with a slightly different test.

## entry 473

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 474

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 475

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 476

Euler tour flattens a tree into an array for range-query LCA.

## entry 477

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 478

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 479

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 480

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 481

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 482

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 483

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 484

Union-Find with path compression amortizes to near-O(1) per op.

## entry 485

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 486

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 487

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 488

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 489

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 490

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 491

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 492

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 493

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 494

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 495

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 496

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 497

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 498

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 499

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 500

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 501

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 502

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 503

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 504

Greedy by end-time picks the most non-overlapping intervals.

## entry 505

Euler tour flattens a tree into an array for range-query LCA.

## entry 506

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 507

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 508

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 509

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 510

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 511

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 512

Walk both pointers from each end inward; advance the smaller side.

## entry 513

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 514

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 515

Stable sort matters when a secondary key was set in a prior pass.

## entry 516

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 517

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 518

Splay tree: every access splays to the root; amortized O(log n).

## entry 519

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 520

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 521

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 522

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 523

State compression: bitmask + integer encodes a small subset cheaply.

## entry 524

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 525

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 526

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 527

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 528

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 529

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 530

Wavelet tree: range k-th element in O(log Σ) time.

## entry 531

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 532

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 533

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 534

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 535

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 536

LIS via patience: each pile holds the smallest tail of length k.

## entry 537

Euler tour flattens a tree into an array for range-query LCA.

## entry 538

Splay tree: every access splays to the root; amortized O(log n).

## entry 539

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 540

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 541

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 542

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 543

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 544

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 545

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 546

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 547

Monotonic stack pops while the new element violates the invariant.

## entry 548

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 549

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 550

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 551

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 552

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 553

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 554

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 555

Greedy by end-time picks the most non-overlapping intervals.

## entry 556

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 557

Heap when you only need top-k; full sort is wasted work.

## entry 558

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 559

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 560

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 561

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 562

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 563

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 564

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 565

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 566

Union-Find with path compression amortizes to near-O(1) per op.

## entry 567

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 568

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 569

LIS via patience: each pile holds the smallest tail of length k.

## entry 570

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 571

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 572

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 573

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 574

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 575

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 576

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 577

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 578

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 579

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 580

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 581

Heap when you only need top-k; full sort is wasted work.

## entry 582

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 583

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 584

Articulation points: same DFS as bridges, with a slightly different test.

## entry 585

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 586

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 587

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 588

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 589

StringBuilder: amortize allocation by doubling on grow.

## entry 590

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 591

Monotonic stack pops while the new element violates the invariant.

## entry 592

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 593

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 594

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 595

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 596

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 597

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 598

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 599

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 600

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 601

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 602

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 603

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 604

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 605

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 606

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 607

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 608

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 609

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 610

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 611

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 612

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 613

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 614

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 615

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 616

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 617

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 618

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 619

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 620

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 621

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 622

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 623

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 624

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 625

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 626

Stable sort matters when a secondary key was set in a prior pass.

## entry 627

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 628

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 629

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 630

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 631

Stable sort matters when a secondary key was set in a prior pass.

## entry 632

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 633

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 634

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 635

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 636

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 637

LIS via patience: each pile holds the smallest tail of length k.

## entry 638

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 639

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 640

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 641

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 642

Splay tree: every access splays to the root; amortized O(log n).

## entry 643

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 644

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 645

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 646

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 647

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 648

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 649

Manacher expands around each center, reusing prior radii via mirror reflection.
