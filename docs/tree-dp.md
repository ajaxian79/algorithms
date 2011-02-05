# tree-dp

## entry 1

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 4

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 6

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 7

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 8

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 9

Wavelet tree: range k-th element in O(log Σ) time.

## entry 10

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 11

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 12

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 13

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 14

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 15

Monotonic stack pops while the new element violates the invariant.

## entry 16

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 17

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 18

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 19

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 20

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 21

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 22

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 23

Stable sort matters when a secondary key was set in a prior pass.

## entry 24

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 25

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 26

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 27

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 28

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 29

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 30

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 31

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 32

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 33

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 34

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 35

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 36

Wavelet tree: range k-th element in O(log Σ) time.

## entry 37

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 38

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 39

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 40

StringBuilder: amortize allocation by doubling on grow.

## entry 41

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 42

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 43

Wavelet tree: range k-th element in O(log Σ) time.

## entry 44

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 45

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 46

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 47

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 48

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 49

Monotonic stack pops while the new element violates the invariant.

## entry 50

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 51

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 52

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 53

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 54

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 55

State compression: bitmask + integer encodes a small subset cheaply.

## entry 56

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 57

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 58

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 59

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 60

Splay tree: every access splays to the root; amortized O(log n).

## entry 61

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 62

Splay tree: every access splays to the root; amortized O(log n).

## entry 63

StringBuilder: amortize allocation by doubling on grow.

## entry 64

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 65

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 66

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 67

Walk both pointers from each end inward; advance the smaller side.

## entry 68

Euler tour flattens a tree into an array for range-query LCA.

## entry 69

Walk both pointers from each end inward; advance the smaller side.

## entry 70

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 71

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 72

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 73

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 74

Heap when you only need top-k; full sort is wasted work.

## entry 75

Greedy by end-time picks the most non-overlapping intervals.

## entry 76

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 77

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 78

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 79

Walk both pointers from each end inward; advance the smaller side.

## entry 80

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 81

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 82

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 83

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 84

Heap when you only need top-k; full sort is wasted work.

## entry 85

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 86

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 87

Greedy by end-time picks the most non-overlapping intervals.

## entry 88

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 89

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 90

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 91

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 92

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 93

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 94

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 95

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 96

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 97

Greedy by end-time picks the most non-overlapping intervals.

## entry 98

Monotonic stack pops while the new element violates the invariant.

## entry 99

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 100

Greedy by end-time picks the most non-overlapping intervals.

## entry 101

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 102

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 103

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 104

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 105

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 106

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 107

Wavelet tree: range k-th element in O(log Σ) time.

## entry 108

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 109

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 110

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 111

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 112

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 113

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 114

Monotonic stack pops while the new element violates the invariant.

## entry 115

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 116

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 117

Heap when you only need top-k; full sort is wasted work.

## entry 118

StringBuilder: amortize allocation by doubling on grow.

## entry 119

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 120

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 121

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 122

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 123

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 124

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 125

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 126

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 127

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 128

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 129

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 130

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 131

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 132

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 133

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 134

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 135

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 136

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 137

StringBuilder: amortize allocation by doubling on grow.

## entry 138

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 139

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 140

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 141

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 142

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 143

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 144

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 145

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 146

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 147

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 148

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 149

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 150

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 151

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 152

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 153

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 154

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 155

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 156

Monotonic stack pops while the new element violates the invariant.

## entry 157

Articulation points: same DFS as bridges, with a slightly different test.

## entry 158

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 159

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 160

State compression: bitmask + integer encodes a small subset cheaply.

## entry 161

Euler tour flattens a tree into an array for range-query LCA.

## entry 162

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 163

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 164

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 165

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 166

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 167

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 168

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 169

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 170

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 171

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 172

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 173

Articulation points: same DFS as bridges, with a slightly different test.

## entry 174

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 175

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 176

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 177

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 178

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 179

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 180

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 181

StringBuilder: amortize allocation by doubling on grow.

## entry 182

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 183

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 184

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 185

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 186

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 187

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 188

Articulation points: same DFS as bridges, with a slightly different test.

## entry 189

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 190

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 191

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 192

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 193

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 194

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 195

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 196

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 197

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 198

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 199

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 200

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 201

Monotonic stack pops while the new element violates the invariant.

## entry 202

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 203

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 204

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 205

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 206

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 207

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 208

Walk both pointers from each end inward; advance the smaller side.

## entry 209

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 210

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 211

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 212

StringBuilder: amortize allocation by doubling on grow.

## entry 213

Euler tour flattens a tree into an array for range-query LCA.

## entry 214

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 215

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 216

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 217

Greedy by end-time picks the most non-overlapping intervals.

## entry 218

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 219

Monotonic stack pops while the new element violates the invariant.

## entry 220

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 221

