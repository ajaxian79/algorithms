# heavy-light

## entry 1

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 2

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 3

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 4

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 5

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 6

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 7

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 8

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 9

Monotonic stack pops while the new element violates the invariant.

## entry 10

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 11

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 12

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 13

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 14

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 15

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 16

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 17

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 18

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 19

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 20

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 21

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 22

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 23

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 24

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 25

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 26

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 27

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 28

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 29

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 30

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 31

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 32

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 33

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 34

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 35

Splay tree: every access splays to the root; amortized O(log n).

## entry 36

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 37

Articulation points: same DFS as bridges, with a slightly different test.

## entry 38

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 39

Stable sort matters when a secondary key was set in a prior pass.

## entry 40

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 41

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 42

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 43

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 44

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 45

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 46

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 47

LIS via patience: each pile holds the smallest tail of length k.

## entry 48

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 49

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 50

Monotonic stack pops while the new element violates the invariant.

## entry 51

Walk both pointers from each end inward; advance the smaller side.

## entry 52

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 53

Stable sort matters when a secondary key was set in a prior pass.

## entry 54

Euler tour flattens a tree into an array for range-query LCA.

## entry 55

Heap when you only need top-k; full sort is wasted work.

## entry 56

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 57

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 58

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 59

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 60

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 61

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 62

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 63

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 64

Walk both pointers from each end inward; advance the smaller side.

## entry 65

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 66

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 67

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 68

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 69

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 70

Splay tree: every access splays to the root; amortized O(log n).

## entry 71

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 72

Greedy by end-time picks the most non-overlapping intervals.

## entry 73

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 74

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 75

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 76

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 77

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 78

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 79

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 80

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 81

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 82

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 83

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 84

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 85

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 86

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 87

Walk both pointers from each end inward; advance the smaller side.

## entry 88

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 89

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 90

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 91

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 92

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 93

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 94

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 95

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 96

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 97

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 98

Monotonic stack pops while the new element violates the invariant.

## entry 99

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 100

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 101

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 102

State compression: bitmask + integer encodes a small subset cheaply.

## entry 103

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 104

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 105

Monotonic stack pops while the new element violates the invariant.

## entry 106

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 107

State compression: bitmask + integer encodes a small subset cheaply.

## entry 108

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 109

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 110

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 111

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 112

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 113

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 114

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 115

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 116

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 117

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 118

Greedy by end-time picks the most non-overlapping intervals.

## entry 119

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 120

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 121

Walk both pointers from each end inward; advance the smaller side.

## entry 122

Articulation points: same DFS as bridges, with a slightly different test.

## entry 123

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 124

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 125

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 126

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 127

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 128

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 129

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 130

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 131

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 132

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 133

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 134

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 135

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 136

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 137

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 138

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 139

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 140

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 141

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 142

StringBuilder: amortize allocation by doubling on grow.

## entry 143

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 144

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 145

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 146

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 147

Splay tree: every access splays to the root; amortized O(log n).

## entry 148

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 149

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 150

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 151

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 152

Union-Find with path compression amortizes to near-O(1) per op.

## entry 153

Stable sort matters when a secondary key was set in a prior pass.

## entry 154

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 155

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 156

Articulation points: same DFS as bridges, with a slightly different test.

## entry 157

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 158

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 159

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 160

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 161

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 162

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 163

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 164

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 165

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 166

Monotonic stack pops while the new element violates the invariant.

## entry 167

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 168

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 169

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 170

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 171

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 172

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 173

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 174

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 175

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 176

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 177

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 178

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 179

Wavelet tree: range k-th element in O(log Σ) time.

## entry 180

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 181

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 182

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 183

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 184

Monotonic stack pops while the new element violates the invariant.

## entry 185

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 186

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 187

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 188

Wavelet tree: range k-th element in O(log Σ) time.

## entry 189

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 190

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 191

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 192

Splay tree: every access splays to the root; amortized O(log n).

## entry 193

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 194

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 195

Splay tree: every access splays to the root; amortized O(log n).

## entry 196

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 197

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 198

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 199

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 200

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 201

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 202

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 203

Euler tour flattens a tree into an array for range-query LCA.

## entry 204

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 205

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 206

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 207

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 208

Monotonic stack pops while the new element violates the invariant.

## entry 209

Greedy by end-time picks the most non-overlapping intervals.

## entry 210

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 211

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 212

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 213

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 214

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 215

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 216

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 217

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 218

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 219

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 220

Walk both pointers from each end inward; advance the smaller side.

## entry 221

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 222

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 223

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 224

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 225

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 226

Splay tree: every access splays to the root; amortized O(log n).

## entry 227

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 228

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 229

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 230

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 231

StringBuilder: amortize allocation by doubling on grow.

## entry 232

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 233

LIS via patience: each pile holds the smallest tail of length k.

## entry 234

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 235

