# edit-distance

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Walk both pointers from each end inward; advance the smaller side.

Manacher expands around each center, reusing prior radii via mirror reflection.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Heap when you only need top-k; full sort is wasted work.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Union-Find with path compression amortizes to near-O(1) per op.

Iterative DFS with an explicit stack avoids recursion-limit issues.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Monotonic stack pops while the new element violates the invariant.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Unbounded knapsack: capacity inner ascending allows item reuse.

Stable sort matters when a secondary key was set in a prior pass.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Greedy by end-time picks the most non-overlapping intervals.

Edit distance is LCS with a twist: substitution is a third option at each cell.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

In-place compaction uses two pointers: read advances always, write only on keep.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Morris traversal threads predecessors back to current node — O(1) extra space.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

LIS via patience: each pile holds the smallest tail of length k.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Merge intervals: sort by start; extend the running interval while overlapping.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1

Walk both pointers from each end inward; advance the smaller side.

## entry 2

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 3

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 4

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 5

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 6

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 7

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 8

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 9

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 10

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 11

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 12

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 13

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 14

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 15

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 16

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 17

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 18

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 19

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 20

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 21

State compression: bitmask + integer encodes a small subset cheaply.

## entry 22

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 23

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 24

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 25

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 26

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 27

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 28

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 29

Articulation points: same DFS as bridges, with a slightly different test.

## entry 30

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 31

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 32

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 33

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 34

Splay tree: every access splays to the root; amortized O(log n).

## entry 35

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 36

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 37

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 38

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 39

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 40

Heap when you only need top-k; full sort is wasted work.

## entry 41

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 42

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 43

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 44

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 45

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 46

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 47

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 48

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 49

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 50

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 51

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 52

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 53

Greedy by end-time picks the most non-overlapping intervals.

## entry 54

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 55

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 56

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 57

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 58

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 59

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 60

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 61

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 62

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 63

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 64

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 65

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 66

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 67

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 68

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 69

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 70

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 71

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 72

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 73

Walk both pointers from each end inward; advance the smaller side.

## entry 74

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 75

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 76

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 77

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 78

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 79

Monotonic stack pops while the new element violates the invariant.

## entry 80

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 81

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 82

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 83

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 84

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 85

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 86

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 87

Wavelet tree: range k-th element in O(log Σ) time.

## entry 88

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 89

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 90

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 91

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 92

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 93

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 94

Splay tree: every access splays to the root; amortized O(log n).

## entry 95

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 96

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 97

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 98

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 99

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 100

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 101

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 102

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 103

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 104

Monotonic stack pops while the new element violates the invariant.

## entry 105

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 106

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 107

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 108

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 109

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 110

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 111

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 112

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 113

State compression: bitmask + integer encodes a small subset cheaply.

## entry 114

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 115

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 116

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 117

Monotonic stack pops while the new element violates the invariant.

## entry 118

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 119

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 120

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 121

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 122

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 123

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 124

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 125

Wavelet tree: range k-th element in O(log Σ) time.

## entry 126

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 127

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 128

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 129

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 130

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 131

Wavelet tree: range k-th element in O(log Σ) time.

## entry 132

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 133

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 134

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 135

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 136

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 137

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 138

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 139

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 140

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 141

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 142

Stable sort matters when a secondary key was set in a prior pass.

## entry 143

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 144

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 145

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 146

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 147

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 148

Union-Find with path compression amortizes to near-O(1) per op.

## entry 149

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 150

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 151

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 152

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 153

Greedy by end-time picks the most non-overlapping intervals.

## entry 154

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 155

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 156

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 157

Monotonic stack pops while the new element violates the invariant.

## entry 158

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 159

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 160

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 161

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 162

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 163

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 164

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 165

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 166

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 167

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 168

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 169

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 170

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 171

Greedy by end-time picks the most non-overlapping intervals.

## entry 172

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 173

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 174

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 175

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 176

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 177

StringBuilder: amortize allocation by doubling on grow.

## entry 178

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 179

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 180

State compression: bitmask + integer encodes a small subset cheaply.

## entry 181

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 182

Union-Find with path compression amortizes to near-O(1) per op.

