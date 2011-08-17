# lfu-cache

## entry 1

Stable sort matters when a secondary key was set in a prior pass.

## entry 2

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 6

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 7

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 8

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 9

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 10

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 11

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 12

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 13

Splay tree: every access splays to the root; amortized O(log n).

## entry 14

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 15

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 16

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 17

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 18

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 19

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 20

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 21

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 22

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 23

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 24

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 25

State compression: bitmask + integer encodes a small subset cheaply.

## entry 26

Monotonic stack pops while the new element violates the invariant.

## entry 27

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 28

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 29

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 30

Walk both pointers from each end inward; advance the smaller side.

## entry 31

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 32

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 33

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 34

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 35

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 36

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 37

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 38

Wavelet tree: range k-th element in O(log Σ) time.

## entry 39

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 40

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 41

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 42

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 43

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 44

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 45

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 46

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 47

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 48

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 49

State compression: bitmask + integer encodes a small subset cheaply.

## entry 50

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 51

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 52

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 53

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 54

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 55

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 56

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 57

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 58

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 59

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 60

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 61

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 62

Greedy by end-time picks the most non-overlapping intervals.

## entry 63

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 64

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 65

Greedy by end-time picks the most non-overlapping intervals.

## entry 66

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 67

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 68

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 69

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 70

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 71

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 72

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 73

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 74

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 75

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 76

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 77

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 78

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 79

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 80

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 81

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 82

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 83

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 84

Union-Find with path compression amortizes to near-O(1) per op.

## entry 85

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 86

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 87

Monotonic stack pops while the new element violates the invariant.

## entry 88

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 89

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 90

StringBuilder: amortize allocation by doubling on grow.

## entry 91

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 92

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 93

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 94

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 95

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 96

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 97

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 98

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 99

Splay tree: every access splays to the root; amortized O(log n).

## entry 100

Monotonic stack pops while the new element violates the invariant.

## entry 101

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 102

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 103

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 104

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 105

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 106

StringBuilder: amortize allocation by doubling on grow.

## entry 107

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 108

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 109

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 110

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 111

Monotonic stack pops while the new element violates the invariant.

## entry 112

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 113

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 114

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 115

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 116

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 117

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 118

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 119

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 120

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 121

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 122

Stable sort matters when a secondary key was set in a prior pass.

## entry 123

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 124

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 125

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 126

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 127

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 128

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 129

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 130

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 131

LIS via patience: each pile holds the smallest tail of length k.

## entry 132

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 133

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 134

LIS via patience: each pile holds the smallest tail of length k.

## entry 135

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 136

Splay tree: every access splays to the root; amortized O(log n).

## entry 137

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 138

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 139

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 140

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 141

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 142

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 143

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 144

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 145

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 146

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 147

LIS via patience: each pile holds the smallest tail of length k.

## entry 148

Splay tree: every access splays to the root; amortized O(log n).

## entry 149

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 150

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 151

StringBuilder: amortize allocation by doubling on grow.

## entry 152

Heap when you only need top-k; full sort is wasted work.

## entry 153

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 154

Stable sort matters when a secondary key was set in a prior pass.

## entry 155

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 156

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 157

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 158

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 159

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 160

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 161

Wavelet tree: range k-th element in O(log Σ) time.

## entry 162

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 163

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 164

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 165

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 166

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 167

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 168

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 169

Wavelet tree: range k-th element in O(log Σ) time.

## entry 170

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 171

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 172

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 173

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 174

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 175

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 176

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 177

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 178

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 179

Articulation points: same DFS as bridges, with a slightly different test.

## entry 180

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 181

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 182

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 183

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 184

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 185

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 186

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 187

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 188

Wavelet tree: range k-th element in O(log Σ) time.

## entry 189

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 190

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 191

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 192

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 193

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 194

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 195

Wavelet tree: range k-th element in O(log Σ) time.

## entry 196

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 197

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 198

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 199

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 200

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 201

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 202

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 203

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 204

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 205

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 206

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 207

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 208

Wavelet tree: range k-th element in O(log Σ) time.

