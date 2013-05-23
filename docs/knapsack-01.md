# knapsack-01

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Unbounded knapsack: capacity inner ascending allows item reuse.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Morris traversal threads predecessors back to current node — O(1) extra space.

Walk both pointers from each end inward; advance the smaller side.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Manacher expands around each center, reusing prior radii via mirror reflection.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

LIS via patience: each pile holds the smallest tail of length k.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Pick a pivot, partition, recurse on the side that contains the kth slot.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Stable sort matters when a secondary key was set in a prior pass.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Merge intervals: sort by start; extend the running interval while overlapping.

In-place compaction uses two pointers: read advances always, write only on keep.

Greedy by end-time picks the most non-overlapping intervals.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Heap when you only need top-k; full sort is wasted work.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Union-Find with path compression amortizes to near-O(1) per op.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 1

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 2

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 4

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 6

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 7

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 8

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 9

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 10

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 11

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 12

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 13

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 14

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 15

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 16

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 17

Splay tree: every access splays to the root; amortized O(log n).

## entry 18

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 19

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 20

Articulation points: same DFS as bridges, with a slightly different test.

## entry 21

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 22

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 23

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 24

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 25

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 26

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 27

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 28

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 29

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 30

Euler tour flattens a tree into an array for range-query LCA.

## entry 31

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 32

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 33

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 34

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 35

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 36

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 37

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 38

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 39

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 40

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 41

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 42

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 43

Union-Find with path compression amortizes to near-O(1) per op.

## entry 44

Walk both pointers from each end inward; advance the smaller side.

## entry 45

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 46

StringBuilder: amortize allocation by doubling on grow.

## entry 47

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 48

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 49

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 50

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 51

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 52

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 53

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 54

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 55

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 56

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 57

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 58

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 59

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 60

Monotonic stack pops while the new element violates the invariant.

## entry 61

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 62

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 63

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 64

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 65

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 66

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 67

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 68

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 69

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 70

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 71

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 72

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 73

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 74

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 75

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 76

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 77

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 78

Monotonic stack pops while the new element violates the invariant.

## entry 79

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 80

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 81

Monotonic stack pops while the new element violates the invariant.

## entry 82

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 83

Monotonic stack pops while the new element violates the invariant.

## entry 84

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 85

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 86

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 87

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 88

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 89

Walk both pointers from each end inward; advance the smaller side.

## entry 90

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 91

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 92

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 93

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 94

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 95

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 96

State compression: bitmask + integer encodes a small subset cheaply.

## entry 97

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 98

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 99

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 100

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 101

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 102

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 103

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 104

Heap when you only need top-k; full sort is wasted work.

## entry 105

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 106

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 107

Monotonic stack pops while the new element violates the invariant.

## entry 108

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 109

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 110

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 111

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 112

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 113

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 114

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 115

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 116

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 117

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 118

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 119

Wavelet tree: range k-th element in O(log Σ) time.

## entry 120

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 121

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 122

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 123

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 124

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 125

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 126

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 127

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 128

Stable sort matters when a secondary key was set in a prior pass.

## entry 129

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 130

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 131

Heap when you only need top-k; full sort is wasted work.

## entry 132

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 133

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 134

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 135

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 136

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 137

Heap when you only need top-k; full sort is wasted work.

## entry 138

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 139

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 140

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 141

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 142

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 143

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 144

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 145

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 146

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 147

Stable sort matters when a secondary key was set in a prior pass.

## entry 148

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 149

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 150

Union-Find with path compression amortizes to near-O(1) per op.

## entry 151

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 152

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 153

Euler tour flattens a tree into an array for range-query LCA.

## entry 154

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 155

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 156

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 157

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 158

Walk both pointers from each end inward; advance the smaller side.

## entry 159

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 160

StringBuilder: amortize allocation by doubling on grow.

## entry 161

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 162

Articulation points: same DFS as bridges, with a slightly different test.

## entry 163

Union-Find with path compression amortizes to near-O(1) per op.

## entry 164

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 165

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 166

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 167

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 168

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 169

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 170

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 171

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 172

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 173

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 174

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 175