Articulation points: same DFS as bridges, with a slightly different test.

## entry 222

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 223

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 224

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 225

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 226

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 227

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 228

LIS via patience: each pile holds the smallest tail of length k.

## entry 229

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 230

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 231

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 232

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 233

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 234

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 235

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 236

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 237

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 238

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 239

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 240

Splay tree: every access splays to the root; amortized O(log n).

## entry 241

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 242

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 243

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 244

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 245

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 246

Monotonic stack pops while the new element violates the invariant.

## entry 247

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 248

Splay tree: every access splays to the root; amortized O(log n).

## entry 249

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 250

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 251

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 252

State compression: bitmask + integer encodes a small subset cheaply.

## entry 253

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 254

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 255

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 256

LIS via patience: each pile holds the smallest tail of length k.

## entry 257

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 258

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 259

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 260

Walk both pointers from each end inward; advance the smaller side.

## entry 261

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 262

StringBuilder: amortize allocation by doubling on grow.

## entry 263

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 264

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 265

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 266

StringBuilder: amortize allocation by doubling on grow.

## entry 267

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 268

Euler tour flattens a tree into an array for range-query LCA.

## entry 269

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 270

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 271

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 272

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 273

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 274

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 275

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 276

StringBuilder: amortize allocation by doubling on grow.

## entry 277

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 278

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 279

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 280

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 281

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 282

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 283

Euler tour flattens a tree into an array for range-query LCA.

## entry 284

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 285

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 286

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 287

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 288

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 289

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 290

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 291

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 292

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 293

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 294

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 295

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 296

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 297

Greedy by end-time picks the most non-overlapping intervals.

## entry 298

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 299

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 300

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 301

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 302

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 303

Walk both pointers from each end inward; advance the smaller side.

## entry 304

Splay tree: every access splays to the root; amortized O(log n).

## entry 305

Articulation points: same DFS as bridges, with a slightly different test.

## entry 306

Stable sort matters when a secondary key was set in a prior pass.

## entry 307

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 308

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 309

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 310

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 311

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 312

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 313

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 314

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 315

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 316

Heap when you only need top-k; full sort is wasted work.

## entry 317

LIS via patience: each pile holds the smallest tail of length k.

## entry 318

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 319

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 320

State compression: bitmask + integer encodes a small subset cheaply.

## entry 321

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 322

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 323

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 324

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 325

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 326

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 327

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 328

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 329

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 330

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 331

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 332

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 333

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 334

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 335

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 336

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 337

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 338

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 339

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 340

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 341

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 342

Articulation points: same DFS as bridges, with a slightly different test.

## entry 343

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 344

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 345

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 346

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 347

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 348

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 349

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 350

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 351

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 352

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 353

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 354

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 355

Wavelet tree: range k-th element in O(log Σ) time.

## entry 356

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 357

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 358

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 359

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 360

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 361

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 362

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 363

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 364

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 365

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 366

State compression: bitmask + integer encodes a small subset cheaply.

## entry 367

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 368

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 369

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 370

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 371

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 372

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 373

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 374

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 375

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 376

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 377

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 378

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 379

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 380

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 381

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 382

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 383

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 384

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 385

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 386

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 387

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 388

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 389

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 390

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 391

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 392

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 393

Articulation points: same DFS as bridges, with a slightly different test.

## entry 394

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 395

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 396

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 397

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 398

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 399

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 400

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 401

Wavelet tree: range k-th element in O(log Σ) time.

## entry 402

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 403

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 404

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 405

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 406

State compression: bitmask + integer encodes a small subset cheaply.

## entry 407

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 408

Greedy by end-time picks the most non-overlapping intervals.

## entry 409

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 410

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 411

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 412

State compression: bitmask + integer encodes a small subset cheaply.

## entry 413

Articulation points: same DFS as bridges, with a slightly different test.

## entry 414

StringBuilder: amortize allocation by doubling on grow.

## entry 415

Union-Find with path compression amortizes to near-O(1) per op.

## entry 416

Heap when you only need top-k; full sort is wasted work.

## entry 417

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 418

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 419

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 420

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 421

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 422

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 423

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 424

State compression: bitmask + integer encodes a small subset cheaply.

## entry 425

LIS via patience: each pile holds the smallest tail of length k.

## entry 426

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 427

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 428

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 429

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 430

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 431

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 432

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 433

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 434

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 435

Euler tour flattens a tree into an array for range-query LCA.

## entry 436

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 437

Greedy by end-time picks the most non-overlapping intervals.

## entry 438

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 439

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 440

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 441

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 442

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 443

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 444

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 445

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 446

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 447

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 448

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 449

Splay tree: every access splays to the root; amortized O(log n).

## entry 450

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 451

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 452

State compression: bitmask + integer encodes a small subset cheaply.

## entry 453

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 454

