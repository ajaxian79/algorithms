# skip-list

## entry 1

Splay tree: every access splays to the root; amortized O(log n).

## entry 2

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 3

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4

Greedy by end-time picks the most non-overlapping intervals.

## entry 5

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 6

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 7

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 8

Splay tree: every access splays to the root; amortized O(log n).

## entry 9

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 10

Walk both pointers from each end inward; advance the smaller side.

## entry 11

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 12

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 13

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 14

Wavelet tree: range k-th element in O(log Σ) time.

## entry 15

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 16

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 17

Euler tour flattens a tree into an array for range-query LCA.

## entry 18

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 19

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 20

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 21

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 22

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 23

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 24

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 25

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 26

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 27

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 28

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 29

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 30

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 31

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 32

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 33

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 34

Heap when you only need top-k; full sort is wasted work.

## entry 35

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 36

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 37

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 38

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 39

Walk both pointers from each end inward; advance the smaller side.

## entry 40

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 41

Splay tree: every access splays to the root; amortized O(log n).

## entry 42

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 43

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 44

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 45

Walk both pointers from each end inward; advance the smaller side.

## entry 46

Greedy by end-time picks the most non-overlapping intervals.

## entry 47

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 48

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 49

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 50

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 51

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 52

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 53

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 54

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 55

Euler tour flattens a tree into an array for range-query LCA.

## entry 56

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 57

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 58

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 59

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 60

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 61

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 62

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 63

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 64

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 65

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 66

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 67

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 68

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 69

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 70

StringBuilder: amortize allocation by doubling on grow.

## entry 71

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 72

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 73

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 74

Union-Find with path compression amortizes to near-O(1) per op.

## entry 75

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 76

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 77

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 78

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 79

Euler tour flattens a tree into an array for range-query LCA.

## entry 80

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 81

Heap when you only need top-k; full sort is wasted work.

## entry 82

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 83

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 84

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 85

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 86

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 87

Articulation points: same DFS as bridges, with a slightly different test.

## entry 88

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 89

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 90

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 91

Euler tour flattens a tree into an array for range-query LCA.

## entry 92

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 93

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 94

Walk both pointers from each end inward; advance the smaller side.

## entry 95

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 96

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 97

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 98

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 99

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 100

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 101

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 102

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 103

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 104

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 105

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 106

Heap when you only need top-k; full sort is wasted work.

## entry 107

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 108

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 109

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 110

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 111

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 112

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 113

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 114

Euler tour flattens a tree into an array for range-query LCA.

## entry 115

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 116

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 117

Stable sort matters when a secondary key was set in a prior pass.

## entry 118

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 119

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 120

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 121

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 122

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 123

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 124

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 125

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 126

Heap when you only need top-k; full sort is wasted work.

## entry 127

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 128

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 129

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 130

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 131

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 132

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 133

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 134

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 135

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 136

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 137

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 138

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 139

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 140

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 141

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 142

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 143

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 144

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 145

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 146

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 147

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 148

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 149

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 150

Walk both pointers from each end inward; advance the smaller side.

## entry 151

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 152

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 153

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 154

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 155

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 156

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 157

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 158

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 159

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 160

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 161

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 162

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 163

Wavelet tree: range k-th element in O(log Σ) time.

## entry 164

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 165

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 166

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 167

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 168

Euler tour flattens a tree into an array for range-query LCA.

## entry 169

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 170

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 171

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 172

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 173

Euler tour flattens a tree into an array for range-query LCA.

## entry 174

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 175

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 176

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 177

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 178

LIS via patience: each pile holds the smallest tail of length k.

## entry 179

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 180

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 181

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 182

State compression: bitmask + integer encodes a small subset cheaply.

## entry 183

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 184

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 185

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 186

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 187

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 188

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 189

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 190

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 191

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 192

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 193

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 194

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 195

Union-Find with path compression amortizes to near-O(1) per op.

## entry 196

State compression: bitmask + integer encodes a small subset cheaply.

## entry 197

Euler tour flattens a tree into an array for range-query LCA.

## entry 198

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 199

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 200

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 201

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 202

Monotonic stack pops while the new element violates the invariant.

## entry 203

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 204

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 205

Heap when you only need top-k; full sort is wasted work.

## entry 206

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 207

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 208

Stable sort matters when a secondary key was set in a prior pass.

## entry 209

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 210

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 211

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 212

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 213

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 214

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 215

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 216

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 217

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 218

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 219

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 220

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 221

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 222

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 223

StringBuilder: amortize allocation by doubling on grow.

## entry 224

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 225

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 226

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 227

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 228

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 229

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 230

State compression: bitmask + integer encodes a small subset cheaply.

## entry 231

Articulation points: same DFS as bridges, with a slightly different test.

## entry 232

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 233

Union-Find with path compression amortizes to near-O(1) per op.

## entry 234

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 235

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 236

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 237

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 238

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 239

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 240

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 241

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 242

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 243

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 244

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 245

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 246

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 247

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 248

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 249

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 250

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 251

Greedy by end-time picks the most non-overlapping intervals.

## entry 252

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 253

Articulation points: same DFS as bridges, with a slightly different test.

## entry 254

LIS via patience: each pile holds the smallest tail of length k.

## entry 255

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 256

Monotonic stack pops while the new element violates the invariant.

## entry 257

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 258

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 259

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 260

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 261

Stable sort matters when a secondary key was set in a prior pass.

## entry 262

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 263

Heap when you only need top-k; full sort is wasted work.

## entry 264

Stable sort matters when a secondary key was set in a prior pass.

## entry 265

StringBuilder: amortize allocation by doubling on grow.

## entry 266

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 267

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 268

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 269

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 270

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 271

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 272

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 273

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 274

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 275

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 276

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 277

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 278

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 279

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 280

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 281

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 282

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 283

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 284

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 285

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 286

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 287

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 288

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 289

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 290

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 291

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 292

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 293

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 294

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 295

LIS via patience: each pile holds the smallest tail of length k.

## entry 296

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 297

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 298

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 299

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 300

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 301

Splay tree: every access splays to the root; amortized O(log n).

## entry 302

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 303

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 304

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 305

Stable sort matters when a secondary key was set in a prior pass.

## entry 306

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 307

StringBuilder: amortize allocation by doubling on grow.

## entry 308

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 309

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 310

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 311

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 312

StringBuilder: amortize allocation by doubling on grow.

## entry 313

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 314

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 315

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 316

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 317

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 318

Euler tour flattens a tree into an array for range-query LCA.

## entry 319

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 320

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 321

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 322

Euler tour flattens a tree into an array for range-query LCA.

## entry 323

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 324

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 325

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 326

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 327

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 328

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 329

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 330

Treap: BST + heap on random priorities; expected O(log n) per op.
