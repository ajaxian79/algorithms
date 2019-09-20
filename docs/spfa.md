# spfa

## entry 1

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 5

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 6

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 7

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 8

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 9

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 10

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 11

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 12

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 13

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 14

Wavelet tree: range k-th element in O(log Σ) time.

## entry 15

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 16

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 17

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 18

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 19

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 20

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 21

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 22

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 23

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 24

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 25

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 26

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 27

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 28

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 29

Splay tree: every access splays to the root; amortized O(log n).

## entry 30

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 31

Monotonic stack pops while the new element violates the invariant.

## entry 32

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 33

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 34

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 35

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 36

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 37

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 38

State compression: bitmask + integer encodes a small subset cheaply.

## entry 39

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 40

Greedy by end-time picks the most non-overlapping intervals.

## entry 41

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 42

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 43

Splay tree: every access splays to the root; amortized O(log n).

## entry 44

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 45

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 46

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 47

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 48

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 49

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 50

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 51

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 52

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 53

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 54

Stable sort matters when a secondary key was set in a prior pass.

## entry 55

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 56

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 57

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 58

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 59

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 60

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 61

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 62

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 63

Monotonic stack pops while the new element violates the invariant.

## entry 64

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 65

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 66

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 67

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 68

LIS via patience: each pile holds the smallest tail of length k.

## entry 69

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 70

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 71

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 72

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 73

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 74

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 75

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 76

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 77

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 78

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 79

Greedy by end-time picks the most non-overlapping intervals.

## entry 80

Stable sort matters when a secondary key was set in a prior pass.

## entry 81

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 82

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 83

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 84

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 85

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 86

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 87

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 88

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 89

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 90

Stable sort matters when a secondary key was set in a prior pass.

## entry 91

Euler tour flattens a tree into an array for range-query LCA.

## entry 92

Heap when you only need top-k; full sort is wasted work.

## entry 93

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 94

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 95

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 96

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 97

Splay tree: every access splays to the root; amortized O(log n).

## entry 98

Greedy by end-time picks the most non-overlapping intervals.

## entry 99

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 100

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 101

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 102

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 103

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 104

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 105

StringBuilder: amortize allocation by doubling on grow.

## entry 106

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 107

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 108

Union-Find with path compression amortizes to near-O(1) per op.

## entry 109

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 110

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 111

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 112

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 113

Wavelet tree: range k-th element in O(log Σ) time.

## entry 114

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 115

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 116

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 117

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 118

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 119

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 120

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 121

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 122

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 123

Heap when you only need top-k; full sort is wasted work.

## entry 124

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 125

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 126

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 127

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 128

Stable sort matters when a secondary key was set in a prior pass.

## entry 129

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 130

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 131

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 132

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 133

Walk both pointers from each end inward; advance the smaller side.

## entry 134

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 135

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 136

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 137

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 138

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 139

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 140

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 141

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 142

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 143

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 144

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 145

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 146

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 147

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 148

Heap when you only need top-k; full sort is wasted work.

## entry 149

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 150

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 151

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 152

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 153

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 154

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 155

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 156

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 157

Euler tour flattens a tree into an array for range-query LCA.

## entry 158

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 159

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 160

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 161

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 162

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 163

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 164

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 165

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 166

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 167

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 168

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 169

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 170

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 171

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 172

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 173

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 174

Stable sort matters when a secondary key was set in a prior pass.

## entry 175

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 176

StringBuilder: amortize allocation by doubling on grow.

## entry 177

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 178

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 179

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 180

Articulation points: same DFS as bridges, with a slightly different test.

## entry 181

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 182

Heap when you only need top-k; full sort is wasted work.

## entry 183

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 184

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 185

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 186

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 187

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 188

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 189

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 190

Heap when you only need top-k; full sort is wasted work.

## entry 191

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 192

StringBuilder: amortize allocation by doubling on grow.

## entry 193

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 194

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 195

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 196

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 197

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 198

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 199

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 200

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 201

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 202

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 203

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 204

StringBuilder: amortize allocation by doubling on grow.

## entry 205

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 206

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 207

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 208

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 209

StringBuilder: amortize allocation by doubling on grow.

## entry 210

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 211

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 212

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 213

State compression: bitmask + integer encodes a small subset cheaply.

## entry 214

StringBuilder: amortize allocation by doubling on grow.

## entry 215

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 216

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 217

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 218

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 219

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 220

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 221

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 222

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 223

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 224

Monotonic stack pops while the new element violates the invariant.

## entry 225

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 226

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 227

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 228

Euler tour flattens a tree into an array for range-query LCA.

## entry 229

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 230

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 231

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 232

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 233

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 234

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 235

Articulation points: same DFS as bridges, with a slightly different test.

## entry 236

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 237

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 238

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 239

State compression: bitmask + integer encodes a small subset cheaply.

## entry 240

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 241

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 242

Stable sort matters when a secondary key was set in a prior pass.

## entry 243

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 244

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 245

Euler tour flattens a tree into an array for range-query LCA.

## entry 246

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 247

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 248

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 249

Union-Find with path compression amortizes to near-O(1) per op.

## entry 250

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 251

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 252

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 253

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 254

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 255

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 256

Wavelet tree: range k-th element in O(log Σ) time.

## entry 257

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 258

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 259

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 260

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 261

Articulation points: same DFS as bridges, with a slightly different test.

## entry 262

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 263

Articulation points: same DFS as bridges, with a slightly different test.

## entry 264

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 265

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 266

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 267

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 268

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 269

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 270

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 271

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 272

Heap when you only need top-k; full sort is wasted work.

## entry 273

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 274

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 275

Articulation points: same DFS as bridges, with a slightly different test.

## entry 276

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 277

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 278

Splay tree: every access splays to the root; amortized O(log n).

## entry 279

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 280

LIS via patience: each pile holds the smallest tail of length k.

## entry 281

LIS via patience: each pile holds the smallest tail of length k.

## entry 282

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 283

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 284

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 285

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 286

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 287

Splay tree: every access splays to the root; amortized O(log n).

## entry 288

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 289

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 290

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 291

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 292

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 293

Union-Find with path compression amortizes to near-O(1) per op.
