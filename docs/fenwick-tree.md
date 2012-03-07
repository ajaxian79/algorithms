# fenwick-tree

Merge intervals: sort by start; extend the running interval while overlapping.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Union-Find with path compression amortizes to near-O(1) per op.

Walk both pointers from each end inward; advance the smaller side.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

LIS via patience: each pile holds the smallest tail of length k.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Stable sort matters when a secondary key was set in a prior pass.

Greedy by end-time picks the most non-overlapping intervals.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Heap when you only need top-k; full sort is wasted work.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Monotonic stack pops while the new element violates the invariant.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Manacher expands around each center, reusing prior radii via mirror reflection.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Unbounded knapsack: capacity inner ascending allows item reuse.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Morris traversal threads predecessors back to current node — O(1) extra space.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1

LIS via patience: each pile holds the smallest tail of length k.

## entry 2

Greedy by end-time picks the most non-overlapping intervals.

## entry 3

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 4

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 6

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 7

Walk both pointers from each end inward; advance the smaller side.

## entry 8

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 9

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 10

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 11

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 12

State compression: bitmask + integer encodes a small subset cheaply.

## entry 13

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 14

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 15

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 16

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 17

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 18

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 19

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 20

Union-Find with path compression amortizes to near-O(1) per op.

## entry 21

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 22

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 23

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 24

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 25

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 26

Greedy by end-time picks the most non-overlapping intervals.

## entry 27

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 28

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 29

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 30

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 31

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 32

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 33

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 34

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 35

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 36

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 37

Union-Find with path compression amortizes to near-O(1) per op.

## entry 38

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 39

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 40

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 41

State compression: bitmask + integer encodes a small subset cheaply.

## entry 42

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 43

Euler tour flattens a tree into an array for range-query LCA.

## entry 44

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 45

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 46

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 47

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 48

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 49

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 50

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 51

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 52

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 53

LIS via patience: each pile holds the smallest tail of length k.

## entry 54

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 55

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 56

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 57

Union-Find with path compression amortizes to near-O(1) per op.

## entry 58

Heap when you only need top-k; full sort is wasted work.

## entry 59

Articulation points: same DFS as bridges, with a slightly different test.

## entry 60

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 61

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 62

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 63

StringBuilder: amortize allocation by doubling on grow.

## entry 64

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 65

LIS via patience: each pile holds the smallest tail of length k.

## entry 66

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 67

Articulation points: same DFS as bridges, with a slightly different test.

## entry 68

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 69

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 70

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 71

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 72

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 73

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 74

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 75

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 76

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 77

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 78

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 79

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 80

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 81

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 82

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 83

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 84

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 85

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 86

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 87

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 88

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 89

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 90

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 91

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 92

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 93

Articulation points: same DFS as bridges, with a slightly different test.

## entry 94

Wavelet tree: range k-th element in O(log Σ) time.

## entry 95

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 96

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 97

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 98

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 99

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 100

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 101

Stable sort matters when a secondary key was set in a prior pass.

## entry 102

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 103

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 104

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 105

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 106

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 107

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 108

Heap when you only need top-k; full sort is wasted work.

## entry 109

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 110

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 111

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 112

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 113

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 114

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 115

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 116

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 117

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 118

Wavelet tree: range k-th element in O(log Σ) time.

## entry 119

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 120

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 121

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 122

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 123

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 124

Heap when you only need top-k; full sort is wasted work.

## entry 125

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 126

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 127

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 128

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 129

LIS via patience: each pile holds the smallest tail of length k.

## entry 130

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 131

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 132

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 133

Heap when you only need top-k; full sort is wasted work.

## entry 134

Union-Find with path compression amortizes to near-O(1) per op.

## entry 135

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 136

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 137

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 138

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 139

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 140

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 141

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 142

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 143

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 144

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 145

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 146

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 147

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 148

LIS via patience: each pile holds the smallest tail of length k.

## entry 149

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 150

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 151

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 152

Euler tour flattens a tree into an array for range-query LCA.

## entry 153

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 154

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 155

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 156

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 157

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 158

Walk both pointers from each end inward; advance the smaller side.

## entry 159

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 160

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 161

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 162

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 163

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 164

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 165

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 166

Splay tree: every access splays to the root; amortized O(log n).

## entry 167

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 168

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 169

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 170

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 171

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 172

Greedy by end-time picks the most non-overlapping intervals.

