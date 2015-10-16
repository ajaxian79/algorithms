# hash-collision

## entry 1

Euler tour flattens a tree into an array for range-query LCA.

## entry 2

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 3

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 4

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 5

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 6

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 7

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 8

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 9

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 10

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 11

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 12

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 13

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 14

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 15

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 16

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 17

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 18

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 19

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 20

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 21

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 22

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 23

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 24

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 25

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 26

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 27

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 28

Stable sort matters when a secondary key was set in a prior pass.

## entry 29

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 30

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 31

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 32

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 33

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 34

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 35

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 36

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 37

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 38

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 39

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 40

Walk both pointers from each end inward; advance the smaller side.

## entry 41

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 42

Stable sort matters when a secondary key was set in a prior pass.

## entry 43

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 44

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 45

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 46

Euler tour flattens a tree into an array for range-query LCA.

## entry 47

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 48

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 49

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 50

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 51

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 52

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 53

StringBuilder: amortize allocation by doubling on grow.

## entry 54

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 55

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 56

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 57

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 58

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 59

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 60

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 61

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 62

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 63

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 64

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 65

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 66

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 67

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 68

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 69

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 70

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 71

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 72

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 73

Stable sort matters when a secondary key was set in a prior pass.

## entry 74

Walk both pointers from each end inward; advance the smaller side.

## entry 75

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 76

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 77

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 78

Union-Find with path compression amortizes to near-O(1) per op.

## entry 79

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 80

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 81

Stable sort matters when a secondary key was set in a prior pass.

## entry 82

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 83

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 84

Splay tree: every access splays to the root; amortized O(log n).

## entry 85

StringBuilder: amortize allocation by doubling on grow.

## entry 86

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 87

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 88

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 89

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 90

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 91

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 92

Union-Find with path compression amortizes to near-O(1) per op.

## entry 93

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 94

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 95

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 96

Wavelet tree: range k-th element in O(log Σ) time.

## entry 97

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 98

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 99

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 100

Splay tree: every access splays to the root; amortized O(log n).

## entry 101

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 102

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 103

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 104

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 105

Heap when you only need top-k; full sort is wasted work.

## entry 106

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 107

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 108

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 109

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 110

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 111

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 112

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 113

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 114

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 115

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 116

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 117

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 118

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 119

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 120

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 121

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 122

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 123

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 124

StringBuilder: amortize allocation by doubling on grow.

## entry 125

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 126

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 127

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 128

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 129

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 130

Monotonic stack pops while the new element violates the invariant.

## entry 131

State compression: bitmask + integer encodes a small subset cheaply.

## entry 132

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 133

Euler tour flattens a tree into an array for range-query LCA.

## entry 134

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 135

Monotonic stack pops while the new element violates the invariant.

## entry 136

Articulation points: same DFS as bridges, with a slightly different test.

## entry 137

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 138

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 139

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 140

Union-Find with path compression amortizes to near-O(1) per op.

## entry 141

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 142

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 143

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 144

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 145

Union-Find with path compression amortizes to near-O(1) per op.

## entry 146

Articulation points: same DFS as bridges, with a slightly different test.

## entry 147

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 148

Stable sort matters when a secondary key was set in a prior pass.

## entry 149

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 150

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 151

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 152

Euler tour flattens a tree into an array for range-query LCA.

## entry 153

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 154

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 155

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 156

State compression: bitmask + integer encodes a small subset cheaply.

## entry 157

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 158

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 159

Splay tree: every access splays to the root; amortized O(log n).

## entry 160

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 161

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 162

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 163

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 164

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 165

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 166

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 167

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 168

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 169

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 170

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 171

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 172

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 173

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 174

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 175

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 176

State compression: bitmask + integer encodes a small subset cheaply.

## entry 177

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 178

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 179

Union-Find with path compression amortizes to near-O(1) per op.

## entry 180

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 181

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 182

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 183

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 184

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 185

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 186

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 187

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 188

Greedy by end-time picks the most non-overlapping intervals.

## entry 189

Greedy by end-time picks the most non-overlapping intervals.

## entry 190

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 191

Articulation points: same DFS as bridges, with a slightly different test.

## entry 192

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 193

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 194

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 195

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 196

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 197

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 198

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 199

Stable sort matters when a secondary key was set in a prior pass.

## entry 200

Monotonic stack pops while the new element violates the invariant.

## entry 201

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 202

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 203

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 204

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 205

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 206

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 207

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 208

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 209

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 210

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 211

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 212

Splay tree: every access splays to the root; amortized O(log n).

## entry 213

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 214

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 215

Walk both pointers from each end inward; advance the smaller side.

## entry 216

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 217

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 218

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 219

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 220

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 221

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 222

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 223

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 224

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 225

State compression: bitmask + integer encodes a small subset cheaply.

## entry 226

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 227

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 228

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 229

Walk both pointers from each end inward; advance the smaller side.

## entry 230

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 231

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 232

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 233

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 234

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 235

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 236

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 237

Walk both pointers from each end inward; advance the smaller side.

## entry 238

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 239

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 240

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 241

