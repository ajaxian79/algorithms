# knapsack-unbounded

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Greedy by end-time picks the most non-overlapping intervals.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Walk both pointers from each end inward; advance the smaller side.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Unbounded knapsack: capacity inner ascending allows item reuse.

Monotonic stack pops while the new element violates the invariant.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

BFS layers carry implicit shortest-path distance in unweighted graphs.

LIS via patience: each pile holds the smallest tail of length k.

Heap when you only need top-k; full sort is wasted work.

In-place compaction uses two pointers: read advances always, write only on keep.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Stable sort matters when a secondary key was set in a prior pass.

Morris traversal threads predecessors back to current node — O(1) extra space.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Union-Find with path compression amortizes to near-O(1) per op.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 1

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 2

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 4

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 5

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 6

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 7

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 8

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 9

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 10

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 11

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 12

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 13

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 14

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 15

LIS via patience: each pile holds the smallest tail of length k.

## entry 16

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 17

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 18

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 19

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 20

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 21

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 22

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 23

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 24

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 25

Walk both pointers from each end inward; advance the smaller side.

## entry 26

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 27

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 28

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 29

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 30

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 31

Euler tour flattens a tree into an array for range-query LCA.

## entry 32

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 33

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 34

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 35

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 36

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 37

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 38

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 39

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 40

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 41

Euler tour flattens a tree into an array for range-query LCA.

## entry 42

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 43

StringBuilder: amortize allocation by doubling on grow.

## entry 44

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 45

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 46

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 47

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 48

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 49

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 50

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 51

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 52

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 53

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 54

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 55

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 56

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 57

Stable sort matters when a secondary key was set in a prior pass.

## entry 58

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 59

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 60

Stable sort matters when a secondary key was set in a prior pass.

## entry 61

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 62

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 63

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 64

LIS via patience: each pile holds the smallest tail of length k.

## entry 65

Walk both pointers from each end inward; advance the smaller side.

## entry 66

Heap when you only need top-k; full sort is wasted work.

## entry 67

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 68

Union-Find with path compression amortizes to near-O(1) per op.

## entry 69

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 70

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 71

Stable sort matters when a secondary key was set in a prior pass.

## entry 72

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 73

Walk both pointers from each end inward; advance the smaller side.

## entry 74

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 75

Greedy by end-time picks the most non-overlapping intervals.

## entry 76

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 77

Monotonic stack pops while the new element violates the invariant.

## entry 78

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 79

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 80

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 81

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 82

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 83

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 84

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 85

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 86

Greedy by end-time picks the most non-overlapping intervals.

## entry 87

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 88

Greedy by end-time picks the most non-overlapping intervals.

## entry 89

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 90

State compression: bitmask + integer encodes a small subset cheaply.

## entry 91

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 92

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 93

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 94

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 95

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 96

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 97

Union-Find with path compression amortizes to near-O(1) per op.

## entry 98

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 99

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 100

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 101

Heap when you only need top-k; full sort is wasted work.

## entry 102

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 103

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 104

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 105

LIS via patience: each pile holds the smallest tail of length k.

## entry 106

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 107

Stable sort matters when a secondary key was set in a prior pass.

## entry 108

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 109

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 110

Euler tour flattens a tree into an array for range-query LCA.

## entry 111

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 112

Euler tour flattens a tree into an array for range-query LCA.

## entry 113

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 114

Euler tour flattens a tree into an array for range-query LCA.

## entry 115

Union-Find with path compression amortizes to near-O(1) per op.

## entry 116

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 117

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 118

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 119

Splay tree: every access splays to the root; amortized O(log n).

## entry 120

Heap when you only need top-k; full sort is wasted work.

## entry 121

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 122

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 123

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 124

State compression: bitmask + integer encodes a small subset cheaply.

## entry 125

Wavelet tree: range k-th element in O(log Σ) time.

## entry 126

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 127

Wavelet tree: range k-th element in O(log Σ) time.

## entry 128

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 129

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 130

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 131

Wavelet tree: range k-th element in O(log Σ) time.

## entry 132

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 133

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 134

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 135

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 136

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 137

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 138

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 139

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 140

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 141

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 142

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 143

Heap when you only need top-k; full sort is wasted work.

## entry 144

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 145

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 146

Wavelet tree: range k-th element in O(log Σ) time.

## entry 147

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 148

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 149

