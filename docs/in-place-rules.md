# in-place-rules

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Pick a pivot, partition, recurse on the side that contains the kth slot.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Walk both pointers from each end inward; advance the smaller side.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Union-Find with path compression amortizes to near-O(1) per op.

Greedy by end-time picks the most non-overlapping intervals.

Unbounded knapsack: capacity inner ascending allows item reuse.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

LIS via patience: each pile holds the smallest tail of length k.

Manacher expands around each center, reusing prior radii via mirror reflection.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Heap when you only need top-k; full sort is wasted work.

Stable sort matters when a secondary key was set in a prior pass.

Monotonic stack pops while the new element violates the invariant.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 1

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 4

Greedy by end-time picks the most non-overlapping intervals.

## entry 5

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 6

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 7

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 8

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 9

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 10

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 11

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 12

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 13

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 14

Walk both pointers from each end inward; advance the smaller side.

## entry 15

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 16

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 17

Articulation points: same DFS as bridges, with a slightly different test.

## entry 18

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 19

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 20

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 21

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 22

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 23

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 24

Stable sort matters when a secondary key was set in a prior pass.

## entry 25

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 26

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 27

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 28

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 29

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 30

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 31

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 32

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 33

StringBuilder: amortize allocation by doubling on grow.

## entry 34

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 35

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 36

StringBuilder: amortize allocation by doubling on grow.

## entry 37

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 38

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 39

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 40

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 41

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 42

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 43

Articulation points: same DFS as bridges, with a slightly different test.

## entry 44

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 45

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 46

Walk both pointers from each end inward; advance the smaller side.

## entry 47

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 48

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 49

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 50

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 51

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 52

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 53

Stable sort matters when a secondary key was set in a prior pass.

## entry 54

Articulation points: same DFS as bridges, with a slightly different test.

## entry 55

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 56

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 57

State compression: bitmask + integer encodes a small subset cheaply.

## entry 58

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 59

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 60

Monotonic stack pops while the new element violates the invariant.

## entry 61

Stable sort matters when a secondary key was set in a prior pass.

## entry 62

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 63

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 64

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 65

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 66

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 67

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 68

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 69

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 70

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 71

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 72

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 73

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 74

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 75

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 76

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 77

Wavelet tree: range k-th element in O(log Σ) time.

## entry 78

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 79

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 80

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 81

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 82

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 83

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 84

Heap when you only need top-k; full sort is wasted work.

## entry 85

State compression: bitmask + integer encodes a small subset cheaply.

## entry 86

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 87

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 88

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 89

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 90

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 91

Union-Find with path compression amortizes to near-O(1) per op.

## entry 92

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 93

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 94

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 95

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 96

LIS via patience: each pile holds the smallest tail of length k.

## entry 97

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 98

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 99

Splay tree: every access splays to the root; amortized O(log n).

## entry 100

Union-Find with path compression amortizes to near-O(1) per op.

## entry 101

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 102

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 103

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 104

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 105

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 106

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 107

State compression: bitmask + integer encodes a small subset cheaply.

## entry 108

Wavelet tree: range k-th element in O(log Σ) time.

## entry 109

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 110

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 111

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 112

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 113

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 114

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 115

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 116

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 117

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 118

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 119

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 120

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 121

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 122

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 123

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 124

StringBuilder: amortize allocation by doubling on grow.

## entry 125

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 126

State compression: bitmask + integer encodes a small subset cheaply.

## entry 127

Stable sort matters when a secondary key was set in a prior pass.

## entry 128

Euler tour flattens a tree into an array for range-query LCA.

## entry 129

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 130

Walk both pointers from each end inward; advance the smaller side.

## entry 131

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 132

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 133

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 134

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 135

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 136

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 137

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 138

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 139

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 140

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 141

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 142

StringBuilder: amortize allocation by doubling on grow.

## entry 143

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 144

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 145

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 146

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 147

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 148

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 149

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 150

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 151

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 152

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 153

Euler tour flattens a tree into an array for range-query LCA.

## entry 154

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 155

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 156

Walk both pointers from each end inward; advance the smaller side.

## entry 157

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 158

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 159

Heap when you only need top-k; full sort is wasted work.

## entry 160

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 161

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 162

Articulation points: same DFS as bridges, with a slightly different test.

