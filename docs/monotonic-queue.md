# monotonic-queue

Pick a pivot, partition, recurse on the side that contains the kth slot.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Manacher expands around each center, reusing prior radii via mirror reflection.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Greedy by end-time picks the most non-overlapping intervals.

Union-Find with path compression amortizes to near-O(1) per op.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

BFS layers carry implicit shortest-path distance in unweighted graphs.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Heap when you only need top-k; full sort is wasted work.

Stable sort matters when a secondary key was set in a prior pass.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Morris traversal threads predecessors back to current node — O(1) extra space.

Unbounded knapsack: capacity inner ascending allows item reuse.

In-place compaction uses two pointers: read advances always, write only on keep.

Monotonic stack pops while the new element violates the invariant.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Walk both pointers from each end inward; advance the smaller side.

Merge intervals: sort by start; extend the running interval while overlapping.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

LIS via patience: each pile holds the smallest tail of length k.

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 1

LIS via patience: each pile holds the smallest tail of length k.

## entry 2

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4

Splay tree: every access splays to the root; amortized O(log n).

## entry 5

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 6

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 7

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 8

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 9

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 10

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 11

Euler tour flattens a tree into an array for range-query LCA.

## entry 12

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 13

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 14

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 15

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 16

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 17

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 18

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 19

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 20

LIS via patience: each pile holds the smallest tail of length k.

## entry 21

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 22

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 23

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 24

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 25

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 26

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 27

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 28

LIS via patience: each pile holds the smallest tail of length k.

## entry 29

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 30

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 31

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 32

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 33

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 34

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 35

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 36

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 37

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 38

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 39

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 40

Euler tour flattens a tree into an array for range-query LCA.

## entry 41

LIS via patience: each pile holds the smallest tail of length k.

## entry 42

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 43

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 44

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 45

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 46

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 47

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 48

State compression: bitmask + integer encodes a small subset cheaply.

## entry 49

Stable sort matters when a secondary key was set in a prior pass.

## entry 50

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 51

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 52

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 53

Greedy by end-time picks the most non-overlapping intervals.

## entry 54

Splay tree: every access splays to the root; amortized O(log n).

## entry 55

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 56

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 57

State compression: bitmask + integer encodes a small subset cheaply.

## entry 58

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 59

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 60

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 61

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 62

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 63

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 64

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 65

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 66

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 67

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 68

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 69

Stable sort matters when a secondary key was set in a prior pass.

## entry 70

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 71

Union-Find with path compression amortizes to near-O(1) per op.

## entry 72

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 73

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 74

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 75

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 76

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 77

Union-Find with path compression amortizes to near-O(1) per op.

## entry 78

Articulation points: same DFS as bridges, with a slightly different test.

## entry 79

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 80

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 81

Union-Find with path compression amortizes to near-O(1) per op.

## entry 82

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 83

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 84

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 85

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 86

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 87

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 88

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 89

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 90

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 91

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 92

Wavelet tree: range k-th element in O(log Σ) time.

## entry 93

StringBuilder: amortize allocation by doubling on grow.

## entry 94

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 95

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 96

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 97

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 98

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 99

Greedy by end-time picks the most non-overlapping intervals.

## entry 100

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 101

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 102

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 103

Monotonic stack pops while the new element violates the invariant.

## entry 104

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 105

LIS via patience: each pile holds the smallest tail of length k.

## entry 106

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 107

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 108

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 109

Euler tour flattens a tree into an array for range-query LCA.

## entry 110

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 111

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 112

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 113

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 114

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 115

State compression: bitmask + integer encodes a small subset cheaply.

## entry 116

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 117

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 118

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 119

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 120

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 121

Walk both pointers from each end inward; advance the smaller side.

## entry 122

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 123

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 124

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 125

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 126

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 127

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 128

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 129

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 130

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 131

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 132

Euler tour flattens a tree into an array for range-query LCA.

## entry 133

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 134

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 135

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 136

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 137

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 138

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 139

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 140

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 141

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 142

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 143

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 144

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 145

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 146

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 147

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 148

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 149

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 150

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 151

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 152

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 153

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 154

Heap when you only need top-k; full sort is wasted work.

## entry 155

Euler tour flattens a tree into an array for range-query LCA.

## entry 156

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 157

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 158

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 159

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 160

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 161

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 162

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 163

State compression: bitmask + integer encodes a small subset cheaply.

## entry 164

Union-Find with path compression amortizes to near-O(1) per op.

## entry 165

Walk both pointers from each end inward; advance the smaller side.

## entry 166

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 167

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 168

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 169

Walk both pointers from each end inward; advance the smaller side.

## entry 170

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 171

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 172

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 173

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 174

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 175

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 176

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 177

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 178

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 179

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 180

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 181

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 182

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 183

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 184

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 185

Articulation points: same DFS as bridges, with a slightly different test.

## entry 186

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 187

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 188

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 189

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 190

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 191

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 192

Splay tree: every access splays to the root; amortized O(log n).

## entry 193

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 194

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 195

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 196

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 197

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 198

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 199

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 200

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 201

Splay tree: every access splays to the root; amortized O(log n).

## entry 202

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 203

Articulation points: same DFS as bridges, with a slightly different test.

## entry 204

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 205

Greedy by end-time picks the most non-overlapping intervals.

## entry 206

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 207

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 208

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 209

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 210

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 211

Union-Find with path compression amortizes to near-O(1) per op.

## entry 212

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 213

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 214

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 215

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 216

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 217

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 218

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 219

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 220

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 221

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 222

Articulation points: same DFS as bridges, with a slightly different test.

## entry 223

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 224

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 225

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 226

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 227

Union-Find with path compression amortizes to near-O(1) per op.

## entry 228

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 229

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 230

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 231

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 232

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 233

StringBuilder: amortize allocation by doubling on grow.

## entry 234

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 235

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 236

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 237

Greedy by end-time picks the most non-overlapping intervals.

## entry 238

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 239

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 240

Splay tree: every access splays to the root; amortized O(log n).

## entry 241

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 242

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 243

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 244

Wavelet tree: range k-th element in O(log Σ) time.

## entry 245

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 246

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 247

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 248

Union-Find with path compression amortizes to near-O(1) per op.

## entry 249

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 250

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 251

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 252

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 253

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 254

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 255

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 256

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 257

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 258

Union-Find with path compression amortizes to near-O(1) per op.

## entry 259

Heap when you only need top-k; full sort is wasted work.

## entry 260

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 261

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 262

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 263

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 264

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 265

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 266

Union-Find with path compression amortizes to near-O(1) per op.

## entry 267

Union-Find with path compression amortizes to near-O(1) per op.

## entry 268

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 269

Monotonic stack pops while the new element violates the invariant.

## entry 270

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 271

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 272

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 273

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 274

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 275

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 276

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 277

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 278

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 279

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 280

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 281

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 282

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 283

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 284

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 285

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 286

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 287

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 288

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 289

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 290

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 291

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 292

Splay tree: every access splays to the root; amortized O(log n).

## entry 293

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 294

Heap when you only need top-k; full sort is wasted work.

## entry 295

Wavelet tree: range k-th element in O(log Σ) time.

## entry 296

Monotonic stack pops while the new element violates the invariant.

## entry 297

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 298

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 299

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 300

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 301

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 302

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 303

Stable sort matters when a secondary key was set in a prior pass.

## entry 304

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 305

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 306

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 307

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 308

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
