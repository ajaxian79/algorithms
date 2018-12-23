# intervals-greedy

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Greedy by end-time picks the most non-overlapping intervals.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

LIS via patience: each pile holds the smallest tail of length k.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Morris traversal threads predecessors back to current node — O(1) extra space.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Heap when you only need top-k; full sort is wasted work.

Unbounded knapsack: capacity inner ascending allows item reuse.

Manacher expands around each center, reusing prior radii via mirror reflection.

Monotonic stack pops while the new element violates the invariant.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

BFS layers carry implicit shortest-path distance in unweighted graphs.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Stable sort matters when a secondary key was set in a prior pass.

Union-Find with path compression amortizes to near-O(1) per op.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Merge intervals: sort by start; extend the running interval while overlapping.

Walk both pointers from each end inward; advance the smaller side.

In-place compaction uses two pointers: read advances always, write only on keep.

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 1

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5

Heap when you only need top-k; full sort is wasted work.

## entry 6

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 7

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 8

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 9

State compression: bitmask + integer encodes a small subset cheaply.

## entry 10

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 11

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 12

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 13

Walk both pointers from each end inward; advance the smaller side.

## entry 14

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 15

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 16

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 17

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 18

Splay tree: every access splays to the root; amortized O(log n).

## entry 19

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 20

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 21

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 22

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 23

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 24

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 25

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 26

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 27

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 28

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 29

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 30

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 31

Heap when you only need top-k; full sort is wasted work.

## entry 32

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 33

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 34

State compression: bitmask + integer encodes a small subset cheaply.

## entry 35

State compression: bitmask + integer encodes a small subset cheaply.

## entry 36

Heap when you only need top-k; full sort is wasted work.

## entry 37

Stable sort matters when a secondary key was set in a prior pass.

## entry 38

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 39

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 40

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 41

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 42

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 43

Stable sort matters when a secondary key was set in a prior pass.

## entry 44

LIS via patience: each pile holds the smallest tail of length k.

## entry 45

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 46

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 47

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 48

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 49

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 50

Greedy by end-time picks the most non-overlapping intervals.

## entry 51

Monotonic stack pops while the new element violates the invariant.

## entry 52

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 53

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 54

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 55

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 56

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 57

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 58

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 59

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 60

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 61

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 62

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 63

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 64

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 65

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 66

Articulation points: same DFS as bridges, with a slightly different test.

## entry 67

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 68

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 69

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 70

Union-Find with path compression amortizes to near-O(1) per op.

## entry 71

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 72

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 73

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 74

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 75

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 76

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 77

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 78

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 79

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 80

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 81

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 82

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 83

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 84

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 85

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 86

LIS via patience: each pile holds the smallest tail of length k.

## entry 87

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 88

Articulation points: same DFS as bridges, with a slightly different test.

## entry 89

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 90

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 91

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 92

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 93

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 94

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 95

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 96

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 97

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 98

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 99

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 100

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 101

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 102

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 103

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 104

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 105

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 106

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 107

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 108

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 109

Union-Find with path compression amortizes to near-O(1) per op.

## entry 110

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 111

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 112

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 113

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 114

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 115

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 116

Monotonic stack pops while the new element violates the invariant.

## entry 117

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 118

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 119

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 120

Greedy by end-time picks the most non-overlapping intervals.

## entry 121

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 122

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 123

Greedy by end-time picks the most non-overlapping intervals.

## entry 124

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 125

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 126

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 127

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 128

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 129

Wavelet tree: range k-th element in O(log Σ) time.

## entry 130

Stable sort matters when a secondary key was set in a prior pass.

## entry 131

Monotonic stack pops while the new element violates the invariant.

## entry 132

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 133

Stable sort matters when a secondary key was set in a prior pass.

## entry 134

Greedy by end-time picks the most non-overlapping intervals.

## entry 135

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 136

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 137

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 138

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 139

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 140

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 141

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 142

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 143