Articulation points: same DFS as bridges, with a slightly different test.

## entry 176

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 177

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 178

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 179

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 180

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 181

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 182

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 183

Union-Find with path compression amortizes to near-O(1) per op.

## entry 184

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 185

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 186

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 187

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 188

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 189

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 190

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 191

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 192

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 193

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 194

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 195

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 196

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 197

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 198

Monotonic stack pops while the new element violates the invariant.

## entry 199

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 200

Monotonic stack pops while the new element violates the invariant.

## entry 201

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 202

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 203

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 204

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 205

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 206

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 207

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 208

State compression: bitmask + integer encodes a small subset cheaply.

## entry 209

State compression: bitmask + integer encodes a small subset cheaply.

## entry 210

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 211

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 212

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 213

Euler tour flattens a tree into an array for range-query LCA.

## entry 214

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 215

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 216

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 217

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 218

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 219

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 220

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 221

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 222

Union-Find with path compression amortizes to near-O(1) per op.

## entry 223

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 224

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 225

Heap when you only need top-k; full sort is wasted work.

## entry 226

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 227

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 228

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 229

Splay tree: every access splays to the root; amortized O(log n).

## entry 230

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 231

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 232

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 233

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 234

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 235

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 236

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 237

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 238

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 239

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 240

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 241

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 242

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 243

Greedy by end-time picks the most non-overlapping intervals.

## entry 244

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 245

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 246

Articulation points: same DFS as bridges, with a slightly different test.

## entry 247

Monotonic stack pops while the new element violates the invariant.

## entry 248

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 249

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 250

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 251

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 252

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 253

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 254

LIS via patience: each pile holds the smallest tail of length k.

## entry 255

Heap when you only need top-k; full sort is wasted work.

## entry 256

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 257

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 258

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 259

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 260

Articulation points: same DFS as bridges, with a slightly different test.

## entry 261

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 262

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 263

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 264

Articulation points: same DFS as bridges, with a slightly different test.

## entry 265

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 266

Articulation points: same DFS as bridges, with a slightly different test.

## entry 267

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 268

Stable sort matters when a secondary key was set in a prior pass.

## entry 269

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 270

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 271

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 272

LIS via patience: each pile holds the smallest tail of length k.

## entry 273

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 274

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 275

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 276

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 277

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 278

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 279

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 280

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 281

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 282

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 283

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 284

LIS via patience: each pile holds the smallest tail of length k.

## entry 285

Greedy by end-time picks the most non-overlapping intervals.

## entry 286

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 287

Greedy by end-time picks the most non-overlapping intervals.

## entry 288

StringBuilder: amortize allocation by doubling on grow.

## entry 289

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 290

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 291

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 292

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 293

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 294

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 295

Heap when you only need top-k; full sort is wasted work.

## entry 296

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 297

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 298

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 299

Articulation points: same DFS as bridges, with a slightly different test.

## entry 300

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 301

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 302

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 303

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 304

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 305

Monotonic stack pops while the new element violates the invariant.

## entry 306

Greedy by end-time picks the most non-overlapping intervals.

## entry 307

Greedy by end-time picks the most non-overlapping intervals.

## entry 308

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 309

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 310

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 311

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 312

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 313

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 314

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 315

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 316

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 317

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 318

Wavelet tree: range k-th element in O(log Σ) time.

## entry 319

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 320

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 321

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 322

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 323

Articulation points: same DFS as bridges, with a slightly different test.

## entry 324

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 325

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 326

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 327

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 328

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 329

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 330

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 331

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 332

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 333

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 334

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 335

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 336

Euler tour flattens a tree into an array for range-query LCA.

## entry 337

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 338

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 339

Euler tour flattens a tree into an array for range-query LCA.

## entry 340

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 341

Heap when you only need top-k; full sort is wasted work.

## entry 342

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 343

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 344

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 345

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 346

Monotonic stack pops while the new element violates the invariant.

## entry 347

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 348

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 349

Monotonic stack pops while the new element violates the invariant.

## entry 350

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 351

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 352

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 353

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 354

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 355

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 356

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 357

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 358

