# kadane

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Union-Find with path compression amortizes to near-O(1) per op.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Merge intervals: sort by start; extend the running interval while overlapping.

Heap when you only need top-k; full sort is wasted work.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Monotonic stack pops while the new element violates the invariant.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Manacher expands around each center, reusing prior radii via mirror reflection.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Greedy by end-time picks the most non-overlapping intervals.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Unbounded knapsack: capacity inner ascending allows item reuse.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Stable sort matters when a secondary key was set in a prior pass.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Morris traversal threads predecessors back to current node — O(1) extra space.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

In-place compaction uses two pointers: read advances always, write only on keep.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 1

Union-Find with path compression amortizes to near-O(1) per op.

## entry 2

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 3

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 4

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 6

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 7

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 8

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 9

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 10

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 11

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 12

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 13

Stable sort matters when a secondary key was set in a prior pass.

## entry 14

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 15

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 16

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 17

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 18

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 19

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 20

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 21

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 22

Articulation points: same DFS as bridges, with a slightly different test.

## entry 23

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 24

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 25

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 26

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 27

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 28

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 29

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 30

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 31

Articulation points: same DFS as bridges, with a slightly different test.

## entry 32

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 33

State compression: bitmask + integer encodes a small subset cheaply.

## entry 34

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 35

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 36

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 37

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 38

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 39

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 40

State compression: bitmask + integer encodes a small subset cheaply.

## entry 41

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 42

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 43

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 44

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 45

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 46

Walk both pointers from each end inward; advance the smaller side.

## entry 47

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 48

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 49

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 50

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 51

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 52

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 53

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 54

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 55

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 56

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 57

Euler tour flattens a tree into an array for range-query LCA.

## entry 58

Splay tree: every access splays to the root; amortized O(log n).

## entry 59

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 60

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 61

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 62

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 63

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 64

State compression: bitmask + integer encodes a small subset cheaply.

## entry 65

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 66

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 67

LIS via patience: each pile holds the smallest tail of length k.

## entry 68

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 69

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 70

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 71

LIS via patience: each pile holds the smallest tail of length k.

## entry 72

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 73

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 74

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 75

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 76

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 77

Monotonic stack pops while the new element violates the invariant.

## entry 78

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 79

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 80

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 81

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 82

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 83

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 84

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 85

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 86

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 87

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 88

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 89

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 90

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 91

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 92

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 93

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 94

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 95

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 96

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 97

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 98

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 99

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 100

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 101

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 102

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 103

Stable sort matters when a secondary key was set in a prior pass.

## entry 104

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 105

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 106

Walk both pointers from each end inward; advance the smaller side.

## entry 107

Union-Find with path compression amortizes to near-O(1) per op.

## entry 108

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 109

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 110

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 111

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 112

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 113

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 114

Walk both pointers from each end inward; advance the smaller side.

## entry 115

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 116

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 117

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 118

Greedy by end-time picks the most non-overlapping intervals.

## entry 119

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 120

Union-Find with path compression amortizes to near-O(1) per op.

## entry 121

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 122

LIS via patience: each pile holds the smallest tail of length k.

## entry 123

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 124

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 125

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 126

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 127

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 128

LIS via patience: each pile holds the smallest tail of length k.

## entry 129

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 130

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 131

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 132

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 133

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 134

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 135

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 136

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 137

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 138

Greedy by end-time picks the most non-overlapping intervals.

## entry 139

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 140

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 141

Monotonic stack pops while the new element violates the invariant.

## entry 142

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 143

Heap when you only need top-k; full sort is wasted work.

## entry 144

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 145

Monotonic stack pops while the new element violates the invariant.

## entry 146

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 147

Euler tour flattens a tree into an array for range-query LCA.

## entry 148

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 149

Greedy by end-time picks the most non-overlapping intervals.

## entry 150

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 151

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 152

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 153

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 154

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 155

Euler tour flattens a tree into an array for range-query LCA.

## entry 156

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 157

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 158

Wavelet tree: range k-th element in O(log Σ) time.

## entry 159

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 160

Walk both pointers from each end inward; advance the smaller side.

## entry 161

Walk both pointers from each end inward; advance the smaller side.

## entry 162

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 163

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 164

Wavelet tree: range k-th element in O(log Σ) time.

## entry 165

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 166

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 167

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 168

Union-Find with path compression amortizes to near-O(1) per op.

