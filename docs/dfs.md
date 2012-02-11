# dfs

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Greedy by end-time picks the most non-overlapping intervals.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Union-Find with path compression amortizes to near-O(1) per op.

Heap when you only need top-k; full sort is wasted work.

Stable sort matters when a secondary key was set in a prior pass.

Walk both pointers from each end inward; advance the smaller side.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Iterative DFS with an explicit stack avoids recursion-limit issues.

In-place compaction uses two pointers: read advances always, write only on keep.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Merge intervals: sort by start; extend the running interval while overlapping.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Monotonic stack pops while the new element violates the invariant.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

LIS via patience: each pile holds the smallest tail of length k.

Unbounded knapsack: capacity inner ascending allows item reuse.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 1

Wavelet tree: range k-th element in O(log Σ) time.

## entry 2

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 3

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 4

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 5

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 6

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 7

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 8

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 9

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 10

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 11

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 12

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 13

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 14

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 15

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 16

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 17

State compression: bitmask + integer encodes a small subset cheaply.

## entry 18

Splay tree: every access splays to the root; amortized O(log n).

## entry 19

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 20

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 21

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 22

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 23

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 24

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 25

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 26

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 27

Wavelet tree: range k-th element in O(log Σ) time.

## entry 28

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 29

Euler tour flattens a tree into an array for range-query LCA.

## entry 30

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 31

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 32

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 33

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 34

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 35

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 36

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 37

State compression: bitmask + integer encodes a small subset cheaply.

## entry 38

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 39

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 40

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 41

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 42

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 43

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 44

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 45

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 46

Stable sort matters when a secondary key was set in a prior pass.

## entry 47

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 48

Wavelet tree: range k-th element in O(log Σ) time.

## entry 49

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 50

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 51

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 52

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 53

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 54

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 55

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 56

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 57

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 58

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 59

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 60

Articulation points: same DFS as bridges, with a slightly different test.

## entry 61

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 62

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 63

LIS via patience: each pile holds the smallest tail of length k.

## entry 64

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 65

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 66

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 67

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 68

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 69

State compression: bitmask + integer encodes a small subset cheaply.

## entry 70

LIS via patience: each pile holds the smallest tail of length k.

## entry 71

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 72

Articulation points: same DFS as bridges, with a slightly different test.

## entry 73

Euler tour flattens a tree into an array for range-query LCA.

## entry 74

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 75

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 76

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 77

Stable sort matters when a secondary key was set in a prior pass.

## entry 78

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 79

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 80

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 81

StringBuilder: amortize allocation by doubling on grow.

## entry 82

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 83

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 84

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 85

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 86

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 87

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 88

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 89

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 90

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 91

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 92

StringBuilder: amortize allocation by doubling on grow.

## entry 93

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 94

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 95

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 96

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 97

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 98

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 99

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 100

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 101

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 102

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 103

Walk both pointers from each end inward; advance the smaller side.

## entry 104

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 105

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 106

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 107

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 108

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 109

StringBuilder: amortize allocation by doubling on grow.

## entry 110

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 111

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 112

Heap when you only need top-k; full sort is wasted work.

## entry 113

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 114

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 115

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 116

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 117

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 118

Splay tree: every access splays to the root; amortized O(log n).

## entry 119

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 120

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 121

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 122

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 123

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 124

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 125

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 126

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 127

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 128

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 129

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 130

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 131

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 132

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 133

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 134

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 135

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 136

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 137

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 138

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 139

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 140

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 141

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 142

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 143

State compression: bitmask + integer encodes a small subset cheaply.

## entry 144

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 145

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 146

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 147

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 148

Euler tour flattens a tree into an array for range-query LCA.

## entry 149

Monotonic stack pops while the new element violates the invariant.

## entry 150

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 151

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 152

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 153

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 154

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 155

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 156

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 157

Stable sort matters when a secondary key was set in a prior pass.

## entry 158

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 159

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 160

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 161

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 162

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 163

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 164

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 165

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 166

Wavelet tree: range k-th element in O(log Σ) time.

## entry 167

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 168

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 169

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 170

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 171

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 172

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 173

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 174

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 175

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 176

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 177

Articulation points: same DFS as bridges, with a slightly different test.

## entry 178

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 179

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 180

Splay tree: every access splays to the root; amortized O(log n).

