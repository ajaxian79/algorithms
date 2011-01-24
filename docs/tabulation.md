# tabulation

## entry 1

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 3

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 4

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 5

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 6

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 7

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 8

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 9

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 10

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 11

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 12

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 13

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 14

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 15

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 16

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 17

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 18

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 19

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 20

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 21

State compression: bitmask + integer encodes a small subset cheaply.

## entry 22

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 23

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 24

State compression: bitmask + integer encodes a small subset cheaply.

## entry 25

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 26

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 27

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 28

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 29

Articulation points: same DFS as bridges, with a slightly different test.

## entry 30

StringBuilder: amortize allocation by doubling on grow.

## entry 31

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 32

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 33

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 34

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 35

Heap when you only need top-k; full sort is wasted work.

## entry 36

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 37

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 38

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 39

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 40

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 41

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 42

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 43

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 44

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 45

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 46

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 47

Stable sort matters when a secondary key was set in a prior pass.

## entry 48

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 49

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 50

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 51

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 52

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 53

LIS via patience: each pile holds the smallest tail of length k.

## entry 54

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 55

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 56

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 57

Monotonic stack pops while the new element violates the invariant.

## entry 58

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 59

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 60

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 61

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 62

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 63

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 64

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 65

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 66

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 67

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 68

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 69

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 70

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 71

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 72

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 73

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 74

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 75

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 76

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 77

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 78

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 79

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 80

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 81

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 82

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 83

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 84

StringBuilder: amortize allocation by doubling on grow.

## entry 85

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 86

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 87

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 88

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 89

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 90

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 91

Articulation points: same DFS as bridges, with a slightly different test.

## entry 92

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 93

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 94

Greedy by end-time picks the most non-overlapping intervals.

## entry 95

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 96

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 97

Articulation points: same DFS as bridges, with a slightly different test.

## entry 98

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 99

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 100

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 101

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 102

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 103

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 104

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 105

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 106

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 107

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 108

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 109

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 110

Articulation points: same DFS as bridges, with a slightly different test.

## entry 111

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 112

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 113

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 114

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 115

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 116

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 117

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 118

Heap when you only need top-k; full sort is wasted work.

## entry 119

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 120

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 121

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 122

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 123

Monotonic stack pops while the new element violates the invariant.

## entry 124

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 125

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 126

Union-Find with path compression amortizes to near-O(1) per op.

## entry 127

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 128

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 129

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 130

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 131

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 132

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 133

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 134

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 135

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 136

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 137

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 138

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 139

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 140

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 141

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 142

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 143

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 144

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 145

Stable sort matters when a secondary key was set in a prior pass.

## entry 146

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 147

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 148

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 149

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 150

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 151

Stable sort matters when a secondary key was set in a prior pass.

## entry 152

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 153

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 154

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 155

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 156

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 157

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 158

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 159

Splay tree: every access splays to the root; amortized O(log n).

## entry 160

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 161

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 162

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 163

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 164

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 165

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 166

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 167

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 168

Euler tour flattens a tree into an array for range-query LCA.

## entry 169

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 170

LIS via patience: each pile holds the smallest tail of length k.

## entry 171

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 172

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 173

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 174

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 175

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 176

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 177

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 178

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 179

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 180

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 181

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 182

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 183

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 184

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 185

Heap when you only need top-k; full sort is wasted work.

## entry 186

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 187

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 188

Walk both pointers from each end inward; advance the smaller side.

## entry 189

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 190

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 191

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 192

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 193

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 194

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 195

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 196

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 197

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 198

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 199

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 200

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 201

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 202

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 203

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 204

LIS via patience: each pile holds the smallest tail of length k.

## entry 205

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 206

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 207

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 208

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 209

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 210

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 211

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 212

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 213

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 214

StringBuilder: amortize allocation by doubling on grow.

## entry 215

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 216

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 217

LIS via patience: each pile holds the smallest tail of length k.

## entry 218

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 219

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 220

State compression: bitmask + integer encodes a small subset cheaply.

## entry 221

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 222

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 223

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 224

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 225

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 226

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 227

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 228

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 229

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 230

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 231

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 232

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 233

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 234

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 235

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 236

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 237

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 238

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 239

StringBuilder: amortize allocation by doubling on grow.

