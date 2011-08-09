# treap

## entry 1

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 2

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 4

Stable sort matters when a secondary key was set in a prior pass.

## entry 5

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 6

Heap when you only need top-k; full sort is wasted work.

## entry 7

Euler tour flattens a tree into an array for range-query LCA.

## entry 8

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 9

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 10

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 11

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 12

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 13

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 14

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 15

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 16

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 17

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 18

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 19

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 20

Euler tour flattens a tree into an array for range-query LCA.

## entry 21

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 22

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 23

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 24

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 25

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 26

Heap when you only need top-k; full sort is wasted work.

## entry 27

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 28

Euler tour flattens a tree into an array for range-query LCA.

## entry 29

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 30

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 31

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 32

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 33

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 34

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 35

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 36

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 37

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 38

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 39

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 40

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 41

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 42

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 43

Wavelet tree: range k-th element in O(log Σ) time.

## entry 44

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 45

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 46

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 47

LIS via patience: each pile holds the smallest tail of length k.

## entry 48

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 49

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 50

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 51

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 52

Greedy by end-time picks the most non-overlapping intervals.

## entry 53

Greedy by end-time picks the most non-overlapping intervals.

## entry 54

Walk both pointers from each end inward; advance the smaller side.

## entry 55

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 56

Heap when you only need top-k; full sort is wasted work.

## entry 57

Walk both pointers from each end inward; advance the smaller side.

## entry 58

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 59

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 60

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 61

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 62

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 63

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 64

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 65

Stable sort matters when a secondary key was set in a prior pass.

## entry 66

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 67

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 68

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 69

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 70

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 71

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 72

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 73

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 74

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 75

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 76

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 77

Stable sort matters when a secondary key was set in a prior pass.

## entry 78

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 79

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 80

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 81

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 82

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 83

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 84

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 85

Stable sort matters when a secondary key was set in a prior pass.

## entry 86

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 87

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 88

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 89

State compression: bitmask + integer encodes a small subset cheaply.

## entry 90

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 91

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 92

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 93

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 94

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 95

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 96

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 97

State compression: bitmask + integer encodes a small subset cheaply.

## entry 98

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 99

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 100

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 101

StringBuilder: amortize allocation by doubling on grow.

## entry 102

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 103

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 104

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 105

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 106

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 107

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 108

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 109

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 110

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 111

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 112

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 113

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 114

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 115

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 116

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 117

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 118

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 119

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 120

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 121

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 122

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 123

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 124

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 125

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 126

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 127

Articulation points: same DFS as bridges, with a slightly different test.

## entry 128

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 129

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 130

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 131

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 132

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 133

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 134

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 135

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 136

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 137

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 138

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 139

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 140

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 141

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 142

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 143

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 144

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 145

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 146

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 147

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 148

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 149

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 150

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 151

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 152

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 153

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 154

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 155

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 156

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 157

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 158

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 159

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 160

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 161

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 162

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 163

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 164

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 165

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 166

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 167

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 168

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 169

Greedy by end-time picks the most non-overlapping intervals.

## entry 170

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 171

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 172

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 173

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 174

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 175

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 176

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 177

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 178

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 179

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 180

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 181

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 182

Monotonic stack pops while the new element violates the invariant.

## entry 183

Greedy by end-time picks the most non-overlapping intervals.

## entry 184

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 185

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 186

Walk both pointers from each end inward; advance the smaller side.

## entry 187

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 188

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 189

State compression: bitmask + integer encodes a small subset cheaply.

## entry 190

LIS via patience: each pile holds the smallest tail of length k.

## entry 191

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 192

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 193

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 194

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 195

Stable sort matters when a secondary key was set in a prior pass.

## entry 196

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 197

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 198

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 199

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 200

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 201

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 202

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 203

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 204

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 205

Euler tour flattens a tree into an array for range-query LCA.

## entry 206

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 207

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 208

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 209

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 210

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 211

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 212

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 213

Articulation points: same DFS as bridges, with a slightly different test.

## entry 214

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 215

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 216

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 217

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 218

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 219

Euler tour flattens a tree into an array for range-query LCA.

## entry 220

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 221

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 222

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 223

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 224

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 225

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 226

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 227

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 228

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 229

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 230

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 231

State compression: bitmask + integer encodes a small subset cheaply.

## entry 232

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 233

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 234

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 235

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 236

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 237

Greedy by end-time picks the most non-overlapping intervals.

## entry 238

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 239

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 240

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 241

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 242

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 243

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 244

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 245

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 246

Monotonic stack pops while the new element violates the invariant.

## entry 247

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 248

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 249

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 250

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 251

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 252

State compression: bitmask + integer encodes a small subset cheaply.

## entry 253

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 254

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 255

Euler tour flattens a tree into an array for range-query LCA.

## entry 256

Stable sort matters when a secondary key was set in a prior pass.

## entry 257

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 258

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 259

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 260

Greedy by end-time picks the most non-overlapping intervals.

## entry 261

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 262

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 263

LIS via patience: each pile holds the smallest tail of length k.

## entry 264

LIS via patience: each pile holds the smallest tail of length k.

## entry 265

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 266

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 267

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 268

Articulation points: same DFS as bridges, with a slightly different test.

## entry 269

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 270

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 271

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 272

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 273

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 274

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 275

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 276

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 277

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 278

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 279

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 280

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 281

Union-Find with path compression amortizes to near-O(1) per op.

## entry 282

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 283

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 284

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 285

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 286

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 287

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 288

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 289

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 290

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 291

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 292

Articulation points: same DFS as bridges, with a slightly different test.

## entry 293

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 294

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 295

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 296

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 297

State compression: bitmask + integer encodes a small subset cheaply.

