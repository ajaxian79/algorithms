# binary-lifting

## entry 1

Articulation points: same DFS as bridges, with a slightly different test.

## entry 2

Articulation points: same DFS as bridges, with a slightly different test.

## entry 3

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 4

StringBuilder: amortize allocation by doubling on grow.

## entry 5

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 6

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 7

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 8

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 9

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 10

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 11

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 12

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 13

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 14

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 15

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 16

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 17

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 18

LIS via patience: each pile holds the smallest tail of length k.

## entry 19

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 20

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 21

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 22

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 23

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 24

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 25

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 26

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 27

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 28

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 29

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 30

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 31

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 32

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 33

Union-Find with path compression amortizes to near-O(1) per op.

## entry 34

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 35

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 36

State compression: bitmask + integer encodes a small subset cheaply.

## entry 37

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 38

Union-Find with path compression amortizes to near-O(1) per op.

## entry 39

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 40

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 41

Monotonic stack pops while the new element violates the invariant.

## entry 42

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 43

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 44

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 45

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 46

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 47

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 48

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 49

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 50

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 51

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 52

Monotonic stack pops while the new element violates the invariant.

## entry 53

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 54

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 55

Greedy by end-time picks the most non-overlapping intervals.

## entry 56

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 57

Union-Find with path compression amortizes to near-O(1) per op.

## entry 58

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 59

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 60

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 61

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 62

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 63

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 64

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 65

Greedy by end-time picks the most non-overlapping intervals.

## entry 66

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 67

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 68

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 69

Walk both pointers from each end inward; advance the smaller side.

## entry 70

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 71

Euler tour flattens a tree into an array for range-query LCA.

## entry 72

LIS via patience: each pile holds the smallest tail of length k.

## entry 73

Heap when you only need top-k; full sort is wasted work.

## entry 74

Union-Find with path compression amortizes to near-O(1) per op.

## entry 75

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 76

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 77

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 78

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 79

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 80

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 81

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 82

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 83

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 84

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 85

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 86

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 87

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 88

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 89

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 90

Articulation points: same DFS as bridges, with a slightly different test.

## entry 91

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 92

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 93

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 94

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 95

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 96

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 97

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 98

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 99

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 100

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 101

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 102

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 103

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 104

Euler tour flattens a tree into an array for range-query LCA.

## entry 105

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 106

Walk both pointers from each end inward; advance the smaller side.

## entry 107

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 108

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 109

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 110

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 111

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 112

LIS via patience: each pile holds the smallest tail of length k.

## entry 113

StringBuilder: amortize allocation by doubling on grow.

## entry 114

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 115

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 116

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 117

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 118

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 119

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 120

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 121

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 122

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 123

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 124

Articulation points: same DFS as bridges, with a slightly different test.

## entry 125

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 126

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 127

Articulation points: same DFS as bridges, with a slightly different test.

## entry 128

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 129

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 130

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 131

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 132

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 133

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 134

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 135

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 136

Walk both pointers from each end inward; advance the smaller side.

## entry 137

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 138

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 139

Union-Find with path compression amortizes to near-O(1) per op.

## entry 140

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 141

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 142

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 143

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 144

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 145

Splay tree: every access splays to the root; amortized O(log n).

## entry 146

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 147

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 148

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 149

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 150

StringBuilder: amortize allocation by doubling on grow.

## entry 151

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 152

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 153

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 154

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 155

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 156

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 157

Walk both pointers from each end inward; advance the smaller side.

## entry 158

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 159

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 160

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 161

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 162

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 163

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 164

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 165

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 166

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 167

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 168

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 169

Articulation points: same DFS as bridges, with a slightly different test.

## entry 170

Euler tour flattens a tree into an array for range-query LCA.

## entry 171

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 172

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 173

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 174

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 175

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 176

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 177

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 178

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 179

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 180

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 181

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 182

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 183

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 184

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 185

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 186

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 187

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 188

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 189

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 190

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 191

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 192

Stable sort matters when a secondary key was set in a prior pass.

## entry 193

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 194

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 195

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 196

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 197

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 198

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 199

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 200

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 201

Walk both pointers from each end inward; advance the smaller side.

## entry 202

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 203

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 204

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 205

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 206

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 207

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 208

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 209

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 210

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 211

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 212

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 213

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 214

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 215

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 216

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 217

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 218

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 219

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 220

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 221

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 222

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 223

Greedy by end-time picks the most non-overlapping intervals.

## entry 224

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 225

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 226

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 227

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 228

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 229

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 230

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 231

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 232

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 233

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 234

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 235

Greedy by end-time picks the most non-overlapping intervals.

## entry 236

StringBuilder: amortize allocation by doubling on grow.

## entry 237

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 238

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 239

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 240

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 241

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 242

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 243

Monotonic stack pops while the new element violates the invariant.

## entry 244

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 245

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 246

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 247

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 248

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 249

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 250

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 251

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 252

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 253

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 254

Wavelet tree: range k-th element in O(log Σ) time.

## entry 255

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 256

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 257

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 258

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 259

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 260

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 261

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 262

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 263

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 264

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 265

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 266

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 267

Euler tour flattens a tree into an array for range-query LCA.

## entry 268

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 269

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 270

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 271

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 272

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 273

StringBuilder: amortize allocation by doubling on grow.

## entry 274

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 275

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 276

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 277

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 278

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 279

Wavelet tree: range k-th element in O(log Σ) time.

## entry 280

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 281

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 282

Splay tree: every access splays to the root; amortized O(log n).

## entry 283

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 284

Stable sort matters when a secondary key was set in a prior pass.

## entry 285

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 286

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 287

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 288

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 289

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 290

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 291

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 292

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 293

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 294

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 295

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 296

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 297

Heap when you only need top-k; full sort is wasted work.

## entry 298

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 299

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 300

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 301

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 302

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 303

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 304

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 305

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 306

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 307

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 308

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 309

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 310

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 311

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 312

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 313

Heap when you only need top-k; full sort is wasted work.

## entry 314

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 315

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 316

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 317

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 318

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 319

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 320

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 321

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 322

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 323

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 324

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 325

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 326

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 327

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 328

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 329

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 330

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 331

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 332

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 333

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 334

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 335

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 336

Articulation points: same DFS as bridges, with a slightly different test.

## entry 337

Euler tour flattens a tree into an array for range-query LCA.

## entry 338

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 339

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 340

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 341

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 342

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 343

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 344

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 345

Monotonic stack pops while the new element violates the invariant.

## entry 346

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 347

Articulation points: same DFS as bridges, with a slightly different test.

## entry 348

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 349

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 350

Union-Find with path compression amortizes to near-O(1) per op.

## entry 351

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 352

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 353

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 354

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 355

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 356

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 357

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 358

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 359

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 360

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 361

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 362

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 363

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 364

LIS via patience: each pile holds the smallest tail of length k.

## entry 365

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 366

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 367

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 368

Splay tree: every access splays to the root; amortized O(log n).

## entry 369

LIS via patience: each pile holds the smallest tail of length k.

## entry 370

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 371

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 372

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 373

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 374

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 375

Greedy by end-time picks the most non-overlapping intervals.

## entry 376

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 377

Wavelet tree: range k-th element in O(log Σ) time.

## entry 378

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 379

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 380

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 381

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 382

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 383

LIS via patience: each pile holds the smallest tail of length k.

## entry 384

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 385

Walk both pointers from each end inward; advance the smaller side.

## entry 386

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 387

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 388

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 389

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 390

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 391

Walk both pointers from each end inward; advance the smaller side.

## entry 392

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 393

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 394

Greedy by end-time picks the most non-overlapping intervals.