Stable sort matters when a secondary key was set in a prior pass.

## entry 242

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 243

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 244

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 245

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 246

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 247

Euler tour flattens a tree into an array for range-query LCA.

## entry 248

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 249

Union-Find with path compression amortizes to near-O(1) per op.

## entry 250

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 251

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 252

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 253

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 254

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 255

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 256

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 257

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 258

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 259

Wavelet tree: range k-th element in O(log Σ) time.

## entry 260

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 261

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 262

Greedy by end-time picks the most non-overlapping intervals.

## entry 263

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 264

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 265

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 266

StringBuilder: amortize allocation by doubling on grow.

## entry 267

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 268

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 269

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 270

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 271

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 272

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 273

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 274

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 275

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 276

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 277

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 278

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 279

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 280

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 281

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 282

Walk both pointers from each end inward; advance the smaller side.

## entry 283

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 284

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 285

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 286

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 287

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 288

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 289

Articulation points: same DFS as bridges, with a slightly different test.

## entry 290

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 291

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 292

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 293

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 294

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 295

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 296

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 297

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 298

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 299

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 300

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 301

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 302

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 303

Wavelet tree: range k-th element in O(log Σ) time.

## entry 304

State compression: bitmask + integer encodes a small subset cheaply.

## entry 305

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 306

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 307

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 308

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 309

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 310

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 311

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 312

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 313

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 314

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 315

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 316

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 317

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 318

LIS via patience: each pile holds the smallest tail of length k.

## entry 319

Stable sort matters when a secondary key was set in a prior pass.

## entry 320

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 321

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 322

Heap when you only need top-k; full sort is wasted work.

## entry 323

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 324

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 325

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 326

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 327

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 328

Stable sort matters when a secondary key was set in a prior pass.

## entry 329

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 330

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 331

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 332

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 333

Monotonic stack pops while the new element violates the invariant.

## entry 334

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 335

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 336

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 337

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 338

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 339

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 340

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 341

Greedy by end-time picks the most non-overlapping intervals.

## entry 342

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 343

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 344

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 345

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 346

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 347

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 348

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 349

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 350

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 351

Walk both pointers from each end inward; advance the smaller side.

## entry 352

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 353

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 354

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 355

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 356

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 357

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 358

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 359

Splay tree: every access splays to the root; amortized O(log n).

## entry 360

Heap when you only need top-k; full sort is wasted work.

## entry 361

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 362

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 363

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 364

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 365

Monotonic stack pops while the new element violates the invariant.

## entry 366

Heap when you only need top-k; full sort is wasted work.

## entry 367

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 368

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 369

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 370

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 371

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 372

Articulation points: same DFS as bridges, with a slightly different test.

## entry 373

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 374

Articulation points: same DFS as bridges, with a slightly different test.

## entry 375

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 376

Greedy by end-time picks the most non-overlapping intervals.

## entry 377

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 378

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 379

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 380

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 381

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 382

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 383

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 384

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 385

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 386

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 387

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 388

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 389

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 390

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 391

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 392

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 393

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 394

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 395

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 396

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 397

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 398

Splay tree: every access splays to the root; amortized O(log n).

## entry 399

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 400

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 401

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 402

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 403

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 404

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 405

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 406

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 407

Heap when you only need top-k; full sort is wasted work.

## entry 408

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 409

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 410

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 411

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 412

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 413

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 414

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 415

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 416

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 417

Stable sort matters when a secondary key was set in a prior pass.

## entry 418

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 419

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 420

Union-Find with path compression amortizes to near-O(1) per op.

## entry 421

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 422

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 423

Articulation points: same DFS as bridges, with a slightly different test.

## entry 424

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 425

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 426

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 427

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 428

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 429

LIS via patience: each pile holds the smallest tail of length k.

## entry 430

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 431

State compression: bitmask + integer encodes a small subset cheaply.

## entry 432

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 433

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 434

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 435

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 436

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 437

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 438

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 439

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 440

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 441

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 442

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 443

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 444

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 445

State compression: bitmask + integer encodes a small subset cheaply.

## entry 446

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 447

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 448

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 449

Splay tree: every access splays to the root; amortized O(log n).

## entry 450

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 451

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 452

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 453

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 454

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 455

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 456

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 457

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 458

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 459

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 460

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 461

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 462

Greedy by end-time picks the most non-overlapping intervals.

## entry 463

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 464

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 465

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 466

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 467

Articulation points: same DFS as bridges, with a slightly different test.

## entry 468

Euler tour flattens a tree into an array for range-query LCA.

## entry 469

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 470

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 471

Greedy by end-time picks the most non-overlapping intervals.

## entry 472

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 473

Articulation points: same DFS as bridges, with a slightly different test.

## entry 474

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 475

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 476

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 477

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 478

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 479

LIS via patience: each pile holds the smallest tail of length k.

## entry 480

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 481

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 482

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 483

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 484

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 485

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 486

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 487

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 488

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 489

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 490

Greedy by end-time picks the most non-overlapping intervals.

## entry 491

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 492

Tarjan SCC: low-link values find strongly connected components in one DFS.
