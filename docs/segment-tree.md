# segment-tree

Morris traversal threads predecessors back to current node — O(1) extra space.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

LIS via patience: each pile holds the smallest tail of length k.

Manacher expands around each center, reusing prior radii via mirror reflection.

Union-Find with path compression amortizes to near-O(1) per op.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Stable sort matters when a secondary key was set in a prior pass.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Iterative DFS with an explicit stack avoids recursion-limit issues.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Heap when you only need top-k; full sort is wasted work.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Walk both pointers from each end inward; advance the smaller side.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Unbounded knapsack: capacity inner ascending allows item reuse.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Monotonic stack pops while the new element violates the invariant.

Merge intervals: sort by start; extend the running interval while overlapping.

Greedy by end-time picks the most non-overlapping intervals.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 2

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 3

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 4

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 6

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 7

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 8

Euler tour flattens a tree into an array for range-query LCA.

## entry 9

State compression: bitmask + integer encodes a small subset cheaply.

## entry 10

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 11

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 12

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 13

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 14

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 15

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 16

StringBuilder: amortize allocation by doubling on grow.

## entry 17

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 18

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 19

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 20

StringBuilder: amortize allocation by doubling on grow.

## entry 21

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 22

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 23

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 24

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 25

Monotonic stack pops while the new element violates the invariant.

## entry 26

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 27

Stable sort matters when a secondary key was set in a prior pass.

## entry 28

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 29

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 30

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 31

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 32

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 33

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 34

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 35

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 36

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 37

Articulation points: same DFS as bridges, with a slightly different test.

## entry 38

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 39

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 40

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 41

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 42

Euler tour flattens a tree into an array for range-query LCA.

## entry 43

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 44

Heap when you only need top-k; full sort is wasted work.

## entry 45

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 46

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 47

Monotonic stack pops while the new element violates the invariant.

## entry 48

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 49

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 50

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 51

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 52

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 53

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 54

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 55

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 56

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 57

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 58

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 59

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 60

Splay tree: every access splays to the root; amortized O(log n).

## entry 61

Heap when you only need top-k; full sort is wasted work.

## entry 62

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 63

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 64

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 65

StringBuilder: amortize allocation by doubling on grow.

## entry 66

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 67

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 68

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 69

Stable sort matters when a secondary key was set in a prior pass.

## entry 70

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 71

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 72

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 73

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 74

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 75

Monotonic stack pops while the new element violates the invariant.

## entry 76

Stable sort matters when a secondary key was set in a prior pass.

## entry 77

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 78

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 79

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 80

Monotonic stack pops while the new element violates the invariant.

## entry 81

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 82

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 83

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 84

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 85

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 86

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 87

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 88

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 89

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 90

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 91

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 92

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 93

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 94

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 95

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 96

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 97

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 98

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 99

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 100

State compression: bitmask + integer encodes a small subset cheaply.

## entry 101

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 102

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 103

State compression: bitmask + integer encodes a small subset cheaply.

## entry 104

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 105

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 106

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 107

Greedy by end-time picks the most non-overlapping intervals.

## entry 108

Articulation points: same DFS as bridges, with a slightly different test.

## entry 109

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 110

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 111

Wavelet tree: range k-th element in O(log Σ) time.

## entry 112

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 113

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 114

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 115

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 116

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 117

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 118

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 119

Monotonic stack pops while the new element violates the invariant.

## entry 120

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 121

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 122

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 123

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 124

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 125

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 126

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 127

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 128

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 129

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 130

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 131

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 132

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 133

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 134

Greedy by end-time picks the most non-overlapping intervals.

## entry 135

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 136

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 137

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 138

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 139

LIS via patience: each pile holds the smallest tail of length k.

## entry 140

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 141

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 142

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 143

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 144

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 145

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 146

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 147

Union-Find with path compression amortizes to near-O(1) per op.

## entry 148

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 149

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 150

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 151

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 152

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 153

Stable sort matters when a secondary key was set in a prior pass.

## entry 154

Union-Find with path compression amortizes to near-O(1) per op.

## entry 155

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 156

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 157

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 158

Heap when you only need top-k; full sort is wasted work.

## entry 159

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 160

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 161

Wavelet tree: range k-th element in O(log Σ) time.

## entry 162

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 163

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 164

State compression: bitmask + integer encodes a small subset cheaply.

## entry 165

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 166

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 167

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 168

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 169

Monotonic stack pops while the new element violates the invariant.

## entry 170

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 171

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 172

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 173

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 174

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 175

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 176

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 177

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 178

