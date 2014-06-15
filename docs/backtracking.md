# backtracking

Morris traversal threads predecessors back to current node — O(1) extra space.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Manacher expands around each center, reusing prior radii via mirror reflection.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Union-Find with path compression amortizes to near-O(1) per op.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Merge intervals: sort by start; extend the running interval while overlapping.

Stable sort matters when a secondary key was set in a prior pass.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Monotonic stack pops while the new element violates the invariant.

Greedy by end-time picks the most non-overlapping intervals.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Unbounded knapsack: capacity inner ascending allows item reuse.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

LIS via patience: each pile holds the smallest tail of length k.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Heap when you only need top-k; full sort is wasted work.

## entry 1

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 2

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 3

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 6

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 7

Wavelet tree: range k-th element in O(log Σ) time.

## entry 8

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 9

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 10

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 11

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 12

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 13

Monotonic stack pops while the new element violates the invariant.

## entry 14

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 15

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 16

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 17

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 18

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 19

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 20

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 21

Splay tree: every access splays to the root; amortized O(log n).

## entry 22

Heap when you only need top-k; full sort is wasted work.

## entry 23

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 24

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 25

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 26

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 27

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 28

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 29

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 30

Heap when you only need top-k; full sort is wasted work.

## entry 31

Monotonic stack pops while the new element violates the invariant.

## entry 32

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 33

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 34

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 35

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 36

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 37

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 38

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 39

State compression: bitmask + integer encodes a small subset cheaply.

## entry 40

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 41

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 42

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 43

Greedy by end-time picks the most non-overlapping intervals.

## entry 44

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 45

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 46

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 47

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 48

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 49

Splay tree: every access splays to the root; amortized O(log n).

## entry 50

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 51

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 52

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 53

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 54

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 55

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 56

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 57

Euler tour flattens a tree into an array for range-query LCA.

## entry 58

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 59

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 60

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 61

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 62

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 63

LIS via patience: each pile holds the smallest tail of length k.

## entry 64

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 65

Heap when you only need top-k; full sort is wasted work.

## entry 66

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 67

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 68

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 69

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 70

Splay tree: every access splays to the root; amortized O(log n).

## entry 71

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 72

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 73

Wavelet tree: range k-th element in O(log Σ) time.

## entry 74

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 75

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 76

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 77

StringBuilder: amortize allocation by doubling on grow.

## entry 78

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 79

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 80

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 81

Walk both pointers from each end inward; advance the smaller side.

## entry 82

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 83

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 84

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 85

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 86

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 87

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 88

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 89

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 90

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 91

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 92

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 93

Monotonic stack pops while the new element violates the invariant.

## entry 94

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 95

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 96

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 97

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 98

Articulation points: same DFS as bridges, with a slightly different test.

## entry 99

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 100

Walk both pointers from each end inward; advance the smaller side.

## entry 101

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 102

StringBuilder: amortize allocation by doubling on grow.

## entry 103

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 104

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 105

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 106

Wavelet tree: range k-th element in O(log Σ) time.

## entry 107

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 108

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 109

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 110

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 111

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 112

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 113

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 114

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 115

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 116

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 117

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 118

Heap when you only need top-k; full sort is wasted work.

## entry 119

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 120

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 121

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 122

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 123

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 124

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 125

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 126

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 127

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 128

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 129

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 130

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 131

Greedy by end-time picks the most non-overlapping intervals.

## entry 132

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 133

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 134

Wavelet tree: range k-th element in O(log Σ) time.

## entry 135

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 136

Walk both pointers from each end inward; advance the smaller side.

## entry 137

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 138

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 139

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 140

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 141

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 142

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 143

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 144

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 145

State compression: bitmask + integer encodes a small subset cheaply.

## entry 146

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 147

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 148

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 149

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 150

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 151

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 152

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 153

Walk both pointers from each end inward; advance the smaller side.

## entry 154

Articulation points: same DFS as bridges, with a slightly different test.

## entry 155

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 156

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 157

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 158

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 159

Heap when you only need top-k; full sort is wasted work.

## entry 160

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 161

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 162

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 163

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 164

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 165

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 166

Wavelet tree: range k-th element in O(log Σ) time.

## entry 167

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 168

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 169

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 170

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 171

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 172

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 173

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 174

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 175

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 176

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 177

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 178

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 179

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 180

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 181

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 182

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 183

Union-Find with path compression amortizes to near-O(1) per op.

## entry 184

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 185

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 186

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 187

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 188

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 189

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 190

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 191

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 192

Articulation points: same DFS as bridges, with a slightly different test.

## entry 193

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 194

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 195

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 196

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 197

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 198

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 199

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 200

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 201

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 202

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 203

Splay tree: every access splays to the root; amortized O(log n).

## entry 204

LIS via patience: each pile holds the smallest tail of length k.

## entry 205

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 206

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 207

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 208

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 209

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 210

Stable sort matters when a secondary key was set in a prior pass.

## entry 211

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 212

LIS via patience: each pile holds the smallest tail of length k.

## entry 213

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 214

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 215

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 216

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 217

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 218

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 219

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 220

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 221

Union-Find with path compression amortizes to near-O(1) per op.

## entry 222

Monotonic stack pops while the new element violates the invariant.

## entry 223

Wavelet tree: range k-th element in O(log Σ) time.

## entry 224

Union-Find with path compression amortizes to near-O(1) per op.

## entry 225

LIS via patience: each pile holds the smallest tail of length k.

## entry 226

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 227

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 228

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 229

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 230

Wavelet tree: range k-th element in O(log Σ) time.

## entry 231

LIS via patience: each pile holds the smallest tail of length k.

