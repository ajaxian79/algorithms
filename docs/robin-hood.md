# robin-hood

## entry 1

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3

Euler tour flattens a tree into an array for range-query LCA.

## entry 4

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 5

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 6

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 7

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 8

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 9

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 10

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 11

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 12

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 13

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 14

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 15

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 16

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 17

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 18

Splay tree: every access splays to the root; amortized O(log n).

## entry 19

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 20

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 21

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 22

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 23

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 24

LIS via patience: each pile holds the smallest tail of length k.

## entry 25

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 26

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 27

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 28

Euler tour flattens a tree into an array for range-query LCA.

## entry 29

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 30

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 31

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 32

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 33

StringBuilder: amortize allocation by doubling on grow.

## entry 34

Wavelet tree: range k-th element in O(log Σ) time.

## entry 35

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 36

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 37

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 38

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 39

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 40

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 41

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 42

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 43

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 44

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 45

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 46

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 47

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 48

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 49

State compression: bitmask + integer encodes a small subset cheaply.

## entry 50

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 51

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 52

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 53

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 54

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 55

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 56

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 57

Articulation points: same DFS as bridges, with a slightly different test.

## entry 58

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 59

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 60

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 61

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 62

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 63

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 64

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 65

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 66

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 67

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 68

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 69

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 70

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 71

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 72

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 73

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 74

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 75

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 76

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 77

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 78

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 79

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 80

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 81

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 82

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 83

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 84

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 85

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 86

Euler tour flattens a tree into an array for range-query LCA.

## entry 87

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 88

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 89

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 90

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 91

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 92

Splay tree: every access splays to the root; amortized O(log n).

## entry 93

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 94

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 95

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 96

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 97

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 98

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 99

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 100

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 101

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 102

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 103

State compression: bitmask + integer encodes a small subset cheaply.

## entry 104

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 105

Wavelet tree: range k-th element in O(log Σ) time.

## entry 106

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 107

Walk both pointers from each end inward; advance the smaller side.

## entry 108

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 109

Euler tour flattens a tree into an array for range-query LCA.

## entry 110

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 111

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 112

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 113

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 114

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 115

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 116

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 117

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 118

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 119

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 120

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 121

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 122

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 123

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 124

Union-Find with path compression amortizes to near-O(1) per op.

## entry 125

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 126

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 127

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 128

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 129

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 130

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 131

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 132

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 133

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 134

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 135

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 136

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 137

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 138

Articulation points: same DFS as bridges, with a slightly different test.

## entry 139

Walk both pointers from each end inward; advance the smaller side.

## entry 140

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 141

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 142

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 143

LIS via patience: each pile holds the smallest tail of length k.

## entry 144

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 145

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 146

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 147

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 148

LIS via patience: each pile holds the smallest tail of length k.

## entry 149

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 150

Greedy by end-time picks the most non-overlapping intervals.

## entry 151

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 152

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 153

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 154

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 155

LIS via patience: each pile holds the smallest tail of length k.

## entry 156

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 157

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 158

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 159

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 160

Euler tour flattens a tree into an array for range-query LCA.

## entry 161

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 162

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 163

Splay tree: every access splays to the root; amortized O(log n).

## entry 164

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 165

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 166

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 167

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 168

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 169

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 170

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 171

Wavelet tree: range k-th element in O(log Σ) time.

## entry 172

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 173

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 174

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 175

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 176

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 177

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 178

State compression: bitmask + integer encodes a small subset cheaply.

## entry 179

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 180

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 181

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 182

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 183

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 184

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 185

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 186

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 187

Walk both pointers from each end inward; advance the smaller side.

## entry 188

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 189

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 190

State compression: bitmask + integer encodes a small subset cheaply.

## entry 191

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 192

State compression: bitmask + integer encodes a small subset cheaply.

## entry 193

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 194

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 195

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 196

Euler tour flattens a tree into an array for range-query LCA.

## entry 197

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 198

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 199

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 200

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 201

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 202

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 203

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 204

Walk both pointers from each end inward; advance the smaller side.

## entry 205

StringBuilder: amortize allocation by doubling on grow.

## entry 206

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 207

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 208

Wavelet tree: range k-th element in O(log Σ) time.

## entry 209

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 210

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 211

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 212

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 213

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 214

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 215

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 216

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 217

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 218

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 219

Articulation points: same DFS as bridges, with a slightly different test.

## entry 220

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 221

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 222

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 223

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 224

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 225

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 226

Wavelet tree: range k-th element in O(log Σ) time.

## entry 227

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 228

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 229

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 230

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 231

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 232

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 233

Walk both pointers from each end inward; advance the smaller side.

## entry 234

Walk both pointers from each end inward; advance the smaller side.

## entry 235

State compression: bitmask + integer encodes a small subset cheaply.

## entry 236

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 237

Monotonic stack pops while the new element violates the invariant.

## entry 238

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 239

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 240

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 241

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 242

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 243

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 244

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 245

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 246

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 247

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 248

Euler tour flattens a tree into an array for range-query LCA.

## entry 249

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 250

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 251

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 252

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 253

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 254

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 255

Greedy by end-time picks the most non-overlapping intervals.

## entry 256

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 257

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 258

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 259

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 260

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 261

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 262

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 263

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 264

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 265

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 266

LIS via patience: each pile holds the smallest tail of length k.

## entry 267

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 268

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 269

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 270

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 271

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 272

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 273

Walk both pointers from each end inward; advance the smaller side.

## entry 274

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 275

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 276

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 277

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 278

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 279

Euler tour flattens a tree into an array for range-query LCA.

## entry 280

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 281

Wavelet tree: range k-th element in O(log Σ) time.

## entry 282

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 283

Euler tour flattens a tree into an array for range-query LCA.

## entry 284

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 285

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 286

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 287

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 288

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 289

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 290

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 291

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 292

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 293

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 294

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 295

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 296

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 297

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 298

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 299

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 300

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 301

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 302

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 303

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 304

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 305

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 306

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 307

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 308

State compression: bitmask + integer encodes a small subset cheaply.

## entry 309

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 310

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 311

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 312

StringBuilder: amortize allocation by doubling on grow.

## entry 313

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 314

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 315

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 316

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 317

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 318

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 319

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 320

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 321

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 322

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 323

StringBuilder: amortize allocation by doubling on grow.

## entry 324

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 325

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 326

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 327

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 328

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 329

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 330

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 331

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 332

Stable sort matters when a secondary key was set in a prior pass.

## entry 333

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 334

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 335

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 336

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 337

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 338

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 339

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 340

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 341

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 342

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 343

Wavelet tree: range k-th element in O(log Σ) time.

## entry 344

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 345

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 346

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 347

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 348

Wavelet tree: range k-th element in O(log Σ) time.

## entry 349

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 350

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 351

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 352

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 353

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 354

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 355

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 356

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 357

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 358

Monotonic stack pops while the new element violates the invariant.

## entry 359

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 360

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 361

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 362

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 363

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 364

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 365

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 366

Articulation points: same DFS as bridges, with a slightly different test.

## entry 367

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 368

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 369

Greedy by end-time picks the most non-overlapping intervals.

## entry 370

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 371

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 372

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 373

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 374

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 375

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 376

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 377

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 378

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 379

Walk both pointers from each end inward; advance the smaller side.

## entry 380

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 381

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 382

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 383

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 384

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 385

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 386

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 387

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 388

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 389

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 390

LIS via patience: each pile holds the smallest tail of length k.

## entry 391

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 392

Monotonic stack pops while the new element violates the invariant.

## entry 393

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 394

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 395

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 396

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 397

LIS via patience: each pile holds the smallest tail of length k.