## entry 183

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 184

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 185

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 186

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 187

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 188

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 189

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 190

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 191

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 192

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 193

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 194

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 195

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 196

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 197

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 198

StringBuilder: amortize allocation by doubling on grow.

## entry 199

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 200

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 201

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 202

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 203

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 204

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 205

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 206

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 207

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 208

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 209

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 210

Articulation points: same DFS as bridges, with a slightly different test.

## entry 211

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 212

State compression: bitmask + integer encodes a small subset cheaply.

## entry 213

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 214

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 215

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 216

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 217

State compression: bitmask + integer encodes a small subset cheaply.

## entry 218

Stable sort matters when a secondary key was set in a prior pass.

## entry 219

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 220

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 221

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 222

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 223

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 224

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 225

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 226

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 227

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 228

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 229

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 230

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 231

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 232

Walk both pointers from each end inward; advance the smaller side.

## entry 233

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 234

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 235

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 236

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 237

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 238

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 239

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 240

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 241

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 242

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 243

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 244

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 245

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 246

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 247

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 248

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 249

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 250

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 251

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 252

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 253

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 254

Greedy by end-time picks the most non-overlapping intervals.

## entry 255

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 256

StringBuilder: amortize allocation by doubling on grow.

## entry 257

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 258

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 259

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 260

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 261

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 262

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 263

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 264

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 265

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 266

Greedy by end-time picks the most non-overlapping intervals.

## entry 267

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 268

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 269

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 270

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 271

Stable sort matters when a secondary key was set in a prior pass.

## entry 272

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 273

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 274

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 275

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 276

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 277

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 278

Wavelet tree: range k-th element in O(log Σ) time.

## entry 279

Greedy by end-time picks the most non-overlapping intervals.

## entry 280

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 281

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 282

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 283

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 284

State compression: bitmask + integer encodes a small subset cheaply.

## entry 285

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 286

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 287

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 288

Splay tree: every access splays to the root; amortized O(log n).

## entry 289

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 290

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 291

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 292

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 293

Greedy by end-time picks the most non-overlapping intervals.

## entry 294

State compression: bitmask + integer encodes a small subset cheaply.

## entry 295

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 296

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 297

Splay tree: every access splays to the root; amortized O(log n).

## entry 298

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 299

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 300

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 301

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 302

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 303

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 304

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 305

Articulation points: same DFS as bridges, with a slightly different test.

## entry 306

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 307

Greedy by end-time picks the most non-overlapping intervals.

## entry 308

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 309

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 310

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 311

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 312

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 313

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 314

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 315

State compression: bitmask + integer encodes a small subset cheaply.

## entry 316

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 317

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 318

Walk both pointers from each end inward; advance the smaller side.

## entry 319

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 320

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 321

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 322

StringBuilder: amortize allocation by doubling on grow.

## entry 323

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 324

Union-Find with path compression amortizes to near-O(1) per op.

## entry 325

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 326

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 327

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 328

Wavelet tree: range k-th element in O(log Σ) time.

## entry 329

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 330

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 331

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 332

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 333

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 334

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 335

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 336

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 337

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 338

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 339

State compression: bitmask + integer encodes a small subset cheaply.

## entry 340

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 341

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 342

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 343

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 344

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 345

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 346

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 347

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 348

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 349

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 350

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 351

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 352

Heap when you only need top-k; full sort is wasted work.

## entry 353

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 354

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 355

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 356

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 357

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 358

Monotonic stack pops while the new element violates the invariant.

## entry 359

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 360

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 361

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 362

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 363

Monotonic stack pops while the new element violates the invariant.

## entry 364

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 365

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 366

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 367

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 368

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 369

Heap when you only need top-k; full sort is wasted work.

## entry 370

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 371

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 372

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 373

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 374

Heap when you only need top-k; full sort is wasted work.

## entry 375

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 376

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 377

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 378

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 379

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 380

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 381

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 382

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 383

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 384

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 385

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 386

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 387

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 388

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 389

Euler tour flattens a tree into an array for range-query LCA.

## entry 390

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 391

LIS via patience: each pile holds the smallest tail of length k.

## entry 392

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 393

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 394