## entry 240

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 241

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 242

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 243

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 244

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 245

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 246

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 247

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 248

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 249

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 250

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 251

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 252

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 253

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 254

Heap when you only need top-k; full sort is wasted work.

## entry 255

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 256

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 257

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 258

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 259

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 260

Splay tree: every access splays to the root; amortized O(log n).

## entry 261

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 262

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 263

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 264

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 265

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 266

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 267

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 268

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 269

Stable sort matters when a secondary key was set in a prior pass.

## entry 270

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 271

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 272

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 273

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 274

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 275

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 276

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 277

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 278

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 279

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 280

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 281

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 282

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 283

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 284

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 285

Walk both pointers from each end inward; advance the smaller side.

## entry 286

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 287

Heap when you only need top-k; full sort is wasted work.

## entry 288

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 289

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 290

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 291

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 292

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 293

Euler tour flattens a tree into an array for range-query LCA.

## entry 294

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 295

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 296

State compression: bitmask + integer encodes a small subset cheaply.

## entry 297

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 298

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 299

Monotonic stack pops while the new element violates the invariant.

## entry 300

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 301

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 302

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 303

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 304

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 305

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 306

Articulation points: same DFS as bridges, with a slightly different test.

## entry 307

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 308

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 309

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 310

Union-Find with path compression amortizes to near-O(1) per op.

## entry 311

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 312

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 313

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 314

Splay tree: every access splays to the root; amortized O(log n).

## entry 315

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 316

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 317

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 318

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 319

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 320

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 321

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 322

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 323

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 324

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 325

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 326

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 327

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 328

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 329

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 330

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 331

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 332

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 333

Articulation points: same DFS as bridges, with a slightly different test.

## entry 334

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 335

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 336

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 337

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 338

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 339

State compression: bitmask + integer encodes a small subset cheaply.

## entry 340

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 341

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 342

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 343

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 344

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 345

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 346

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 347

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 348

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 349

LIS via patience: each pile holds the smallest tail of length k.

## entry 350

State compression: bitmask + integer encodes a small subset cheaply.

## entry 351

StringBuilder: amortize allocation by doubling on grow.

## entry 352

Monotonic stack pops while the new element violates the invariant.

## entry 353

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 354

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 355

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 356

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 357

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 358

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 359

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 360

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 361

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 362

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 363

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 364

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 365

StringBuilder: amortize allocation by doubling on grow.

## entry 366

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 367

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 368

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 369

Walk both pointers from each end inward; advance the smaller side.

## entry 370

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 371

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 372

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 373

Wavelet tree: range k-th element in O(log Σ) time.

## entry 374

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 375

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 376

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 377

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 378

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 379

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 380

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 381

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 382

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 383

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 384

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 385

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 386

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 387

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 388

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 389

Union-Find with path compression amortizes to near-O(1) per op.

## entry 390

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 391

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 392

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 393

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 394

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 395

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 396

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 397

Walk both pointers from each end inward; advance the smaller side.

## entry 398

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 399

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 400

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 401

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 402

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 403

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 404

Euler tour flattens a tree into an array for range-query LCA.

## entry 405

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 406

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 407

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 408

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 409

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 410

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 411

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 412

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 413

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 414

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 415

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 416

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 417

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 418

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 419

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 420

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 421

Walk both pointers from each end inward; advance the smaller side.

## entry 422

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 423

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 424

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 425

Stable sort matters when a secondary key was set in a prior pass.

## entry 426

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 427

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 428

Splay tree: every access splays to the root; amortized O(log n).

## entry 429

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 430

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 431

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 432

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 433

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 434

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 435

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 436

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 437

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 438

Walk both pointers from each end inward; advance the smaller side.

## entry 439

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 440

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 441

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 442

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 443

StringBuilder: amortize allocation by doubling on grow.

## entry 444

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 445

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 446

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 447

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 448

Wavelet tree: range k-th element in O(log Σ) time.

## entry 449

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 450

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 451

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 452

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 453

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 454

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 455

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 456

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 457

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 458

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 459

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 460

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 461

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 462

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 463

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 464

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 465

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 466

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 467

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 468

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 469

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 470

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 471

State compression: bitmask + integer encodes a small subset cheaply.

## entry 472

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 473

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 474

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 475

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 476