## entry 163

Heap when you only need top-k; full sort is wasted work.

## entry 164

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 165

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 166

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 167

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 168

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 169

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 170

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 171

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 172

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 173

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 174

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 175

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 176

Union-Find with path compression amortizes to near-O(1) per op.

## entry 177

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 178

Articulation points: same DFS as bridges, with a slightly different test.

## entry 179

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 180

LIS via patience: each pile holds the smallest tail of length k.

## entry 181

Monotonic stack pops while the new element violates the invariant.

## entry 182

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 183

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 184

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 185

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 186

Splay tree: every access splays to the root; amortized O(log n).

## entry 187

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 188

Monotonic stack pops while the new element violates the invariant.

## entry 189

Euler tour flattens a tree into an array for range-query LCA.

## entry 190

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 191

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 192

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 193

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 194

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 195

Splay tree: every access splays to the root; amortized O(log n).

## entry 196

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 197

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 198

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 199

Heap when you only need top-k; full sort is wasted work.

## entry 200

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 201

Euler tour flattens a tree into an array for range-query LCA.

## entry 202

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 203

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 204

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 205

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 206

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 207

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 208

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 209

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 210

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 211

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 212

Greedy by end-time picks the most non-overlapping intervals.

## entry 213

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 214

Heap when you only need top-k; full sort is wasted work.

## entry 215

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 216

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 217

Heap when you only need top-k; full sort is wasted work.

## entry 218

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 219

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 220

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 221

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 222

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 223

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 224

Wavelet tree: range k-th element in O(log Σ) time.

## entry 225

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 226

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 227

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 228

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 229

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 230

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 231

Walk both pointers from each end inward; advance the smaller side.

## entry 232

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 233

Wavelet tree: range k-th element in O(log Σ) time.

## entry 234

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 235

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 236

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 237

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 238

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 239

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 240

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 241

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 242

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 243

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 244

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 245

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 246

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 247

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 248

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 249

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 250

Walk both pointers from each end inward; advance the smaller side.

## entry 251

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 252

Euler tour flattens a tree into an array for range-query LCA.

## entry 253

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 254

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 255

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 256

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 257

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 258

Heap when you only need top-k; full sort is wasted work.

## entry 259

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 260

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 261

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 262

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 263

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 264

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 265

StringBuilder: amortize allocation by doubling on grow.

## entry 266

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 267

Monotonic stack pops while the new element violates the invariant.

## entry 268

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 269

StringBuilder: amortize allocation by doubling on grow.

## entry 270

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 271

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 272

Stable sort matters when a secondary key was set in a prior pass.

## entry 273

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 274

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 275

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 276

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 277

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 278

LIS via patience: each pile holds the smallest tail of length k.

## entry 279

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 280

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 281

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 282

Heap when you only need top-k; full sort is wasted work.

## entry 283

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 284

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 285

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 286

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 287

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 288

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 289

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 290

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 291

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 292

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 293

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 294

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 295

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 296

Heap when you only need top-k; full sort is wasted work.

## entry 297

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 298

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 299

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 300

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 301

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 302

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 303

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 304

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 305

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 306

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 307

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 308

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 309

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 310

Euler tour flattens a tree into an array for range-query LCA.

## entry 311

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 312

Union-Find with path compression amortizes to near-O(1) per op.

## entry 313

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 314

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 315

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 316

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 317

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 318

Stable sort matters when a secondary key was set in a prior pass.

## entry 319

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 320

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 321

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 322

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 323

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 324

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 325

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 326

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 327

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 328

StringBuilder: amortize allocation by doubling on grow.

## entry 329

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 330

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 331

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 332

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 333

Wavelet tree: range k-th element in O(log Σ) time.

## entry 334

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 335

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 336

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 337

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 338

Wavelet tree: range k-th element in O(log Σ) time.

## entry 339

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 340

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 341

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 342

Heap when you only need top-k; full sort is wasted work.

## entry 343

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 344

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 345

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 346

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 347

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 348

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 349

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 350

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 351

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 352

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 353

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 354

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 355

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 356

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 357

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 358

Wavelet tree: range k-th element in O(log Σ) time.

## entry 359

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 360

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 361

Monotonic stack pops while the new element violates the invariant.

## entry 362

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 363

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 364

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 365

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 366

