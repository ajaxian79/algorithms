# dp-2d

Unbounded knapsack: capacity inner ascending allows item reuse.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Walk both pointers from each end inward; advance the smaller side.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Morris traversal threads predecessors back to current node — O(1) extra space.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Merge intervals: sort by start; extend the running interval while overlapping.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Union-Find with path compression amortizes to near-O(1) per op.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

BFS layers carry implicit shortest-path distance in unweighted graphs.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Manacher expands around each center, reusing prior radii via mirror reflection.

Stable sort matters when a secondary key was set in a prior pass.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

In-place compaction uses two pointers: read advances always, write only on keep.

Heap when you only need top-k; full sort is wasted work.

## entry 1

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 6

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 7

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 8

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 9

LIS via patience: each pile holds the smallest tail of length k.

## entry 10

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 11

StringBuilder: amortize allocation by doubling on grow.

## entry 12

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 13

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 14

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 15

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 16

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 17

StringBuilder: amortize allocation by doubling on grow.

## entry 18

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 19

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 20

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 21

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 22

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 23

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 24

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 25

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 26

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 27

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 28

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 29

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 30

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 31

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 32

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 33

State compression: bitmask + integer encodes a small subset cheaply.

## entry 34

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 35

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 36

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 37

Heap when you only need top-k; full sort is wasted work.

## entry 38

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 39

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 40

Wavelet tree: range k-th element in O(log Σ) time.

## entry 41

State compression: bitmask + integer encodes a small subset cheaply.

## entry 42

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 43

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 44

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 45

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 46

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 47

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 48

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 49

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 50

StringBuilder: amortize allocation by doubling on grow.

## entry 51

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 52

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 53

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 54

Greedy by end-time picks the most non-overlapping intervals.

## entry 55

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 56

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 57

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 58

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 59

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 60

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 61

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 62

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 63

Monotonic stack pops while the new element violates the invariant.

## entry 64

Euler tour flattens a tree into an array for range-query LCA.

## entry 65

Walk both pointers from each end inward; advance the smaller side.

## entry 66

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 67

Monotonic stack pops while the new element violates the invariant.

## entry 68

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 69

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 70

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 71

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 72

Stable sort matters when a secondary key was set in a prior pass.

## entry 73

Greedy by end-time picks the most non-overlapping intervals.

## entry 74

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 75

Wavelet tree: range k-th element in O(log Σ) time.

## entry 76

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 77

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 78

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 79

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 80

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 81

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 82

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 83

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 84

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 85

StringBuilder: amortize allocation by doubling on grow.

## entry 86

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 87

Union-Find with path compression amortizes to near-O(1) per op.

## entry 88

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 89

Union-Find with path compression amortizes to near-O(1) per op.

## entry 90

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 91

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 92

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 93

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 94

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 95

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 96

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 97

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 98

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 99

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 100

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 101

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 102

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 103

Wavelet tree: range k-th element in O(log Σ) time.

## entry 104

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 105

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 106

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 107

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 108

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 109

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 110

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 111

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 112

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 113

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 114

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 115

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 116

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 117

Splay tree: every access splays to the root; amortized O(log n).

## entry 118

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 119

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 120

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 121

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 122

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 123

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 124

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 125

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 126

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 127

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 128

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 129

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 130

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 131

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 132

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 133

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 134

Stable sort matters when a secondary key was set in a prior pass.

## entry 135

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 136

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 137

Stable sort matters when a secondary key was set in a prior pass.

## entry 138

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 139

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 140

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 141

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 142

Euler tour flattens a tree into an array for range-query LCA.

## entry 143

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 144

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 145

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 146

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 147

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 148

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 149

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 150

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 151

State compression: bitmask + integer encodes a small subset cheaply.

## entry 152

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 153

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 154

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 155

StringBuilder: amortize allocation by doubling on grow.

## entry 156

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 157

Wavelet tree: range k-th element in O(log Σ) time.

## entry 158

Wavelet tree: range k-th element in O(log Σ) time.

## entry 159

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 160

Monotonic stack pops while the new element violates the invariant.

## entry 161

Articulation points: same DFS as bridges, with a slightly different test.

## entry 162

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 163

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 164

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 165

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 166

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 167

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 168

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 169

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 170

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 171

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 172

Greedy by end-time picks the most non-overlapping intervals.

## entry 173

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 174

Stable sort matters when a secondary key was set in a prior pass.

## entry 175

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 176

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 177

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 178

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 179

Stable sort matters when a secondary key was set in a prior pass.

## entry 180

Heap when you only need top-k; full sort is wasted work.

## entry 181

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 182

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 183

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 184

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 185

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 186

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 187

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 188

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 189

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 190

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 191

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 192

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 193

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 194

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 195

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 196

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 197

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 198

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 199

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 200

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 201

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 202

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 203

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 204

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 205

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 206

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 207

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 208

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 209