## entry 232

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 233

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 234

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 235

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 236

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 237

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 238

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 239

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 240

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 241

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 242

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 243

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 244

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 245

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 246

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 247

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 248

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 249

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 250

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 251

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 252

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 253

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 254

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 255

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 256

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 257

Heap when you only need top-k; full sort is wasted work.

## entry 258

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 259

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 260

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 261

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 262

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 263

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 264

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 265

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 266

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 267

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 268

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 269

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 270

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 271

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 272

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 273

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 274

Wavelet tree: range k-th element in O(log Σ) time.

## entry 275

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 276

Stable sort matters when a secondary key was set in a prior pass.

## entry 277

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 278

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 279

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 280

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 281

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 282

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 283

Walk both pointers from each end inward; advance the smaller side.

## entry 284

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 285

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 286

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 287

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 288

Walk both pointers from each end inward; advance the smaller side.

## entry 289

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 290

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 291

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 292

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 293

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 294

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 295

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 296

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 297

Articulation points: same DFS as bridges, with a slightly different test.

## entry 298

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 299

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 300

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 301

Union-Find with path compression amortizes to near-O(1) per op.

## entry 302

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 303

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 304

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 305

Monotonic stack pops while the new element violates the invariant.

## entry 306

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 307

Wavelet tree: range k-th element in O(log Σ) time.

## entry 308

Union-Find with path compression amortizes to near-O(1) per op.

## entry 309

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 310

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 311

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 312

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 313

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 314

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 315

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 316

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 317

Articulation points: same DFS as bridges, with a slightly different test.

## entry 318

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 319

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 320

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 321

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 322

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 323

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 324

Wavelet tree: range k-th element in O(log Σ) time.

## entry 325

StringBuilder: amortize allocation by doubling on grow.

## entry 326

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 327

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 328

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 329

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 330

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 331

Greedy by end-time picks the most non-overlapping intervals.

## entry 332

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 333

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 334

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 335

Monotonic stack pops while the new element violates the invariant.

## entry 336

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 337

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 338

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 339

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 340

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 341

Euler tour flattens a tree into an array for range-query LCA.

## entry 342

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 343

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 344

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 345

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 346

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 347

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 348

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 349

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 350

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 351

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 352

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 353

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 354

State compression: bitmask + integer encodes a small subset cheaply.

## entry 355

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 356

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 357

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 358

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 359

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 360

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 361

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 362

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 363

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 364

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 365

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 366

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 367

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 368

Euler tour flattens a tree into an array for range-query LCA.

## entry 369

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 370

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 371

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 372

Wavelet tree: range k-th element in O(log Σ) time.

## entry 373

Greedy by end-time picks the most non-overlapping intervals.

## entry 374

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 375

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 376

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 377

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 378

Articulation points: same DFS as bridges, with a slightly different test.

## entry 379

State compression: bitmask + integer encodes a small subset cheaply.

## entry 380

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 381

Union-Find with path compression amortizes to near-O(1) per op.

## entry 382

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 383

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 384

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 385

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 386

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 387

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 388

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 389

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 390

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 391

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 392

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 393

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 394

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 395

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 396

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 397

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 398

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 399

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 400

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 401

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 402

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 403

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 404

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 405

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 406

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 407

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 408

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 409

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 410

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 411

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 412

Heap when you only need top-k; full sort is wasted work.

## entry 413

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 414

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 415

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 416

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 417

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 418

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 419

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 420

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 421

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 422

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 423

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 424

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 425

State compression: bitmask + integer encodes a small subset cheaply.

## entry 426

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 427

Articulation points: same DFS as bridges, with a slightly different test.

## entry 428

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 429

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 430

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 431

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 432

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 433

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 434

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 435

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 436

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 437

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 438

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 439

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 440

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 441

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 442

Walk both pointers from each end inward; advance the smaller side.

## entry 443

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 444

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 445

Wavelet tree: range k-th element in O(log Σ) time.

## entry 446

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 447

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 448

Heap when you only need top-k; full sort is wasted work.

## entry 449

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 450

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 451

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 452

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 453

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 454

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 455

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 456

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 457

State compression: bitmask + integer encodes a small subset cheaply.

## entry 458

Splay tree: every access splays to the root; amortized O(log n).

## entry 459

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 460

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 461

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 462

State compression: bitmask + integer encodes a small subset cheaply.

## entry 463

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 464

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 465

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 466

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 467

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 468

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 469

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 470

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 471

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 472

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 473

Greedy by end-time picks the most non-overlapping intervals.

## entry 474

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 475

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 476

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 477

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 478

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 479

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 480

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 481

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 482

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 483

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 484

Heap when you only need top-k; full sort is wasted work.

## entry 485

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 486

Wavelet tree: range k-th element in O(log Σ) time.

## entry 487

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 488

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 489

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 490

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 491

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 492

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 493

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 494

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 495

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 496

Wavelet tree: range k-th element in O(log Σ) time.

## entry 497

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 498

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 499

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 500

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 501

Walk both pointers from each end inward; advance the smaller side.

## entry 502

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 503

Euler tour flattens a tree into an array for range-query LCA.

## entry 504

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 505

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 506

Walk both pointers from each end inward; advance the smaller side.

## entry 507

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 508

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 509

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 510

Stable sort matters when a secondary key was set in a prior pass.

## entry 511

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 512

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 513

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 514

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 515

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 516

Heap when you only need top-k; full sort is wasted work.

## entry 517

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 518

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 519

Euler tour flattens a tree into an array for range-query LCA.

## entry 520

LIS via patience: each pile holds the smallest tail of length k.
