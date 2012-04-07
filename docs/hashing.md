# hashing

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Heap when you only need top-k; full sort is wasted work.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

In-place compaction uses two pointers: read advances always, write only on keep.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Manacher expands around each center, reusing prior radii via mirror reflection.

Unbounded knapsack: capacity inner ascending allows item reuse.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

LIS via patience: each pile holds the smallest tail of length k.

Walk both pointers from each end inward; advance the smaller side.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Greedy by end-time picks the most non-overlapping intervals.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Monotonic stack pops while the new element violates the invariant.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Union-Find with path compression amortizes to near-O(1) per op.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Stable sort matters when a secondary key was set in a prior pass.

## entry 1

Heap when you only need top-k; full sort is wasted work.

## entry 2

Greedy by end-time picks the most non-overlapping intervals.

## entry 3

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 4

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 5

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 6

LIS via patience: each pile holds the smallest tail of length k.

## entry 7

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 8

Walk both pointers from each end inward; advance the smaller side.

## entry 9

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 10

Walk both pointers from each end inward; advance the smaller side.

## entry 11

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 12

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 13

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 14

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 15

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 16

Splay tree: every access splays to the root; amortized O(log n).

## entry 17

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 18

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 19

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 20

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 21

Heap when you only need top-k; full sort is wasted work.

## entry 22

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 23

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 24

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 25

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 26

Monotonic stack pops while the new element violates the invariant.

## entry 27

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 28

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 29

Articulation points: same DFS as bridges, with a slightly different test.

## entry 30

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 31

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 32

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 33

Euler tour flattens a tree into an array for range-query LCA.

## entry 34

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 35

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 36

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 37

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 38

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 39

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 40

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 41

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 42

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 43

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 44

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 45

Union-Find with path compression amortizes to near-O(1) per op.

## entry 46

Greedy by end-time picks the most non-overlapping intervals.

## entry 47

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 48

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 49

State compression: bitmask + integer encodes a small subset cheaply.

## entry 50

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 51

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 52

Monotonic stack pops while the new element violates the invariant.

## entry 53

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 54

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 55

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 56

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 57

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 58

Wavelet tree: range k-th element in O(log Σ) time.

## entry 59

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 60

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 61

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 62

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 63

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 64

Splay tree: every access splays to the root; amortized O(log n).

## entry 65

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 66

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 67

Greedy by end-time picks the most non-overlapping intervals.

## entry 68

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 69

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 70

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 71

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 72

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 73

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 74

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 75

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 76

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 77

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 78

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 79

Union-Find with path compression amortizes to near-O(1) per op.

## entry 80

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 81

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 82

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 83

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 84

State compression: bitmask + integer encodes a small subset cheaply.

## entry 85

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 86

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 87

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 88

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 89

Heap when you only need top-k; full sort is wasted work.

## entry 90

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 91

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 92

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 93

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 94

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 95

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 96

Walk both pointers from each end inward; advance the smaller side.

## entry 97

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 98

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 99

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 100

Monotonic stack pops while the new element violates the invariant.

## entry 101

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 102

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 103

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 104

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 105

Articulation points: same DFS as bridges, with a slightly different test.

## entry 106

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 107

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 108

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 109

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 110

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 111

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 112

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 113

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 114

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 115

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 116

LIS via patience: each pile holds the smallest tail of length k.

## entry 117

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 118

Greedy by end-time picks the most non-overlapping intervals.

## entry 119

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 120

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 121

Monotonic stack pops while the new element violates the invariant.

## entry 122

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 123

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 124

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 125

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 126

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 127

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 128

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 129

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 130

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 131

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 132

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 133

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 134

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 135

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 136

State compression: bitmask + integer encodes a small subset cheaply.

## entry 137

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 138

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 139

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 140

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 141

Union-Find with path compression amortizes to near-O(1) per op.

## entry 142

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 143

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 144

Splay tree: every access splays to the root; amortized O(log n).

## entry 145

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 146

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 147

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 148

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 149

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 150

LIS via patience: each pile holds the smallest tail of length k.

## entry 151

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 152

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 153

State compression: bitmask + integer encodes a small subset cheaply.

## entry 154

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 155

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 156

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 157

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 158

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 159

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 160

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 161

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 162

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 163

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 164

Stable sort matters when a secondary key was set in a prior pass.

## entry 165

Heap when you only need top-k; full sort is wasted work.

## entry 166

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 167

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 168

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 169

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 170

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 171

Articulation points: same DFS as bridges, with a slightly different test.

## entry 172

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 173

State compression: bitmask + integer encodes a small subset cheaply.

## entry 174

Monotonic stack pops while the new element violates the invariant.

