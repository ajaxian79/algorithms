# monotonic-stack

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

In-place compaction uses two pointers: read advances always, write only on keep.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Stable sort matters when a secondary key was set in a prior pass.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Walk both pointers from each end inward; advance the smaller side.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Edit distance is LCS with a twist: substitution is a third option at each cell.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Pick a pivot, partition, recurse on the side that contains the kth slot.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Monotonic stack pops while the new element violates the invariant.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Unbounded knapsack: capacity inner ascending allows item reuse.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Morris traversal threads predecessors back to current node — O(1) extra space.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

LIS via patience: each pile holds the smallest tail of length k.

Heap when you only need top-k; full sort is wasted work.

Greedy by end-time picks the most non-overlapping intervals.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 1

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 3

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 5

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 6

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 7

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 8

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 9

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 10

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 11

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 12

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 13

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 14

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 15

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 16

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 17

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 18

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 19

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 20

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 21

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 22

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 23

Stable sort matters when a secondary key was set in a prior pass.

## entry 24

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 25

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 26

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 27

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 28

Stable sort matters when a secondary key was set in a prior pass.

## entry 29

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 30

Articulation points: same DFS as bridges, with a slightly different test.

## entry 31

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 32

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 33

Heap when you only need top-k; full sort is wasted work.

## entry 34

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 35

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 36

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 37

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 38

State compression: bitmask + integer encodes a small subset cheaply.

## entry 39

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 40

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 41

Euler tour flattens a tree into an array for range-query LCA.

## entry 42

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 43

Union-Find with path compression amortizes to near-O(1) per op.

## entry 44

Splay tree: every access splays to the root; amortized O(log n).

## entry 45

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 46

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 47

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 48

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 49

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 50

Heap when you only need top-k; full sort is wasted work.

## entry 51

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 52

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 53

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 54

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 55

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 56

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 57

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 58

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 59

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 60

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 61

Union-Find with path compression amortizes to near-O(1) per op.

## entry 62

Articulation points: same DFS as bridges, with a slightly different test.

## entry 63

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 64

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 65

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 66

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 67

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 68

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 69

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 70

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 71

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 72

Greedy by end-time picks the most non-overlapping intervals.

## entry 73

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 74

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 75

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 76

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 77

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 78

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 79

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 80

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 81

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 82

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 83

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 84

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 85

Monotonic stack pops while the new element violates the invariant.

## entry 86

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 87

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 88

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 89

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 90

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 91

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 92

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 93

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 94

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 95

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 96

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 97

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 98

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 99

Splay tree: every access splays to the root; amortized O(log n).

## entry 100

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 101

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 102

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 103

Monotonic stack pops while the new element violates the invariant.

## entry 104

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 105

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 106

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 107

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 108

Heap when you only need top-k; full sort is wasted work.

## entry 109

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 110

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 111

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 112

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 113

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 114

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 115

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 116

LIS via patience: each pile holds the smallest tail of length k.

## entry 117

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 118

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 119

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 120

Walk both pointers from each end inward; advance the smaller side.

## entry 121

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 122

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 123

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 124

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 125

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 126

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 127

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 128

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 129

Greedy by end-time picks the most non-overlapping intervals.

## entry 130

State compression: bitmask + integer encodes a small subset cheaply.

## entry 131

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 132

Monotonic stack pops while the new element violates the invariant.

## entry 133

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 134

Union-Find with path compression amortizes to near-O(1) per op.

## entry 135

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 136

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 137

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 138

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 139

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 140

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 141

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 142

LIS via patience: each pile holds the smallest tail of length k.

## entry 143

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 144

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 145

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 146

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 147

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 148

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 149

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 150

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 151

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 152

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 153

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 154

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 155

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 156

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 157

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 158

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 159

Union-Find with path compression amortizes to near-O(1) per op.

## entry 160

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 161

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 162

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 163

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 164

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 165

LIS via patience: each pile holds the smallest tail of length k.

## entry 166

Wavelet tree: range k-th element in O(log Σ) time.

## entry 167

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 168

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 169

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 170

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 171

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 172

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 173

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 174

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 175

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 176

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 177

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 178

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 179

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 180

Euler tour flattens a tree into an array for range-query LCA.

## entry 181

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 182

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 183

LIS via patience: each pile holds the smallest tail of length k.

## entry 184

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 185

Union-Find with path compression amortizes to near-O(1) per op.

## entry 186

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 187

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 188

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 189

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 190

Splay tree: every access splays to the root; amortized O(log n).

## entry 191

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 192

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 193

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 194

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 195

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 196

Splay tree: every access splays to the root; amortized O(log n).

## entry 197

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 198

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 199

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 200

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 201

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 202

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 203

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 204

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 205

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 206

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 207

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 208

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 209

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 210

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 211

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 212

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 213

Union-Find with path compression amortizes to near-O(1) per op.

## entry 214

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 215

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 216

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 217

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 218

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 219

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 220

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 221

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 222

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 223

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 224

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 225

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 226

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 227

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 228

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 229

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 230

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 231

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 232

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 233

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 234

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 235

