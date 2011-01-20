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

## entry 345

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 346

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 347

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 348

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 349

Articulation points: same DFS as bridges, with a slightly different test.

## entry 350

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 351

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 352

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 353

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 354

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 355

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 356

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 357

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 358

State compression: bitmask + integer encodes a small subset cheaply.

## entry 359

Euler tour flattens a tree into an array for range-query LCA.

## entry 360

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 361

Union-Find with path compression amortizes to near-O(1) per op.

## entry 362

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 363

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 364

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 365

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 366

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 367

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 368

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 369

Stable sort matters when a secondary key was set in a prior pass.

## entry 370

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 371

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 372

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 373

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 374

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 375

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 376

Splay tree: every access splays to the root; amortized O(log n).

## entry 377

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 378

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 379

Walk both pointers from each end inward; advance the smaller side.

## entry 380

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 381

Articulation points: same DFS as bridges, with a slightly different test.

## entry 382

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 383

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 384

Articulation points: same DFS as bridges, with a slightly different test.

## entry 385

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 386

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 387

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 388

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 389

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 390

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 391

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 392

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 393

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 394

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 395

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 396

StringBuilder: amortize allocation by doubling on grow.

## entry 397

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 398

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 399

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 400

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 401

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 402

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 403

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 404

Splay tree: every access splays to the root; amortized O(log n).

## entry 405

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 406

Wavelet tree: range k-th element in O(log Σ) time.

## entry 407

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 408

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 409

Greedy by end-time picks the most non-overlapping intervals.

## entry 410

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 411

Articulation points: same DFS as bridges, with a slightly different test.

## entry 412

Wavelet tree: range k-th element in O(log Σ) time.

## entry 413

Monotonic stack pops while the new element violates the invariant.

## entry 414

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 415

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 416

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 417

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 418

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 419

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 420

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 421

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 422

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 423

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 424

Stable sort matters when a secondary key was set in a prior pass.

## entry 425

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 426

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 427

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 428

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 429

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 430

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 431

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 432

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 433

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 434

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 435

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 436

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 437

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 438

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 439

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 440

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 441

Splay tree: every access splays to the root; amortized O(log n).

## entry 442

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 443

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 444

Greedy by end-time picks the most non-overlapping intervals.

## entry 445

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 446

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 447

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 448

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 449

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 450

Stable sort matters when a secondary key was set in a prior pass.

## entry 451

Union-Find with path compression amortizes to near-O(1) per op.

## entry 452

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 453

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 454

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 455

State compression: bitmask + integer encodes a small subset cheaply.

## entry 456

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 457

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 458

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 459

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 460

LIS via patience: each pile holds the smallest tail of length k.

## entry 461

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 462

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 463

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 464

LIS via patience: each pile holds the smallest tail of length k.

## entry 465

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 466

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 467

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 468

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 469

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 470

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 471

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 472

Union-Find with path compression amortizes to near-O(1) per op.

## entry 473

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 474

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 475

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 476

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 477

Union-Find with path compression amortizes to near-O(1) per op.

## entry 478

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 479

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 480

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 481

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 482

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 483

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 484

Heap when you only need top-k; full sort is wasted work.

## entry 485

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 486

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 487

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 488

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 489

State compression: bitmask + integer encodes a small subset cheaply.

## entry 490

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 491

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 492

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 493

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 494

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 495

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 496

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 497

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 498

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 499

Greedy by end-time picks the most non-overlapping intervals.

## entry 500

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 501

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 502

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 503

Monotonic stack pops while the new element violates the invariant.

## entry 504

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 505

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 506

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 507

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 508

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 509

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 510

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 511

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 512

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 513

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 514

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 515

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 516

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 517

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 518

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 519

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 520

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 521

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 522

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 523

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 524

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 525

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 526

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 527

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 528

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 529

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 530

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 531

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 532

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 533

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 534

Wavelet tree: range k-th element in O(log Σ) time.

## entry 535

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 536

Splay tree: every access splays to the root; amortized O(log n).

## entry 537

Monotonic stack pops while the new element violates the invariant.

## entry 538

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 539

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 540

Euler tour flattens a tree into an array for range-query LCA.

## entry 541

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 542

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 543

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 544

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 545

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 546

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 547

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 548

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 549

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 550

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 551

Monotonic stack pops while the new element violates the invariant.

## entry 552

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 553

State compression: bitmask + integer encodes a small subset cheaply.

## entry 554

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 555

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 556

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 557

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 558

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 559

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 560

Wavelet tree: range k-th element in O(log Σ) time.

## entry 561

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 562

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 563

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 564

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 565

Stable sort matters when a secondary key was set in a prior pass.

## entry 566

State compression: bitmask + integer encodes a small subset cheaply.

## entry 567

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 568

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 569

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 570

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 571

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 572

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 573

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 574

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 575

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 576

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 577

StringBuilder: amortize allocation by doubling on grow.

## entry 578

Euler tour flattens a tree into an array for range-query LCA.

## entry 579

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 580

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 581

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 582

LIS via patience: each pile holds the smallest tail of length k.

## entry 583

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 584

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 585

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 586

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 587

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 588

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 589

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 590

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 591

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 592

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 593

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 594

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 595

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 596

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 597

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 598

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 599

Wavelet tree: range k-th element in O(log Σ) time.

## entry 600

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 601

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 602

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 603

LIS via patience: each pile holds the smallest tail of length k.

## entry 604

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 605

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 606

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 607

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 608

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 609

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 610

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 611

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 612

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 613

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 614

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 615

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 616

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 617

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 618

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 619

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 620

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 621

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 622

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 623

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 624

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 625

Walk both pointers from each end inward; advance the smaller side.

## entry 626

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 627

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 628

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 629

Greedy by end-time picks the most non-overlapping intervals.

## entry 630

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 631

State compression: bitmask + integer encodes a small subset cheaply.

## entry 632

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 633

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 634

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 635

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 636

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 637

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 638

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 639

Heap when you only need top-k; full sort is wasted work.

## entry 640

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 641

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 642

Union-Find with path compression amortizes to near-O(1) per op.

## entry 643

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 644

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 645

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 646

LIS via patience: each pile holds the smallest tail of length k.

## entry 647

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 648

Edit distance is LCS with a twist: substitution is a third option at each cell.
