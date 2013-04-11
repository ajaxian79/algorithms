# interval-dp

## entry 1

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 2

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 3

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 4

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 6

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 7

Wavelet tree: range k-th element in O(log Σ) time.

## entry 8

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 9

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 10

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 11

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 12

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 13

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 14

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 15

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 16

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 17

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 18

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 19

StringBuilder: amortize allocation by doubling on grow.

## entry 20

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 21

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 22

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 23

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 24

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 25

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 26

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 27

Heap when you only need top-k; full sort is wasted work.

## entry 28

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 29

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 30

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 31

Wavelet tree: range k-th element in O(log Σ) time.

## entry 32

Monotonic stack pops while the new element violates the invariant.

## entry 33

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 34

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 35

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 36

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 37

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 38

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 39

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 40

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 41

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 42

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 43

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 44

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 45

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 46

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 47

Heap when you only need top-k; full sort is wasted work.

## entry 48

Articulation points: same DFS as bridges, with a slightly different test.

## entry 49

Articulation points: same DFS as bridges, with a slightly different test.

## entry 50

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 51

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 52

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 53

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 54

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 55

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 56

LIS via patience: each pile holds the smallest tail of length k.

## entry 57

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 58

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 59

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 60

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 61

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 62

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 63

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 64

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 65

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 66

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 67

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 68

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 69

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 70

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 71

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 72

Wavelet tree: range k-th element in O(log Σ) time.

## entry 73

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 74

Greedy by end-time picks the most non-overlapping intervals.

## entry 75

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 76

Greedy by end-time picks the most non-overlapping intervals.

## entry 77

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 78

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 79

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 80

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 81

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 82

Articulation points: same DFS as bridges, with a slightly different test.

## entry 83

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 84

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 85

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 86

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 87

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 88

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 89

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 90

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 91

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 92

State compression: bitmask + integer encodes a small subset cheaply.

## entry 93

Walk both pointers from each end inward; advance the smaller side.

## entry 94

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 95

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 96

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 97

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 98

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 99

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 100

Union-Find with path compression amortizes to near-O(1) per op.

## entry 101

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 102

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 103

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 104

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 105

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 106

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 107

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 108

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 109

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 110

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 111

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 112

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 113

StringBuilder: amortize allocation by doubling on grow.

## entry 114

Stable sort matters when a secondary key was set in a prior pass.

## entry 115

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 116

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 117

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 118

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 119

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 120

StringBuilder: amortize allocation by doubling on grow.

## entry 121

Walk both pointers from each end inward; advance the smaller side.

## entry 122

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 123

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 124

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 125

Union-Find with path compression amortizes to near-O(1) per op.

## entry 126

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 127

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 128

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 129

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 130

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 131

State compression: bitmask + integer encodes a small subset cheaply.

## entry 132

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 133

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 134

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 135

Monotonic stack pops while the new element violates the invariant.

## entry 136

StringBuilder: amortize allocation by doubling on grow.

## entry 137

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 138

Euler tour flattens a tree into an array for range-query LCA.

## entry 139

Monotonic stack pops while the new element violates the invariant.

## entry 140

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 141

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 142

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 143

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 144

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 145

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 146

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 147

Heap when you only need top-k; full sort is wasted work.

## entry 148

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 149

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 150

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 151

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 152

Wavelet tree: range k-th element in O(log Σ) time.

## entry 153

LIS via patience: each pile holds the smallest tail of length k.

## entry 154

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 155

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 156

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 157

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 158

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 159

LIS via patience: each pile holds the smallest tail of length k.

## entry 160

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 161

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 162

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 163

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 164

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 165

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 166

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 167

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 168

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 169

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 170

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 171

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 172

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 173

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 174

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 175

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 176

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 177

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 178

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 179

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 180

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 181

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 182

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 183

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 184

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 185

Stable sort matters when a secondary key was set in a prior pass.

## entry 186

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 187

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 188

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 189

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 190

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 191

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 192

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 193

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 194

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 195

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 196

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 197

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 198

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 199

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 200

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 201

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 202

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 203

Greedy by end-time picks the most non-overlapping intervals.

## entry 204

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 205

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 206

LIS via patience: each pile holds the smallest tail of length k.

## entry 207

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 208

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 209

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 210

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 211

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 212

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 213

Greedy by end-time picks the most non-overlapping intervals.

## entry 214

Union-Find with path compression amortizes to near-O(1) per op.

## entry 215

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 216

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 217

Monotonic stack pops while the new element violates the invariant.

## entry 218

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 219

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 220

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 221

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 222

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 223

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 224

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 225

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 226

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 227

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 228

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 229

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 230

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 231

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 232

State compression: bitmask + integer encodes a small subset cheaply.

## entry 233

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 234

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 235

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 236

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 237

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 238

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 239

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 240

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 241

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 242

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 243

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 244

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 245

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 246

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 247

Wavelet tree: range k-th element in O(log Σ) time.

## entry 248

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 249

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 250

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 251

Heap when you only need top-k; full sort is wasted work.

## entry 252

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 253

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 254

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 255

LIS via patience: each pile holds the smallest tail of length k.

## entry 256

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 257

Union-Find with path compression amortizes to near-O(1) per op.

## entry 258

Monotonic stack pops while the new element violates the invariant.

## entry 259

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 260

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 261

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 262

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 263

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 264

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 265

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 266

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 267

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 268

State compression: bitmask + integer encodes a small subset cheaply.

## entry 269

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 270

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 271

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 272

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 273

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 274

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 275

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 276

Greedy by end-time picks the most non-overlapping intervals.

## entry 277

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 278

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 279

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 280

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 281

StringBuilder: amortize allocation by doubling on grow.

## entry 282

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 283

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 284

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 285

