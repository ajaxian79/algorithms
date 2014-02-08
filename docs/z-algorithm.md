# z-algorithm

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Unbounded knapsack: capacity inner ascending allows item reuse.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Merge intervals: sort by start; extend the running interval while overlapping.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

In-place compaction uses two pointers: read advances always, write only on keep.

LIS via patience: each pile holds the smallest tail of length k.

Manacher expands around each center, reusing prior radii via mirror reflection.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Stable sort matters when a secondary key was set in a prior pass.

Morris traversal threads predecessors back to current node — O(1) extra space.

Union-Find with path compression amortizes to near-O(1) per op.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Heap when you only need top-k; full sort is wasted work.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 1

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 2

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 3

Walk both pointers from each end inward; advance the smaller side.

## entry 4

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 5

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 6

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 7

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 8

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 9

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 10

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 11

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 12

State compression: bitmask + integer encodes a small subset cheaply.

## entry 13

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 14

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 15

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 16

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 17

Stable sort matters when a secondary key was set in a prior pass.

## entry 18

Union-Find with path compression amortizes to near-O(1) per op.

## entry 19

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 20

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 21

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 22

Stable sort matters when a secondary key was set in a prior pass.

## entry 23

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 24

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 25

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 26

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 27

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 28

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 29

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 30

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 31

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 32

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 33

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 34

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 35

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 36

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 37

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 38

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 39

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 40

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 41

Heap when you only need top-k; full sort is wasted work.

## entry 42

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 43

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 44

Articulation points: same DFS as bridges, with a slightly different test.

## entry 45

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 46

Wavelet tree: range k-th element in O(log Σ) time.

## entry 47

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 48

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 49

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 50

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 51

Euler tour flattens a tree into an array for range-query LCA.

## entry 52

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 53

Monotonic stack pops while the new element violates the invariant.

## entry 54

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 55

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 56

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 57

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 58

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 59

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 60

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 61

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 62

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 63

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 64

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 65

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 66

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 67

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 68

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 69

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 70

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 71

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 72

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 73

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 74

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 75

Union-Find with path compression amortizes to near-O(1) per op.

## entry 76

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 77

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 78

LIS via patience: each pile holds the smallest tail of length k.

## entry 79

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 80

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 81

Articulation points: same DFS as bridges, with a slightly different test.

## entry 82

Walk both pointers from each end inward; advance the smaller side.

## entry 83

Greedy by end-time picks the most non-overlapping intervals.

## entry 84

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 85

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 86

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 87

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 88

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 89

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 90

LIS via patience: each pile holds the smallest tail of length k.

## entry 91

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 92

LIS via patience: each pile holds the smallest tail of length k.

## entry 93

Splay tree: every access splays to the root; amortized O(log n).

## entry 94

Walk both pointers from each end inward; advance the smaller side.

## entry 95

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 96

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 97

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 98

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 99

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 100

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 101

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 102

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 103

Wavelet tree: range k-th element in O(log Σ) time.

## entry 104

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 105

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 106

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 107

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 108

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 109

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 110

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 111

Heap when you only need top-k; full sort is wasted work.

## entry 112

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 113

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 114

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 115

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 116

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 117

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 118

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 119

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 120

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 121

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 122

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 123

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 124

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 125

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 126

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 127

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 128

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 129

Wavelet tree: range k-th element in O(log Σ) time.

## entry 130

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 131

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 132

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 133

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 134

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 135

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 136

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 137

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 138

Heap when you only need top-k; full sort is wasted work.

## entry 139

Stable sort matters when a secondary key was set in a prior pass.

## entry 140

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 141

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 142

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 143

Greedy by end-time picks the most non-overlapping intervals.

## entry 144

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 145

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 146

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 147

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 148

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 149

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 150

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 151

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 152

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 153

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 154

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 155

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 156

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 157

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 158

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 159

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 160

Walk both pointers from each end inward; advance the smaller side.

## entry 161

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 162

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 163

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 164

Splay tree: every access splays to the root; amortized O(log n).

## entry 165

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 166

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 167

Euler tour flattens a tree into an array for range-query LCA.

## entry 168

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 169

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 170

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 171

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 172

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 173

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 174

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 175

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 176

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 177

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 178

State compression: bitmask + integer encodes a small subset cheaply.

## entry 179

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 180

State compression: bitmask + integer encodes a small subset cheaply.

## entry 181

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 182

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 183

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 184

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 185

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 186

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 187

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 188

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 189

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 190

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 191

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 192

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 193

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 194

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 195

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 196

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 197

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 198

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 199

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 200

LIS via patience: each pile holds the smallest tail of length k.

## entry 201

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 202

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 203

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 204

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 205

Euler tour flattens a tree into an array for range-query LCA.

## entry 206

Splay tree: every access splays to the root; amortized O(log n).

## entry 207

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 208

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 209

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 210

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 211

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 212

Union-Find with path compression amortizes to near-O(1) per op.

## entry 213

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 214

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 215

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 216

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 217

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 218

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 219

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 220

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 221

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 222

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 223

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 224

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 225

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 226

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 227

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 228

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 229

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 230

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 231

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 232

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 233

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 234

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 235

Splay tree: every access splays to the root; amortized O(log n).

## entry 236