## entry 173

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 174

State compression: bitmask + integer encodes a small subset cheaply.

## entry 175

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 176

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 177

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 178

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 179

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 180

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 181

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 182

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 183

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 184

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 185

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 186

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 187

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 188

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 189

Monotonic stack pops while the new element violates the invariant.

## entry 190

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 191

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 192

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 193

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 194

StringBuilder: amortize allocation by doubling on grow.

## entry 195

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 196

Stable sort matters when a secondary key was set in a prior pass.

## entry 197

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 198

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 199

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 200

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 201

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 202

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 203

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 204

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 205

Splay tree: every access splays to the root; amortized O(log n).

## entry 206

State compression: bitmask + integer encodes a small subset cheaply.

## entry 207

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 208

Euler tour flattens a tree into an array for range-query LCA.

## entry 209

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 210

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 211

Stable sort matters when a secondary key was set in a prior pass.

## entry 212

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 213

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 214

LIS via patience: each pile holds the smallest tail of length k.

## entry 215

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 216

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 217

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 218

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 219

Heap when you only need top-k; full sort is wasted work.

## entry 220

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 221

Union-Find with path compression amortizes to near-O(1) per op.

## entry 222

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 223

Greedy by end-time picks the most non-overlapping intervals.

## entry 224

Union-Find with path compression amortizes to near-O(1) per op.

## entry 225

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 226

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 227

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 228

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 229

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 230

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 231

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 232

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 233

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 234

Walk both pointers from each end inward; advance the smaller side.

## entry 235

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 236

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 237

Monotonic stack pops while the new element violates the invariant.

## entry 238

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 239

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 240

LIS via patience: each pile holds the smallest tail of length k.

## entry 241

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 242

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 243

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 244

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 245

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 246

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 247

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 248

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 249

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 250

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 251

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 252

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 253

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 254

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 255

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 256

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 257

LIS via patience: each pile holds the smallest tail of length k.

## entry 258

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 259

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 260

Stable sort matters when a secondary key was set in a prior pass.

## entry 261

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 262

Articulation points: same DFS as bridges, with a slightly different test.

## entry 263

Union-Find with path compression amortizes to near-O(1) per op.

## entry 264

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 265

Articulation points: same DFS as bridges, with a slightly different test.

## entry 266

Splay tree: every access splays to the root; amortized O(log n).

## entry 267

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 268

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 269

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 270

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 271

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 272

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 273

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 274

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 275

State compression: bitmask + integer encodes a small subset cheaply.

## entry 276

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 277

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 278

Stable sort matters when a secondary key was set in a prior pass.

## entry 279

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 280

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 281

Heap when you only need top-k; full sort is wasted work.

## entry 282

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 283

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 284

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 285

Greedy by end-time picks the most non-overlapping intervals.

## entry 286

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 287

Heap when you only need top-k; full sort is wasted work.

## entry 288

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 289

State compression: bitmask + integer encodes a small subset cheaply.

## entry 290

State compression: bitmask + integer encodes a small subset cheaply.

## entry 291

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 292

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 293

Articulation points: same DFS as bridges, with a slightly different test.

## entry 294

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 295

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 296

Heap when you only need top-k; full sort is wasted work.

## entry 297

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 298

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 299

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 300

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 301

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 302

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 303

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 304

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 305

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 306

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 307

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 308

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 309

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 310

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 311

Euler tour flattens a tree into an array for range-query LCA.

## entry 312

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 313

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 314

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 315

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 316

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 317

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 318

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 319

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 320

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 321

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 322

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 323

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 324

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 325

Walk both pointers from each end inward; advance the smaller side.

## entry 326

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 327

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 328

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 329

Walk both pointers from each end inward; advance the smaller side.

## entry 330

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 331

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 332

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 333

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 334

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 335

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 336

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 337

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 338

Splay tree: every access splays to the root; amortized O(log n).

## entry 339

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 340

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 341

State compression: bitmask + integer encodes a small subset cheaply.

## entry 342

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 343

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 344

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 345

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 346

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 347

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 348

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 349

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 350

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 351

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 352

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 353

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 354

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 355

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 356

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 357

Splay tree: every access splays to the root; amortized O(log n).

## entry 358

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 359

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 360

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 361

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 362

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 363

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 364

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 365

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 366

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 367

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 368

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 369

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 370

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 371

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 372