Wavelet tree: range k-th element in O(log Σ) time.

## entry 236

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 237

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 238

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 239

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 240

Splay tree: every access splays to the root; amortized O(log n).

## entry 241

StringBuilder: amortize allocation by doubling on grow.

## entry 242

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 243

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 244

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 245

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 246

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 247

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 248

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 249

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 250

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 251

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 252

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 253

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 254

Walk both pointers from each end inward; advance the smaller side.

## entry 255

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 256

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 257

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 258

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 259

Greedy by end-time picks the most non-overlapping intervals.

## entry 260

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 261

Greedy by end-time picks the most non-overlapping intervals.

## entry 262

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 263

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 264

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 265

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 266

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 267

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 268

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 269

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 270

Wavelet tree: range k-th element in O(log Σ) time.

## entry 271

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 272

Union-Find with path compression amortizes to near-O(1) per op.

## entry 273

Euler tour flattens a tree into an array for range-query LCA.

## entry 274

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 275

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 276

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 277

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 278

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 279

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 280

LIS via patience: each pile holds the smallest tail of length k.

## entry 281

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 282

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 283

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 284

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 285

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 286

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 287

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 288

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 289

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 290

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 291

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 292

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 293

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 294

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 295

Walk both pointers from each end inward; advance the smaller side.

## entry 296

Greedy by end-time picks the most non-overlapping intervals.

## entry 297

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 298

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 299

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 300

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 301

Greedy by end-time picks the most non-overlapping intervals.

## entry 302

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 303

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 304

Heap when you only need top-k; full sort is wasted work.

## entry 305

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 306

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 307

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 308

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 309

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 310

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 311

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 312

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 313

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 314

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 315

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 316

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 317

Monotonic stack pops while the new element violates the invariant.

## entry 318

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 319

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 320

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 321

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 322

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 323

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 324

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 325

Walk both pointers from each end inward; advance the smaller side.

## entry 326

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 327

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 328

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 329

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 330

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 331

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 332

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 333

StringBuilder: amortize allocation by doubling on grow.

## entry 334

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 335

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 336

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 337

State compression: bitmask + integer encodes a small subset cheaply.

## entry 338

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 339

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 340

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 341

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 342

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 343

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 344

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 345

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 346

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 347

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 348

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 349

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 350

State compression: bitmask + integer encodes a small subset cheaply.

## entry 351

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 352

Heap when you only need top-k; full sort is wasted work.

## entry 353

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 354

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 355

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 356

Union-Find with path compression amortizes to near-O(1) per op.

## entry 357

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 358

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 359

Walk both pointers from each end inward; advance the smaller side.

## entry 360

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 361

Monotonic stack pops while the new element violates the invariant.

## entry 362

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 363

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 364

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 365

StringBuilder: amortize allocation by doubling on grow.

## entry 366

Stable sort matters when a secondary key was set in a prior pass.

## entry 367

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 368

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 369

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 370

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 371

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 372

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 373

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 374

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 375

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 376

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 377

LIS via patience: each pile holds the smallest tail of length k.

## entry 378

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 379

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 380

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 381

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 382

Walk both pointers from each end inward; advance the smaller side.

## entry 383

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 384

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 385

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 386

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 387

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 388

Stable sort matters when a secondary key was set in a prior pass.

## entry 389

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 390

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 391

Wavelet tree: range k-th element in O(log Σ) time.

## entry 392

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 393

Wavelet tree: range k-th element in O(log Σ) time.

## entry 394

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 395

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 396

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 397

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 398

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 399

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 400

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 401

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 402

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 403

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 404

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 405

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 406

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 407

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 408

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 409

State compression: bitmask + integer encodes a small subset cheaply.

## entry 410

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 411

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 412

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 413

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 414

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 415

Union-Find with path compression amortizes to near-O(1) per op.

## entry 416

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 417

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 418

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 419

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 420

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 421

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 422

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 423

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 424

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 425

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 426

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 427

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 428

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 429

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 430

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 431

Splay tree: every access splays to the root; amortized O(log n).

## entry 432

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 433

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 434

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 435

State compression: bitmask + integer encodes a small subset cheaply.

## entry 436

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 437

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 438

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 439

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 440

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 441

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 442

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 443

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 444

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 445

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 446

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 447

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 448

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 449

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 450

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 451

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 452

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 453

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 454

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 455

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 456

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 457

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 458

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 459

Articulation points: same DFS as bridges, with a slightly different test.

## entry 460

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 461

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 462

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 463

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 464

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 465

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 466

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 467

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 468

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 469

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 470

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 471

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 472

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 473

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 474

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 475

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 476

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 477

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 478

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 479

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 480

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 481

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 482

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 483

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 484

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 485

StringBuilder: amortize allocation by doubling on grow.

## entry 486

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 487

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 488

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 489

Wavelet tree: range k-th element in O(log Σ) time.

## entry 490

StringBuilder: amortize allocation by doubling on grow.

## entry 491

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 492

Polynomial rolling hash with two moduli kills almost all collisions in practice.
