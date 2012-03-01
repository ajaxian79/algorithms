# sieve

LIS via patience: each pile holds the smallest tail of length k.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Monotonic stack pops while the new element violates the invariant.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Heap when you only need top-k; full sort is wasted work.

Morris traversal threads predecessors back to current node — O(1) extra space.

Stable sort matters when a secondary key was set in a prior pass.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Walk both pointers from each end inward; advance the smaller side.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Unbounded knapsack: capacity inner ascending allows item reuse.

Manacher expands around each center, reusing prior radii via mirror reflection.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Merge intervals: sort by start; extend the running interval while overlapping.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

In-place compaction uses two pointers: read advances always, write only on keep.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Union-Find with path compression amortizes to near-O(1) per op.

Iterative DFS with an explicit stack avoids recursion-limit issues.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 1

Euler tour flattens a tree into an array for range-query LCA.

## entry 2

Splay tree: every access splays to the root; amortized O(log n).

## entry 3

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 4

State compression: bitmask + integer encodes a small subset cheaply.

## entry 5

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 6

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 7

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 8

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 9

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 10

LIS via patience: each pile holds the smallest tail of length k.

## entry 11

Euler tour flattens a tree into an array for range-query LCA.

## entry 12

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 13

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 14

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 15

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 16

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 17

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 18

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 19

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 20

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 21

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 22

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 23

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 24

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 25

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 26

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 27

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 28

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 29

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 30

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 31

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 32

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 33

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 34

Greedy by end-time picks the most non-overlapping intervals.

## entry 35

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 36

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 37

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 38

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 39

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 40

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 41

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 42

LIS via patience: each pile holds the smallest tail of length k.

## entry 43

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 44

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 45

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 46

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 47

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 48

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 49

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 50

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 51

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 52

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 53

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 54

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 55

Walk both pointers from each end inward; advance the smaller side.

## entry 56

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 57

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 58

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 59

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 60

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 61

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 62

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 63

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 64

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 65

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 66

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 67

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 68

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 69

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 70

Stable sort matters when a secondary key was set in a prior pass.

## entry 71

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 72

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 73

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 74

Articulation points: same DFS as bridges, with a slightly different test.

## entry 75

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 76

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 77

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 78

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 79

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 80

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 81

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 82

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 83

Heap when you only need top-k; full sort is wasted work.

## entry 84

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 85

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 86

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 87

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 88

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 89

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 90

Splay tree: every access splays to the root; amortized O(log n).

## entry 91

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 92

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 93

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 94

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 95

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 96

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 97

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 98

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 99

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 100

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 101

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 102

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 103

State compression: bitmask + integer encodes a small subset cheaply.

## entry 104

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 105

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 106

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 107

Wavelet tree: range k-th element in O(log Σ) time.

## entry 108

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 109

Splay tree: every access splays to the root; amortized O(log n).

## entry 110

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 111

Monotonic stack pops while the new element violates the invariant.

## entry 112

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 113

StringBuilder: amortize allocation by doubling on grow.

## entry 114

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 115

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 116

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 117

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 118

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 119

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 120

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 121

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 122

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 123

Monotonic stack pops while the new element violates the invariant.

## entry 124

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 125

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 126

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 127

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 128

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 129

Splay tree: every access splays to the root; amortized O(log n).

## entry 130

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 131

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 132

Union-Find with path compression amortizes to near-O(1) per op.

## entry 133

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 134

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 135

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 136

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 137

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 138

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 139

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 140

Splay tree: every access splays to the root; amortized O(log n).

## entry 141

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 142

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 143

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 144

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 145

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 146

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 147

LIS via patience: each pile holds the smallest tail of length k.

## entry 148

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 149

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 150

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 151

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 152

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 153

Heap when you only need top-k; full sort is wasted work.

## entry 154

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 155

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 156

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 157

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 158

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 159

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 160

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 161

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 162

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 163

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 164

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 165

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 166

Monotonic stack pops while the new element violates the invariant.

## entry 167

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 168

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 169

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 170

Splay tree: every access splays to the root; amortized O(log n).

## entry 171

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 172

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 173

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 174

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 175

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 176

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 177

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 178

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 179

Articulation points: same DFS as bridges, with a slightly different test.

## entry 180

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 181

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 182

Stable sort matters when a secondary key was set in a prior pass.

## entry 183

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 184

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 185

Stable sort matters when a secondary key was set in a prior pass.

## entry 186

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 187

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 188

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 189

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 190

Articulation points: same DFS as bridges, with a slightly different test.

## entry 191

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 192

Walk both pointers from each end inward; advance the smaller side.

## entry 193

Walk both pointers from each end inward; advance the smaller side.

## entry 194

Monotonic stack pops while the new element violates the invariant.

## entry 195

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 196

State compression: bitmask + integer encodes a small subset cheaply.

