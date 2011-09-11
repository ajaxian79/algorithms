# sliding-window

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Unbounded knapsack: capacity inner ascending allows item reuse.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Monotonic stack pops while the new element violates the invariant.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Greedy by end-time picks the most non-overlapping intervals.

Heap when you only need top-k; full sort is wasted work.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Walk both pointers from each end inward; advance the smaller side.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Morris traversal threads predecessors back to current node — O(1) extra space.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Merge intervals: sort by start; extend the running interval while overlapping.

Union-Find with path compression amortizes to near-O(1) per op.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

LIS via patience: each pile holds the smallest tail of length k.

## entry 1

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 2

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 3

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4

State compression: bitmask + integer encodes a small subset cheaply.

## entry 5

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 6

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 7

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 8

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 9

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 10

StringBuilder: amortize allocation by doubling on grow.

## entry 11

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 12

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 13

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 14

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 15

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 16

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 17

Walk both pointers from each end inward; advance the smaller side.

## entry 18

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 19

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 20

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 21

LIS via patience: each pile holds the smallest tail of length k.

## entry 22

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 23

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 24

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 25

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 26

Wavelet tree: range k-th element in O(log Σ) time.

## entry 27

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 28

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 29

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 30

Monotonic stack pops while the new element violates the invariant.

## entry 31

Greedy by end-time picks the most non-overlapping intervals.

## entry 32

Stable sort matters when a secondary key was set in a prior pass.

## entry 33

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 34

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 35

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 36

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 37

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 38

Stable sort matters when a secondary key was set in a prior pass.

## entry 39

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 40

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 41

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 42

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 43

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 44

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 45

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 46

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 47

LIS via patience: each pile holds the smallest tail of length k.

## entry 48

StringBuilder: amortize allocation by doubling on grow.

## entry 49

Greedy by end-time picks the most non-overlapping intervals.

## entry 50

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 51

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 52

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 53

StringBuilder: amortize allocation by doubling on grow.

## entry 54

State compression: bitmask + integer encodes a small subset cheaply.

## entry 55

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 56

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 57

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 58

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 59

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 60

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 61

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 62

State compression: bitmask + integer encodes a small subset cheaply.

## entry 63

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 64

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 65

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 66

Greedy by end-time picks the most non-overlapping intervals.

## entry 67

Splay tree: every access splays to the root; amortized O(log n).

## entry 68

State compression: bitmask + integer encodes a small subset cheaply.

## entry 69

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 70

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 71

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 72

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 73

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 74

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 75

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 76

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 77

Articulation points: same DFS as bridges, with a slightly different test.

## entry 78

LIS via patience: each pile holds the smallest tail of length k.

## entry 79

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 80

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 81

StringBuilder: amortize allocation by doubling on grow.

## entry 82

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 83

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 84

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 85

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 86

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 87

Articulation points: same DFS as bridges, with a slightly different test.

## entry 88

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 89

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 90

LIS via patience: each pile holds the smallest tail of length k.

## entry 91

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 92

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 93

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 94

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 95

Stable sort matters when a secondary key was set in a prior pass.

## entry 96

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 97

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 98

Walk both pointers from each end inward; advance the smaller side.

## entry 99

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 100

Stable sort matters when a secondary key was set in a prior pass.

## entry 101

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 102

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 103

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 104

Greedy by end-time picks the most non-overlapping intervals.

## entry 105

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 106

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 107

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 108

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 109

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 110

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 111

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 112

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 113

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 114

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 115

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 116

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 117

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 118

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 119

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 120

LIS via patience: each pile holds the smallest tail of length k.

## entry 121

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 122

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 123

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 124

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 125

Walk both pointers from each end inward; advance the smaller side.

## entry 126

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 127

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 128

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 129

Heap when you only need top-k; full sort is wasted work.

## entry 130

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 131

Euler tour flattens a tree into an array for range-query LCA.

## entry 132

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 133

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 134

Monotonic stack pops while the new element violates the invariant.

## entry 135

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 136

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 137

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 138

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 139

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 140

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 141

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 142

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 143

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 144

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 145

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 146

Wavelet tree: range k-th element in O(log Σ) time.

## entry 147

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 148

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 149

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 150

Wavelet tree: range k-th element in O(log Σ) time.

## entry 151

Articulation points: same DFS as bridges, with a slightly different test.

## entry 152

LIS via patience: each pile holds the smallest tail of length k.

## entry 153

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 154

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 155

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 156

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 157

Stable sort matters when a secondary key was set in a prior pass.

## entry 158

Union-Find with path compression amortizes to near-O(1) per op.

## entry 159

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 160

State compression: bitmask + integer encodes a small subset cheaply.

## entry 161

Greedy by end-time picks the most non-overlapping intervals.

## entry 162

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 163

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 164

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 165

State compression: bitmask + integer encodes a small subset cheaply.

## entry 166

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 167

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 168

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 169

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 170

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 171

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 172

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 173

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 174

