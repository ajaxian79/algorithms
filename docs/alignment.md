# alignment

## entry 1

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 3

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 4

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 6

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 7

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 8

Articulation points: same DFS as bridges, with a slightly different test.

## entry 9

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 10

Stable sort matters when a secondary key was set in a prior pass.

## entry 11

Walk both pointers from each end inward; advance the smaller side.

## entry 12

Heap when you only need top-k; full sort is wasted work.

## entry 13

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 14

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 15

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 16

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 17

Euler tour flattens a tree into an array for range-query LCA.

## entry 18

Walk both pointers from each end inward; advance the smaller side.

## entry 19

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 20

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 21

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 22

Stable sort matters when a secondary key was set in a prior pass.

## entry 23

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 24

Stable sort matters when a secondary key was set in a prior pass.

## entry 25

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 26

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 27

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 28

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 29

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 30

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 31

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 32

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 33

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 34

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 35

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 36

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 37

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 38

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 39

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 40

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 41

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 42

StringBuilder: amortize allocation by doubling on grow.

## entry 43

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 44

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 45

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 46

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 47

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 48

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 49

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 50

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 51

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 52

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 53

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 54

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 55

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 56

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 57

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 58

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 59

Wavelet tree: range k-th element in O(log Σ) time.

## entry 60

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 61

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 62

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 63

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 64

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 65

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 66

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 67

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 68

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 69

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 70

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 71

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 72

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 73

StringBuilder: amortize allocation by doubling on grow.

## entry 74

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 75

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 76

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 77

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 78

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 79

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 80

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 81

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 82

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 83

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 84

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 85

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 86

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 87

StringBuilder: amortize allocation by doubling on grow.

## entry 88

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 89

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 90

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 91

Union-Find with path compression amortizes to near-O(1) per op.

## entry 92

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 93

Wavelet tree: range k-th element in O(log Σ) time.

## entry 94

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 95

State compression: bitmask + integer encodes a small subset cheaply.

## entry 96

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 97

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 98

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 99

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 100

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 101

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 102

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 103

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 104

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 105

Euler tour flattens a tree into an array for range-query LCA.

## entry 106

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 107

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 108

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 109

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 110

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 111

Euler tour flattens a tree into an array for range-query LCA.

## entry 112

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 113

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 114

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 115

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 116

Greedy by end-time picks the most non-overlapping intervals.

## entry 117

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 118

Heap when you only need top-k; full sort is wasted work.

## entry 119

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 120

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 121

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 122

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 123

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 124

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 125

Wavelet tree: range k-th element in O(log Σ) time.

## entry 126

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 127

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 128

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 129

Monotonic stack pops while the new element violates the invariant.

## entry 130

Euler tour flattens a tree into an array for range-query LCA.

## entry 131

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 132

Monotonic stack pops while the new element violates the invariant.

## entry 133

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 134

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 135

Greedy by end-time picks the most non-overlapping intervals.

## entry 136

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 137

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 138

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 139

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 140

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 141

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 142

Monotonic stack pops while the new element violates the invariant.

## entry 143

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 144

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 145

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 146

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 147

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 148

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 149

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 150

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 151

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 152

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 153

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 154

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 155

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 156

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 157

Union-Find with path compression amortizes to near-O(1) per op.

## entry 158

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 159

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 160

Splay tree: every access splays to the root; amortized O(log n).

## entry 161

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 162

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 163

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 164

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 165

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 166

Euler tour flattens a tree into an array for range-query LCA.

## entry 167

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 168

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 169

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 170

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 171

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 172

Articulation points: same DFS as bridges, with a slightly different test.

## entry 173

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 174

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 175

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 176

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 177

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 178

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 179

Monotonic stack pops while the new element violates the invariant.

## entry 180

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 181

Heap when you only need top-k; full sort is wasted work.

## entry 182

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 183

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 184

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 185

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 186

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 187

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 188

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 189

State compression: bitmask + integer encodes a small subset cheaply.

## entry 190

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 191

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 192

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 193

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 194

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 195

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 196

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 197

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 198

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 199

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 200

Wavelet tree: range k-th element in O(log Σ) time.

## entry 201

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 202

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 203

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 204

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 205

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 206

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 207