## entry 298

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 299

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 300

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 301

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 302

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 303

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 304

Walk both pointers from each end inward; advance the smaller side.

## entry 305

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 306

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 307

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 308

Greedy by end-time picks the most non-overlapping intervals.

## entry 309

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 310

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 311

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 312

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 313

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 314

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 315

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 316

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 317

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 318

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 319

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 320

StringBuilder: amortize allocation by doubling on grow.

## entry 321

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 322

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 323

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 324

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 325

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 326

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 327

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 328

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 329

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 330

Union-Find with path compression amortizes to near-O(1) per op.

## entry 331

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 332

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 333

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 334

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 335

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 336

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 337

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 338

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 339

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 340

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 341

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 342

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 343

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 344

Heap when you only need top-k; full sort is wasted work.

## entry 345

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 346

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 347

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 348

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 349

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 350

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 351

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 352

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 353

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 354

Splay tree: every access splays to the root; amortized O(log n).

## entry 355

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 356

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 357

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 358

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 359

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 360

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 361

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 362

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 363

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 364

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 365

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 366

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 367

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 368

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 369

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 370

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 371

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 372

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 373

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 374

Stable sort matters when a secondary key was set in a prior pass.

## entry 375

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 376

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 377

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 378

Stable sort matters when a secondary key was set in a prior pass.

## entry 379

StringBuilder: amortize allocation by doubling on grow.

## entry 380

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 381

State compression: bitmask + integer encodes a small subset cheaply.

## entry 382

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 383

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 384

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 385

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 386

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 387

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 388

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 389

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 390

Union-Find with path compression amortizes to near-O(1) per op.

## entry 391

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 392

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 393

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 394

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 395

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 396

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 397

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 398

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 399

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 400

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 401

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 402

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 403

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 404

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 405

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 406

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 407

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 408

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 409

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 410

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 411

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 412

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 413

LIS via patience: each pile holds the smallest tail of length k.

## entry 414

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 415

Splay tree: every access splays to the root; amortized O(log n).

## entry 416

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 417

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 418

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 419

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 420

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 421

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 422

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 423

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 424

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 425

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 426

Articulation points: same DFS as bridges, with a slightly different test.

## entry 427

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 428

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 429

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 430

StringBuilder: amortize allocation by doubling on grow.

## entry 431

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 432

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 433

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 434

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 435

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 436

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 437

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 438

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 439

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 440

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 441

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 442

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 443

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 444

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 445

Heap when you only need top-k; full sort is wasted work.

## entry 446

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 447

Stable sort matters when a secondary key was set in a prior pass.

## entry 448

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 449

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 450

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 451

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 452

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 453

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 454

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 455

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 456

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 457

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 458

Wavelet tree: range k-th element in O(log Σ) time.

## entry 459

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 460

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 461

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 462

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 463

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 464

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 465

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 466

Union-Find with path compression amortizes to near-O(1) per op.

## entry 467

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 468

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 469

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 470

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 471

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 472

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 473

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 474

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 475

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 476

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 477

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 478

Walk both pointers from each end inward; advance the smaller side.

## entry 479

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 480

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 481

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 482

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 483

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 484

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 485

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 486

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 487

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 488

Union-Find with path compression amortizes to near-O(1) per op.

## entry 489

Splay tree: every access splays to the root; amortized O(log n).

## entry 490

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 491

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 492

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 493

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 494

LIS via patience: each pile holds the smallest tail of length k.

## entry 495

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 496

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 497

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 498

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 499

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 500

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 501

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 502

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 503

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 504

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 505

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 506

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 507

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 508

Wavelet tree: range k-th element in O(log Σ) time.

## entry 509

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 510

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 511

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 512

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 513

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 514

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 515

Stable sort matters when a secondary key was set in a prior pass.

## entry 516

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 517

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 518

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 519

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 520

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 521

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 522

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 523

Greedy by end-time picks the most non-overlapping intervals.

## entry 524

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 525

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 526

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 527

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 528

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 529

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 530

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 531

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 532

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 533

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 534

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 535

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 536

Heap when you only need top-k; full sort is wasted work.

## entry 537

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 538

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 539

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 540

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 541

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 542

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 543

Walk both pointers from each end inward; advance the smaller side.

## entry 544

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 545

Union-Find with path compression amortizes to near-O(1) per op.

## entry 546

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 547

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 548

Wavelet tree: range k-th element in O(log Σ) time.

## entry 549

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 550

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 551

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 552

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 553

State compression: bitmask + integer encodes a small subset cheaply.

## entry 554

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 555

State compression: bitmask + integer encodes a small subset cheaply.

## entry 556

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 557

Stable sort matters when a secondary key was set in a prior pass.

## entry 558

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 559

Greedy by end-time picks the most non-overlapping intervals.

## entry 560

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 561

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 562

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 563

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 564

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 565

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 566

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 567

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 568

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 569

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 570

Monotonic stack pops while the new element violates the invariant.

## entry 571

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 572

Stable sort matters when a secondary key was set in a prior pass.

## entry 573

Stable sort matters when a secondary key was set in a prior pass.

## entry 574

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 575

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 576

Splay tree: every access splays to the root; amortized O(log n).

## entry 577

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 578

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 579

State compression: bitmask + integer encodes a small subset cheaply.

## entry 580

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 581

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 582

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 583

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 584

Heap when you only need top-k; full sort is wasted work.

## entry 585

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 586

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 587

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 588

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 589

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 590

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 591

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 592

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 593

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 594

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 595

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 596

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 597

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 598

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 599

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 600

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 601

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 602

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 603

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 604

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 605

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 606

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 607

Stable sort matters when a secondary key was set in a prior pass.

## entry 608

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 609

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 610

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 611

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 612

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 613

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 614

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