Stable sort matters when a secondary key was set in a prior pass.

## entry 144

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 145

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 146

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 147

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 148

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 149

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 150

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 151

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 152

LIS via patience: each pile holds the smallest tail of length k.

## entry 153

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 154

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 155

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 156

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 157

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 158

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 159

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 160

Stable sort matters when a secondary key was set in a prior pass.

## entry 161

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 162

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 163

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 164

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 165

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 166

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 167

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 168

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 169

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 170

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 171

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 172

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 173

Wavelet tree: range k-th element in O(log Σ) time.

## entry 174

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 175

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 176

Heap when you only need top-k; full sort is wasted work.

## entry 177

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 178

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 179

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 180

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 181

Heap when you only need top-k; full sort is wasted work.

## entry 182

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 183

Euler tour flattens a tree into an array for range-query LCA.

## entry 184

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 185

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 186

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 187

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 188

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 189

Union-Find with path compression amortizes to near-O(1) per op.

## entry 190

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 191

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 192

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 193

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 194

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 195

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 196

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 197

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 198

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 199

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 200

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 201

Stable sort matters when a secondary key was set in a prior pass.

## entry 202

Articulation points: same DFS as bridges, with a slightly different test.

## entry 203

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 204

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 205

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 206

LIS via patience: each pile holds the smallest tail of length k.

## entry 207

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 208

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 209

Wavelet tree: range k-th element in O(log Σ) time.

## entry 210

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 211

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 212

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 213

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 214

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 215

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 216

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 217

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 218

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 219

Wavelet tree: range k-th element in O(log Σ) time.

## entry 220

Monotonic stack pops while the new element violates the invariant.

## entry 221

Walk both pointers from each end inward; advance the smaller side.

## entry 222

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 223

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 224

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 225

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 226

Euler tour flattens a tree into an array for range-query LCA.

## entry 227

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 228

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 229

Articulation points: same DFS as bridges, with a slightly different test.

## entry 230

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 231

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 232

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 233

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 234

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 235

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 236

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 237

Walk both pointers from each end inward; advance the smaller side.

## entry 238

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 239

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 240

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 241

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 242

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 243

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 244

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 245

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 246

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 247

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 248

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 249

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 250

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 251

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 252

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 253

Heap when you only need top-k; full sort is wasted work.

## entry 254

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 255

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 256

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 257

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 258

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 259

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 260

Monotonic stack pops while the new element violates the invariant.

## entry 261

LIS via patience: each pile holds the smallest tail of length k.

## entry 262

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 263

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 264

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 265

Splay tree: every access splays to the root; amortized O(log n).

## entry 266

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 267

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 268

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 269

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 270

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 271

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 272

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 273

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 274

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 275

Wavelet tree: range k-th element in O(log Σ) time.

## entry 276

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 277

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 278

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 279

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 280

Heap when you only need top-k; full sort is wasted work.

## entry 281

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 282

Articulation points: same DFS as bridges, with a slightly different test.

## entry 283

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 284

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 285

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 286

Stable sort matters when a secondary key was set in a prior pass.

## entry 287

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 288

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 289

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 290

LIS via patience: each pile holds the smallest tail of length k.

## entry 291

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 292

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 293

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 294

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 295

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 296

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 297

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 298

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 299

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 300

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 301

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 302

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 303

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 304

Splay tree: every access splays to the root; amortized O(log n).

## entry 305

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 306

LIS via patience: each pile holds the smallest tail of length k.

## entry 307

Union-Find with path compression amortizes to near-O(1) per op.

## entry 308

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 309

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 310

Walk both pointers from each end inward; advance the smaller side.

## entry 311

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 312

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 313

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 314

LIS via patience: each pile holds the smallest tail of length k.

## entry 315

Union-Find with path compression amortizes to near-O(1) per op.

## entry 316

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 317

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 318

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 319

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 320

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 321

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 322

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 323

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 324

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 325

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 326

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 327

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 328

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 329

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 330

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