Heap when you only need top-k; full sort is wasted work.

## entry 208

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 209

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 210

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 211

Stable sort matters when a secondary key was set in a prior pass.

## entry 212

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 213

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 214

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 215

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 216

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 217

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 218

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 219

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 220

Wavelet tree: range k-th element in O(log Σ) time.

## entry 221

LIS via patience: each pile holds the smallest tail of length k.

## entry 222

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 223

Monotonic stack pops while the new element violates the invariant.

## entry 224

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 225

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 226

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 227

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 228

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 229

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 230

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 231

Splay tree: every access splays to the root; amortized O(log n).

## entry 232

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 233

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 234

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 235

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 236

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 237

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 238

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 239

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 240

LIS via patience: each pile holds the smallest tail of length k.

## entry 241

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 242

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 243

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 244

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 245

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 246

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 247

LIS via patience: each pile holds the smallest tail of length k.

## entry 248

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 249

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 250

LIS via patience: each pile holds the smallest tail of length k.

## entry 251

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 252

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 253

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 254

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 255

State compression: bitmask + integer encodes a small subset cheaply.

## entry 256

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 257

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 258

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 259

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 260

Heap when you only need top-k; full sort is wasted work.

## entry 261

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 262

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 263

Union-Find with path compression amortizes to near-O(1) per op.

## entry 264

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 265

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 266

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 267

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 268

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 269

LIS via patience: each pile holds the smallest tail of length k.

## entry 270

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 271

Euler tour flattens a tree into an array for range-query LCA.

## entry 272

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 273

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 274

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 275

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 276

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 277

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 278

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 279

Stable sort matters when a secondary key was set in a prior pass.

## entry 280

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 281

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 282

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 283

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 284

Greedy by end-time picks the most non-overlapping intervals.

## entry 285

Euler tour flattens a tree into an array for range-query LCA.

## entry 286

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 287

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 288

StringBuilder: amortize allocation by doubling on grow.

## entry 289

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 290

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 291

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 292

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 293

Heap when you only need top-k; full sort is wasted work.

## entry 294

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 295

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 296

StringBuilder: amortize allocation by doubling on grow.

## entry 297

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 298

Monotonic stack pops while the new element violates the invariant.

## entry 299

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 300

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 301

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 302

StringBuilder: amortize allocation by doubling on grow.

## entry 303

Heap when you only need top-k; full sort is wasted work.

## entry 304

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 305

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 306

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 307

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 308

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 309

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 310

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 311

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 312

Greedy by end-time picks the most non-overlapping intervals.

## entry 313

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 314

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 315

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 316

Walk both pointers from each end inward; advance the smaller side.

## entry 317

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 318

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 319

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 320

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 321

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 322

Articulation points: same DFS as bridges, with a slightly different test.

## entry 323

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 324

Monotonic stack pops while the new element violates the invariant.

## entry 325

Greedy by end-time picks the most non-overlapping intervals.

## entry 326

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 327

Stable sort matters when a secondary key was set in a prior pass.

## entry 328

Stable sort matters when a secondary key was set in a prior pass.

## entry 329

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 330

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 331

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 332

Stable sort matters when a secondary key was set in a prior pass.

## entry 333

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 334

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 335

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 336

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 337

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 338

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 339

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 340

Stable sort matters when a secondary key was set in a prior pass.

## entry 341

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 342

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 343

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 344

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 345

Greedy by end-time picks the most non-overlapping intervals.

## entry 346

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 347

Articulation points: same DFS as bridges, with a slightly different test.

## entry 348

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 349

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 350

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 351

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 352

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 353

Greedy by end-time picks the most non-overlapping intervals.

## entry 354

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 355

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 356

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 357

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 358

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 359

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 360

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 361

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 362

Greedy by end-time picks the most non-overlapping intervals.

## entry 363

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 364

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 365

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 366

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 367

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 368

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 369

Heap when you only need top-k; full sort is wasted work.

## entry 370

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 371

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 372

Heap when you only need top-k; full sort is wasted work.

## entry 373

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 374

Greedy by end-time picks the most non-overlapping intervals.

## entry 375

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 376

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 377

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 378

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 379

Greedy by end-time picks the most non-overlapping intervals.