## entry 209

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 210

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 211

Walk both pointers from each end inward; advance the smaller side.

## entry 212

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 213

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 214

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 215

Greedy by end-time picks the most non-overlapping intervals.

## entry 216

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 217

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 218

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 219

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 220

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 221

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 222

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 223

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 224

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 225

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 226

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 227

Union-Find with path compression amortizes to near-O(1) per op.

## entry 228

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 229

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 230

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 231

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 232

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 233

Stable sort matters when a secondary key was set in a prior pass.

## entry 234

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 235

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 236

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 237

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 238

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 239

Stable sort matters when a secondary key was set in a prior pass.

## entry 240

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 241

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 242

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 243

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 244

Greedy by end-time picks the most non-overlapping intervals.

## entry 245

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 246

Walk both pointers from each end inward; advance the smaller side.

## entry 247

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 248

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 249

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 250

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 251

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 252

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 253

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 254

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 255

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 256

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 257

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 258

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 259

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 260

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 261

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 262

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 263

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 264

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 265

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 266

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 267

Heap when you only need top-k; full sort is wasted work.

## entry 268

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 269

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 270

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 271

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 272

Stable sort matters when a secondary key was set in a prior pass.

## entry 273

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 274

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 275

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 276

Greedy by end-time picks the most non-overlapping intervals.

## entry 277

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 278

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 279

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 280

Greedy by end-time picks the most non-overlapping intervals.

## entry 281

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 282

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 283

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 284

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 285

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 286

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 287

StringBuilder: amortize allocation by doubling on grow.

## entry 288

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 289

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 290

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 291

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 292

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 293

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 294

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 295

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 296

StringBuilder: amortize allocation by doubling on grow.

## entry 297

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 298

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 299

Monotonic stack pops while the new element violates the invariant.

## entry 300

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 301

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 302

State compression: bitmask + integer encodes a small subset cheaply.

## entry 303

Greedy by end-time picks the most non-overlapping intervals.

## entry 304

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 305

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 306

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 307

Splay tree: every access splays to the root; amortized O(log n).

## entry 308

LIS via patience: each pile holds the smallest tail of length k.

## entry 309

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 310

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 311

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 312

Stable sort matters when a secondary key was set in a prior pass.

## entry 313

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 314

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 315

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 316

Articulation points: same DFS as bridges, with a slightly different test.

## entry 317

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 318

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 319

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 320

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 321

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 322

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 323

Wavelet tree: range k-th element in O(log Σ) time.

## entry 324

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 325

Articulation points: same DFS as bridges, with a slightly different test.

## entry 326

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 327

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 328

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 329

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 330

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 331

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 332

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 333

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 334

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 335

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 336

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 337

Euler tour flattens a tree into an array for range-query LCA.

## entry 338

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 339

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 340

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 341

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 342

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 343

LIS via patience: each pile holds the smallest tail of length k.

## entry 344

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 345

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 346

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 347

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 348

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 349

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 350

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 351

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 352

Walk both pointers from each end inward; advance the smaller side.

## entry 353

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 354

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 355

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 356

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 357

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 358

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 359

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 360

Articulation points: same DFS as bridges, with a slightly different test.

## entry 361

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 362

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 363

State compression: bitmask + integer encodes a small subset cheaply.

## entry 364

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 365

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 366

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 367

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 368

Monotonic stack pops while the new element violates the invariant.

## entry 369

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 370

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 371

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 372

Monotonic stack pops while the new element violates the invariant.

## entry 373

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 374

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 375

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 376

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 377

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 378

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 379

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 380

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 381

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 382

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 383

State compression: bitmask + integer encodes a small subset cheaply.

## entry 384

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 385

Wavelet tree: range k-th element in O(log Σ) time.

## entry 386

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 387

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 388

LIS via patience: each pile holds the smallest tail of length k.

## entry 389

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 390

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 391

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 392

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 393

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 394

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 395

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 396

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 397

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 398

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 399

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 400

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 401

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 402

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 403

State compression: bitmask + integer encodes a small subset cheaply.

## entry 404