Union-Find with path compression amortizes to near-O(1) per op.

## entry 150

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 151

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 152

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 153

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 154

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 155

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 156

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 157

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 158

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 159

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 160

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 161

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 162

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 163

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 164

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 165

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 166

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 167

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 168

Union-Find with path compression amortizes to near-O(1) per op.

## entry 169

Heap when you only need top-k; full sort is wasted work.

## entry 170

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 171

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 172

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 173

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 174

Stable sort matters when a secondary key was set in a prior pass.

## entry 175

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 176

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 177

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 178

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 179

Monotonic stack pops while the new element violates the invariant.

## entry 180

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 181

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 182

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 183

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 184

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 185

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 186

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 187

Greedy by end-time picks the most non-overlapping intervals.

## entry 188

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 189

Monotonic stack pops while the new element violates the invariant.

## entry 190

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 191

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 192

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 193

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 194

Stable sort matters when a secondary key was set in a prior pass.

## entry 195

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 196

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 197

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 198

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 199

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 200

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 201

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 202

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 203

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 204

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 205

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 206

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 207

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 208

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 209

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 210

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 211

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 212

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 213

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 214

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 215

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 216

Articulation points: same DFS as bridges, with a slightly different test.

## entry 217

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 218

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 219

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 220

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 221

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 222

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 223

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 224

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 225

State compression: bitmask + integer encodes a small subset cheaply.

## entry 226

LIS via patience: each pile holds the smallest tail of length k.

## entry 227

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 228

StringBuilder: amortize allocation by doubling on grow.

## entry 229

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 230

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 231

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 232

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 233

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 234

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 235

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 236

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 237

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 238

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 239

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 240

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 241

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 242

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 243

StringBuilder: amortize allocation by doubling on grow.

## entry 244

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 245

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 246

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 247

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 248

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 249

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 250

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 251

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 252

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 253

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 254

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 255

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 256

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 257

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 258

Splay tree: every access splays to the root; amortized O(log n).

## entry 259

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 260

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 261

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 262

Stable sort matters when a secondary key was set in a prior pass.

## entry 263

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 264

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 265

Splay tree: every access splays to the root; amortized O(log n).

## entry 266

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 267

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 268

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 269

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 270

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 271

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 272

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 273

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 274

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 275

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 276

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 277

StringBuilder: amortize allocation by doubling on grow.

## entry 278

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 279

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 280

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 281

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 282

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 283

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 284

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 285

Stable sort matters when a secondary key was set in a prior pass.

## entry 286

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 287

Splay tree: every access splays to the root; amortized O(log n).

## entry 288

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 289

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 290

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 291

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 292

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 293

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 294

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 295

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 296

Articulation points: same DFS as bridges, with a slightly different test.

## entry 297

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 298

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 299

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 300

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 301

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 302

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 303

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 304

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 305

Walk both pointers from each end inward; advance the smaller side.

## entry 306

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 307

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 308

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 309

Articulation points: same DFS as bridges, with a slightly different test.

## entry 310

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 311

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 312

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 313

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 314

Union-Find with path compression amortizes to near-O(1) per op.

## entry 315

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 316

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 317

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 318

Articulation points: same DFS as bridges, with a slightly different test.

## entry 319

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 320

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 321

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 322

Walk both pointers from each end inward; advance the smaller side.

## entry 323

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 324

LIS via patience: each pile holds the smallest tail of length k.

## entry 325

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 326

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 327

Monotonic stack pops while the new element violates the invariant.

## entry 328

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 329

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 330

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 331

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 332

Splay tree: every access splays to the root; amortized O(log n).

## entry 333

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 334

Euler tour flattens a tree into an array for range-query LCA.

## entry 335

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 336

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 337

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 338

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 339

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 340

Stable sort matters when a secondary key was set in a prior pass.

## entry 341

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 342

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 343

Union-Find with path compression amortizes to near-O(1) per op.

## entry 344

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 345

State compression: bitmask + integer encodes a small subset cheaply.

## entry 346

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 347

Euler tour flattens a tree into an array for range-query LCA.

## entry 348

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 349

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 350

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 351

Union-Find with path compression amortizes to near-O(1) per op.

## entry 352

Wavelet tree: range k-th element in O(log Σ) time.

## entry 353

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 354

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 355

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 356

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 357

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 358

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 359

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 360

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 361

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 362

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 363

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 364

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 365

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 366

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 367

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 368

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 369

