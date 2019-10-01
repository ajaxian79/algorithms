# sparse-table

## entry 1

Union-Find with path compression amortizes to near-O(1) per op.

## entry 2

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 3

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5

Euler tour flattens a tree into an array for range-query LCA.

## entry 6

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 7

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 8

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 9

Splay tree: every access splays to the root; amortized O(log n).

## entry 10

Splay tree: every access splays to the root; amortized O(log n).

## entry 11

Wavelet tree: range k-th element in O(log Σ) time.

## entry 12

Wavelet tree: range k-th element in O(log Σ) time.

## entry 13

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 14

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 15

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 16

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 17

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 18

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 19

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 20

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 21

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 22

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 23

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 24

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 25

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 26

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 27

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 28

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 29

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 30

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 31

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 32

Monotonic stack pops while the new element violates the invariant.

## entry 33

Monotonic stack pops while the new element violates the invariant.

## entry 34

Articulation points: same DFS as bridges, with a slightly different test.

## entry 35

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 36

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 37

Euler tour flattens a tree into an array for range-query LCA.

## entry 38

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 39

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 40

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 41

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 42

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 43

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 44

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 45

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 46

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 47

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 48

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 49

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 50

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 51

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 52

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 53

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 54

Wavelet tree: range k-th element in O(log Σ) time.

## entry 55

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 56

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 57

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 58

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 59

LIS via patience: each pile holds the smallest tail of length k.

## entry 60

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 61

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 62

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 63

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 64

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 65

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 66

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 67

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 68

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 69

Wavelet tree: range k-th element in O(log Σ) time.

## entry 70

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 71

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 72

Monotonic stack pops while the new element violates the invariant.

## entry 73

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 74

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 75

StringBuilder: amortize allocation by doubling on grow.

## entry 76

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 77

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 78

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 79

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 80

Splay tree: every access splays to the root; amortized O(log n).

## entry 81

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 82

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 83

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 84

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 85

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 86

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 87

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 88

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 89

Euler tour flattens a tree into an array for range-query LCA.

## entry 90

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 91

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 92

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 93

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 94

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 95

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 96

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 97

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 98

Union-Find with path compression amortizes to near-O(1) per op.

## entry 99

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 100

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 101

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 102

Walk both pointers from each end inward; advance the smaller side.

## entry 103

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 104

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 105

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 106

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 107

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 108

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 109

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 110

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 111

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 112

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 113

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 114

LIS via patience: each pile holds the smallest tail of length k.

## entry 115

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 116

Wavelet tree: range k-th element in O(log Σ) time.

## entry 117

Union-Find with path compression amortizes to near-O(1) per op.

## entry 118

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 119

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 120

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 121

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 122

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 123

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 124

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 125

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 126

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 127

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 128

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 129

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 130

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 131

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 132

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 133

Greedy by end-time picks the most non-overlapping intervals.

## entry 134

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 135

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 136

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 137

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 138

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 139

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 140

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 141

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 142

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 143

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 144

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 145

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 146

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 147

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 148

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 149

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 150

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 151

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 152

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 153

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 154

StringBuilder: amortize allocation by doubling on grow.

## entry 155

Monotonic stack pops while the new element violates the invariant.

## entry 156

StringBuilder: amortize allocation by doubling on grow.

## entry 157

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 158

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 159

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 160

State compression: bitmask + integer encodes a small subset cheaply.

## entry 161

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 162

Greedy by end-time picks the most non-overlapping intervals.

## entry 163

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 164

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 165

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 166

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 167

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 168

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 169

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 170

Stable sort matters when a secondary key was set in a prior pass.

## entry 171

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 172

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 173

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 174

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 175

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 176

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 177

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 178

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 179

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 180

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 181

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 182

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 183

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 184

Splay tree: every access splays to the root; amortized O(log n).

## entry 185

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 186

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 187

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 188

Stable sort matters when a secondary key was set in a prior pass.

## entry 189

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 190

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 191

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 192

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 193

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 194

Heap when you only need top-k; full sort is wasted work.

## entry 195

Euler tour flattens a tree into an array for range-query LCA.

## entry 196

Splay tree: every access splays to the root; amortized O(log n).

## entry 197

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 198

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 199

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 200

Union-Find with path compression amortizes to near-O(1) per op.

## entry 201

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 202

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 203

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 204

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 205

Stable sort matters when a secondary key was set in a prior pass.

## entry 206

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 207

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 208

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 209

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 210

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 211

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 212

StringBuilder: amortize allocation by doubling on grow.

## entry 213

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 214

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 215

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 216

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 217

Union-Find with path compression amortizes to near-O(1) per op.

## entry 218

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 219

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 220

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 221

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 222

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 223

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 224

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 225

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 226

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 227

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 228

Splay tree: every access splays to the root; amortized O(log n).

## entry 229

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 230

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 231

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 232

Union-Find with path compression amortizes to near-O(1) per op.

## entry 233

Monotonic stack pops while the new element violates the invariant.

## entry 234

Monotonic stack pops while the new element violates the invariant.

## entry 235

Wavelet tree: range k-th element in O(log Σ) time.

## entry 236

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 237

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 238

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 239

LIS via patience: each pile holds the smallest tail of length k.

## entry 240

Greedy by end-time picks the most non-overlapping intervals.

## entry 241

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 242

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 243

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 244

Heap when you only need top-k; full sort is wasted work.

## entry 245

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 246

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 247

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 248

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 249

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 250

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 251

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 252

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 253

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 254

StringBuilder: amortize allocation by doubling on grow.

## entry 255

Greedy by end-time picks the most non-overlapping intervals.

## entry 256

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 257

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 258

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 259

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 260

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 261

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 262

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 263

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 264

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 265

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 266

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 267

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 268

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 269

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 270

Wavelet tree: range k-th element in O(log Σ) time.

## entry 271

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