Heap when you only need top-k; full sort is wasted work.

## entry 405

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 406

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 407

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 408

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 409

Euler tour flattens a tree into an array for range-query LCA.

## entry 410

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 411

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 412

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 413

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 414

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 415

Wavelet tree: range k-th element in O(log Σ) time.

## entry 416

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 417

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 418

Heap when you only need top-k; full sort is wasted work.

## entry 419

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 420

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 421

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 422

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 423

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 424

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 425

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 426

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 427

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 428

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 429

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 430

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 431

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 432

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 433

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 434

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 435

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 436

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 437

LIS via patience: each pile holds the smallest tail of length k.

## entry 438

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 439

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 440

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 441

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 442

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 443

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 444

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 445

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 446

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 447

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 448

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 449

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 450

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 451

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 452

Greedy by end-time picks the most non-overlapping intervals.

## entry 453

Stable sort matters when a secondary key was set in a prior pass.

## entry 454

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 455

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 456

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 457

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 458

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 459

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 460

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 461

Splay tree: every access splays to the root; amortized O(log n).

## entry 462

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 463

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 464

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 465

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 466

Walk both pointers from each end inward; advance the smaller side.

## entry 467

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 468

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 469

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 470

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 471

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 472

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 473

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 474

StringBuilder: amortize allocation by doubling on grow.

## entry 475

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 476

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 477

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 478

LIS via patience: each pile holds the smallest tail of length k.

## entry 479

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 480

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 481

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 482

Splay tree: every access splays to the root; amortized O(log n).

## entry 483

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 484

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 485

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 486

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 487

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 488

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 489

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 490

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 491

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 492

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 493

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 494

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 495

Monotonic stack pops while the new element violates the invariant.

## entry 496

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 497

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 498

Wavelet tree: range k-th element in O(log Σ) time.

## entry 499

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 500

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 501

Wavelet tree: range k-th element in O(log Σ) time.

## entry 502

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 503

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 504

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 505

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 506

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 507

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 508

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 509

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 510

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 511

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 512

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 513

Greedy by end-time picks the most non-overlapping intervals.

## entry 514

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 515

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 516

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 517

Union-Find with path compression amortizes to near-O(1) per op.

## entry 518

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 519

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 520

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 521

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 522

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 523

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 524

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 525

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 526

Heap when you only need top-k; full sort is wasted work.

## entry 527

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 528

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 529

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 530

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 531

Euler tour flattens a tree into an array for range-query LCA.

## entry 532

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 533

Heap when you only need top-k; full sort is wasted work.

## entry 534

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 535

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 536

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 537

State compression: bitmask + integer encodes a small subset cheaply.

## entry 538

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 539

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 540

Euler tour flattens a tree into an array for range-query LCA.

## entry 541

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 542

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 543

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 544

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 545

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 546

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 547

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 548

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 549

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 550

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 551

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 552

Greedy by end-time picks the most non-overlapping intervals.

## entry 553

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 554

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 555

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 556

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 557

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 558

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 559

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 560

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 561

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 562

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 563

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 564

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 565

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 566

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 567

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 568

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 569

Greedy by end-time picks the most non-overlapping intervals.

## entry 570

Wavelet tree: range k-th element in O(log Σ) time.

## entry 571

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 572

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 573

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 574

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 575

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 576

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 577

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 578

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 579

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 580

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 581

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 582

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 583

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 584

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 585

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 586

StringBuilder: amortize allocation by doubling on grow.

## entry 587

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 588

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 589

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 590

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 591

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 592

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 593

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 594

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 595

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 596

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 597

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 598

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 599

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 600

Union-Find with path compression amortizes to near-O(1) per op.

## entry 601

Euler tour flattens a tree into an array for range-query LCA.

## entry 602

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 603

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 604

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 605

Heap when you only need top-k; full sort is wasted work.

## entry 606

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 607

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 608

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 609

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 610

Union-Find with path compression amortizes to near-O(1) per op.

## entry 611

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 612

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 613

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 614

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 615

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 616

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 617

Treap: BST + heap on random priorities; expected O(log n) per op.