Splay tree: every access splays to the root; amortized O(log n).

## entry 210

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 211

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 212

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 213

Union-Find with path compression amortizes to near-O(1) per op.

## entry 214

State compression: bitmask + integer encodes a small subset cheaply.

## entry 215

Articulation points: same DFS as bridges, with a slightly different test.

## entry 216

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 217

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 218

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 219

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 220

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 221

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 222

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 223

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 224

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 225

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 226

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 227

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 228

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 229

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 230

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 231

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 232

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 233

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 234

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 235

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 236

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 237

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 238

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 239

Heap when you only need top-k; full sort is wasted work.

## entry 240

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 241

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 242

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 243

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 244

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 245

State compression: bitmask + integer encodes a small subset cheaply.

## entry 246

Monotonic stack pops while the new element violates the invariant.

## entry 247

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 248

State compression: bitmask + integer encodes a small subset cheaply.

## entry 249

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 250

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 251

Walk both pointers from each end inward; advance the smaller side.

## entry 252

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 253

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 254

Wavelet tree: range k-th element in O(log Σ) time.

## entry 255

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 256

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 257

Monotonic stack pops while the new element violates the invariant.

## entry 258

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 259

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 260

Wavelet tree: range k-th element in O(log Σ) time.

## entry 261

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 262

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 263

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 264

StringBuilder: amortize allocation by doubling on grow.

## entry 265

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 266

Heap when you only need top-k; full sort is wasted work.

## entry 267

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 268

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 269

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 270

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 271

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 272

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 273

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 274

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 275

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 276

Stable sort matters when a secondary key was set in a prior pass.

## entry 277

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 278

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 279

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 280

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 281

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 282

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 283

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 284

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 285

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 286

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 287

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 288

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 289

Articulation points: same DFS as bridges, with a slightly different test.

## entry 290

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 291

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 292

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 293

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 294

Walk both pointers from each end inward; advance the smaller side.

## entry 295

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 296

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 297

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 298

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 299

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 300

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 301

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 302

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 303

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 304

StringBuilder: amortize allocation by doubling on grow.

## entry 305

Heap when you only need top-k; full sort is wasted work.

## entry 306

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 307

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 308

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 309

Monotonic stack pops while the new element violates the invariant.

## entry 310

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 311

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 312

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 313

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 314

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 315

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 316

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 317

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 318

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 319

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 320

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 321

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 322

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 323

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 324

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 325

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 326

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 327

Monotonic stack pops while the new element violates the invariant.

## entry 328

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 329

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 330

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 331

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 332

StringBuilder: amortize allocation by doubling on grow.

## entry 333

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 334

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 335

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 336

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 337

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 338

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 339

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 340

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 341

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 342

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 343

Euler tour flattens a tree into an array for range-query LCA.

## entry 344

Heap when you only need top-k; full sort is wasted work.

## entry 345

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 346

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 347

State compression: bitmask + integer encodes a small subset cheaply.

## entry 348

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 349

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 350

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 351

Union-Find with path compression amortizes to near-O(1) per op.

## entry 352

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 353

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 354

Walk both pointers from each end inward; advance the smaller side.

## entry 355

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 356

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 357

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 358

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 359

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 360

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 361

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 362

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 363

Heap when you only need top-k; full sort is wasted work.

## entry 364

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 365

StringBuilder: amortize allocation by doubling on grow.

## entry 366

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 367

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 368

Greedy by end-time picks the most non-overlapping intervals.

## entry 369

Greedy by end-time picks the most non-overlapping intervals.

## entry 370

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 371

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 372

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 373

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 374

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 375

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 376

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 377

StringBuilder: amortize allocation by doubling on grow.

## entry 378

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 379

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 380

Splay tree: every access splays to the root; amortized O(log n).

## entry 381

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 382

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 383

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 384

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 385

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 386

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 387

Monotonic stack pops while the new element violates the invariant.

## entry 388

Walk both pointers from each end inward; advance the smaller side.

## entry 389

Union-Find with path compression amortizes to near-O(1) per op.

## entry 390

Wavelet tree: range k-th element in O(log Σ) time.

## entry 391

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 392

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 393

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 394

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 395

Articulation points: same DFS as bridges, with a slightly different test.

## entry 396

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 397

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 398

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 399

Monotonic stack pops while the new element violates the invariant.

## entry 400

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 401

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 402

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 403

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 404

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 405

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 406

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 407

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 408

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 409

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 410

Walk both pointers from each end inward; advance the smaller side.

## entry 411

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 412

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 413

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 414

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 415

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 416

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 417

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 418

Greedy by end-time picks the most non-overlapping intervals.

## entry 419

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 420

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 421

