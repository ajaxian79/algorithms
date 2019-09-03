# stable-sort-when

Merge intervals: sort by start; extend the running interval while overlapping.

Manacher expands around each center, reusing prior radii via mirror reflection.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

In-place compaction uses two pointers: read advances always, write only on keep.

Edit distance is LCS with a twist: substitution is a third option at each cell.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Morris traversal threads predecessors back to current node — O(1) extra space.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Monotonic stack pops while the new element violates the invariant.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Heap when you only need top-k; full sort is wasted work.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Stable sort matters when a secondary key was set in a prior pass.

Union-Find with path compression amortizes to near-O(1) per op.

Unbounded knapsack: capacity inner ascending allows item reuse.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1

Wavelet tree: range k-th element in O(log Σ) time.

## entry 2

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 4

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 5

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 6

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 7

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 8

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 9

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 10

State compression: bitmask + integer encodes a small subset cheaply.

## entry 11

Stable sort matters when a secondary key was set in a prior pass.

## entry 12

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 13

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 14

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 15

Union-Find with path compression amortizes to near-O(1) per op.

## entry 16

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 17

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 18

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 19

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 20

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 21

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 22

Union-Find with path compression amortizes to near-O(1) per op.

## entry 23

Stable sort matters when a secondary key was set in a prior pass.

## entry 24

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 25

LIS via patience: each pile holds the smallest tail of length k.

## entry 26

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 27

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 28

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 29

Splay tree: every access splays to the root; amortized O(log n).

## entry 30

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 31

Euler tour flattens a tree into an array for range-query LCA.

## entry 32

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 33

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 34

Wavelet tree: range k-th element in O(log Σ) time.

## entry 35

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 36

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 37

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 38

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 39

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 40

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 41

LIS via patience: each pile holds the smallest tail of length k.

## entry 42

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 43

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 44

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 45

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 46

Articulation points: same DFS as bridges, with a slightly different test.

## entry 47

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 48

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 49

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 50

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 51

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 52

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 53

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 54

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 55

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 56

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 57

Splay tree: every access splays to the root; amortized O(log n).

## entry 58

StringBuilder: amortize allocation by doubling on grow.

## entry 59

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 60

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 61

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 62

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 63

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 64

Union-Find with path compression amortizes to near-O(1) per op.

## entry 65

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 66

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 67

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 68

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 69

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 70

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 71

Stable sort matters when a secondary key was set in a prior pass.

## entry 72

StringBuilder: amortize allocation by doubling on grow.

## entry 73

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 74

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 75

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 76

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 77

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 78

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 79

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 80

Articulation points: same DFS as bridges, with a slightly different test.

## entry 81

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 82

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 83

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 84

Monotonic stack pops while the new element violates the invariant.

## entry 85

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 86

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 87

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 88

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 89

Wavelet tree: range k-th element in O(log Σ) time.

## entry 90

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 91

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 92

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 93

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 94

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 95

Heap when you only need top-k; full sort is wasted work.

## entry 96

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 97

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 98

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 99

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 100

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 101

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 102

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 103

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 104

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 105

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 106

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 107

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 108

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 109

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 110

LIS via patience: each pile holds the smallest tail of length k.

## entry 111

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 112

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 113

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 114

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 115

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 116

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 117

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 118

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 119

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 120

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 121

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 122

Heap when you only need top-k; full sort is wasted work.

## entry 123

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 124

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 125

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 126

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 127

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 128

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 129

Union-Find with path compression amortizes to near-O(1) per op.

## entry 130

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 131

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 132

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 133

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 134

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 135

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 136

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 137

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 138

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 139

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 140

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 141

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 142

Greedy by end-time picks the most non-overlapping intervals.

## entry 143

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 144

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 145

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 146

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 147

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 148

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 149

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 150

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 151

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 152

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 153

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 154

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 155

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 156

Greedy by end-time picks the most non-overlapping intervals.

## entry 157

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 158

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 159

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 160

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 161

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 162

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 163

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 164

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 165

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 166

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 167

Wavelet tree: range k-th element in O(log Σ) time.

## entry 168

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 169

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 170

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 171

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 172

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 173

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 174

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 175

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 176

Union-Find with path compression amortizes to near-O(1) per op.

## entry 177

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 178

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 179

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 180

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 181

Wavelet tree: range k-th element in O(log Σ) time.

## entry 182

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 183

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 184

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 185

StringBuilder: amortize allocation by doubling on grow.

## entry 186

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 187

Union-Find with path compression amortizes to near-O(1) per op.

## entry 188

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 189

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 190

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 191

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 192

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 193

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 194

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 195

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 196

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 197

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 198

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 199

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 200

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 201

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 202

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 203

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 204

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 205

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 206

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 207

Walk both pointers from each end inward; advance the smaller side.

## entry 208

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 209

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 210

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 211

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 212

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 213

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 214

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 215

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 216

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 217

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 218

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 219

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 220

LIS via patience: each pile holds the smallest tail of length k.

## entry 221

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 222

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 223

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 224

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 225

Walk both pointers from each end inward; advance the smaller side.

## entry 226

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 227

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 228

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 229

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 230

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 231

Stable sort matters when a secondary key was set in a prior pass.

## entry 232

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 233

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 234

State compression: bitmask + integer encodes a small subset cheaply.

## entry 235

Stable sort matters when a secondary key was set in a prior pass.

## entry 236

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 237

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 238

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 239

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 240

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 241

Euler tour flattens a tree into an array for range-query LCA.

## entry 242

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 243

Stable sort matters when a secondary key was set in a prior pass.

## entry 244

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 245

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 246

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 247

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 248

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 249

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 250

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 251

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 252

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 253

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 254

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 255

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 256

State compression: bitmask + integer encodes a small subset cheaply.

## entry 257

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 258

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 259

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 260

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 261

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 262

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 263

State compression: bitmask + integer encodes a small subset cheaply.

## entry 264

Wavelet tree: range k-th element in O(log Σ) time.

## entry 265

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 266

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 267

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 268

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 269

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 270

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 271

Splay tree: every access splays to the root; amortized O(log n).

## entry 272

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 273

Union-Find with path compression amortizes to near-O(1) per op.

## entry 274

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 275

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 276

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 277

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 278

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 279

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 280

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 281

State compression: bitmask + integer encodes a small subset cheaply.

## entry 282

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 283

Splay tree: every access splays to the root; amortized O(log n).

## entry 284

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 285

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 286

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 287

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 288

Articulation points: same DFS as bridges, with a slightly different test.

## entry 289

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 290

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 291

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 292

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 293

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 294

Walk both pointers from each end inward; advance the smaller side.

## entry 295

Wavelet tree: range k-th element in O(log Σ) time.

## entry 296

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 297

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 298

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 299

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 300

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 301

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 302

Splay tree: every access splays to the root; amortized O(log n).

## entry 303

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 304

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 305

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 306

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 307

Wavelet tree: range k-th element in O(log Σ) time.

## entry 308

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 309

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 310

Heap when you only need top-k; full sort is wasted work.

## entry 311

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 312

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 313

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 314

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 315

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 316

Splay tree: every access splays to the root; amortized O(log n).