Walk both pointers from each end inward; advance the smaller side.

## entry 179

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 180

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 181

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 182

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 183

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 184

Greedy by end-time picks the most non-overlapping intervals.

## entry 185

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 186

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 187

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 188

Monotonic stack pops while the new element violates the invariant.

## entry 189

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 190

Heap when you only need top-k; full sort is wasted work.

## entry 191

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 192

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 193

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 194

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 195

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 196

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 197

Monotonic stack pops while the new element violates the invariant.

## entry 198

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 199

Monotonic stack pops while the new element violates the invariant.

## entry 200

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 201

Monotonic stack pops while the new element violates the invariant.

## entry 202

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 203

Splay tree: every access splays to the root; amortized O(log n).

## entry 204

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 205

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 206

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 207

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 208

Stable sort matters when a secondary key was set in a prior pass.

## entry 209

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 210

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 211

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 212

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 213

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 214

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 215

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 216

State compression: bitmask + integer encodes a small subset cheaply.

## entry 217

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 218

Splay tree: every access splays to the root; amortized O(log n).

## entry 219

Splay tree: every access splays to the root; amortized O(log n).

## entry 220

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 221

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 222

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 223

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 224

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 225

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 226

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 227

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 228

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 229

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 230

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 231

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 232

Articulation points: same DFS as bridges, with a slightly different test.

## entry 233

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 234

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 235

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 236

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 237

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 238

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 239

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 240

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 241

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 242

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 243

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 244

Stable sort matters when a secondary key was set in a prior pass.

## entry 245

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 246

Splay tree: every access splays to the root; amortized O(log n).

## entry 247

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 248

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 249

Splay tree: every access splays to the root; amortized O(log n).

## entry 250

State compression: bitmask + integer encodes a small subset cheaply.

## entry 251

StringBuilder: amortize allocation by doubling on grow.

## entry 252

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 253

Walk both pointers from each end inward; advance the smaller side.

## entry 254

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 255

Stable sort matters when a secondary key was set in a prior pass.

## entry 256

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 257

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 258

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 259

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 260

Euler tour flattens a tree into an array for range-query LCA.

## entry 261

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 262

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 263

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 264

Walk both pointers from each end inward; advance the smaller side.

## entry 265

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 266

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 267

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 268

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 269

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 270

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 271

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 272

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 273

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 274

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 275

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 276

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 277

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 278

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 279

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 280

Monotonic stack pops while the new element violates the invariant.

## entry 281

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 282

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 283

State compression: bitmask + integer encodes a small subset cheaply.

## entry 284

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 285

Splay tree: every access splays to the root; amortized O(log n).

## entry 286

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 287

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 288

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 289

LIS via patience: each pile holds the smallest tail of length k.

## entry 290

Articulation points: same DFS as bridges, with a slightly different test.

## entry 291

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 292

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 293

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 294

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 295

Articulation points: same DFS as bridges, with a slightly different test.

## entry 296

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 297

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 298

Euler tour flattens a tree into an array for range-query LCA.

## entry 299

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 300

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 301

Articulation points: same DFS as bridges, with a slightly different test.

## entry 302

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 303

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 304

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 305

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 306

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 307

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 308

Splay tree: every access splays to the root; amortized O(log n).

## entry 309

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 310

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 311

Heap when you only need top-k; full sort is wasted work.

## entry 312

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 313

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 314

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 315

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 316

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 317

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 318

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 319

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 320

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 321

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 322

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 323

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 324

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 325

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 326

LIS via patience: each pile holds the smallest tail of length k.

## entry 327

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 328

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 329

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 330

Splay tree: every access splays to the root; amortized O(log n).

## entry 331

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 332

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 333

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 334

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 335

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 336

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 337

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 338

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 339

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 340

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 341

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 342

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 343

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 344

Greedy by end-time picks the most non-overlapping intervals.

## entry 345

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 346

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 347

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 348

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 349

State compression: bitmask + integer encodes a small subset cheaply.

## entry 350

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 351

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 352

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 353

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 354

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 355

Monotonic stack pops while the new element violates the invariant.

## entry 356

State compression: bitmask + integer encodes a small subset cheaply.

## entry 357

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 358

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 359

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 360

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 361

Articulation points: same DFS as bridges, with a slightly different test.

## entry 362

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 363

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 364

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 365

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 366

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 367

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 368

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 369

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 370

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 371

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 372

Heap when you only need top-k; full sort is wasted work.