Stable sort matters when a secondary key was set in a prior pass.

## entry 373

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 374

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 375

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 376

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 377

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 378

Splay tree: every access splays to the root; amortized O(log n).

## entry 379

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 380

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 381

Union-Find with path compression amortizes to near-O(1) per op.

## entry 382

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 383

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 384

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 385

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 386

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 387

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 388

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 389

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 390

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 391

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 392

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 393

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 394

Monotonic stack pops while the new element violates the invariant.

## entry 395

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 396

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 397

Articulation points: same DFS as bridges, with a slightly different test.

## entry 398

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 399

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 400

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 401

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 402

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 403

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 404

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 405

Euler tour flattens a tree into an array for range-query LCA.

## entry 406

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 407

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 408

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 409

State compression: bitmask + integer encodes a small subset cheaply.

## entry 410

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 411

Monotonic stack pops while the new element violates the invariant.

## entry 412

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 413

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 414

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 415

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 416

Monotonic stack pops while the new element violates the invariant.

## entry 417

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 418

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 419

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 420

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 421

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 422

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 423

Heap when you only need top-k; full sort is wasted work.

## entry 424

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 425

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 426

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 427

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 428

Splay tree: every access splays to the root; amortized O(log n).

## entry 429

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 430

Greedy by end-time picks the most non-overlapping intervals.

## entry 431

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 432

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 433

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 434

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 435

Euler tour flattens a tree into an array for range-query LCA.

## entry 436

Wavelet tree: range k-th element in O(log Σ) time.

## entry 437

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 438

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 439

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 440

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 441

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 442

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 443

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 444

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 445

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 446

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 447

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 448

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 449

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 450

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 451

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 452

Heap when you only need top-k; full sort is wasted work.

## entry 453

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 454

Splay tree: every access splays to the root; amortized O(log n).

## entry 455

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 456

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 457

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 458

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 459

Stable sort matters when a secondary key was set in a prior pass.

## entry 460

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 461

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 462

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 463

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 464

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 465

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 466

Walk both pointers from each end inward; advance the smaller side.

## entry 467

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 468

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 469

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 470

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 471

Greedy by end-time picks the most non-overlapping intervals.

## entry 472

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 473

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 474

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 475

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 476

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 477

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 478

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 479

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 480

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 481

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 482

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 483

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 484

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 485

LIS via patience: each pile holds the smallest tail of length k.

## entry 486

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 487

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 488

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 489

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 490

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 491

Wavelet tree: range k-th element in O(log Σ) time.

## entry 492

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 493

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 494

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 495

Wavelet tree: range k-th element in O(log Σ) time.

## entry 496

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 497

LIS via patience: each pile holds the smallest tail of length k.

## entry 498

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 499

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 500

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 501

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 502

Articulation points: same DFS as bridges, with a slightly different test.

## entry 503

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 504

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 505

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 506

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 507

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 508

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 509

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 510

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 511

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 512

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 513

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 514

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 515

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 516

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 517

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 518

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 519

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 520

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 521

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 522

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 523

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 524

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 525

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 526

LIS via patience: each pile holds the smallest tail of length k.

## entry 527

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 528

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 529

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 530

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 531

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 532

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 533

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 534

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 535

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 536

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 537

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 538

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 539

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 540

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 541

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 542

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 543

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 544

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 545

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 546

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 547

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 548

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 549

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 550

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 551

Stable sort matters when a secondary key was set in a prior pass.

## entry 552

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 553

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 554

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 555

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 556

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 557

Articulation points: same DFS as bridges, with a slightly different test.

## entry 558

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 559

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 560

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 561

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 562

LIS via patience: each pile holds the smallest tail of length k.

## entry 563

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 564

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 565

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 566

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 567

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 568

StringBuilder: amortize allocation by doubling on grow.

## entry 569

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 570

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 571

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 572

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 573

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 574

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 575

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 576

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 577

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 578

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 579

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 580

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 581

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 582

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 583

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 584

Splay tree: every access splays to the root; amortized O(log n).

## entry 585

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 586

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 587

State compression: bitmask + integer encodes a small subset cheaply.

## entry 588

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 589

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 590

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 591

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 592

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 593

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 594

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 595

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 596

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 597

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 598

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 599

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 600

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 601

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 602

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 603

Graph DP on DAGs: topological order makes the dependency direction explicit.