## entry 181

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 182

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 183

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 184

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 185

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 186

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 187

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 188

Euler tour flattens a tree into an array for range-query LCA.

## entry 189

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 190

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 191

Euler tour flattens a tree into an array for range-query LCA.

## entry 192

Walk both pointers from each end inward; advance the smaller side.

## entry 193

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 194

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 195

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 196

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 197

Wavelet tree: range k-th element in O(log Σ) time.

## entry 198

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 199

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 200

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 201

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 202

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 203

Wavelet tree: range k-th element in O(log Σ) time.

## entry 204

Monotonic stack pops while the new element violates the invariant.

## entry 205

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 206

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 207

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 208

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 209

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 210

Greedy by end-time picks the most non-overlapping intervals.

## entry 211

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 212

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 213

Articulation points: same DFS as bridges, with a slightly different test.

## entry 214

Articulation points: same DFS as bridges, with a slightly different test.

## entry 215

Greedy by end-time picks the most non-overlapping intervals.

## entry 216

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 217

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 218

Stable sort matters when a secondary key was set in a prior pass.

## entry 219

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 220

StringBuilder: amortize allocation by doubling on grow.

## entry 221

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 222

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 223

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 224

Stable sort matters when a secondary key was set in a prior pass.

## entry 225

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 226

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 227

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 228

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 229

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 230

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 231

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 232

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 233

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 234

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 235

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 236

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 237

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 238

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 239

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 240

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 241

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 242

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 243

Union-Find with path compression amortizes to near-O(1) per op.

## entry 244

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 245

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 246

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 247

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 248

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 249

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 250

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 251

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 252

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 253

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 254

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 255

Wavelet tree: range k-th element in O(log Σ) time.

## entry 256

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 257

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 258

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 259

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 260

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 261

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 262

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 263

Splay tree: every access splays to the root; amortized O(log n).

## entry 264

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 265

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 266

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 267

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 268

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 269

Heap when you only need top-k; full sort is wasted work.

## entry 270

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 271

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 272

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 273

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 274

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 275

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 276

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 277

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 278

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 279

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 280

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 281

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 282

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 283

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 284

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 285

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 286

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 287

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 288

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 289

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 290

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 291

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 292

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 293

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 294

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 295

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 296

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 297

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 298

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 299

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 300

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 301

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 302

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 303

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 304

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 305

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 306

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 307

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 308

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 309

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 310

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 311

Monotonic stack pops while the new element violates the invariant.

## entry 312

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 313

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 314

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 315

State compression: bitmask + integer encodes a small subset cheaply.

## entry 316

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 317

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 318

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 319

Monotonic stack pops while the new element violates the invariant.

## entry 320

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 321

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 322

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 323

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 324

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 325

LIS via patience: each pile holds the smallest tail of length k.

## entry 326

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 327

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 328

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 329

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 330

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 331

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 332

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 333

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 334

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 335

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 336

Union-Find with path compression amortizes to near-O(1) per op.

## entry 337

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 338

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 339

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 340

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 341

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 342

Union-Find with path compression amortizes to near-O(1) per op.

## entry 343

Greedy by end-time picks the most non-overlapping intervals.

## entry 344

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 345

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 346

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 347

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 348

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 349

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 350

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 351

Euler tour flattens a tree into an array for range-query LCA.

## entry 352

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 353

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 354

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 355

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 356

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 357

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 358

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 359

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 360

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 361

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 362

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 363

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 364

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 365

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 366

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 367

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 368

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 369

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 370

State compression: bitmask + integer encodes a small subset cheaply.

## entry 371

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 372

Splay tree: every access splays to the root; amortized O(log n).

## entry 373

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 374

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 375

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 376

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 377

Euler tour flattens a tree into an array for range-query LCA.

## entry 378

Greedy by end-time picks the most non-overlapping intervals.

## entry 379

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 380

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 381

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 382

Greedy by end-time picks the most non-overlapping intervals.

## entry 383

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 384

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 385

Wavelet tree: range k-th element in O(log Σ) time.

## entry 386

Greedy by end-time picks the most non-overlapping intervals.

## entry 387

Greedy by end-time picks the most non-overlapping intervals.

## entry 388

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 389

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 390

Greedy by end-time picks the most non-overlapping intervals.