Walk both pointers from each end inward; advance the smaller side.

## entry 237

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 238

Articulation points: same DFS as bridges, with a slightly different test.

## entry 239

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 240

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 241

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 242

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 243

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 244

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 245

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 246

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 247

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 248

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 249

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 250

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 251

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 252

Walk both pointers from each end inward; advance the smaller side.

## entry 253

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 254

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 255

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 256

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 257

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 258

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 259

Wavelet tree: range k-th element in O(log Σ) time.

## entry 260

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 261

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 262

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 263

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 264

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 265

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 266

Wavelet tree: range k-th element in O(log Σ) time.

## entry 267

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 268

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 269

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 270

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 271

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 272

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 273

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 274

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 275

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 276

Greedy by end-time picks the most non-overlapping intervals.

## entry 277

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 278

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 279

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 280

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 281

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 282

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 283

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 284

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 285

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 286

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 287

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 288

Heap when you only need top-k; full sort is wasted work.

## entry 289

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 290

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 291

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 292

Stable sort matters when a secondary key was set in a prior pass.

## entry 293

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 294

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 295

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 296

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 297

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 298

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 299

StringBuilder: amortize allocation by doubling on grow.

## entry 300

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 301

Greedy by end-time picks the most non-overlapping intervals.

## entry 302

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 303

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 304

Splay tree: every access splays to the root; amortized O(log n).

## entry 305

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 306

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 307

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 308

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 309

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 310

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 311

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 312

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 313

Walk both pointers from each end inward; advance the smaller side.

## entry 314

Euler tour flattens a tree into an array for range-query LCA.

## entry 315

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 316

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 317

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 318

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 319

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 320

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 321

Stable sort matters when a secondary key was set in a prior pass.

## entry 322

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 323

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 324

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 325

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 326

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 327

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 328

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 329

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 330

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 331

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 332

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 333

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 334

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 335

Walk both pointers from each end inward; advance the smaller side.

## entry 336

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 337

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 338

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 339

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 340

LIS via patience: each pile holds the smallest tail of length k.

## entry 341

Greedy by end-time picks the most non-overlapping intervals.

## entry 342

LIS via patience: each pile holds the smallest tail of length k.

## entry 343

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 344

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 345

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 346

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 347

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 348

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 349

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 350

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 351

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 352

Heap when you only need top-k; full sort is wasted work.

## entry 353

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 354

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 355

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 356

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 357

Euler tour flattens a tree into an array for range-query LCA.

## entry 358

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 359

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 360

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 361

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 362

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 363

Wavelet tree: range k-th element in O(log Σ) time.

## entry 364

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 365

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 366

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 367

Union-Find with path compression amortizes to near-O(1) per op.

## entry 368

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 369

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 370

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 371

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 372

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 373

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 374

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 375

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 376

Walk both pointers from each end inward; advance the smaller side.

## entry 377

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 378

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 379

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 380

StringBuilder: amortize allocation by doubling on grow.

## entry 381

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 382

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 383

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 384

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 385

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 386

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 387

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 388

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 389

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 390

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 391

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 392

Union-Find with path compression amortizes to near-O(1) per op.

## entry 393

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 394

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 395

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 396

Stable sort matters when a secondary key was set in a prior pass.

## entry 397

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 398

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 399

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 400

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 401

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 402

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 403

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 404

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 405

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 406

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 407

LIS via patience: each pile holds the smallest tail of length k.

## entry 408

Greedy by end-time picks the most non-overlapping intervals.

## entry 409

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 410

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 411

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 412

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 413

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 414

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 415

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 416

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 417

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 418

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 419

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 420

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 421

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 422

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 423

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 424

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 425

Heap when you only need top-k; full sort is wasted work.

## entry 426

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 427

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 428

Euler tour flattens a tree into an array for range-query LCA.

## entry 429

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 430

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 431

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 432

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 433

Greedy by end-time picks the most non-overlapping intervals.

## entry 434

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 435

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 436

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 437

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 438

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 439

Splay tree: every access splays to the root; amortized O(log n).

## entry 440

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 441

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 442

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 443

Wavelet tree: range k-th element in O(log Σ) time.

## entry 444

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 445

Euler tour flattens a tree into an array for range-query LCA.

## entry 446

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 447

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 448

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 449

Euler tour flattens a tree into an array for range-query LCA.

## entry 450

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 451

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 452

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 453

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 454

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 455

Stable sort matters when a secondary key was set in a prior pass.

## entry 456

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 457

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 458

Stable sort matters when a secondary key was set in a prior pass.

## entry 459

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 460

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 461

Monotonic stack pops while the new element violates the invariant.

## entry 462

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 463

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 464

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 465

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 466

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 467

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 468

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 469

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 470

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 471

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 472

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 473

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 474

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 475

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 476

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 477

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 478

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 479

LIS via patience: each pile holds the smallest tail of length k.

## entry 480

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 481

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 482

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 483

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 484

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 485

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 486

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 487

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 488

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 489

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 490

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 491

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 492

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 493

Euler tour flattens a tree into an array for range-query LCA.

## entry 494

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 495

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 496

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 497

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 498

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 499

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 500

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 501

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 502

Wavelet tree: range k-th element in O(log Σ) time.

## entry 503

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 504

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