StringBuilder: amortize allocation by doubling on grow.

## entry 422

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 423

LIS via patience: each pile holds the smallest tail of length k.

## entry 424

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 425

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 426

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 427

Splay tree: every access splays to the root; amortized O(log n).

## entry 428

Greedy by end-time picks the most non-overlapping intervals.

## entry 429

Stable sort matters when a secondary key was set in a prior pass.

## entry 430

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 431

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 432

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 433

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 434

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 435

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 436

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 437

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 438

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 439

Walk both pointers from each end inward; advance the smaller side.

## entry 440

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 441

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 442

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 443

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 444

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 445

Greedy by end-time picks the most non-overlapping intervals.

## entry 446

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 447

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 448

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 449

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 450

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 451

Heap when you only need top-k; full sort is wasted work.

## entry 452

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 453

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 454

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 455

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 456

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 457

Greedy by end-time picks the most non-overlapping intervals.

## entry 458

Stable sort matters when a secondary key was set in a prior pass.

## entry 459

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 460

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 461

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 462

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 463

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 464

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 465

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 466

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 467

Splay tree: every access splays to the root; amortized O(log n).

## entry 468

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 469

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 470

StringBuilder: amortize allocation by doubling on grow.

## entry 471

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 472

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 473

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 474

State compression: bitmask + integer encodes a small subset cheaply.

## entry 475

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 476

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 477

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 478

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 479

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 480

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 481

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 482

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 483

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 484

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 485

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 486

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 487

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 488

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 489

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 490

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 491

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 492

Stable sort matters when a secondary key was set in a prior pass.

## entry 493

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 494

Walk both pointers from each end inward; advance the smaller side.

## entry 495

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 496

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 497

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 498

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 499

Euler tour flattens a tree into an array for range-query LCA.

## entry 500

LIS via patience: each pile holds the smallest tail of length k.

## entry 501

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 502

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 503

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 504

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 505

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 506

Stable sort matters when a secondary key was set in a prior pass.

## entry 507

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 508

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 509

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 510

StringBuilder: amortize allocation by doubling on grow.

## entry 511

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 512

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 513

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 514

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 515

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 516

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 517

Stable sort matters when a secondary key was set in a prior pass.

## entry 518

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 519

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 520

State compression: bitmask + integer encodes a small subset cheaply.

## entry 521

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 522

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 523

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 524

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 525

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 526

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 527

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 528

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 529

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 530

Greedy by end-time picks the most non-overlapping intervals.

## entry 531

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 532

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 533

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 534

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 535

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 536

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 537

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 538

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 539

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 540

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 541

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 542

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 543

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 544

Splay tree: every access splays to the root; amortized O(log n).

## entry 545

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 546

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 547

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 548

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 549

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 550

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 551

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 552

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 553

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 554

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 555

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 556

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 557

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 558

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 559

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 560

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 561

LIS via patience: each pile holds the smallest tail of length k.

## entry 562

Splay tree: every access splays to the root; amortized O(log n).

## entry 563

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 564

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 565

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 566

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 567

LIS via patience: each pile holds the smallest tail of length k.

## entry 568

Walk both pointers from each end inward; advance the smaller side.

## entry 569

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 570

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 571

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 572

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 573

LIS via patience: each pile holds the smallest tail of length k.

## entry 574

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 575

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 576

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 577

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 578

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 579

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 580

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 581

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 582

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 583

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 584

State compression: bitmask + integer encodes a small subset cheaply.

## entry 585

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 586

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 587

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 588

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 589

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 590

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 591

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 592

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 593

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 594

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 595

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 596

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 597

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 598

Heap when you only need top-k; full sort is wasted work.

## entry 599

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 600

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 601

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 602

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 603

Stable sort matters when a secondary key was set in a prior pass.

## entry 604

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 605

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 606

Monotonic stack pops while the new element violates the invariant.

## entry 607

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 608

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 609

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 610

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 611

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 612

Articulation points: same DFS as bridges, with a slightly different test.

## entry 613

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 614

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 615

Euler tour flattens a tree into an array for range-query LCA.

## entry 616

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 617

Heap when you only need top-k; full sort is wasted work.

## entry 618

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 619

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 620

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 621

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 622

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 623

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 624

Stable sort matters when a secondary key was set in a prior pass.

## entry 625

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 626

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 627

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 628

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 629

LIS via patience: each pile holds the smallest tail of length k.

## entry 630

Greedy by end-time picks the most non-overlapping intervals.

## entry 631

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 632

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 633

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 634

Euler tour flattens a tree into an array for range-query LCA.

## entry 635

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 636

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 637

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 638

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 639

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 640

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 641

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 642

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 643

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 644

Union-Find with path compression amortizes to near-O(1) per op.

## entry 645

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
