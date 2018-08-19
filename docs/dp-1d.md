# dp-1d

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Unbounded knapsack: capacity inner ascending allows item reuse.

Walk both pointers from each end inward; advance the smaller side.

BFS layers carry implicit shortest-path distance in unweighted graphs.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Union-Find with path compression amortizes to near-O(1) per op.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

LIS via patience: each pile holds the smallest tail of length k.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Stable sort matters when a secondary key was set in a prior pass.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Morris traversal threads predecessors back to current node — O(1) extra space.

Monotonic stack pops while the new element violates the invariant.

Greedy by end-time picks the most non-overlapping intervals.

Merge intervals: sort by start; extend the running interval while overlapping.

Manacher expands around each center, reusing prior radii via mirror reflection.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 1

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 3

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 4

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5

Walk both pointers from each end inward; advance the smaller side.

## entry 6

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 7

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 8

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 9

Greedy by end-time picks the most non-overlapping intervals.

## entry 10

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 11

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 12

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 13

Heap when you only need top-k; full sort is wasted work.

## entry 14

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 15

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 16

Monotonic stack pops while the new element violates the invariant.

## entry 17

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 18

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 19

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 20

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 21

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 22

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 23

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 24

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 25

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 26

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 27

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 28

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 29

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 30

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 31

State compression: bitmask + integer encodes a small subset cheaply.

## entry 32

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 33

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 34

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 35

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 36

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 37

State compression: bitmask + integer encodes a small subset cheaply.

## entry 38

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 39

Splay tree: every access splays to the root; amortized O(log n).

## entry 40

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 41

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 42

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 43

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 44

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 45

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 46

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 47

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 48

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 49

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 50

Union-Find with path compression amortizes to near-O(1) per op.

## entry 51

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 52

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 53

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 54

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 55

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 56

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 57

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 58

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 59

Articulation points: same DFS as bridges, with a slightly different test.

## entry 60

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 61

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 62

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 63

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 64

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 65

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 66

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 67

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 68

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 69

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 70

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 71

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 72

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 73

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 74

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 75

Splay tree: every access splays to the root; amortized O(log n).

## entry 76

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 77

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 78

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 79

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 80

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 81

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 82

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 83

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 84

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 85

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 86

Stable sort matters when a secondary key was set in a prior pass.

## entry 87

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 88

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 89

Walk both pointers from each end inward; advance the smaller side.

## entry 90

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 91

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 92

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 93

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 94

Monotonic stack pops while the new element violates the invariant.

## entry 95

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 96

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 97

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 98

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 99

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 100

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 101

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 102

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 103

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 104

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 105

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 106

Greedy by end-time picks the most non-overlapping intervals.

## entry 107

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 108

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 109

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 110

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 111

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 112

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 113

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 114

StringBuilder: amortize allocation by doubling on grow.

## entry 115

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 116

Union-Find with path compression amortizes to near-O(1) per op.

## entry 117

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 118

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 119

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 120

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 121

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 122

State compression: bitmask + integer encodes a small subset cheaply.

## entry 123

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 124

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 125

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 126

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 127

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 128

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 129

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 130

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 131

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 132

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 133

Walk both pointers from each end inward; advance the smaller side.

## entry 134

Wavelet tree: range k-th element in O(log Σ) time.

## entry 135

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 136

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 137

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 138

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 139

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 140

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 141

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 142

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 143

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 144

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 145

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 146

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 147

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 148

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 149

Walk both pointers from each end inward; advance the smaller side.

## entry 150

Union-Find with path compression amortizes to near-O(1) per op.

## entry 151

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 152

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 153

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 154

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 155

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 156

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 157

Monotonic stack pops while the new element violates the invariant.

## entry 158

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 159

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 160

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 161

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 162

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 163

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 164

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 165

Heap when you only need top-k; full sort is wasted work.

## entry 166

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 167

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 168

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 169

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 170

Splay tree: every access splays to the root; amortized O(log n).

## entry 171

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 172

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 173

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 174

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 175

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 176

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 177

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 178

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 179

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 180

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 181

