# splay

## entry 1

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 4

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 5

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 6

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 7

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 8

Stable sort matters when a secondary key was set in a prior pass.

## entry 9

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 10

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 11

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 12

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 13

Heap when you only need top-k; full sort is wasted work.

## entry 14

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 15

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 16

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 17

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 18

Union-Find with path compression amortizes to near-O(1) per op.

## entry 19

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 20

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 21

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 22

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 23

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 24

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 25

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 26

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 27

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 28

Splay tree: every access splays to the root; amortized O(log n).

## entry 29

Articulation points: same DFS as bridges, with a slightly different test.

## entry 30

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 31

Greedy by end-time picks the most non-overlapping intervals.

## entry 32

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 33

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 34

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 35

StringBuilder: amortize allocation by doubling on grow.

## entry 36

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 37

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 38

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 39

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 40

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 41

Union-Find with path compression amortizes to near-O(1) per op.

## entry 42

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 43

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 44

Splay tree: every access splays to the root; amortized O(log n).

## entry 45

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 46

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 47

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 48

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 49

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 50

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 51

LIS via patience: each pile holds the smallest tail of length k.

## entry 52

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 53

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 54

State compression: bitmask + integer encodes a small subset cheaply.

## entry 55

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 56

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 57

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 58

StringBuilder: amortize allocation by doubling on grow.

## entry 59

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 60

Union-Find with path compression amortizes to near-O(1) per op.

## entry 61

State compression: bitmask + integer encodes a small subset cheaply.

## entry 62

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 63

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 64

Euler tour flattens a tree into an array for range-query LCA.

## entry 65

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 66

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 67

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 68

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 69

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 70

Walk both pointers from each end inward; advance the smaller side.

## entry 71

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 72

Stable sort matters when a secondary key was set in a prior pass.

## entry 73

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 74

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 75

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 76

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 77

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 78

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 79

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 80

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 81

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 82

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 83

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 84

Monotonic stack pops while the new element violates the invariant.

## entry 85

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 86

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 87

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 88

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 89

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 90

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 91

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 92

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 93

State compression: bitmask + integer encodes a small subset cheaply.

## entry 94

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 95

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 96

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 97

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 98

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 99

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 100

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 101

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 102

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 103

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 104

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 105

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 106

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 107

Heap when you only need top-k; full sort is wasted work.

## entry 108

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 109

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 110

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 111

Union-Find with path compression amortizes to near-O(1) per op.

## entry 112

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 113

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 114

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 115

Greedy by end-time picks the most non-overlapping intervals.

## entry 116

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 117

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 118

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 119

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 120

Euler tour flattens a tree into an array for range-query LCA.

## entry 121

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 122

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 123

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 124

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 125

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 126

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 127

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 128

Greedy by end-time picks the most non-overlapping intervals.

## entry 129

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 130

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 131

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 132

Stable sort matters when a secondary key was set in a prior pass.

## entry 133

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 134

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 135

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 136

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 137

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 138

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 139

StringBuilder: amortize allocation by doubling on grow.

## entry 140

Union-Find with path compression amortizes to near-O(1) per op.

## entry 141

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 142

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 143

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 144

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 145

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 146

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 147

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 148

Articulation points: same DFS as bridges, with a slightly different test.

## entry 149

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 150

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 151

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 152

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 153

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 154

State compression: bitmask + integer encodes a small subset cheaply.

## entry 155

Euler tour flattens a tree into an array for range-query LCA.

## entry 156

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 157

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 158

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 159

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 160

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 161

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 162

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 163

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 164

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 165

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 166

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 167

LIS via patience: each pile holds the smallest tail of length k.

## entry 168

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 169

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 170

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 171

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 172

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 173

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 174

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 175

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 176

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 177

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 178

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 179

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 180

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 181

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 182

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 183

Heap when you only need top-k; full sort is wasted work.

## entry 184

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 185

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 186

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 187

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 188

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 189

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 190

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 191

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 192

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 193

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 194

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 195

Splay tree: every access splays to the root; amortized O(log n).

## entry 196

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 197

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 198

Greedy by end-time picks the most non-overlapping intervals.

## entry 199

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 200

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 201

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 202

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 203

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 204

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 205

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 206

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 207

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 208

Articulation points: same DFS as bridges, with a slightly different test.

## entry 209

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 210

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 211

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 212

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 213

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 214

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 215

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 216

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 217

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 218

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 219

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 220

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 221

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 222

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 223

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 224

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 225

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 226

Articulation points: same DFS as bridges, with a slightly different test.

## entry 227

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 228

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 229

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 230

Euler tour flattens a tree into an array for range-query LCA.

## entry 231

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 232

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 233

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 234

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 235

Monotonic stack pops while the new element violates the invariant.

## entry 236

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 237

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 238

Walk both pointers from each end inward; advance the smaller side.

## entry 239

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 240

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 241

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 242

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 243

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 244

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 245

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 246

Union-Find with path compression amortizes to near-O(1) per op.

## entry 247

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 248

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 249

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 250

State compression: bitmask + integer encodes a small subset cheaply.

## entry 251

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 252

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 253

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 254

Walk both pointers from each end inward; advance the smaller side.

## entry 255

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 256

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 257

Articulation points: same DFS as bridges, with a slightly different test.

## entry 258

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 259

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 260

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 261

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 262

Stable sort matters when a secondary key was set in a prior pass.

## entry 263