Greedy by end-time picks the most non-overlapping intervals.

## entry 359

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 360

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 361

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 362

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 363

Splay tree: every access splays to the root; amortized O(log n).

## entry 364

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 365

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 366

Walk both pointers from each end inward; advance the smaller side.

## entry 367

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 368

Splay tree: every access splays to the root; amortized O(log n).

## entry 369

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 370

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 371

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 372

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 373

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 374

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 375

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 376

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 377

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 378

Walk both pointers from each end inward; advance the smaller side.

## entry 379

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 380

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 381

Heap when you only need top-k; full sort is wasted work.

## entry 382

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 383

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 384

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 385

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 386

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 387

Articulation points: same DFS as bridges, with a slightly different test.

## entry 388

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 389

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 390

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 391

Walk both pointers from each end inward; advance the smaller side.

## entry 392

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 393

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 394

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 395

Stable sort matters when a secondary key was set in a prior pass.

## entry 396

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 397

Greedy by end-time picks the most non-overlapping intervals.

## entry 398

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 399

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 400

Walk both pointers from each end inward; advance the smaller side.

## entry 401

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 402

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 403

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 404

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 405

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 406

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 407

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 408

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 409

Articulation points: same DFS as bridges, with a slightly different test.

## entry 410

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 411

Stable sort matters when a secondary key was set in a prior pass.

## entry 412

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 413

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 414

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 415

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 416

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 417

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 418

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 419

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 420

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 421

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 422

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 423

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 424

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 425

Monotonic stack pops while the new element violates the invariant.

## entry 426

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 427

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 428

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 429

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 430

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 431

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 432

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 433

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 434

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 435

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 436

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 437

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 438

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 439

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 440

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 441

Articulation points: same DFS as bridges, with a slightly different test.

## entry 442

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 443

Articulation points: same DFS as bridges, with a slightly different test.

## entry 444

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 445

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 446

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 447

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 448

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 449

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 450

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 451

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 452

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 453

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 454

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 455

StringBuilder: amortize allocation by doubling on grow.

## entry 456

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 457

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 458

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 459

LIS via patience: each pile holds the smallest tail of length k.

## entry 460

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 461

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 462

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 463

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 464

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 465

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 466

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 467

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 468

Greedy by end-time picks the most non-overlapping intervals.

## entry 469

Heap when you only need top-k; full sort is wasted work.

## entry 470

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 471

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 472

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 473

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 474

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 475

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 476

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 477

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 478

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 479

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 480

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 481

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 482

Euler tour flattens a tree into an array for range-query LCA.

## entry 483

State compression: bitmask + integer encodes a small subset cheaply.

## entry 484

Union-Find with path compression amortizes to near-O(1) per op.

## entry 485

Heap when you only need top-k; full sort is wasted work.

## entry 486

LIS via patience: each pile holds the smallest tail of length k.

## entry 487

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 488

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 489

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 490

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 491

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 492

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 493

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 494

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 495

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 496

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 497

State compression: bitmask + integer encodes a small subset cheaply.

## entry 498

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 499

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 500

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 501

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 502

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 503

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 504

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 505

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 506

Euler tour flattens a tree into an array for range-query LCA.

## entry 507

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 508

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 509

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 510

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 511

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 512

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 513

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 514

State compression: bitmask + integer encodes a small subset cheaply.

## entry 515

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 516

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 517

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 518

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 519

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 520

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 521

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 522

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 523

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 524

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 525

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 526

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 527

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 528

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 529

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 530

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 531

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 532

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 533

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 534

Union-Find with path compression amortizes to near-O(1) per op.

## entry 535

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 536

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 537

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 538

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 539

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 540

StringBuilder: amortize allocation by doubling on grow.

## entry 541

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 542

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 543

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 544

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 545

Euler tour flattens a tree into an array for range-query LCA.

## entry 546

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 547

State compression: bitmask + integer encodes a small subset cheaply.

## entry 548

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 549

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 550

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 551

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 552

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 553

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 554

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 555

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 556

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 557

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 558

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 559

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 560

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 561

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
