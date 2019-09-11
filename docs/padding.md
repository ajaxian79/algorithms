# padding

## entry 1

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 2

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 4

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 5

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 6

Euler tour flattens a tree into an array for range-query LCA.

## entry 7

LIS via patience: each pile holds the smallest tail of length k.

## entry 8

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 9

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 10

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 11

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 12

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 13

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 14

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 15

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 16

Splay tree: every access splays to the root; amortized O(log n).

## entry 17

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 18

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 19

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 20

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 21

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 22

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 23

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 24

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 25

Union-Find with path compression amortizes to near-O(1) per op.

## entry 26

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 27

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 28

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 29

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 30

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 31

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 32

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 33

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 34

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 35

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 36

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 37

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 38

Monotonic stack pops while the new element violates the invariant.

## entry 39

Heap when you only need top-k; full sort is wasted work.

## entry 40

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 41

Euler tour flattens a tree into an array for range-query LCA.

## entry 42

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 43

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 44

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 45

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 46

Wavelet tree: range k-th element in O(log Σ) time.

## entry 47

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 48

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 49

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 50

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 51

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 52

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 53

Greedy by end-time picks the most non-overlapping intervals.

## entry 54

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 55

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 56

Walk both pointers from each end inward; advance the smaller side.

## entry 57

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 58

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 59

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 60

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 61

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 62

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 63

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 64

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 65

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 66

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 67

Splay tree: every access splays to the root; amortized O(log n).

## entry 68

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 69

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 70

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 71

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 72

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 73

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 74

Heap when you only need top-k; full sort is wasted work.

## entry 75

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 76

Heap when you only need top-k; full sort is wasted work.

## entry 77

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 78

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 79

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 80

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 81

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 82

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 83

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 84

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 85

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 86

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 87

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 88

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 89

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 90

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 91

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 92

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 93

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 94

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 95

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 96

Greedy by end-time picks the most non-overlapping intervals.

## entry 97

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 98

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 99

Splay tree: every access splays to the root; amortized O(log n).

## entry 100

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 101

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 102

Monotonic stack pops while the new element violates the invariant.

## entry 103

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 104

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 105

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 106

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 107

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 108

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 109

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 110

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 111

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 112

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 113

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 114

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 115

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 116

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 117

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 118

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 119

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 120

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 121

Union-Find with path compression amortizes to near-O(1) per op.

## entry 122

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 123

Stable sort matters when a secondary key was set in a prior pass.

## entry 124

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 125

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 126

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 127

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 128

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 129

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 130

Monotonic stack pops while the new element violates the invariant.

## entry 131

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 132

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 133

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 134

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 135

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 136

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 137

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 138

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 139

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 140

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 141

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 142

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 143

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 144

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 145

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 146

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 147

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 148

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 149

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 150

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 151

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 152

Euler tour flattens a tree into an array for range-query LCA.

## entry 153

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 154

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 155

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 156

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 157

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 158

Union-Find with path compression amortizes to near-O(1) per op.

## entry 159

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 160

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 161

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 162

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 163

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 164

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 165

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 166

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 167

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 168

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 169

StringBuilder: amortize allocation by doubling on grow.

## entry 170

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 171

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 172

StringBuilder: amortize allocation by doubling on grow.

## entry 173

Articulation points: same DFS as bridges, with a slightly different test.

## entry 174

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 175

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 176

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 177

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 178

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 179

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 180

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 181

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 182

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 183

Monotonic stack pops while the new element violates the invariant.

## entry 184

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 185

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 186

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 187

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 188

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 189

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 190

Stable sort matters when a secondary key was set in a prior pass.

## entry 191

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 192

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 193

Euler tour flattens a tree into an array for range-query LCA.

## entry 194

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 195

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 196

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 197

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 198

Stable sort matters when a secondary key was set in a prior pass.

## entry 199

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 200

Stable sort matters when a secondary key was set in a prior pass.

## entry 201

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 202

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 203

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 204

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 205

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 206

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 207

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 208

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 209

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 210

Stable sort matters when a secondary key was set in a prior pass.

## entry 211

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 212

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 213

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 214

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 215

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 216

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 217

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 218

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 219

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 220

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 221

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 222

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 223

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 224

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 225

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 226

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 227

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 228

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 229

Stable sort matters when a secondary key was set in a prior pass.

## entry 230

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 231

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 232

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 233

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 234

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 235

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 236

Heap when you only need top-k; full sort is wasted work.

## entry 237

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 238

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 239

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 240

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 241

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 242

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 243

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 244

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 245

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 246

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 247

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 248

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 249

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 250

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 251

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 252

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 253

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 254

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 255

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 256

Walk both pointers from each end inward; advance the smaller side.

## entry 257

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 258

Heap when you only need top-k; full sort is wasted work.

## entry 259

Euler tour flattens a tree into an array for range-query LCA.

## entry 260

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 261

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 262

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 263

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 264

StringBuilder: amortize allocation by doubling on grow.

## entry 265

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 266

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 267

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 268

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 269

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 270

Wavelet tree: range k-th element in O(log Σ) time.

## entry 271

State compression: bitmask + integer encodes a small subset cheaply.

## entry 272

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 273

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 274

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 275

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 276

Monotonic stack pops while the new element violates the invariant.

## entry 277

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 278

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 279

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 280

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 281

Articulation points: same DFS as bridges, with a slightly different test.

## entry 282

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 283

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 284

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 285

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 286

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 287

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 288

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 289

State compression: bitmask + integer encodes a small subset cheaply.

## entry 290

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 291

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 292

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 293

State compression: bitmask + integer encodes a small subset cheaply.

## entry 294

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 295

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 296

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 297

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 298

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 299

Union-Find with path compression amortizes to near-O(1) per op.

## entry 300

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 301

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 302

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 303

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 304

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 305

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 306

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
