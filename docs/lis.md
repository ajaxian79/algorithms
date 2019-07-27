# lis

Manacher expands around each center, reusing prior radii via mirror reflection.

Merge intervals: sort by start; extend the running interval while overlapping.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Union-Find with path compression amortizes to near-O(1) per op.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

LIS via patience: each pile holds the smallest tail of length k.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Greedy by end-time picks the most non-overlapping intervals.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Unbounded knapsack: capacity inner ascending allows item reuse.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Stable sort matters when a secondary key was set in a prior pass.

Morris traversal threads predecessors back to current node — O(1) extra space.

In-place compaction uses two pointers: read advances always, write only on keep.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Heap when you only need top-k; full sort is wasted work.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Monotonic stack pops while the new element violates the invariant.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Walk both pointers from each end inward; advance the smaller side.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 1

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 2

Walk both pointers from each end inward; advance the smaller side.

## entry 3

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4

Splay tree: every access splays to the root; amortized O(log n).

## entry 5

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 6

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 7

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 8

State compression: bitmask + integer encodes a small subset cheaply.

## entry 9

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 10

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 11

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 12

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 13

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 14

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 15

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 16

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 17

LIS via patience: each pile holds the smallest tail of length k.

## entry 18

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 19

Wavelet tree: range k-th element in O(log Σ) time.

## entry 20

Articulation points: same DFS as bridges, with a slightly different test.

## entry 21

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 22

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 23

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 24

Union-Find with path compression amortizes to near-O(1) per op.

## entry 25

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 26

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 27

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 28

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 29

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 30

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 31

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 32

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 33

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 34

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 35

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 36

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 37

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 38

Wavelet tree: range k-th element in O(log Σ) time.

## entry 39

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 40

Heap when you only need top-k; full sort is wasted work.

## entry 41

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 42

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 43

Euler tour flattens a tree into an array for range-query LCA.

## entry 44

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 45

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 46

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 47

LIS via patience: each pile holds the smallest tail of length k.

## entry 48

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 49

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 50

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 51

Monotonic stack pops while the new element violates the invariant.

## entry 52

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 53

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 54

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 55

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 56

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 57

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 58

StringBuilder: amortize allocation by doubling on grow.

## entry 59

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 60

Articulation points: same DFS as bridges, with a slightly different test.

## entry 61

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 62

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 63

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 64

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 65

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 66

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 67

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 68

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 69

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 70

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 71

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 72

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 73

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 74

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 75

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 76

Monotonic stack pops while the new element violates the invariant.

## entry 77

Euler tour flattens a tree into an array for range-query LCA.

## entry 78

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 79

Stable sort matters when a secondary key was set in a prior pass.

## entry 80

Splay tree: every access splays to the root; amortized O(log n).

## entry 81

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 82

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 83

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 84

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 85

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 86

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 87

Greedy by end-time picks the most non-overlapping intervals.

## entry 88

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 89

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 90

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 91

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 92

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 93

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 94

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 95

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 96

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 97

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 98

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 99

Splay tree: every access splays to the root; amortized O(log n).

## entry 100

Splay tree: every access splays to the root; amortized O(log n).

## entry 101

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 102

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 103

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 104

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 105

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 106

LIS via patience: each pile holds the smallest tail of length k.

## entry 107

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 108

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 109

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 110

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 111

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 112

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 113

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 114

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 115

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 116

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 117

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 118

Walk both pointers from each end inward; advance the smaller side.

## entry 119

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 120

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 121

Walk both pointers from each end inward; advance the smaller side.

## entry 122

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 123

Euler tour flattens a tree into an array for range-query LCA.

## entry 124

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 125

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 126

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 127

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 128

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 129

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 130

State compression: bitmask + integer encodes a small subset cheaply.

## entry 131

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 132

Stable sort matters when a secondary key was set in a prior pass.

## entry 133

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 134

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 135

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 136

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 137

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 138

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 139

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 140

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 141

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 142

Splay tree: every access splays to the root; amortized O(log n).