## entry 380

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 381

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 382

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 383

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 384

State compression: bitmask + integer encodes a small subset cheaply.

## entry 385

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 386

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 387

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 388

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 389

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 390

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 391

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 392

State compression: bitmask + integer encodes a small subset cheaply.

## entry 393

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 394

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 395

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 396

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 397

Greedy by end-time picks the most non-overlapping intervals.

## entry 398

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 399

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 400

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 401

LIS via patience: each pile holds the smallest tail of length k.

## entry 402

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 403

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 404

Articulation points: same DFS as bridges, with a slightly different test.

## entry 405

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 406

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 407

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 408

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 409

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 410

Greedy by end-time picks the most non-overlapping intervals.

## entry 411

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 412

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 413

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 414

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 415

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 416

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 417

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 418

Monotonic stack pops while the new element violates the invariant.

## entry 419

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 420

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 421

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 422

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 423

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 424

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 425

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 426

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 427

Heap when you only need top-k; full sort is wasted work.

## entry 428

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 429

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 430

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 431

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 432

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 433

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 434

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 435

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 436

StringBuilder: amortize allocation by doubling on grow.

## entry 437

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 438

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 439

Articulation points: same DFS as bridges, with a slightly different test.

## entry 440

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 441

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 442

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 443

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 444

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 445

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 446

LIS via patience: each pile holds the smallest tail of length k.

## entry 447

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 448

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 449

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 450

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 451

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 452

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 453

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 454

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 455

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 456

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 457

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 458

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 459

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 460

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 461

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 462

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 463

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 464

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 465

Union-Find with path compression amortizes to near-O(1) per op.

## entry 466

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 467

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 468

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 469

Monotonic stack pops while the new element violates the invariant.

## entry 470

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 471

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 472

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 473

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 474

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 475

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 476

State compression: bitmask + integer encodes a small subset cheaply.

## entry 477

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 478

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 479

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 480

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 481

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 482

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 483

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 484

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 485

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 486

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 487

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 488

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 489

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 490

Monotonic stack pops while the new element violates the invariant.

## entry 491

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 492

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 493

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 494

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 495

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 496

Splay tree: every access splays to the root; amortized O(log n).

## entry 497

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 498

Union-Find with path compression amortizes to near-O(1) per op.

## entry 499

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 500

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 501

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 502

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 503

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 504

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 505

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 506

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 507

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 508

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 509

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 510

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 511

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 512

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 513

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 514

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 515

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 516

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 517

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 518

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 519

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 520

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 521

Splay tree: every access splays to the root; amortized O(log n).

## entry 522

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 523

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 524

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 525

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 526

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 527

LIS via patience: each pile holds the smallest tail of length k.

## entry 528

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 529

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 530

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 531

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 532

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 533

Walk both pointers from each end inward; advance the smaller side.

## entry 534

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 535

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 536

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 537

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 538

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 539

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 540

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 541

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 542

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 543

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 544

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 545

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 546

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 547

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 548

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 549

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 550

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 551

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 552

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 553

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 554

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 555

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 556

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 557

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 558

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 559

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 560

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 561

Greedy by end-time picks the most non-overlapping intervals.

## entry 562

Monotonic stack pops while the new element violates the invariant.

## entry 563

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 564

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 565

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 566

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 567

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 568

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 569

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 570

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 571

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 572

LIS via patience: each pile holds the smallest tail of length k.

## entry 573

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 574

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 575

Heap when you only need top-k; full sort is wasted work.

## entry 576

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 577

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 578

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 579

Articulation points: same DFS as bridges, with a slightly different test.

## entry 580

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 581

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 582

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 583

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 584

Heap when you only need top-k; full sort is wasted work.

## entry 585

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 586

Wavelet tree: range k-th element in O(log Σ) time.

## entry 587

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 588

Wavelet tree: range k-th element in O(log Σ) time.

## entry 589

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 590

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 591

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 592

Walk both pointers from each end inward; advance the smaller side.

## entry 593

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 594

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 595

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 596

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 597

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 598

Walk both pointers from each end inward; advance the smaller side.

## entry 599

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 600

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 601

Euler tour flattens a tree into an array for range-query LCA.