StringBuilder: amortize allocation by doubling on grow.

## entry 182

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 183

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 184

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 185

LIS via patience: each pile holds the smallest tail of length k.

## entry 186

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 187

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 188

Articulation points: same DFS as bridges, with a slightly different test.

## entry 189

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 190

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 191

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 192

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 193

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 194

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 195

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 196

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 197

Articulation points: same DFS as bridges, with a slightly different test.

## entry 198

Union-Find with path compression amortizes to near-O(1) per op.

## entry 199

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 200

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 201

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 202

StringBuilder: amortize allocation by doubling on grow.

## entry 203

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 204

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 205

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 206

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 207

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 208

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 209

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 210

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 211

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 212

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 213

LIS via patience: each pile holds the smallest tail of length k.

## entry 214

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 215

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 216

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 217

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 218

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 219

LIS via patience: each pile holds the smallest tail of length k.

## entry 220

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 221

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 222

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 223

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 224

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 225

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 226

Union-Find with path compression amortizes to near-O(1) per op.

## entry 227

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 228

LIS via patience: each pile holds the smallest tail of length k.

## entry 229

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 230

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 231

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 232

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 233

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 234

LIS via patience: each pile holds the smallest tail of length k.

## entry 235

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 236

LIS via patience: each pile holds the smallest tail of length k.

## entry 237

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 238

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 239

StringBuilder: amortize allocation by doubling on grow.

## entry 240

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 241

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 242

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 243

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 244

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 245

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 246

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 247

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 248

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 249

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 250

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 251

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 252

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 253

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 254

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 255

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 256

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 257

Stable sort matters when a secondary key was set in a prior pass.

## entry 258

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 259

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 260

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 261

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 262

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 263

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 264

Union-Find with path compression amortizes to near-O(1) per op.

## entry 265

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 266

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 267

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 268

Heap when you only need top-k; full sort is wasted work.

## entry 269

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 270

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 271

Walk both pointers from each end inward; advance the smaller side.

## entry 272

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 273

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 274

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 275

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 276

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 277

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 278

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 279

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 280

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 281

Stable sort matters when a secondary key was set in a prior pass.

## entry 282

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 283

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 284

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 285

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 286

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 287

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 288

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 289

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 290

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 291

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 292

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 293

Stable sort matters when a secondary key was set in a prior pass.

## entry 294

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 295

Greedy by end-time picks the most non-overlapping intervals.

## entry 296

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 297

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 298

Walk both pointers from each end inward; advance the smaller side.

## entry 299

Splay tree: every access splays to the root; amortized O(log n).

## entry 300

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 301

Heap when you only need top-k; full sort is wasted work.

## entry 302

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 303

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 304

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 305

Heap when you only need top-k; full sort is wasted work.

## entry 306

Greedy by end-time picks the most non-overlapping intervals.

## entry 307

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 308

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 309

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 310

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 311

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 312

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 313

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 314

Walk both pointers from each end inward; advance the smaller side.

## entry 315

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 316

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 317

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 318

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 319

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 320

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 321

StringBuilder: amortize allocation by doubling on grow.

## entry 322

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 323

Union-Find with path compression amortizes to near-O(1) per op.

## entry 324

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 325

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 326

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 327

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 328

Monotonic stack pops while the new element violates the invariant.

## entry 329

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 330

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 331

Greedy by end-time picks the most non-overlapping intervals.

## entry 332

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 333

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 334

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 335

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 336

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 337

Heap when you only need top-k; full sort is wasted work.

## entry 338

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 339

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 340

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 341

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 342

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 343

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 344

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 345

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 346

Greedy by end-time picks the most non-overlapping intervals.

## entry 347

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 348

Heap when you only need top-k; full sort is wasted work.

## entry 349

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 350

StringBuilder: amortize allocation by doubling on grow.

## entry 351

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 352

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 353

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 354

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 355

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 356

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 357

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 358

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 359

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 360

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 361

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 362

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 363

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 364

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 365

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 366

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