## entry 143

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 144

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 145

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 146

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 147

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 148

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 149

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 150

Union-Find with path compression amortizes to near-O(1) per op.

## entry 151

Monotonic stack pops while the new element violates the invariant.

## entry 152

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 153

StringBuilder: amortize allocation by doubling on grow.

## entry 154

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 155

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 156

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 157

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 158

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 159

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 160

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 161

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 162

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 163

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 164

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 165

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 166

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 167

Heap when you only need top-k; full sort is wasted work.

## entry 168

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 169

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 170

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 171

Walk both pointers from each end inward; advance the smaller side.

## entry 172

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 173

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 174

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 175

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 176

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 177

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 178

Heap when you only need top-k; full sort is wasted work.

## entry 179

Union-Find with path compression amortizes to near-O(1) per op.

## entry 180

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 181

Heap when you only need top-k; full sort is wasted work.

## entry 182

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 183

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 184

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 185

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 186

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 187

StringBuilder: amortize allocation by doubling on grow.

## entry 188

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 189

Union-Find with path compression amortizes to near-O(1) per op.

## entry 190

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 191

StringBuilder: amortize allocation by doubling on grow.

## entry 192

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 193

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 194

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 195

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 196

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 197

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 198

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 199

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 200

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 201

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 202

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 203

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 204

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 205

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 206

Euler tour flattens a tree into an array for range-query LCA.

## entry 207

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 208

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 209

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 210

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 211

Stable sort matters when a secondary key was set in a prior pass.

## entry 212

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 213

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 214

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 215

Splay tree: every access splays to the root; amortized O(log n).

## entry 216

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 217

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 218

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 219

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 220

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 221

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 222

Euler tour flattens a tree into an array for range-query LCA.

## entry 223

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 224

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 225

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 226

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 227

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 228

LIS via patience: each pile holds the smallest tail of length k.

## entry 229

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 230

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 231

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 232

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 233

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 234

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 235

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 236

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 237

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 238

Monotonic stack pops while the new element violates the invariant.

## entry 239

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 240

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 241

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 242

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 243

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 244

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 245

StringBuilder: amortize allocation by doubling on grow.

## entry 246

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 247

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 248

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 249

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 250

Greedy by end-time picks the most non-overlapping intervals.

## entry 251

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 252

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 253

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 254

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 255

Euler tour flattens a tree into an array for range-query LCA.

## entry 256

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 257

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 258

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 259

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 260

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 261

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 262

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 263

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 264

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 265

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 266

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 267

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 268

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 269

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 270

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 271

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 272

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 273

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 274

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 275

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 276

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 277

Heap when you only need top-k; full sort is wasted work.

## entry 278

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 279

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 280

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 281

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 282

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 283

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 284

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 285

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 286

Walk both pointers from each end inward; advance the smaller side.

## entry 287

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 288

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 289

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 290

Greedy by end-time picks the most non-overlapping intervals.

## entry 291

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 292

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 293

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 294

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 295

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 296

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 297

Wavelet tree: range k-th element in O(log Σ) time.

## entry 298

Euler tour flattens a tree into an array for range-query LCA.

## entry 299

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 300

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 301

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 302

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 303

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 304

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 305

Articulation points: same DFS as bridges, with a slightly different test.

## entry 306

Monotonic stack pops while the new element violates the invariant.

## entry 307

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 308

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 309

State compression: bitmask + integer encodes a small subset cheaply.

## entry 310

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 311

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 312

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 313

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 314

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 315

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 316

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 317

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 318

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 319

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 320

Euler tour flattens a tree into an array for range-query LCA.

## entry 321

StringBuilder: amortize allocation by doubling on grow.

## entry 322

StringBuilder: amortize allocation by doubling on grow.

## entry 323

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 324

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 325

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 326

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 327

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 328

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 329

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 330

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 331

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 332

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 333

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 334

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 335

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 336

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 337

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 338

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 339

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 340

Articulation points: same DFS as bridges, with a slightly different test.

## entry 341

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