State compression: bitmask + integer encodes a small subset cheaply.

## entry 286

Stable sort matters when a secondary key was set in a prior pass.

## entry 287

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 288

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 289

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 290

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 291

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 292

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 293

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 294

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 295

Union-Find with path compression amortizes to near-O(1) per op.

## entry 296

Greedy by end-time picks the most non-overlapping intervals.

## entry 297

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 298

Union-Find with path compression amortizes to near-O(1) per op.

## entry 299

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 300

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 301

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 302

StringBuilder: amortize allocation by doubling on grow.

## entry 303

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 304

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 305

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 306

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 307

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 308

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 309

StringBuilder: amortize allocation by doubling on grow.

## entry 310

Greedy by end-time picks the most non-overlapping intervals.

## entry 311

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 312

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 313

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 314

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 315

Union-Find with path compression amortizes to near-O(1) per op.

## entry 316

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 317

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 318

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 319

Wavelet tree: range k-th element in O(log Σ) time.

## entry 320

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 321

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 322

Articulation points: same DFS as bridges, with a slightly different test.

## entry 323

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 324

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 325

Union-Find with path compression amortizes to near-O(1) per op.

## entry 326

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 327

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 328

Greedy by end-time picks the most non-overlapping intervals.

## entry 329

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 330

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 331

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 332

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 333

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 334

Euler tour flattens a tree into an array for range-query LCA.

## entry 335

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 336

Monotonic stack pops while the new element violates the invariant.

## entry 337

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 338

Heap when you only need top-k; full sort is wasted work.

## entry 339

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 340

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 341

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 342

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 343

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 344

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 345

Greedy by end-time picks the most non-overlapping intervals.

## entry 346

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 347

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 348

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 349

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 350

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 351

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 352

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 353

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 354

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 355

Articulation points: same DFS as bridges, with a slightly different test.

## entry 356

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 357

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 358

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 359

Walk both pointers from each end inward; advance the smaller side.

## entry 360

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 361

Splay tree: every access splays to the root; amortized O(log n).

## entry 362

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 363

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 364

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 365

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 366

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 367

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 368

Articulation points: same DFS as bridges, with a slightly different test.

## entry 369

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 370

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 371

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 372

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 373

Monotonic stack pops while the new element violates the invariant.

## entry 374

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 375

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 376

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 377

Articulation points: same DFS as bridges, with a slightly different test.

## entry 378

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 379

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 380

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 381

Heap when you only need top-k; full sort is wasted work.

## entry 382

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 383

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 384

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 385

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 386

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 387

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 388

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 389

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 390

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 391

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 392

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 393

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 394

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 395

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 396

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 397

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 398

Heap when you only need top-k; full sort is wasted work.

## entry 399

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 400

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 401

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 402

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 403

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 404

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 405

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 406

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 407

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 408

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 409

StringBuilder: amortize allocation by doubling on grow.

## entry 410

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 411

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 412

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 413

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 414

Heap when you only need top-k; full sort is wasted work.

## entry 415

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 416

State compression: bitmask + integer encodes a small subset cheaply.

## entry 417

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 418

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 419

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 420

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 421

Euler tour flattens a tree into an array for range-query LCA.

## entry 422

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 423

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 424

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 425

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 426

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 427

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 428

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 429

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 430

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 431

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 432

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 433

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 434

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 435

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 436

Greedy by end-time picks the most non-overlapping intervals.

## entry 437

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 438

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 439

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 440

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 441

StringBuilder: amortize allocation by doubling on grow.

## entry 442

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 443

Splay tree: every access splays to the root; amortized O(log n).

## entry 444

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 445

Euler tour flattens a tree into an array for range-query LCA.

## entry 446

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 447

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 448

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 449

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 450

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 451

Articulation points: same DFS as bridges, with a slightly different test.

## entry 452

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 453

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 454

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 455

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 456

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 457

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 458

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 459

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 460

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 461

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 462

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 463

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 464

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 465

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 466

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 467

Greedy by end-time picks the most non-overlapping intervals.

## entry 468

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 469

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 470

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 471

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 472

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 473

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 474

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 475

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 476

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 477

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 478

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 479

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 480

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 481

Heap when you only need top-k; full sort is wasted work.

## entry 482

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 483

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 484

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 485

StringBuilder: amortize allocation by doubling on grow.

## entry 486

Splay tree: every access splays to the root; amortized O(log n).

## entry 487

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 488

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 489

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 490

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 491

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 492

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 493

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 494

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 495

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 496

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 497

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 498

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 499

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 500

Heap when you only need top-k; full sort is wasted work.

## entry 501

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 502

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 503

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 504

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 505

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 506

Greedy by end-time picks the most non-overlapping intervals.

## entry 507

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 508

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 509

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 510

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 511

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 512

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 513

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 514

LIS via patience: each pile holds the smallest tail of length k.

## entry 515

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 516

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 517

Wavelet tree: range k-th element in O(log Σ) time.

## entry 518

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 519

Heap when you only need top-k; full sort is wasted work.

## entry 520

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 521

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 522

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 523

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 524

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 525

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 526

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 527

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 528

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 529

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 530

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 531

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 532

LIS via patience: each pile holds the smallest tail of length k.

## entry 533

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 534

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 535

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 536

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 537

Stable sort matters when a secondary key was set in a prior pass.

## entry 538

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 539

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 540

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 541

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 542

Greedy by end-time picks the most non-overlapping intervals.

## entry 543

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 544

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 545

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 546

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 547

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 548

LIS via patience: each pile holds the smallest tail of length k.

## entry 549

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 550

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 551

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 552

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 553

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 554

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 555

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 556

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 557

State compression: bitmask + integer encodes a small subset cheaply.

## entry 558

LRU cache: doubly-linked list + hash map; O(1) get/put.