## entry 175

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 176

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 177

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 178

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 179

Greedy by end-time picks the most non-overlapping intervals.

## entry 180

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 181

Articulation points: same DFS as bridges, with a slightly different test.

## entry 182

Articulation points: same DFS as bridges, with a slightly different test.

## entry 183

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 184

Stable sort matters when a secondary key was set in a prior pass.

## entry 185

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 186

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 187

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 188

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 189

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 190

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 191

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 192

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 193

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 194

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 195

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 196

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 197

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 198

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 199

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 200

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 201

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 202

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 203

Wavelet tree: range k-th element in O(log Σ) time.

## entry 204

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 205

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 206

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 207

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 208

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 209

StringBuilder: amortize allocation by doubling on grow.

## entry 210

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 211

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 212

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 213

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 214

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 215

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 216

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 217

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 218

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 219

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 220

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 221

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 222

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 223

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 224

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 225

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 226

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 227

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 228

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 229

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 230

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 231

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 232

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 233

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 234

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 235

Articulation points: same DFS as bridges, with a slightly different test.

## entry 236

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 237

Greedy by end-time picks the most non-overlapping intervals.

## entry 238

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 239

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 240

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 241

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 242

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 243

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 244

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 245

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 246

Monotonic stack pops while the new element violates the invariant.

## entry 247

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 248

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 249

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 250

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 251

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 252

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 253

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 254

Stable sort matters when a secondary key was set in a prior pass.

## entry 255

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 256

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 257

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 258

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 259

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 260

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 261

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 262

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 263

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 264

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 265

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 266

Wavelet tree: range k-th element in O(log Σ) time.

## entry 267

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 268

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 269

Stable sort matters when a secondary key was set in a prior pass.

## entry 270

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 271

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 272

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 273

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 274

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 275

Euler tour flattens a tree into an array for range-query LCA.

## entry 276

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 277

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 278

StringBuilder: amortize allocation by doubling on grow.

## entry 279

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 280

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 281

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 282

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 283

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 284

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 285

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 286

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 287

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 288

Euler tour flattens a tree into an array for range-query LCA.

## entry 289

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 290

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 291

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 292

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 293

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 294

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 295

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 296

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 297

Walk both pointers from each end inward; advance the smaller side.

## entry 298

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 299

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 300

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 301

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 302

Greedy by end-time picks the most non-overlapping intervals.

## entry 303

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 304

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 305

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 306

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 307

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 308

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 309

Monotonic stack pops while the new element violates the invariant.

## entry 310

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 311

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 312

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 313

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 314

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 315

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 316

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 317

Splay tree: every access splays to the root; amortized O(log n).

## entry 318

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 319

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 320

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 321

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 322

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 323

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 324

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 325

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 326

Wavelet tree: range k-th element in O(log Σ) time.

## entry 327

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 328

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 329

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 330

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 331

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 332

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 333

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 334

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 335

Greedy by end-time picks the most non-overlapping intervals.

## entry 336

Splay tree: every access splays to the root; amortized O(log n).

## entry 337

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 338

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 339

Articulation points: same DFS as bridges, with a slightly different test.

## entry 340

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 341

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 342

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 343

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 344

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 345

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 346

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 347

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 348

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 349

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 350

Greedy by end-time picks the most non-overlapping intervals.

## entry 351

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 352

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 353

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 354

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 355

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 356

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 357

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 358

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 359

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 360

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 361

Wavelet tree: range k-th element in O(log Σ) time.

## entry 362

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 363

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 364

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 365

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 366

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 367

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 368

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 369

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 370

Monotonic stack pops while the new element violates the invariant.

## entry 371

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 372

Wavelet tree: range k-th element in O(log Σ) time.

## entry 373

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 374

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 375

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 376

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 377

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 378

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 379

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 380

StringBuilder: amortize allocation by doubling on grow.

## entry 381

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 382

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 383

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 384

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 385

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 386

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 387

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 388

Union-Find with path compression amortizes to near-O(1) per op.

## entry 389

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 390

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 391

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 392

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 393

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 394

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 395

Stable sort matters when a secondary key was set in a prior pass.

## entry 396

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 397

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 398

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 399

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 400

LIS via patience: each pile holds the smallest tail of length k.

## entry 401

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 402

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 403

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 404

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 405

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 406

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 407

Articulation points: same DFS as bridges, with a slightly different test.

## entry 408

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 409

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 410

Splay tree: every access splays to the root; amortized O(log n).

## entry 411

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 412

Euler tour flattens a tree into an array for range-query LCA.

## entry 413

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 414

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 415

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 416

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 417

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 418

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 419

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 420

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 421

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 422

Monotonic stack pops while the new element violates the invariant.