## entry 391

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 392

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 393

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 394

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 395

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 396

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 397

Union-Find with path compression amortizes to near-O(1) per op.

## entry 398

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 399

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 400

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 401

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 402

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 403

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 404

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 405

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 406

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 407

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 408

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 409

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 410

Union-Find with path compression amortizes to near-O(1) per op.

## entry 411

Monotonic stack pops while the new element violates the invariant.

## entry 412

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 413

State compression: bitmask + integer encodes a small subset cheaply.

## entry 414

Splay tree: every access splays to the root; amortized O(log n).

## entry 415

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 416

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 417

Walk both pointers from each end inward; advance the smaller side.

## entry 418

Greedy by end-time picks the most non-overlapping intervals.

## entry 419

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 420

Stable sort matters when a secondary key was set in a prior pass.

## entry 421

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 422

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 423

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 424

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 425

Stable sort matters when a secondary key was set in a prior pass.

## entry 426

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 427

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 428

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 429

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 430

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 431

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 432

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 433

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 434

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 435

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 436

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 437

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 438

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 439

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 440

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 441

Splay tree: every access splays to the root; amortized O(log n).

## entry 442

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 443

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 444

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 445

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 446

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 447

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 448

Articulation points: same DFS as bridges, with a slightly different test.

## entry 449

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 450

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 451

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 452

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 453

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 454

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 455

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 456

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 457

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 458

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 459

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 460

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 461

Union-Find with path compression amortizes to near-O(1) per op.

## entry 462

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 463

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 464

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 465

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 466

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 467

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 468

Splay tree: every access splays to the root; amortized O(log n).

## entry 469

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 470

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 471

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 472

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 473

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 474

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 475

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 476

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 477

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 478

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 479

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 480

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 481

LIS via patience: each pile holds the smallest tail of length k.

## entry 482

Stable sort matters when a secondary key was set in a prior pass.

## entry 483

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 484

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 485

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 486

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 487

StringBuilder: amortize allocation by doubling on grow.

## entry 488

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 489

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 490

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 491

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 492

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 493

Greedy by end-time picks the most non-overlapping intervals.

## entry 494

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 495

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 496

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 497

Union-Find with path compression amortizes to near-O(1) per op.

## entry 498

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 499

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 500

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 501

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 502

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 503

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 504

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 505

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 506

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 507

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 508

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 509

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 510

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 511

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 512

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 513

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 514

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 515

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 516

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 517

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 518

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 519

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 520

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 521

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 522

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 523

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 524

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 525

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 526

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 527

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 528

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 529

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 530

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 531

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 532

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 533

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 534

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 535

LIS via patience: each pile holds the smallest tail of length k.

## entry 536

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 537

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 538

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 539

State compression: bitmask + integer encodes a small subset cheaply.

## entry 540

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 541

Euler tour flattens a tree into an array for range-query LCA.

## entry 542

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 543

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 544

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 545

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 546

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 547

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 548

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 549

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 550

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 551

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 552

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 553

Union-Find with path compression amortizes to near-O(1) per op.

## entry 554

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 555

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 556

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 557

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 558

Stable sort matters when a secondary key was set in a prior pass.

## entry 559

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 560

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 561

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 562

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 563

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 564

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 565

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 566

StringBuilder: amortize allocation by doubling on grow.

## entry 567

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 568

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 569

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 570

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 571

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 572

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 573

State compression: bitmask + integer encodes a small subset cheaply.

## entry 574

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 575

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 576

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 577

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 578

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 579

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 580

LIS via patience: each pile holds the smallest tail of length k.

## entry 581

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 582

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 583

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 584

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 585

Walk both pointers from each end inward; advance the smaller side.

## entry 586

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 587

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 588

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 589

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 590

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 591

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 592

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 593

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 594

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 595

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 596

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 597

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 598

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 599

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 600

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 601

State compression: bitmask + integer encodes a small subset cheaply.

## entry 602

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 603

State compression: bitmask + integer encodes a small subset cheaply.

## entry 604

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 605

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 606

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 607

Euler tour flattens a tree into an array for range-query LCA.

## entry 608

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 609

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 610

Splay tree: every access splays to the root; amortized O(log n).

## entry 611

Rope: tree of small string fragments; O(log n) concat and substring.