Union-Find with path compression amortizes to near-O(1) per op.

## entry 175

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 176

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 177

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 178

Union-Find with path compression amortizes to near-O(1) per op.

## entry 179

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 180

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 181

LIS via patience: each pile holds the smallest tail of length k.

## entry 182

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 183

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 184

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 185

Wavelet tree: range k-th element in O(log Σ) time.

## entry 186

Wavelet tree: range k-th element in O(log Σ) time.

## entry 187

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 188

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 189

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 190

Walk both pointers from each end inward; advance the smaller side.

## entry 191

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 192

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 193

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 194

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 195

StringBuilder: amortize allocation by doubling on grow.

## entry 196

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 197

StringBuilder: amortize allocation by doubling on grow.

## entry 198

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 199

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 200

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 201

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 202

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 203

Heap when you only need top-k; full sort is wasted work.

## entry 204

Greedy by end-time picks the most non-overlapping intervals.

## entry 205

Euler tour flattens a tree into an array for range-query LCA.

## entry 206

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 207

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 208

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 209

StringBuilder: amortize allocation by doubling on grow.

## entry 210

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 211

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 212

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 213

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 214

LIS via patience: each pile holds the smallest tail of length k.

## entry 215

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 216

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 217

State compression: bitmask + integer encodes a small subset cheaply.

## entry 218

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 219

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 220

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 221

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 222

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 223

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 224

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 225

Walk both pointers from each end inward; advance the smaller side.

## entry 226

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 227

Euler tour flattens a tree into an array for range-query LCA.

## entry 228

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 229

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 230

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 231

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 232

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 233

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 234

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 235

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 236

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 237

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 238

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 239

Wavelet tree: range k-th element in O(log Σ) time.

## entry 240

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 241

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 242

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 243

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 244

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 245

StringBuilder: amortize allocation by doubling on grow.

## entry 246

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 247

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 248

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 249

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 250

Union-Find with path compression amortizes to near-O(1) per op.

## entry 251

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 252

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 253

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 254

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 255

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 256

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 257

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 258

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 259

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 260

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 261

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 262

Splay tree: every access splays to the root; amortized O(log n).

## entry 263

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 264

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 265

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 266

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 267

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 268

LIS via patience: each pile holds the smallest tail of length k.

## entry 269

Walk both pointers from each end inward; advance the smaller side.

## entry 270

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 271

Greedy by end-time picks the most non-overlapping intervals.

## entry 272

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 273

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 274

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 275

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 276

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 277

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 278

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 279

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 280

StringBuilder: amortize allocation by doubling on grow.

## entry 281

Union-Find with path compression amortizes to near-O(1) per op.

## entry 282

Euler tour flattens a tree into an array for range-query LCA.

## entry 283

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 284

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 285

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 286

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 287

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 288

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 289

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 290

Union-Find with path compression amortizes to near-O(1) per op.

## entry 291

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 292

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 293

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 294

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 295

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 296

State compression: bitmask + integer encodes a small subset cheaply.

## entry 297

State compression: bitmask + integer encodes a small subset cheaply.

## entry 298

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 299

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 300

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 301

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 302

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 303

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 304

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 305

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 306

Monotonic stack pops while the new element violates the invariant.

## entry 307

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 308

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 309

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 310

Union-Find with path compression amortizes to near-O(1) per op.

## entry 311

Union-Find with path compression amortizes to near-O(1) per op.

## entry 312

Splay tree: every access splays to the root; amortized O(log n).

## entry 313

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 314

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 315

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 316

StringBuilder: amortize allocation by doubling on grow.

## entry 317

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 318

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 319

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 320

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 321

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 322

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 323

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 324

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 325

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 326

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 327

Union-Find with path compression amortizes to near-O(1) per op.

## entry 328

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 329

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 330

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 331

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 332

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 333

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 334

Splay tree: every access splays to the root; amortized O(log n).

## entry 335

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 336

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 337

LIS via patience: each pile holds the smallest tail of length k.

## entry 338

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 339

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 340

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 341

Articulation points: same DFS as bridges, with a slightly different test.

## entry 342

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 343

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 344

Articulation points: same DFS as bridges, with a slightly different test.

## entry 345

Articulation points: same DFS as bridges, with a slightly different test.

## entry 346

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 347

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 348

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 349

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 350

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 351

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 352

Greedy by end-time picks the most non-overlapping intervals.

## entry 353

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 354

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 355

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 356

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 357

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 358

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 359

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 360

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 361

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 362

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 363

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 364

Euler tour flattens a tree into an array for range-query LCA.

## entry 365

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 366

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 367

LIS via patience: each pile holds the smallest tail of length k.

## entry 368

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 369

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 370

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 371

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 372

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 373

State compression: bitmask + integer encodes a small subset cheaply.

## entry 374

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 375

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 376

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 377

Heap when you only need top-k; full sort is wasted work.

## entry 378