## entry 423

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 424

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 425

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 426

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 427

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 428

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 429

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 430

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 431

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 432

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 433

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 434

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 435

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 436

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 437

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 438

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 439

Splay tree: every access splays to the root; amortized O(log n).

## entry 440

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 441

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 442

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 443

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 444

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 445

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 446

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 447

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 448

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 449

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 450

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 451

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 452

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 453

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 454

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 455

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 456

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 457

Stable sort matters when a secondary key was set in a prior pass.

## entry 458

Stable sort matters when a secondary key was set in a prior pass.

## entry 459

State compression: bitmask + integer encodes a small subset cheaply.

## entry 460

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 461

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 462

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 463

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 464

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 465

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 466

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 467

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 468

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 469

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 470

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 471

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 472

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 473

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 474

Greedy by end-time picks the most non-overlapping intervals.

## entry 475

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 476

LIS via patience: each pile holds the smallest tail of length k.

## entry 477

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 478

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 479

LIS via patience: each pile holds the smallest tail of length k.

## entry 480

State compression: bitmask + integer encodes a small subset cheaply.

## entry 481

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 482

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 483

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 484

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 485

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 486

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 487

Splay tree: every access splays to the root; amortized O(log n).

## entry 488

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 489

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 490

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 491

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 492

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 493

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 494

Greedy by end-time picks the most non-overlapping intervals.

## entry 495

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 496

StringBuilder: amortize allocation by doubling on grow.

## entry 497

Articulation points: same DFS as bridges, with a slightly different test.

## entry 498

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 499

Splay tree: every access splays to the root; amortized O(log n).

## entry 500

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 501

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 502

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 503

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 504

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 505

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 506

Articulation points: same DFS as bridges, with a slightly different test.

## entry 507

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 508

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 509

Splay tree: every access splays to the root; amortized O(log n).

## entry 510

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 511

Union-Find with path compression amortizes to near-O(1) per op.

## entry 512

Walk both pointers from each end inward; advance the smaller side.

## entry 513

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 514

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 515

Splay tree: every access splays to the root; amortized O(log n).

## entry 516

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 517

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 518

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 519

Walk both pointers from each end inward; advance the smaller side.

## entry 520

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 521

State compression: bitmask + integer encodes a small subset cheaply.

## entry 522

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 523

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 524

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 525

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 526

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 527

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 528

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 529

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 530

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 531

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 532

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 533

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 534

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 535

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 536

Stable sort matters when a secondary key was set in a prior pass.

## entry 537

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 538

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 539

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 540

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 541

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 542

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 543

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 544

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 545

State compression: bitmask + integer encodes a small subset cheaply.

## entry 546

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 547

Stable sort matters when a secondary key was set in a prior pass.

## entry 548

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 549

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 550

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 551

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 552

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 553

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 554

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 555

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 556

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 557

StringBuilder: amortize allocation by doubling on grow.

## entry 558

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 559

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 560

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 561

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 562

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 563

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 564

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 565

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 566

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 567

LIS via patience: each pile holds the smallest tail of length k.

## entry 568

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 569

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 570

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 571

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 572

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 573

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 574

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 575

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 576

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 577

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 578

Greedy by end-time picks the most non-overlapping intervals.

## entry 579

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 580

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 581

Heap when you only need top-k; full sort is wasted work.

## entry 582

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 583

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 584

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 585

Union-Find with path compression amortizes to near-O(1) per op.

## entry 586

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 587

Articulation points: same DFS as bridges, with a slightly different test.

## entry 588

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 589

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 590

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 591

Stable sort matters when a secondary key was set in a prior pass.

## entry 592

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 593

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 594

Greedy by end-time picks the most non-overlapping intervals.

## entry 595

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 596

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 597

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 598

Union-Find with path compression amortizes to near-O(1) per op.

## entry 599

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 600

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 601

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 602

Stable sort matters when a secondary key was set in a prior pass.

## entry 603

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 604

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 605

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 606

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 607

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 608

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 609

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 610

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 611

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 612

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 613

Stable sort matters when a secondary key was set in a prior pass.

## entry 614

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 615

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 616

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 617

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 618

LIS via patience: each pile holds the smallest tail of length k.

## entry 619

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 620

Splay tree: every access splays to the root; amortized O(log n).

## entry 621

Articulation points: same DFS as bridges, with a slightly different test.

## entry 622

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 623

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 624

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 625

Monotonic stack pops while the new element violates the invariant.

## entry 626

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 627

StringBuilder: amortize allocation by doubling on grow.

## entry 628

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 629

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 630

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 631

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 632

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 633

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 634

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 635

Union-Find with path compression amortizes to near-O(1) per op.