## entry 197

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 198

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 199

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 200

Wavelet tree: range k-th element in O(log Σ) time.

## entry 201

Euler tour flattens a tree into an array for range-query LCA.

## entry 202

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 203

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 204

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 205

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 206

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 207

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 208

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 209

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 210

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 211

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 212

Walk both pointers from each end inward; advance the smaller side.

## entry 213

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 214

Splay tree: every access splays to the root; amortized O(log n).

## entry 215

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 216

Walk both pointers from each end inward; advance the smaller side.

## entry 217

StringBuilder: amortize allocation by doubling on grow.

## entry 218

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 219

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 220

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 221

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 222

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 223

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 224

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 225

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 226

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 227

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 228

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 229

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 230

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 231

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 232

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 233

Union-Find with path compression amortizes to near-O(1) per op.

## entry 234

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 235

Articulation points: same DFS as bridges, with a slightly different test.

## entry 236

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 237

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 238

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 239

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 240

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 241

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 242

Euler tour flattens a tree into an array for range-query LCA.

## entry 243

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 244

Heap when you only need top-k; full sort is wasted work.

## entry 245

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 246

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 247

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 248

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 249

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 250

StringBuilder: amortize allocation by doubling on grow.

## entry 251

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 252

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 253

LIS via patience: each pile holds the smallest tail of length k.

## entry 254

Greedy by end-time picks the most non-overlapping intervals.

## entry 255

Articulation points: same DFS as bridges, with a slightly different test.

## entry 256

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 257

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 258

Euler tour flattens a tree into an array for range-query LCA.

## entry 259

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 260

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 261

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 262

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 263

State compression: bitmask + integer encodes a small subset cheaply.

## entry 264

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 265

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 266

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 267

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 268

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 269

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 270

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 271

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 272

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 273

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 274

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 275

Stable sort matters when a secondary key was set in a prior pass.

## entry 276

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 277

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 278

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 279

StringBuilder: amortize allocation by doubling on grow.

## entry 280

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 281

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 282

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 283

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 284

Union-Find with path compression amortizes to near-O(1) per op.

## entry 285

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 286

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 287

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 288

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 289

State compression: bitmask + integer encodes a small subset cheaply.

## entry 290

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 291

Greedy by end-time picks the most non-overlapping intervals.

## entry 292

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 293

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 294

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 295

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 296

Walk both pointers from each end inward; advance the smaller side.

## entry 297

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 298

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 299

StringBuilder: amortize allocation by doubling on grow.

## entry 300

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 301

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 302

LIS via patience: each pile holds the smallest tail of length k.

## entry 303

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 304

Euler tour flattens a tree into an array for range-query LCA.

## entry 305

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 306

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 307

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 308

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 309

Stable sort matters when a secondary key was set in a prior pass.

## entry 310

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 311

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 312

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 313

Wavelet tree: range k-th element in O(log Σ) time.

## entry 314

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 315

Stable sort matters when a secondary key was set in a prior pass.

## entry 316

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 317

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 318

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 319

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 320

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 321

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 322

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 323

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 324

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 325

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 326

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 327

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 328

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 329

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 330

State compression: bitmask + integer encodes a small subset cheaply.

## entry 331

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 332

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 333

Euler tour flattens a tree into an array for range-query LCA.

## entry 334

Heap when you only need top-k; full sort is wasted work.

## entry 335

Articulation points: same DFS as bridges, with a slightly different test.

## entry 336

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 337

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 338

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 339

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 340

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 341

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 342

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 343

Articulation points: same DFS as bridges, with a slightly different test.

## entry 344

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 345

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 346

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 347

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 348

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 349

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 350

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 351

Walk both pointers from each end inward; advance the smaller side.

## entry 352

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 353

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 354

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 355

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 356

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 357

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 358

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 359

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 360

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 361

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 362

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 363

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 364

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 365

Wavelet tree: range k-th element in O(log Σ) time.

## entry 366

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 367

Heap when you only need top-k; full sort is wasted work.

## entry 368

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 369

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 370

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 371

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 372

Walk both pointers from each end inward; advance the smaller side.

## entry 373

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 374

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 375

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 376

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 377

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 378

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 379

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 380

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 381

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 382

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 383

Splay tree: every access splays to the root; amortized O(log n).

## entry 384

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 385

LIS via patience: each pile holds the smallest tail of length k.

## entry 386

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 387

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 388

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 389

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 390

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 391

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 392

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 393

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 394

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 395

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 396

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 397

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 398

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 399

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 400

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 401

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 402

Walk both pointers from each end inward; advance the smaller side.

## entry 403

Greedy by end-time picks the most non-overlapping intervals.

## entry 404

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 405

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 406

Stable sort matters when a secondary key was set in a prior pass.

## entry 407

State compression: bitmask + integer encodes a small subset cheaply.

## entry 408

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 409

