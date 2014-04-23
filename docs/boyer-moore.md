# boyer-moore

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Monotonic stack pops while the new element violates the invariant.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Union-Find with path compression amortizes to near-O(1) per op.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

BFS layers carry implicit shortest-path distance in unweighted graphs.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Morris traversal threads predecessors back to current node — O(1) extra space.

Heap when you only need top-k; full sort is wasted work.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

LIS via patience: each pile holds the smallest tail of length k.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Walk both pointers from each end inward; advance the smaller side.

Unbounded knapsack: capacity inner ascending allows item reuse.

Merge intervals: sort by start; extend the running interval while overlapping.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Edit distance is LCS with a twist: substitution is a third option at each cell.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

In-place compaction uses two pointers: read advances always, write only on keep.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 5

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 6

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 7

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 8

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 9

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 10

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 11

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 12

Walk both pointers from each end inward; advance the smaller side.

## entry 13

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 14

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 15

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 16

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 17

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 18

Wavelet tree: range k-th element in O(log Σ) time.

## entry 19

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 20

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 21

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 22

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 23

Walk both pointers from each end inward; advance the smaller side.

## entry 24

Articulation points: same DFS as bridges, with a slightly different test.

## entry 25

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 26

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 27

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 28

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 29

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 30

Walk both pointers from each end inward; advance the smaller side.

## entry 31

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 32

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 33

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 34

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 35

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 36

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 37

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 38

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 39

Splay tree: every access splays to the root; amortized O(log n).

## entry 40

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 41

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 42

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 43

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 44

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 45

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 46

StringBuilder: amortize allocation by doubling on grow.

## entry 47

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 48

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 49

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 50

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 51

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 52

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 53

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 54

Monotonic stack pops while the new element violates the invariant.

## entry 55

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 56

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 57

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 58

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 59

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 60

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 61

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 62

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 63

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 64

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 65

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 66

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 67

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 68

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 69

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 70

State compression: bitmask + integer encodes a small subset cheaply.

## entry 71

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 72

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 73

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 74

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 75

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 76

Union-Find with path compression amortizes to near-O(1) per op.

## entry 77

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 78

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 79

Monotonic stack pops while the new element violates the invariant.

## entry 80

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 81

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 82

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 83

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 84

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 85

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 86

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 87

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 88

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 89

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 90

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 91

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 92

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 93

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 94

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 95

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 96

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 97

LIS via patience: each pile holds the smallest tail of length k.

## entry 98

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 99

Monotonic stack pops while the new element violates the invariant.

## entry 100

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 101

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 102

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 103

State compression: bitmask + integer encodes a small subset cheaply.

## entry 104

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 105

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 106

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 107

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 108

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 109

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 110

Heap when you only need top-k; full sort is wasted work.

## entry 111

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 112

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 113

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 114

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 115

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 116

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 117

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 118

Splay tree: every access splays to the root; amortized O(log n).

## entry 119

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 120

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 121

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 122

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 123

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 124

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 125

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 126

StringBuilder: amortize allocation by doubling on grow.

## entry 127

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 128

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 129

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 130

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 131

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 132

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 133

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 134

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 135

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 136

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 137

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 138

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 139

Euler tour flattens a tree into an array for range-query LCA.

## entry 140

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 141

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 142

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 143

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 144

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 145

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 146

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 147

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 148

Union-Find with path compression amortizes to near-O(1) per op.

## entry 149

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 150

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 151

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 152

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 153

State compression: bitmask + integer encodes a small subset cheaply.

## entry 154

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 155

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 156

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 157

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 158

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 159

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 160

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 161

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 162

Wavelet tree: range k-th element in O(log Σ) time.

## entry 163

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 164

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 165

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 166

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 167

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 168

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 169

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 170

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 171

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 172

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 173

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 174

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 175

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 176

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 177

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 178

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 179

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 180

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 181

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 182

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 183

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 184

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 185

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 186

Splay tree: every access splays to the root; amortized O(log n).

## entry 187

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 188

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 189

Heap when you only need top-k; full sort is wasted work.

## entry 190

Stable sort matters when a secondary key was set in a prior pass.

## entry 191

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 192

Articulation points: same DFS as bridges, with a slightly different test.

## entry 193

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 194

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 195

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 196

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 197

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 198

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 199

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 200

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 201

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 202

Heap when you only need top-k; full sort is wasted work.

## entry 203

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 204

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 205

Wavelet tree: range k-th element in O(log Σ) time.

## entry 206

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 207

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 208

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 209

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 210

Stable sort matters when a secondary key was set in a prior pass.

## entry 211

Heap when you only need top-k; full sort is wasted work.

## entry 212

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 213

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 214

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 215

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 216

Monotonic stack pops while the new element violates the invariant.

## entry 217

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 218

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 219

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 220

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 221

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 222

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 223

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 224

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 225

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 226

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 227

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 228

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 229

Union-Find with path compression amortizes to near-O(1) per op.

## entry 230

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 231

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 232

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 233

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 234

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 235

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 236

StringBuilder: amortize allocation by doubling on grow.

## entry 237

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 238

Monotonic stack pops while the new element violates the invariant.

## entry 239

Walk both pointers from each end inward; advance the smaller side.

## entry 240

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 241

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 242

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 243

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 244

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 245

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 246

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 247

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 248

State compression: bitmask + integer encodes a small subset cheaply.