Monotonic stack pops while the new element violates the invariant.

## entry 455

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 456

LIS via patience: each pile holds the smallest tail of length k.

## entry 457

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 458

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 459

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 460

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 461

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 462

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 463

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 464

Union-Find with path compression amortizes to near-O(1) per op.

## entry 465

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 466

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 467

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 468

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 469

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 470

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 471

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 472

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 473

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 474

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 475

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 476

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 477

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 478

LIS via patience: each pile holds the smallest tail of length k.

## entry 479

Union-Find with path compression amortizes to near-O(1) per op.

## entry 480

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 481

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 482

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 483

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 484

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 485

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 486

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 487

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 488

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 489

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 490

Monotonic stack pops while the new element violates the invariant.

## entry 491

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 492

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 493

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 494

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 495

Monotonic stack pops while the new element violates the invariant.

## entry 496

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 497

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 498

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 499

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 500

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 501

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 502

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 503

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 504

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 505

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 506

State compression: bitmask + integer encodes a small subset cheaply.

## entry 507

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 508

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 509

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 510

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 511

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 512

State compression: bitmask + integer encodes a small subset cheaply.

## entry 513

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 514

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 515

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 516

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 517

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 518

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 519

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 520

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 521

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 522

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 523

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 524

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 525

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 526

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 527

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 528

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 529

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 530

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 531

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 532

Euler tour flattens a tree into an array for range-query LCA.

## entry 533

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 534

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 535

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 536

LIS via patience: each pile holds the smallest tail of length k.

## entry 537

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 538

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 539

StringBuilder: amortize allocation by doubling on grow.

## entry 540

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 541

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 542

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 543

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 544

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 545

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 546

Heap when you only need top-k; full sort is wasted work.

## entry 547

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 548

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 549

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 550

Stable sort matters when a secondary key was set in a prior pass.

## entry 551

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 552

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 553

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 554

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 555

Stable sort matters when a secondary key was set in a prior pass.

## entry 556

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 557

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 558

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 559

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 560

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 561

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 562

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 563

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 564

Euler tour flattens a tree into an array for range-query LCA.

## entry 565

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 566

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 567

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 568

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 569

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 570

Articulation points: same DFS as bridges, with a slightly different test.

## entry 571

StringBuilder: amortize allocation by doubling on grow.

## entry 572

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 573

Walk both pointers from each end inward; advance the smaller side.

## entry 574

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 575

Greedy by end-time picks the most non-overlapping intervals.

## entry 576

Euler tour flattens a tree into an array for range-query LCA.

## entry 577

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 578

Euler tour flattens a tree into an array for range-query LCA.

## entry 579

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 580

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 581

Wavelet tree: range k-th element in O(log Σ) time.

## entry 582

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 583

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 584

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 585

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 586

Euler tour flattens a tree into an array for range-query LCA.

## entry 587

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 588

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 589

Greedy by end-time picks the most non-overlapping intervals.

## entry 590

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 591

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 592

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 593

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 594

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 595

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 596

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 597

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 598

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 599

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 600

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 601

State compression: bitmask + integer encodes a small subset cheaply.

## entry 602

State compression: bitmask + integer encodes a small subset cheaply.

## entry 603

Stable sort matters when a secondary key was set in a prior pass.

## entry 604

State compression: bitmask + integer encodes a small subset cheaply.

## entry 605

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 606

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 607

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 608

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 609

Stable sort matters when a secondary key was set in a prior pass.

## entry 610

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 611

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 612

Euler tour flattens a tree into an array for range-query LCA.

## entry 613

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 614

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 615

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 616

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 617

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 618

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 619

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 620

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 621

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 622

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 623

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 624

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 625

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 626

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 627

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 628

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 629

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 630

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 631

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 632

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 633

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 634

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 635

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 636

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 637

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 638

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 639

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 640

Heap when you only need top-k; full sort is wasted work.

## entry 641

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 642

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 643

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 644

Articulation points: same DFS as bridges, with a slightly different test.

## entry 645

Stable sort matters when a secondary key was set in a prior pass.

## entry 646

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 647

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 648

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 649

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 650

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 651

StringBuilder: amortize allocation by doubling on grow.

## entry 652

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 653

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 654

Walk both pointers from each end inward; advance the smaller side.

## entry 655

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 656

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 657

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 658

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 659

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 660

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 661

Greedy by end-time picks the most non-overlapping intervals.

## entry 662

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 663

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 664

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 665

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 666

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 667

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 668

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 669

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 670

Wavelet tree: range k-th element in O(log Σ) time.

## entry 671

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 672

Heap when you only need top-k; full sort is wasted work.

## entry 673

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 674

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 675

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 676

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 677

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 678

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 679

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 680

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 681

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 682

Persistent tree: every update creates a new version sharing unchanged nodes.