Splay tree: every access splays to the root; amortized O(log n).

## entry 410

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 411

StringBuilder: amortize allocation by doubling on grow.

## entry 412

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 413

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 414

LIS via patience: each pile holds the smallest tail of length k.

## entry 415

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 416

Monotonic stack pops while the new element violates the invariant.

## entry 417

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 418

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 419

StringBuilder: amortize allocation by doubling on grow.

## entry 420

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 421

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 422

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 423

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 424

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 425

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 426

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 427

Heap when you only need top-k; full sort is wasted work.

## entry 428

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 429

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 430

Greedy by end-time picks the most non-overlapping intervals.

## entry 431

Monotonic stack pops while the new element violates the invariant.

## entry 432

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 433

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 434

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 435

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 436

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 437

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 438

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 439

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 440

Splay tree: every access splays to the root; amortized O(log n).

## entry 441

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 442

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 443

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 444

Union-Find with path compression amortizes to near-O(1) per op.

## entry 445

StringBuilder: amortize allocation by doubling on grow.

## entry 446

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 447

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 448

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 449

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 450

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 451

Walk both pointers from each end inward; advance the smaller side.

## entry 452

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 453

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 454

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 455

State compression: bitmask + integer encodes a small subset cheaply.

## entry 456

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 457

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 458

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 459

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 460

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 461

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 462

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 463

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 464

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 465

Greedy by end-time picks the most non-overlapping intervals.

## entry 466

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 467

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 468

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 469

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 470

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 471

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 472

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 473

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 474

Splay tree: every access splays to the root; amortized O(log n).

## entry 475

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 476

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 477

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 478

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 479

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 480

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 481

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 482

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 483

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 484

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 485

Splay tree: every access splays to the root; amortized O(log n).

## entry 486

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 487

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 488

LIS via patience: each pile holds the smallest tail of length k.

## entry 489

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 490

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 491

Heap when you only need top-k; full sort is wasted work.

## entry 492

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 493

Articulation points: same DFS as bridges, with a slightly different test.

## entry 494

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 495

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 496

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 497

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 498

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 499

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 500

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 501

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 502

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 503

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 504

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 505

Euler tour flattens a tree into an array for range-query LCA.

## entry 506

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 507

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 508

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 509

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 510

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 511

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 512

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 513

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 514

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 515

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 516

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 517

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 518

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 519

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 520

LIS via patience: each pile holds the smallest tail of length k.

## entry 521

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 522

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 523

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 524

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 525

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 526

Union-Find with path compression amortizes to near-O(1) per op.

## entry 527

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 528

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 529

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 530

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 531

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 532

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 533

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 534

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 535

Wavelet tree: range k-th element in O(log Σ) time.

## entry 536

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 537

Articulation points: same DFS as bridges, with a slightly different test.

## entry 538

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 539

State compression: bitmask + integer encodes a small subset cheaply.

## entry 540

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 541

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 542

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 543

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 544

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 545

Walk both pointers from each end inward; advance the smaller side.

## entry 546

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 547

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 548

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 549

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 550

LIS via patience: each pile holds the smallest tail of length k.

## entry 551

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 552

Greedy by end-time picks the most non-overlapping intervals.

## entry 553

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 554

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 555

Heap when you only need top-k; full sort is wasted work.

## entry 556

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 557

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 558

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 559

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 560

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 561

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 562

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 563

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 564

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 565

Greedy by end-time picks the most non-overlapping intervals.

## entry 566

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 567

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 568

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 569

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 570

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 571

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 572

Articulation points: same DFS as bridges, with a slightly different test.

## entry 573

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 574

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 575

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 576

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 577

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 578

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 579

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 580

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 581

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 582

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 583

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 584

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 585

Splay tree: every access splays to the root; amortized O(log n).

## entry 586

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 587

StringBuilder: amortize allocation by doubling on grow.

## entry 588

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 589

Monotonic stack pops while the new element violates the invariant.

## entry 590

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 591

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 592

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 593

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 594

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 595

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 596

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 597

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 598

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 599

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 600

Stable sort matters when a secondary key was set in a prior pass.

## entry 601

Articulation points: same DFS as bridges, with a slightly different test.

## entry 602

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 603

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 604

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 605

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 606

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 607

Union-Find with path compression amortizes to near-O(1) per op.

## entry 608

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 609

Union-Find with path compression amortizes to near-O(1) per op.

## entry 610

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 611

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 612

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 613

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 614

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 615

StringBuilder: amortize allocation by doubling on grow.

## entry 616

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 617

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 618

Heap when you only need top-k; full sort is wasted work.

## entry 619

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 620

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 621

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 622

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 623

Euler tour flattens a tree into an array for range-query LCA.

## entry 624

Stable sort matters when a secondary key was set in a prior pass.

## entry 625

Open addressing with linear probing wins until load factor exceeds 0.7.
