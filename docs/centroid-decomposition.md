# centroid-decomposition

## entry 1

Wavelet tree: range k-th element in O(log Σ) time.

## entry 2

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 4

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 5

Splay tree: every access splays to the root; amortized O(log n).

## entry 6

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 7

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 8

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 9

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 10

Union-Find with path compression amortizes to near-O(1) per op.

## entry 11

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 12

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 13

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 14

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 15

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 16

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 17

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 18

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 19

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 20

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 21

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 22

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 23

Splay tree: every access splays to the root; amortized O(log n).

## entry 24

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 25

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 26

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 27

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 28

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 29

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 30

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 31

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 32

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 33

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 34

StringBuilder: amortize allocation by doubling on grow.

## entry 35

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 36

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 37

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 38

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 39

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 40

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 41

Stable sort matters when a secondary key was set in a prior pass.

## entry 42

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 43

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 44

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 45

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 46

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 47

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 48

Splay tree: every access splays to the root; amortized O(log n).

## entry 49

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 50

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 51

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 52

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 53

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 54

Stable sort matters when a secondary key was set in a prior pass.

## entry 55

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 56

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 57

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 58

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 59

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 60

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 61

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 62

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 63

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 64

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 65

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 66

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 67

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 68

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 69

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 70

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 71

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 72

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 73

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 74

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 75

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 76

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 77

State compression: bitmask + integer encodes a small subset cheaply.

## entry 78

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 79

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 80

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 81

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 82

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 83

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 84

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 85

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 86

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 87

Monotonic stack pops while the new element violates the invariant.

## entry 88

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 89

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 90

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 91

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 92

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 93

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 94

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 95

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 96

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 97

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 98

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 99

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 100

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 101

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 102

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 103

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 104

Monotonic stack pops while the new element violates the invariant.

## entry 105

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 106

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 107

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 108

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 109

Stable sort matters when a secondary key was set in a prior pass.

## entry 110

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 111

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 112

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 113

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 114

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 115

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 116

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 117

Greedy by end-time picks the most non-overlapping intervals.

## entry 118

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 119

Walk both pointers from each end inward; advance the smaller side.

## entry 120

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 121

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 122

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 123

Articulation points: same DFS as bridges, with a slightly different test.

## entry 124

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 125

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 126

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 127

Splay tree: every access splays to the root; amortized O(log n).

## entry 128

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 129

Articulation points: same DFS as bridges, with a slightly different test.

## entry 130

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 131

Monotonic stack pops while the new element violates the invariant.

## entry 132

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 133

Wavelet tree: range k-th element in O(log Σ) time.

## entry 134

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 135

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 136

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 137

Stable sort matters when a secondary key was set in a prior pass.

## entry 138

Heap when you only need top-k; full sort is wasted work.

## entry 139

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 140

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 141

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 142

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 143

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 144

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 145

Splay tree: every access splays to the root; amortized O(log n).

## entry 146

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 147

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 148

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 149

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 150

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 151

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 152

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 153

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 154

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 155

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 156

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 157

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 158

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 159

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 160

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 161

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 162

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 163

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 164

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 165

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 166

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 167

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 168

Splay tree: every access splays to the root; amortized O(log n).

## entry 169

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 170

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 171

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 172

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 173

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 174

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 175

LIS via patience: each pile holds the smallest tail of length k.

## entry 176

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 177

Monotonic stack pops while the new element violates the invariant.

## entry 178

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 179

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 180

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 181

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 182

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 183

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 184

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 185

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 186

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 187

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 188

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 189

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 190

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 191

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 192

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 193

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 194

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 195

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 196

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 197

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 198

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 199

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 200

State compression: bitmask + integer encodes a small subset cheaply.

## entry 201

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 202

Euler tour flattens a tree into an array for range-query LCA.

## entry 203

StringBuilder: amortize allocation by doubling on grow.

## entry 204

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 205

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 206

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 207

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 208

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 209

Stable sort matters when a secondary key was set in a prior pass.

## entry 210

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 211

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 212

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 213

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 214

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 215

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 216

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 217

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 218

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 219

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 220

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 221

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 222

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 223

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 224

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 225

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 226

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 227

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 228

Heap when you only need top-k; full sort is wasted work.

## entry 229

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 230

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 231

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 232

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 233

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 234

State compression: bitmask + integer encodes a small subset cheaply.

## entry 235

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 236

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 237

LIS via patience: each pile holds the smallest tail of length k.

## entry 238

LIS via patience: each pile holds the smallest tail of length k.

## entry 239

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 240

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 241

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 242

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 243

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 244

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 245

Union-Find with path compression amortizes to near-O(1) per op.

## entry 246

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 247

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 248

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 249

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 250

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 251

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 252

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 253

Stable sort matters when a secondary key was set in a prior pass.

## entry 254

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 255

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 256

Walk both pointers from each end inward; advance the smaller side.

## entry 257

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 258

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 259

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 260

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 261

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 262

StringBuilder: amortize allocation by doubling on grow.

## entry 263

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 264

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 265

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 266

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 267

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 268

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 269

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 270

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 271

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 272

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 273

Wavelet tree: range k-th element in O(log Σ) time.

## entry 274

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 275

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 276

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 277

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 278

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 279

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 280

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 281

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 282

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 283

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 284

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 285

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 286

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 287

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 288

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 289

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 290

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 291

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 292

Wavelet tree: range k-th element in O(log Σ) time.

## entry 293

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 294

StringBuilder: amortize allocation by doubling on grow.

## entry 295

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 296

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 297

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 298

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 299

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 300

Articulation points: same DFS as bridges, with a slightly different test.

## entry 301

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 302

StringBuilder: amortize allocation by doubling on grow.

## entry 303

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 304

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 305

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 306

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 307

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 308

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 309

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 310

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 311

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 312

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 313

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 314

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 315

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 316

Euler tour flattens a tree into an array for range-query LCA.

## entry 317

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 318

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 319

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 320

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 321

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 322

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 323

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 324

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 325

Articulation points: same DFS as bridges, with a slightly different test.

## entry 326

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 327

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 328

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 329

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 330

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 331

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 332

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 333

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 334

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 335

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 336

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 337

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 338

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 339

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 340

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 341

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 342

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 343

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 344

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