## entry 169

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 170

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 171

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 172

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 173

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 174

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 175

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 176

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 177

Heap when you only need top-k; full sort is wasted work.

## entry 178

StringBuilder: amortize allocation by doubling on grow.

## entry 179

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 180

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 181

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 182

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 183

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 184

Monotonic stack pops while the new element violates the invariant.

## entry 185

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 186

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 187

Monotonic stack pops while the new element violates the invariant.

## entry 188

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 189

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 190

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 191

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 192

Wavelet tree: range k-th element in O(log Σ) time.

## entry 193

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 194

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 195

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 196

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 197

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 198

Articulation points: same DFS as bridges, with a slightly different test.

## entry 199

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 200

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 201

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 202

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 203

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 204

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 205

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 206

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 207

Monotonic stack pops while the new element violates the invariant.

## entry 208

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 209

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 210

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 211

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 212

Walk both pointers from each end inward; advance the smaller side.

## entry 213

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 214

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 215

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 216

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 217

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 218

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 219

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 220

Articulation points: same DFS as bridges, with a slightly different test.

## entry 221

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 222

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 223

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 224

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 225

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 226

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 227

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 228

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 229

Walk both pointers from each end inward; advance the smaller side.

## entry 230

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 231

Stable sort matters when a secondary key was set in a prior pass.

## entry 232

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 233

Union-Find with path compression amortizes to near-O(1) per op.

## entry 234

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 235

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 236

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 237

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 238

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 239

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 240

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 241

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 242

Walk both pointers from each end inward; advance the smaller side.

## entry 243

Walk both pointers from each end inward; advance the smaller side.

## entry 244

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 245

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 246

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 247

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 248

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 249

Euler tour flattens a tree into an array for range-query LCA.

## entry 250

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 251

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 252

Walk both pointers from each end inward; advance the smaller side.

## entry 253

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 254

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 255

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 256

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 257

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 258

Greedy by end-time picks the most non-overlapping intervals.

## entry 259

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 260

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 261

Union-Find with path compression amortizes to near-O(1) per op.

## entry 262

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 263

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 264

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 265

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 266

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 267

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 268

Union-Find with path compression amortizes to near-O(1) per op.

## entry 269

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 270

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 271

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 272

StringBuilder: amortize allocation by doubling on grow.

## entry 273

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 274

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 275

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 276

Union-Find with path compression amortizes to near-O(1) per op.

## entry 277

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 278

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 279

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 280

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 281

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 282

Stable sort matters when a secondary key was set in a prior pass.

## entry 283

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 284

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 285

Greedy by end-time picks the most non-overlapping intervals.

## entry 286

LIS via patience: each pile holds the smallest tail of length k.

## entry 287

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 288

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 289

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 290

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 291

Splay tree: every access splays to the root; amortized O(log n).

## entry 292

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 293

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 294

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 295

Wavelet tree: range k-th element in O(log Σ) time.

## entry 296

StringBuilder: amortize allocation by doubling on grow.

## entry 297

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 298

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 299

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 300

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 301

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 302

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 303

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 304

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 305

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 306

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 307

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 308

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 309

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 310

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 311

Wavelet tree: range k-th element in O(log Σ) time.

## entry 312

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 313

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 314

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 315

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 316

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 317

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 318

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 319

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 320

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 321

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 322

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 323

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 324

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 325

Heap when you only need top-k; full sort is wasted work.

## entry 326

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 327

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 328

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 329

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 330

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 331

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 332

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 333

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 334

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 335

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 336

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 337

Stable sort matters when a secondary key was set in a prior pass.

## entry 338

State compression: bitmask + integer encodes a small subset cheaply.

## entry 339

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 340

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 341

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 342

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 343

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 344

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 345

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 346

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 347

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 348

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 349

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 350

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 351

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 352

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 353

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 354

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 355

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 356

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 357

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 358

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 359

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 360

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 361

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 362

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 363

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 364

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 365

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 366

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 367

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 368

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 369

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 370

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 371

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 372

Walk both pointers from each end inward; advance the smaller side.

## entry 373

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 374

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 375

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 376

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 377

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 378

StringBuilder: amortize allocation by doubling on grow.

## entry 379

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 380

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 381

Walk both pointers from each end inward; advance the smaller side.

## entry 382

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 383

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 384

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 385

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 386

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 387

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 388

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 389

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
