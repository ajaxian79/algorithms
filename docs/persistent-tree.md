# persistent-tree

## entry 1

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 2

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 3

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4

Wavelet tree: range k-th element in O(log Σ) time.

## entry 5

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 6

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 7

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 8

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 9

StringBuilder: amortize allocation by doubling on grow.

## entry 10

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 11

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 12

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 13

Walk both pointers from each end inward; advance the smaller side.

## entry 14

LIS via patience: each pile holds the smallest tail of length k.

## entry 15

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 16

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 17

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 18

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 19

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 20

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 21

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 22

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 23

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 24

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 25

Heap when you only need top-k; full sort is wasted work.

## entry 26

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 27

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 28

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 29

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 30

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 31

Stable sort matters when a secondary key was set in a prior pass.

## entry 32

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 33

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 34

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 35

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 36

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 37

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 38

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 39

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 40

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 41

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 42

Articulation points: same DFS as bridges, with a slightly different test.

## entry 43

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 44

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 45

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 46

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 47

LIS via patience: each pile holds the smallest tail of length k.

## entry 48

Greedy by end-time picks the most non-overlapping intervals.

## entry 49

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 50

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 51

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 52

Heap when you only need top-k; full sort is wasted work.

## entry 53

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 54

Splay tree: every access splays to the root; amortized O(log n).

## entry 55

StringBuilder: amortize allocation by doubling on grow.

## entry 56

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 57

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 58

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 59

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 60

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 61

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 62

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 63

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 64

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 65

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 66

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 67

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 68

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 69

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 70

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 71

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 72

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 73

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 74

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 75

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 76

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 77

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 78

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 79

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 80

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 81

Splay tree: every access splays to the root; amortized O(log n).

## entry 82

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 83

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 84

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 85

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 86

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 87

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 88

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 89

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 90

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 91

Heap when you only need top-k; full sort is wasted work.

## entry 92

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 93

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 94

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 95

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 96

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 97

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 98

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 99

Monotonic stack pops while the new element violates the invariant.

## entry 100

LIS via patience: each pile holds the smallest tail of length k.

## entry 101

State compression: bitmask + integer encodes a small subset cheaply.

## entry 102

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 103

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 104

Euler tour flattens a tree into an array for range-query LCA.

## entry 105

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 106

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 107

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 108

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 109

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 110

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 111

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 112

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 113

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 114

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 115

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 116

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 117

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 118

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 119

Articulation points: same DFS as bridges, with a slightly different test.

## entry 120

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 121

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 122

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 123

StringBuilder: amortize allocation by doubling on grow.

## entry 124

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 125

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 126

Monotonic stack pops while the new element violates the invariant.

## entry 127

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 128

Wavelet tree: range k-th element in O(log Σ) time.

## entry 129

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 130

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 131

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 132

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 133

StringBuilder: amortize allocation by doubling on grow.

## entry 134

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 135

Articulation points: same DFS as bridges, with a slightly different test.

## entry 136

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 137

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 138

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 139

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 140

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 141

Monotonic stack pops while the new element violates the invariant.

## entry 142

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 143

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 144

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 145

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 146

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 147

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 148

Articulation points: same DFS as bridges, with a slightly different test.

## entry 149

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 150

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 151

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 152

Articulation points: same DFS as bridges, with a slightly different test.

## entry 153

Union-Find with path compression amortizes to near-O(1) per op.

## entry 154

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 155

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 156

Euler tour flattens a tree into an array for range-query LCA.

## entry 157

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 158

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 159

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 160

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 161

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 162

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 163

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 164

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 165

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 166

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 167

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 168

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 169

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 170

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 171

Stable sort matters when a secondary key was set in a prior pass.

## entry 172

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 173

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 174

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 175

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 176

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 177

Euler tour flattens a tree into an array for range-query LCA.

## entry 178

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 179

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 180

State compression: bitmask + integer encodes a small subset cheaply.

## entry 181

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 182

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 183

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 184

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 185

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 186

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 187

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 188

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 189

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 190

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 191

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 192

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 193

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 194

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 195

Stable sort matters when a secondary key was set in a prior pass.

## entry 196

Greedy by end-time picks the most non-overlapping intervals.

## entry 197

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 198

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 199

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 200

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 201

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 202

Splay tree: every access splays to the root; amortized O(log n).

## entry 203

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 204

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 205

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 206

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 207

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 208

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 209

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 210

Walk both pointers from each end inward; advance the smaller side.

## entry 211

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 212

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 213

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 214

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 215

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 216

Stable sort matters when a secondary key was set in a prior pass.

## entry 217

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 218

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 219

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 220

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 221

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 222