State compression: bitmask + integer encodes a small subset cheaply.

## entry 379

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 380

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 381

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 382

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 383

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 384

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 385

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 386

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 387

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 388

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 389

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 390

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 391

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 392

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 393

StringBuilder: amortize allocation by doubling on grow.

## entry 394

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 395

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 396

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 397

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 398

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 399

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 400

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 401

Union-Find with path compression amortizes to near-O(1) per op.

## entry 402

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 403

Monotonic stack pops while the new element violates the invariant.

## entry 404

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 405

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 406

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 407

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 408

Wavelet tree: range k-th element in O(log Σ) time.

## entry 409

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 410

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 411

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 412

StringBuilder: amortize allocation by doubling on grow.

## entry 413

Union-Find with path compression amortizes to near-O(1) per op.

## entry 414

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 415

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 416

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 417

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 418

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 419

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 420

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 421

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 422

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 423

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 424

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 425

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 426

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 427

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 428

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 429

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 430

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 431

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 432

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 433

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 434

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 435

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 436

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 437

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 438

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 439

Euler tour flattens a tree into an array for range-query LCA.

## entry 440

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 441

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 442

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 443

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 444

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 445

Wavelet tree: range k-th element in O(log Σ) time.

## entry 446

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 447

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 448

Splay tree: every access splays to the root; amortized O(log n).

## entry 449

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 450

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 451

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 452

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 453

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 454

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 455

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 456

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 457

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 458

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 459

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 460

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 461

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 462

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 463

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 464

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 465

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 466

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 467

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 468

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 469

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 470

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 471

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 472

Wavelet tree: range k-th element in O(log Σ) time.

## entry 473

LIS via patience: each pile holds the smallest tail of length k.

## entry 474

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 475

LIS via patience: each pile holds the smallest tail of length k.

## entry 476

Splay tree: every access splays to the root; amortized O(log n).

## entry 477

Monotonic stack pops while the new element violates the invariant.

## entry 478

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 479

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 480

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 481

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 482

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 483

Splay tree: every access splays to the root; amortized O(log n).

## entry 484

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 485

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 486

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 487

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 488

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 489

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 490

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 491

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 492

Stable sort matters when a secondary key was set in a prior pass.

## entry 493

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 494

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 495

Greedy by end-time picks the most non-overlapping intervals.

## entry 496

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 497

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 498

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 499

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 500

State compression: bitmask + integer encodes a small subset cheaply.

## entry 501

Greedy by end-time picks the most non-overlapping intervals.

## entry 502

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 503

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 504

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 505

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 506

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 507

LIS via patience: each pile holds the smallest tail of length k.

## entry 508

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 509

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 510

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 511

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 512

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 513

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 514

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 515

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 516

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 517

Articulation points: same DFS as bridges, with a slightly different test.

## entry 518

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 519

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 520

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 521

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 522

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 523

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 524

Wavelet tree: range k-th element in O(log Σ) time.

## entry 525

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 526

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 527

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 528

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 529

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 530

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 531

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 532

Wavelet tree: range k-th element in O(log Σ) time.

## entry 533

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 534

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 535

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 536

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 537

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 538

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 539

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 540

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 541

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 542

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 543

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 544

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 545

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 546

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 547

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 548

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 549

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 550

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 551

Euler tour flattens a tree into an array for range-query LCA.

## entry 552

Monotonic stack pops while the new element violates the invariant.

## entry 553

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 554

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 555

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 556

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 557

Heap when you only need top-k; full sort is wasted work.

## entry 558

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 559

Greedy by end-time picks the most non-overlapping intervals.

## entry 560

State compression: bitmask + integer encodes a small subset cheaply.

## entry 561

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 562

Articulation points: same DFS as bridges, with a slightly different test.

## entry 563

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 564

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 565

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 566

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 567

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 568

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 569

Greedy by end-time picks the most non-overlapping intervals.

## entry 570

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 571

Greedy by end-time picks the most non-overlapping intervals.

## entry 572

LIS via patience: each pile holds the smallest tail of length k.

## entry 573

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 574

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 575

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 576

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 577

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 578

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 579

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 580

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 581

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 582

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 583

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 584

Walk both pointers from each end inward; advance the smaller side.

## entry 585

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 586

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 587

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 588

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 589

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 590

Euler tour flattens a tree into an array for range-query LCA.

## entry 591

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 592

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 593

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 594

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 595

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 596

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 597

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 598

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 599

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 600

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 601

Articulation points: same DFS as bridges, with a slightly different test.

## entry 602

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 603

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 604

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 605

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 606

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 607

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 608

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 609

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 610

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 611

Monotonic stack pops while the new element violates the invariant.

## entry 612

Stable sort matters when a secondary key was set in a prior pass.

## entry 613

Union-Find with path compression amortizes to near-O(1) per op.

## entry 614

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 615

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 616

ASCII rules are a strict subset of UTF-8; no special handling needed.