Euler tour flattens a tree into an array for range-query LCA.

## entry 395

Union-Find with path compression amortizes to near-O(1) per op.

## entry 396

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 397

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 398

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 399

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 400

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 401

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 402

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 403

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 404

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 405

Walk both pointers from each end inward; advance the smaller side.

## entry 406

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 407

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 408

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 409

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 410

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 411

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 412

Greedy by end-time picks the most non-overlapping intervals.

## entry 413

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 414

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 415

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 416

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 417

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 418

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 419

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 420

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 421

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 422

Articulation points: same DFS as bridges, with a slightly different test.

## entry 423

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 424

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 425

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 426

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 427

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 428

Articulation points: same DFS as bridges, with a slightly different test.

## entry 429

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 430

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 431

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 432

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 433

Euler tour flattens a tree into an array for range-query LCA.

## entry 434

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 435

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 436

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 437

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 438

Union-Find with path compression amortizes to near-O(1) per op.

## entry 439

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 440

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 441

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 442

Greedy by end-time picks the most non-overlapping intervals.

## entry 443

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 444

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 445

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 446

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 447

Union-Find with path compression amortizes to near-O(1) per op.

## entry 448

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 449

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 450

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 451

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 452

Greedy by end-time picks the most non-overlapping intervals.

## entry 453

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 454

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 455

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 456

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 457

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 458

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 459

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 460

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 461

LIS via patience: each pile holds the smallest tail of length k.

## entry 462

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 463

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 464

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 465

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 466

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 467

Union-Find with path compression amortizes to near-O(1) per op.

## entry 468

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 469

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 470

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 471

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 472

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 473

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 474

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 475

Monotonic stack pops while the new element violates the invariant.

## entry 476

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 477

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 478

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 479

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 480

Monotonic stack pops while the new element violates the invariant.

## entry 481

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 482

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 483

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 484

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 485

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 486

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 487

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 488

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 489

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 490

State compression: bitmask + integer encodes a small subset cheaply.

## entry 491

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 492

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 493

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 494

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 495

Heap when you only need top-k; full sort is wasted work.

## entry 496

Wavelet tree: range k-th element in O(log Σ) time.

## entry 497

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 498

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 499

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 500

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 501

Articulation points: same DFS as bridges, with a slightly different test.

## entry 502

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 503

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 504

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 505

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 506

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 507

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 508

Heap when you only need top-k; full sort is wasted work.

## entry 509

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 510

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 511

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 512

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 513

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 514

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 515

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 516

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 517

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 518

Heap when you only need top-k; full sort is wasted work.

## entry 519

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 520

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 521

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 522

LIS via patience: each pile holds the smallest tail of length k.

## entry 523

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 524

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 525

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 526

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 527

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 528

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 529

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 530

LIS via patience: each pile holds the smallest tail of length k.

## entry 531

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 532

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 533

Euler tour flattens a tree into an array for range-query LCA.

## entry 534

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 535

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 536

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 537

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 538

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 539

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 540

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 541

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 542

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 543

Walk both pointers from each end inward; advance the smaller side.

## entry 544

Euler tour flattens a tree into an array for range-query LCA.

## entry 545

Articulation points: same DFS as bridges, with a slightly different test.

## entry 546

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 547

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 548

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 549

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 550

State compression: bitmask + integer encodes a small subset cheaply.

## entry 551

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 552

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 553

LIS via patience: each pile holds the smallest tail of length k.

## entry 554

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 555

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 556

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 557

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 558

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 559

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 560

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 561

State compression: bitmask + integer encodes a small subset cheaply.

## entry 562

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 563

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 564

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 565

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 566

Heap when you only need top-k; full sort is wasted work.

## entry 567

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 568

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 569

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 570

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 571

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 572

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 573

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 574

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 575

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 576

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 577

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 578

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 579

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 580

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 581

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 582

StringBuilder: amortize allocation by doubling on grow.

## entry 583

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 584

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 585

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 586

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 587

Monotonic stack pops while the new element violates the invariant.

## entry 588

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 589

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 590

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 591

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 592

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 593

StringBuilder: amortize allocation by doubling on grow.

## entry 594

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