LIS via patience: each pile holds the smallest tail of length k.

## entry 477

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 478

Heap when you only need top-k; full sort is wasted work.

## entry 479

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 480

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 481

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 482

Walk both pointers from each end inward; advance the smaller side.

## entry 483

LIS via patience: each pile holds the smallest tail of length k.

## entry 484

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 485

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 486

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 487

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 488

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 489

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 490

Greedy by end-time picks the most non-overlapping intervals.

## entry 491

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 492

Monotonic stack pops while the new element violates the invariant.

## entry 493

Euler tour flattens a tree into an array for range-query LCA.

## entry 494

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 495

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 496

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 497

Wavelet tree: range k-th element in O(log Σ) time.

## entry 498

Monotonic stack pops while the new element violates the invariant.

## entry 499

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 500

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 501

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 502

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 503

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 504

Walk both pointers from each end inward; advance the smaller side.

## entry 505

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 506

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 507

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 508

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 509

State compression: bitmask + integer encodes a small subset cheaply.

## entry 510

State compression: bitmask + integer encodes a small subset cheaply.

## entry 511

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 512

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 513

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 514

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 515

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 516

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 517

State compression: bitmask + integer encodes a small subset cheaply.

## entry 518

Greedy by end-time picks the most non-overlapping intervals.

## entry 519

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 520

Euler tour flattens a tree into an array for range-query LCA.

## entry 521

StringBuilder: amortize allocation by doubling on grow.

## entry 522

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 523

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 524

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 525

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 526

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 527

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 528

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 529

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 530

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 531

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 532

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 533

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 534

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 535

Stable sort matters when a secondary key was set in a prior pass.

## entry 536

Union-Find with path compression amortizes to near-O(1) per op.

## entry 537

Walk both pointers from each end inward; advance the smaller side.

## entry 538

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 539

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 540

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 541

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 542

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 543

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 544

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 545

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 546

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 547

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 548

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 549

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 550

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 551

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 552

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 553

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 554

Heap when you only need top-k; full sort is wasted work.

## entry 555

Monotonic stack pops while the new element violates the invariant.

## entry 556

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 557

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 558

LIS via patience: each pile holds the smallest tail of length k.

## entry 559

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 560

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 561

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 562

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 563

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 564

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 565

State compression: bitmask + integer encodes a small subset cheaply.

## entry 566

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 567

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 568

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 569

Greedy by end-time picks the most non-overlapping intervals.

## entry 570

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 571

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 572

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 573

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 574

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 575

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 576

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 577

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 578

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 579

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 580

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 581

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 582

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 583

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 584

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 585

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 586

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 587

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 588

Splay tree: every access splays to the root; amortized O(log n).

## entry 589

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 590

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 591

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 592

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 593

Greedy by end-time picks the most non-overlapping intervals.

## entry 594

Union-Find with path compression amortizes to near-O(1) per op.

## entry 595

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 596

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 597

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 598

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 599

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 600

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 601

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 602

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 603

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 604

StringBuilder: amortize allocation by doubling on grow.

## entry 605

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 606

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 607

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 608

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 609

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 610

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 611

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 612

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 613

Splay tree: every access splays to the root; amortized O(log n).

## entry 614

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 615

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 616

Greedy by end-time picks the most non-overlapping intervals.

## entry 617

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 618

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 619

Heap when you only need top-k; full sort is wasted work.

## entry 620

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 621

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 622

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 623

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 624

Articulation points: same DFS as bridges, with a slightly different test.

## entry 625

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 626

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 627

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 628

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 629

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 630

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 631

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 632

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 633

Greedy by end-time picks the most non-overlapping intervals.

## entry 634

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 635

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 636

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 637

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 638

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 639

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 640

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 641

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 642

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 643

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 644

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 645

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 646

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 647

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 648

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 649

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 650

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 651

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 652

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 653

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 654

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 655

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 656

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 657

StringBuilder: amortize allocation by doubling on grow.

## entry 658

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 659

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 660

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 661

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 662

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 663

Walk both pointers from each end inward; advance the smaller side.

## entry 664

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 665

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 666

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 667

Wavelet tree: range k-th element in O(log Σ) time.

## entry 668

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 669

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 670

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 671

Merge intervals: sort by start; extend the running interval while overlapping.