Euler tour flattens a tree into an array for range-query LCA.

## entry 370

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 371

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 372

Walk both pointers from each end inward; advance the smaller side.

## entry 373

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 374

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 375

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 376

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 377

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 378

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 379

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 380

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 381

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 382

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 383

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 384

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 385

LIS via patience: each pile holds the smallest tail of length k.

## entry 386

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 387

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 388

Articulation points: same DFS as bridges, with a slightly different test.

## entry 389

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 390

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 391

Articulation points: same DFS as bridges, with a slightly different test.

## entry 392

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 393

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 394

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 395

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 396

Walk both pointers from each end inward; advance the smaller side.

## entry 397

LIS via patience: each pile holds the smallest tail of length k.

## entry 398

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 399

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 400

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 401

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 402

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 403

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 404

Wavelet tree: range k-th element in O(log Σ) time.

## entry 405

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 406

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 407

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 408

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 409

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 410

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 411

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 412

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 413

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 414

Splay tree: every access splays to the root; amortized O(log n).

## entry 415

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 416

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 417

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 418

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 419

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 420

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 421

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 422

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 423

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 424

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 425

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 426

Splay tree: every access splays to the root; amortized O(log n).

## entry 427

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 428

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 429

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 430

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 431

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 432

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 433

Euler tour flattens a tree into an array for range-query LCA.

## entry 434

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 435

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 436

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 437

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 438

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 439

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 440

Union-Find with path compression amortizes to near-O(1) per op.

## entry 441

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 442

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 443

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 444

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 445

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 446

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 447

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 448

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 449

Monotonic stack pops while the new element violates the invariant.

## entry 450

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 451

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 452

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 453

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 454

Monotonic stack pops while the new element violates the invariant.

## entry 455

State compression: bitmask + integer encodes a small subset cheaply.

## entry 456

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 457

State compression: bitmask + integer encodes a small subset cheaply.

## entry 458

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 459

Monotonic stack pops while the new element violates the invariant.

## entry 460

Wavelet tree: range k-th element in O(log Σ) time.

## entry 461

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 462

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 463

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 464

State compression: bitmask + integer encodes a small subset cheaply.

## entry 465

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 466

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 467

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 468

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 469

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 470

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 471

Wavelet tree: range k-th element in O(log Σ) time.

## entry 472

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 473

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 474

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 475

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 476

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 477

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 478

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 479

Wavelet tree: range k-th element in O(log Σ) time.

## entry 480

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 481

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 482

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 483

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 484

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 485

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 486

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 487

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 488

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 489

Euler tour flattens a tree into an array for range-query LCA.

## entry 490

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 491

Heap when you only need top-k; full sort is wasted work.

## entry 492

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 493

Stable sort matters when a secondary key was set in a prior pass.

## entry 494

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 495

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 496

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 497

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 498

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 499

State compression: bitmask + integer encodes a small subset cheaply.

## entry 500

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 501

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 502

Splay tree: every access splays to the root; amortized O(log n).

## entry 503

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 504

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 505

Walk both pointers from each end inward; advance the smaller side.

## entry 506

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 507

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 508

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 509

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 510

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 511

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 512

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 513

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 514

Stable sort matters when a secondary key was set in a prior pass.

## entry 515

LIS via patience: each pile holds the smallest tail of length k.

## entry 516

Wavelet tree: range k-th element in O(log Σ) time.

## entry 517

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 518

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 519

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 520

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 521

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 522

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 523

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 524

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 525

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 526

Euler tour flattens a tree into an array for range-query LCA.

## entry 527

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 528

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 529

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 530

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 531

Wavelet tree: range k-th element in O(log Σ) time.

## entry 532

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 533

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 534

StringBuilder: amortize allocation by doubling on grow.

## entry 535

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 536

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 537

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 538

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 539

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 540

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 541

StringBuilder: amortize allocation by doubling on grow.

## entry 542

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 543

State compression: bitmask + integer encodes a small subset cheaply.

## entry 544

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 545

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 546

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 547

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 548

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 549

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 550

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 551

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 552

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 553

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 554

Walk both pointers from each end inward; advance the smaller side.

## entry 555

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 556

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 557

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 558

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 559

Heavy-light decomposition: each path crosses O(log n) heavy chains.