## entry 249

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 250

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 251

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 252

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 253

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 254

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 255

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 256

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 257

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 258

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 259

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 260

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 261

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 262

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 263

Greedy by end-time picks the most non-overlapping intervals.

## entry 264

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 265

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 266

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 267

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 268

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 269

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 270

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 271

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 272

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 273

State compression: bitmask + integer encodes a small subset cheaply.

## entry 274

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 275

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 276

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 277

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 278

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 279

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 280

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 281

Greedy by end-time picks the most non-overlapping intervals.

## entry 282

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 283

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 284

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 285

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 286

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 287

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 288

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 289

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 290

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 291

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 292

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 293

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 294

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 295

Stable sort matters when a secondary key was set in a prior pass.

## entry 296

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 297

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 298

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 299

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 300

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 301

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 302

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 303

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 304

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 305

StringBuilder: amortize allocation by doubling on grow.

## entry 306

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 307

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 308

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 309

Articulation points: same DFS as bridges, with a slightly different test.

## entry 310

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 311

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 312

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 313

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 314

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 315

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 316

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 317

State compression: bitmask + integer encodes a small subset cheaply.

## entry 318

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 319

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 320

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 321

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 322

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 323

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 324

Greedy by end-time picks the most non-overlapping intervals.

## entry 325

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 326

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 327

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 328

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 329

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 330

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 331

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 332

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 333

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 334

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 335

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 336

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 337

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 338

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 339

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 340

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 341

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 342

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 343

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 344

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 345

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 346

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 347

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 348

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 349

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 350

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 351

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 352

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 353

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 354

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 355

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 356

Stable sort matters when a secondary key was set in a prior pass.

## entry 357

Greedy by end-time picks the most non-overlapping intervals.

## entry 358

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 359

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 360

LIS via patience: each pile holds the smallest tail of length k.

## entry 361

Monotonic stack pops while the new element violates the invariant.

## entry 362

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 363

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 364

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 365

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 366

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 367

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 368

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 369

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 370

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 371

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 372

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 373

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 374

Walk both pointers from each end inward; advance the smaller side.

## entry 375

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 376

LIS via patience: each pile holds the smallest tail of length k.

## entry 377

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 378

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 379

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 380

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 381

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 382

Heap when you only need top-k; full sort is wasted work.

## entry 383

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 384

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 385

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 386

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 387

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 388

Monotonic stack pops while the new element violates the invariant.

## entry 389

Monotonic stack pops while the new element violates the invariant.

## entry 390

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 391

Euler tour flattens a tree into an array for range-query LCA.

## entry 392

Wavelet tree: range k-th element in O(log Σ) time.

## entry 393

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 394

LIS via patience: each pile holds the smallest tail of length k.

## entry 395

State compression: bitmask + integer encodes a small subset cheaply.

## entry 396

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 397

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 398

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 399

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 400

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 401

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 402

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 403

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 404

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 405

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 406

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 407

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 408

Greedy by end-time picks the most non-overlapping intervals.

## entry 409

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 410

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 411

Splay tree: every access splays to the root; amortized O(log n).

## entry 412

Stable sort matters when a secondary key was set in a prior pass.

## entry 413

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 414

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 415

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 416

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 417

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 418

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 419

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 420

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 421

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 422

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 423

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 424

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 425

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 426

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 427

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 428

State compression: bitmask + integer encodes a small subset cheaply.

## entry 429

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 430

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 431

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 432

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 433

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 434

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 435

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 436

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 437

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 438

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 439

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 440

Monotonic stack pops while the new element violates the invariant.

## entry 441

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 442

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 443

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 444

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 445

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 446

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 447

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 448

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 449

Splay tree: every access splays to the root; amortized O(log n).

## entry 450

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 451

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 452

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 453

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 454

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 455

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 456

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 457

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 458

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 459

Euler tour flattens a tree into an array for range-query LCA.

## entry 460

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 461

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 462

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 463

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 464

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 465

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 466

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 467

Splay tree: every access splays to the root; amortized O(log n).

## entry 468

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 469

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 470

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 471

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 472

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 473

Euler tour flattens a tree into an array for range-query LCA.

## entry 474

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 475

Walk both pointers from each end inward; advance the smaller side.

## entry 476

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 477

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 478

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 479

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 480

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 481

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 482

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 483

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 484

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 485

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 486

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 487

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 488

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 489

Euler tour flattens a tree into an array for range-query LCA.

## entry 490

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 491

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 492

Walk both pointers from each end inward; advance the smaller side.

## entry 493

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 494

StringBuilder: amortize allocation by doubling on grow.

## entry 495

Monotonic stack pops while the new element violates the invariant.

## entry 496

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 497

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 498

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 499

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 500

Articulation points: same DFS as bridges, with a slightly different test.

## entry 501

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 502

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 503

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 504

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 505

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 506

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 507

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 508

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 509

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 510

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 511

Stable sort matters when a secondary key was set in a prior pass.

## entry 512

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 513

Union-Find with path compression amortizes to near-O(1) per op.

## entry 514

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 515

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 516

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 517

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 518

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 519

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 520

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 521

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 522

Walk both pointers from each end inward; advance the smaller side.

## entry 523

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 524

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 525

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 526

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 527

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 528

Union-Find with path compression amortizes to near-O(1) per op.

## entry 529

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 530

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 531

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 532

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 533

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 534

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 535

LRU cache: doubly-linked list + hash map; O(1) get/put.