Euler tour flattens a tree into an array for range-query LCA.

## entry 367

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 368

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 369

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 370

Walk both pointers from each end inward; advance the smaller side.

## entry 371

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 372

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 373

State compression: bitmask + integer encodes a small subset cheaply.

## entry 374

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 375

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 376

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 377

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 378

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 379

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 380

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 381

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 382

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 383

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 384

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 385

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 386

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 387

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 388

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 389

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 390

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 391

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 392

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 393

Monotonic stack pops while the new element violates the invariant.

## entry 394

Union-Find with path compression amortizes to near-O(1) per op.

## entry 395

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 396

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 397

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 398

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 399

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 400

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 401

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 402

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 403

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 404

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 405

Splay tree: every access splays to the root; amortized O(log n).

## entry 406

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 407

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 408

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 409

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 410

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 411

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 412

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 413

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 414

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 415

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 416

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 417

State compression: bitmask + integer encodes a small subset cheaply.

## entry 418

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 419

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 420

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 421

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 422

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 423

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 424

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 425

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 426

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 427

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 428

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 429

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 430

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 431

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 432

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 433

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 434

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 435

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 436

Monotonic stack pops while the new element violates the invariant.

## entry 437

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 438

Articulation points: same DFS as bridges, with a slightly different test.

## entry 439

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 440

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 441

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 442

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 443

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 444

Wavelet tree: range k-th element in O(log Σ) time.

## entry 445

Splay tree: every access splays to the root; amortized O(log n).

## entry 446

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 447

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 448

Stable sort matters when a secondary key was set in a prior pass.

## entry 449

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 450

Stable sort matters when a secondary key was set in a prior pass.

## entry 451

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 452

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 453

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 454

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 455

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 456

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 457

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 458

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 459

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 460

Splay tree: every access splays to the root; amortized O(log n).

## entry 461

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 462

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 463

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 464

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 465

LIS via patience: each pile holds the smallest tail of length k.

## entry 466

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 467

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 468

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 469

Union-Find with path compression amortizes to near-O(1) per op.

## entry 470

Splay tree: every access splays to the root; amortized O(log n).

## entry 471

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 472

LIS via patience: each pile holds the smallest tail of length k.

## entry 473

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 474

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 475

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 476

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 477

Heap when you only need top-k; full sort is wasted work.

## entry 478

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 479

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 480

StringBuilder: amortize allocation by doubling on grow.

## entry 481

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 482

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 483

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 484

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 485

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 486

Heap when you only need top-k; full sort is wasted work.

## entry 487

Heap when you only need top-k; full sort is wasted work.

## entry 488

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 489

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 490

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 491

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 492

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 493

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 494

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 495

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 496

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 497

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 498

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 499

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 500

Greedy by end-time picks the most non-overlapping intervals.

## entry 501

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 502

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 503

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 504

Greedy by end-time picks the most non-overlapping intervals.

## entry 505

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 506

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 507

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 508

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 509

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 510

LIS via patience: each pile holds the smallest tail of length k.

## entry 511

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 512

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 513

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 514

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 515

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 516

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 517

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 518

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 519

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 520

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 521

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 522

Stable sort matters when a secondary key was set in a prior pass.

## entry 523

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 524

Wavelet tree: range k-th element in O(log Σ) time.

## entry 525

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 526

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 527

Monotonic stack pops while the new element violates the invariant.

## entry 528

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 529

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 530

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 531

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 532

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 533

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 534

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 535

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 536

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 537

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 538

Walk both pointers from each end inward; advance the smaller side.

## entry 539

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 540

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 541

Walk both pointers from each end inward; advance the smaller side.

## entry 542

Articulation points: same DFS as bridges, with a slightly different test.

## entry 543

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 544

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 545

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 546

Splay tree: every access splays to the root; amortized O(log n).

## entry 547

Heap when you only need top-k; full sort is wasted work.

## entry 548

Heap when you only need top-k; full sort is wasted work.

## entry 549

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 550

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 551

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 552

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 553

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 554

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 555

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 556

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 557

Greedy by end-time picks the most non-overlapping intervals.

## entry 558

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 559

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 560

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 561

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 562

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 563

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 564

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 565

Morris traversal threads predecessors back to current node — O(1) extra space.