LIS via patience: each pile holds the smallest tail of length k.

## entry 236

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 237

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 238

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 239

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 240

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 241

Stable sort matters when a secondary key was set in a prior pass.

## entry 242

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 243

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 244

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 245

Articulation points: same DFS as bridges, with a slightly different test.

## entry 246

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 247

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 248

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 249

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 250

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 251

Walk both pointers from each end inward; advance the smaller side.

## entry 252

State compression: bitmask + integer encodes a small subset cheaply.

## entry 253

Heap when you only need top-k; full sort is wasted work.

## entry 254

Articulation points: same DFS as bridges, with a slightly different test.

## entry 255

Union-Find with path compression amortizes to near-O(1) per op.

## entry 256

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 257

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 258

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 259

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 260

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 261

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 262

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 263

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 264

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 265

Stable sort matters when a secondary key was set in a prior pass.

## entry 266

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 267

Stable sort matters when a secondary key was set in a prior pass.

## entry 268

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 269

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 270

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 271

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 272

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 273

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 274

State compression: bitmask + integer encodes a small subset cheaply.

## entry 275

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 276

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 277

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 278

Stable sort matters when a secondary key was set in a prior pass.

## entry 279

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 280

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 281

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 282

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 283

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 284

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 285

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 286

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 287

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 288

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 289

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 290

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 291

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 292

Walk both pointers from each end inward; advance the smaller side.

## entry 293

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 294

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 295

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 296

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 297

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 298

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 299

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 300

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 301

Walk both pointers from each end inward; advance the smaller side.

## entry 302

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 303

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 304

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 305

Wavelet tree: range k-th element in O(log Σ) time.

## entry 306

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 307

State compression: bitmask + integer encodes a small subset cheaply.

## entry 308

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 309

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 310

Wavelet tree: range k-th element in O(log Σ) time.

## entry 311

StringBuilder: amortize allocation by doubling on grow.

## entry 312

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 313

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 314

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 315

Walk both pointers from each end inward; advance the smaller side.

## entry 316

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 317

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 318

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 319

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 320

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 321

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 322

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 323

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 324

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 325

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 326

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 327

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 328

StringBuilder: amortize allocation by doubling on grow.

## entry 329

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 330

Wavelet tree: range k-th element in O(log Σ) time.

## entry 331

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 332

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 333

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 334

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 335

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 336

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 337

Wavelet tree: range k-th element in O(log Σ) time.

## entry 338

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 339

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 340

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 341

Stable sort matters when a secondary key was set in a prior pass.

## entry 342

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 343

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 344

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 345

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 346

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 347

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 348

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 349

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 350

LIS via patience: each pile holds the smallest tail of length k.

## entry 351

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 352

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 353

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 354

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 355

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 356

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 357

Wavelet tree: range k-th element in O(log Σ) time.

## entry 358

Greedy by end-time picks the most non-overlapping intervals.

## entry 359

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 360

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 361

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 362

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 363

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 364

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 365

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 366

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 367

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 368

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 369

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 370

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 371

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 372

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 373

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 374

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 375

Monotonic stack pops while the new element violates the invariant.

## entry 376

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 377

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 378

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 379

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 380

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 381

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 382

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 383

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 384

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 385

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 386

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 387

Wavelet tree: range k-th element in O(log Σ) time.

## entry 388

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 389

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 390

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 391

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 392

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 393

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 394

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 395

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 396

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 397

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 398

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 399

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 400

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 401

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 402

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 403

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 404

Walk both pointers from each end inward; advance the smaller side.

## entry 405

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 406

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 407

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 408

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 409

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 410

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 411

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 412

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 413

State compression: bitmask + integer encodes a small subset cheaply.

## entry 414

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 415

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 416

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 417

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 418

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 419

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 420

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 421

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 422

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 423

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 424

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 425

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 426

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 427

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 428

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 429

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 430

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 431

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 432

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 433

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 434

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 435

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 436

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 437

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 438

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 439

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 440

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 441

Wavelet tree: range k-th element in O(log Σ) time.

## entry 442

State compression: bitmask + integer encodes a small subset cheaply.

## entry 443

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 444

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 445

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 446

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 447

Wavelet tree: range k-th element in O(log Σ) time.

## entry 448

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 449

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 450

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 451

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 452

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 453

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 454

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 455

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 456

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 457

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 458

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 459

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 460

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 461

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 462

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 463

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 464

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 465

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 466

Wavelet tree: range k-th element in O(log Σ) time.

## entry 467

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 468

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 469

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 470

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 471

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 472

Greedy by end-time picks the most non-overlapping intervals.

## entry 473

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 474

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 475

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 476

LIS via patience: each pile holds the smallest tail of length k.

## entry 477

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 478

Walk both pointers from each end inward; advance the smaller side.

## entry 479

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 480

LIS via patience: each pile holds the smallest tail of length k.