## entry 373

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 374

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 375

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 376

Euler tour flattens a tree into an array for range-query LCA.

## entry 377

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 378

StringBuilder: amortize allocation by doubling on grow.

## entry 379

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 380

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 381

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 382

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 383

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 384

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 385

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 386

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 387

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 388

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 389

LIS via patience: each pile holds the smallest tail of length k.

## entry 390

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 391

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 392

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 393

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 394

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 395

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 396

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 397

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 398

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 399

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 400

Union-Find with path compression amortizes to near-O(1) per op.

## entry 401

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 402

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 403

Articulation points: same DFS as bridges, with a slightly different test.

## entry 404

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 405

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 406

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 407

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 408

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 409

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 410

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 411

Greedy by end-time picks the most non-overlapping intervals.

## entry 412

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 413

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 414

Wavelet tree: range k-th element in O(log Σ) time.

## entry 415

Euler tour flattens a tree into an array for range-query LCA.

## entry 416

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 417

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 418

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 419

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 420

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 421

State compression: bitmask + integer encodes a small subset cheaply.

## entry 422

Wavelet tree: range k-th element in O(log Σ) time.

## entry 423

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 424

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 425

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 426

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 427

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 428

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 429

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 430

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 431

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 432

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 433

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 434

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 435

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 436

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 437

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 438

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 439

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 440

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 441

Greedy by end-time picks the most non-overlapping intervals.

## entry 442

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 443

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 444

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 445

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 446

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 447

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 448

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 449

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 450

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 451

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 452

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 453

StringBuilder: amortize allocation by doubling on grow.

## entry 454

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 455

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 456

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 457

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 458

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 459

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 460

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 461

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 462

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 463

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 464

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 465

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 466

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 467

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 468

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 469

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 470

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 471

Euler tour flattens a tree into an array for range-query LCA.

## entry 472

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 473

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 474

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 475

Euler tour flattens a tree into an array for range-query LCA.

## entry 476

Articulation points: same DFS as bridges, with a slightly different test.

## entry 477

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 478

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 479

Walk both pointers from each end inward; advance the smaller side.

## entry 480

Greedy by end-time picks the most non-overlapping intervals.

## entry 481

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 482

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 483

Euler tour flattens a tree into an array for range-query LCA.

## entry 484

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 485

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 486

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 487

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 488

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 489

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 490

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 491

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 492

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 493

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 494

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 495

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 496

Greedy by end-time picks the most non-overlapping intervals.

## entry 497

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 498

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 499

Union-Find with path compression amortizes to near-O(1) per op.

## entry 500

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 501

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 502

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 503

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 504

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 505

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 506

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 507

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 508

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 509

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 510

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 511

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 512

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 513

StringBuilder: amortize allocation by doubling on grow.

## entry 514

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 515

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 516

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 517

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 518

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 519

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 520

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 521

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 522

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 523

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 524

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 525

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 526

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 527

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 528

LIS via patience: each pile holds the smallest tail of length k.

## entry 529

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 530

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 531

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 532

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 533

Articulation points: same DFS as bridges, with a slightly different test.

## entry 534

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 535

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 536

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 537

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 538

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 539

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 540

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 541

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 542

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 543

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 544

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 545

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 546

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 547

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 548

Splay tree: every access splays to the root; amortized O(log n).

## entry 549

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 550

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 551

Euler tour flattens a tree into an array for range-query LCA.

## entry 552

Wavelet tree: range k-th element in O(log Σ) time.

## entry 553

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 554

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 555

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 556

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 557

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 558

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 559

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 560

Greedy by end-time picks the most non-overlapping intervals.

## entry 561

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 562

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 563

StringBuilder: amortize allocation by doubling on grow.

## entry 564

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 565

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 566

Wavelet tree: range k-th element in O(log Σ) time.

## entry 567

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 568

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 569

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 570

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 571

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 572

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 573

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 574

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 575

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 576

Greedy by end-time picks the most non-overlapping intervals.

## entry 577

Monotonic stack pops while the new element violates the invariant.

## entry 578

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 579

Articulation points: same DFS as bridges, with a slightly different test.

## entry 580

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 581

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 582

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 583

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 584

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 585

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 586

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 587

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 588

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 589

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 590

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 591

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 592

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 593

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 594

Wavelet tree: range k-th element in O(log Σ) time.

## entry 595

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 596

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 597

Wavelet tree: range k-th element in O(log Σ) time.

## entry 598

BFS layers carry implicit shortest-path distance in unweighted graphs.