Stable sort matters when a secondary key was set in a prior pass.

## entry 264

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 265

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 266

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 267

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 268

Union-Find with path compression amortizes to near-O(1) per op.

## entry 269

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 270

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 271

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 272

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 273

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 274

StringBuilder: amortize allocation by doubling on grow.

## entry 275

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 276

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 277

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 278

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 279

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 280

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 281

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 282

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 283

Heap when you only need top-k; full sort is wasted work.

## entry 284

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 285

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 286

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 287

LIS via patience: each pile holds the smallest tail of length k.

## entry 288

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 289

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 290

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 291

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 292

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 293

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 294

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 295

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 296

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 297

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 298

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 299

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 300

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 301

Union-Find with path compression amortizes to near-O(1) per op.

## entry 302

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 303

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 304

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 305

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 306

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 307

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 308

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 309

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 310

Wavelet tree: range k-th element in O(log Σ) time.

## entry 311

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 312

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 313

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 314

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 315

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 316

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 317

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 318

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 319

Stable sort matters when a secondary key was set in a prior pass.

## entry 320

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 321

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 322

Monotonic stack pops while the new element violates the invariant.

## entry 323

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 324

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 325

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 326

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 327

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 328

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 329

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 330

Splay tree: every access splays to the root; amortized O(log n).

## entry 331

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 332

Greedy by end-time picks the most non-overlapping intervals.

## entry 333

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 334

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 335

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 336

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 337

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 338

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 339

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 340

Articulation points: same DFS as bridges, with a slightly different test.

## entry 341

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 342

Union-Find with path compression amortizes to near-O(1) per op.

## entry 343

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 344

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 345

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 346

Stable sort matters when a secondary key was set in a prior pass.

## entry 347

LIS via patience: each pile holds the smallest tail of length k.

## entry 348

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 349

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 350

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 351

Stable sort matters when a secondary key was set in a prior pass.

## entry 352

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 353

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 354

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 355

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 356

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 357

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 358

Articulation points: same DFS as bridges, with a slightly different test.

## entry 359

Monotonic stack pops while the new element violates the invariant.

## entry 360

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 361

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 362

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 363

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 364

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 365

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 366

Union-Find with path compression amortizes to near-O(1) per op.

## entry 367

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 368

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 369

Heap when you only need top-k; full sort is wasted work.

## entry 370

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 371

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 372

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 373

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 374

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 375

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 376

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 377

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 378

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 379

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 380

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 381

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 382

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 383

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 384

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 385

Walk both pointers from each end inward; advance the smaller side.

## entry 386

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 387

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 388

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 389

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 390

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 391

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 392

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 393

Greedy by end-time picks the most non-overlapping intervals.

## entry 394

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 395

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 396

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 397

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 398

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 399

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 400

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 401

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 402

Walk both pointers from each end inward; advance the smaller side.

## entry 403

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 404

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 405

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 406

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 407

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 408

Articulation points: same DFS as bridges, with a slightly different test.

## entry 409

Articulation points: same DFS as bridges, with a slightly different test.

## entry 410

State compression: bitmask + integer encodes a small subset cheaply.

## entry 411

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 412

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 413

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 414

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 415

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 416

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 417

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 418

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 419

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 420

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 421

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 422

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 423

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 424

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 425

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 426

LIS via patience: each pile holds the smallest tail of length k.

## entry 427

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 428

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 429

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 430

Heap when you only need top-k; full sort is wasted work.

## entry 431

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 432

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 433

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 434

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 435

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 436

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 437

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 438

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 439

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 440

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 441

Stable sort matters when a secondary key was set in a prior pass.

## entry 442

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 443

StringBuilder: amortize allocation by doubling on grow.

## entry 444

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 445

Heap when you only need top-k; full sort is wasted work.

## entry 446

Wavelet tree: range k-th element in O(log Σ) time.

## entry 447

Articulation points: same DFS as bridges, with a slightly different test.

## entry 448

LIS via patience: each pile holds the smallest tail of length k.

## entry 449

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 450

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 451

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 452

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 453

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 454

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 455

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 456

Monotonic stack pops while the new element violates the invariant.

## entry 457

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 458

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 459

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 460

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 461

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 462

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 463

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 464

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 465

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 466

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 467

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 468

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 469

Union-Find with path compression amortizes to near-O(1) per op.

## entry 470

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 471

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 472

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 473

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 474

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 475

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 476

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 477

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 478

Union-Find with path compression amortizes to near-O(1) per op.

## entry 479

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 480

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 481

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 482

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 483

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 484

Wavelet tree: range k-th element in O(log Σ) time.

## entry 485

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 486

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 487

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 488

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 489

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 490

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 491

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 492

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 493

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 494

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 495

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 496

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 497

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 498

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 499

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 500

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 501

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 502

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 503

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 504

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 505

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 506

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 507

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 508

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 509

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 510

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 511

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 512

Splay tree: every access splays to the root; amortized O(log n).

## entry 513

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 514

Greedy by end-time picks the most non-overlapping intervals.

## entry 515

StringBuilder: amortize allocation by doubling on grow.

## entry 516

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 517

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 518

Splay tree: every access splays to the root; amortized O(log n).

## entry 519

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 520

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 521

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 522

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 523

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 524

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 525

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 526

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 527

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 528

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 529

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 530

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 531

Heavy-light decomposition: each path crosses O(log n) heavy chains.