Heap when you only need top-k; full sort is wasted work.

## entry 223

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 224

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 225

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 226

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 227

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 228

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 229

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 230

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 231

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 232

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 233

State compression: bitmask + integer encodes a small subset cheaply.

## entry 234

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 235

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 236

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 237

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 238

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 239

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 240

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 241

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 242

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 243

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 244

Greedy by end-time picks the most non-overlapping intervals.

## entry 245

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 246

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 247

Greedy by end-time picks the most non-overlapping intervals.

## entry 248

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 249

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 250

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 251

Union-Find with path compression amortizes to near-O(1) per op.

## entry 252

Stable sort matters when a secondary key was set in a prior pass.

## entry 253

Wavelet tree: range k-th element in O(log Σ) time.

## entry 254

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 255

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 256

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 257

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 258

LIS via patience: each pile holds the smallest tail of length k.

## entry 259

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 260

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 261

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 262

Walk both pointers from each end inward; advance the smaller side.

## entry 263

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 264

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 265

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 266

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 267

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 268

Splay tree: every access splays to the root; amortized O(log n).

## entry 269

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 270

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 271

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 272

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 273

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 274

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 275

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 276

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 277

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 278

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 279

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 280

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 281

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 282

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 283

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 284

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 285

Monotonic stack pops while the new element violates the invariant.

## entry 286

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 287

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 288

Walk both pointers from each end inward; advance the smaller side.

## entry 289

Heap when you only need top-k; full sort is wasted work.

## entry 290

Wavelet tree: range k-th element in O(log Σ) time.

## entry 291

Splay tree: every access splays to the root; amortized O(log n).

## entry 292

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 293

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 294

LIS via patience: each pile holds the smallest tail of length k.

## entry 295

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 296

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 297

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 298

Greedy by end-time picks the most non-overlapping intervals.

## entry 299

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 300

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 301

Walk both pointers from each end inward; advance the smaller side.

## entry 302

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 303

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 304

Splay tree: every access splays to the root; amortized O(log n).

## entry 305

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 306

Heap when you only need top-k; full sort is wasted work.

## entry 307

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 308

Greedy by end-time picks the most non-overlapping intervals.

## entry 309

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 310

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 311

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 312

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 313

Stable sort matters when a secondary key was set in a prior pass.

## entry 314

State compression: bitmask + integer encodes a small subset cheaply.

## entry 315

Articulation points: same DFS as bridges, with a slightly different test.

## entry 316

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 317

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 318

LIS via patience: each pile holds the smallest tail of length k.

## entry 319

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 320

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 321

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 322

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 323

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 324

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 325

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 326

Splay tree: every access splays to the root; amortized O(log n).

## entry 327

LIS via patience: each pile holds the smallest tail of length k.

## entry 328

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 329

Stable sort matters when a secondary key was set in a prior pass.

## entry 330

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 331

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 332

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 333

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 334

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 335

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 336

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 337

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 338

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 339

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 340

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 341

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 342

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 343

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 344

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 345

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 346

StringBuilder: amortize allocation by doubling on grow.

## entry 347

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 348

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 349

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 350

Articulation points: same DFS as bridges, with a slightly different test.

## entry 351

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 352

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 353

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 354

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 355

Walk both pointers from each end inward; advance the smaller side.

## entry 356

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 357

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 358

State compression: bitmask + integer encodes a small subset cheaply.

## entry 359

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 360

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 361

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 362

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 363

Euler tour flattens a tree into an array for range-query LCA.

## entry 364

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 365

StringBuilder: amortize allocation by doubling on grow.

## entry 366

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 367

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 368

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 369

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 370

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 371

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 372

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 373

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 374

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 375

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 376

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 377

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 378

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 379

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 380

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 381

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 382

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 383

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 384

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 385

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 386

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 387

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 388

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 389

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 390

Stable sort matters when a secondary key was set in a prior pass.

## entry 391

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 392

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 393

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 394

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 395

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 396

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 397

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 398

Union-Find with path compression amortizes to near-O(1) per op.

## entry 399

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 400

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 401

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 402

Euler tour flattens a tree into an array for range-query LCA.

## entry 403

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 404

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 405

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 406

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 407

State compression: bitmask + integer encodes a small subset cheaply.

## entry 408

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 409

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 410

Articulation points: same DFS as bridges, with a slightly different test.

## entry 411

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 412

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 413

Walk both pointers from each end inward; advance the smaller side.

## entry 414

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 415

Splay tree: every access splays to the root; amortized O(log n).

## entry 416

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 417

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 418

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 419

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 420

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 421

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 422

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 423

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 424

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 425

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 426

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
