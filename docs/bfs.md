# bfs

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Stable sort matters when a secondary key was set in a prior pass.

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

Unbounded knapsack: capacity inner ascending allows item reuse.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Union-Find with path compression amortizes to near-O(1) per op.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Edit distance is LCS with a twist: substitution is a third option at each cell.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Greedy by end-time picks the most non-overlapping intervals.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Monotonic stack pops while the new element violates the invariant.

Merge intervals: sort by start; extend the running interval while overlapping.

Morris traversal threads predecessors back to current node — O(1) extra space.

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

Walk both pointers from each end inward; advance the smaller side.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

LIS via patience: each pile holds the smallest tail of length k.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Heap when you only need top-k; full sort is wasted work.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 1

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 3

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 4

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 5

Articulation points: same DFS as bridges, with a slightly different test.

## entry 6

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 7

Walk both pointers from each end inward; advance the smaller side.

## entry 8

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 9

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 10

Walk both pointers from each end inward; advance the smaller side.

## entry 11

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 12

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 13

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 14

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 15

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 16

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 17

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 18

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 19

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 20

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 21

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 22

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 23

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 24

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 25

StringBuilder: amortize allocation by doubling on grow.

## entry 26

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 27

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 28

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 29

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 30

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 31

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 32

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 33

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 34

LIS via patience: each pile holds the smallest tail of length k.

## entry 35

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 36

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 37

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 38

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 39

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 40

Walk both pointers from each end inward; advance the smaller side.

## entry 41

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 42

Articulation points: same DFS as bridges, with a slightly different test.

## entry 43

Union-Find with path compression amortizes to near-O(1) per op.

## entry 44

Euler tour flattens a tree into an array for range-query LCA.

## entry 45

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 46

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 47

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 48

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 49

Union-Find with path compression amortizes to near-O(1) per op.

## entry 50

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 51

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 52

Euler tour flattens a tree into an array for range-query LCA.

## entry 53

Articulation points: same DFS as bridges, with a slightly different test.

## entry 54

Splay tree: every access splays to the root; amortized O(log n).

## entry 55

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 56

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 57

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 58

State compression: bitmask + integer encodes a small subset cheaply.

## entry 59

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 60

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 61

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 62

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 63

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 64

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 65

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 66

Stable sort matters when a secondary key was set in a prior pass.

## entry 67

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 68

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 69

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 70

State compression: bitmask + integer encodes a small subset cheaply.

## entry 71

Walk both pointers from each end inward; advance the smaller side.

## entry 72

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 73

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 74

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 75

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 76

Monotonic stack pops while the new element violates the invariant.

## entry 77

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 78

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 79

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 80

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 81

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 82

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 83

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 84

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 85

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 86

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 87

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 88

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 89

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 90

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 91

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 92

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 93

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 94

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 95

Splay tree: every access splays to the root; amortized O(log n).

## entry 96

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 97

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 98

Heap when you only need top-k; full sort is wasted work.

## entry 99

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 100

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 101

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 102

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 103

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 104

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 105

Euler tour flattens a tree into an array for range-query LCA.

## entry 106

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 107

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 108

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 109

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 110

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 111

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 112

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 113

Stable sort matters when a secondary key was set in a prior pass.

## entry 114

Monotonic stack pops while the new element violates the invariant.

## entry 115

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 116

Monotonic stack pops while the new element violates the invariant.

## entry 117

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 118

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 119

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 120

Splay tree: every access splays to the root; amortized O(log n).

## entry 121

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 122

Stable sort matters when a secondary key was set in a prior pass.

## entry 123

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 124

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 125

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 126

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 127

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 128

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 129

StringBuilder: amortize allocation by doubling on grow.

## entry 130

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 131

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 132

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 133

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 134

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 135

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 136

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 137

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 138

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 139

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 140

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 141

State compression: bitmask + integer encodes a small subset cheaply.

## entry 142

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 143

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 144

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 145

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 146

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 147

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 148

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 149

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 150

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 151

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 152

Greedy by end-time picks the most non-overlapping intervals.

## entry 153

Stable sort matters when a secondary key was set in a prior pass.

## entry 154

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 155

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 156

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 157

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 158

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 159

Walk both pointers from each end inward; advance the smaller side.

## entry 160

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 161

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 162

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 163

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 164

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 165

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 166

Heap when you only need top-k; full sort is wasted work.

## entry 167

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 168

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 169

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 170

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 171

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 172

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 173

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 174

Articulation points: same DFS as bridges, with a slightly different test.

## entry 175

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 176

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 177

Splay tree: every access splays to the root; amortized O(log n).

## entry 178

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 179

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 180

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 181

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 182

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 183

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 184

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 185

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 186

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 187

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 188

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 189

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 190

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 191

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 192

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 193

Heap when you only need top-k; full sort is wasted work.

## entry 194

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 195

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 196

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 197

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 198

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 199

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 200

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 201

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 202

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 203

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 204

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 205

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 206

Monotonic stack pops while the new element violates the invariant.

## entry 207

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 208

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 209

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 210

State compression: bitmask + integer encodes a small subset cheaply.

## entry 211

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 212

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 213

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 214

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 215

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 216

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 217

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 218

State compression: bitmask + integer encodes a small subset cheaply.

## entry 219

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 220

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 221

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 222

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 223

State compression: bitmask + integer encodes a small subset cheaply.

## entry 224

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 225

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 226

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 227

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 228

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 229

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 230

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 231

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 232

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 233

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 234

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 235

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 236

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 237

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 238

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 239

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 240

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 241

Union-Find with path compression amortizes to near-O(1) per op.

## entry 242

Articulation points: same DFS as bridges, with a slightly different test.

## entry 243

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 244

Euler tour flattens a tree into an array for range-query LCA.

## entry 245

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 246

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 247

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 248

Monotonic stack pops while the new element violates the invariant.

## entry 249

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 250

Monotonic stack pops while the new element violates the invariant.

## entry 251

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 252

Monotonic stack pops while the new element violates the invariant.

## entry 253

StringBuilder: amortize allocation by doubling on grow.

## entry 254

Stable sort matters when a secondary key was set in a prior pass.

## entry 255

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 256

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 257

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 258

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 259

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 260

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 261

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 262

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 263

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 264

LIS via patience: each pile holds the smallest tail of length k.

## entry 265

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 266

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 267

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 268

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 269

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 270

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 271

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 272

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 273

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 274

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 275

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 276

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 277

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 278

Union-Find with path compression amortizes to near-O(1) per op.

## entry 279

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 280

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 281

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 282

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 283

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 284

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 285

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 286

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 287

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 288

Walk both pointers from each end inward; advance the smaller side.

## entry 289

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 290

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 291

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 292

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 293

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 294

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 295

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 296

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 297

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 298

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 299

Union-Find with path compression amortizes to near-O(1) per op.

## entry 300

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 301

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 302

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 303

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 304

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 305

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 306

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 307

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 308

Walk both pointers from each end inward; advance the smaller side.

## entry 309

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 310

Splay tree: every access splays to the root; amortized O(log n).

## entry 311

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 312

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 313

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 314

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 315

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 316

Euler tour flattens a tree into an array for range-query LCA.

## entry 317

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 318

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 319

LIS via patience: each pile holds the smallest tail of length k.

## entry 320

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 321

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 322

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 323

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 324

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 325

Stable sort matters when a secondary key was set in a prior pass.

## entry 326

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 327

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 328

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 329

Articulation points: same DFS as bridges, with a slightly different test.

## entry 330

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 331

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 332

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 333

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 334

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 335

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 336

Stable sort matters when a secondary key was set in a prior pass.

## entry 337

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 338

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 339

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 340

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 341

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 342

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 343

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 344

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 345

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 346

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 347

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 348

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 349

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 350

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 351

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 352

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 353

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 354

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 355

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 356

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 357

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 358

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 359

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 360

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 361

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 362

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 363

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 364

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 365

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 366

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 367

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 368

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 369

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 370

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 371

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 372

LIS via patience: each pile holds the smallest tail of length k.

## entry 373

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 374

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 375

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 376

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 377

Heap when you only need top-k; full sort is wasted work.

## entry 378

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 379

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 380

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 381

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 382

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 383

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 384

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 385

Greedy by end-time picks the most non-overlapping intervals.

## entry 386

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 387

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 388

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 389

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 390

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 391

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 392

StringBuilder: amortize allocation by doubling on grow.

## entry 393

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 394

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 395

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 396

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 397

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 398

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 399

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 400

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 401

Euler tour flattens a tree into an array for range-query LCA.

## entry 402

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 403

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 404

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 405

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 406

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 407

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 408

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 409

Wavelet tree: range k-th element in O(log Σ) time.

## entry 410

StringBuilder: amortize allocation by doubling on grow.

## entry 411

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 412

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 413

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 414

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 415

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 416

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 417

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 418

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 419

LIS via patience: each pile holds the smallest tail of length k.

## entry 420

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 421

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 422

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 423

Greedy by end-time picks the most non-overlapping intervals.

## entry 424

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 425

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 426

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 427

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 428

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 429

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 430

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 431

Monotonic stack pops while the new element violates the invariant.

## entry 432

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 433

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 434

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 435

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 436

Monotonic stack pops while the new element violates the invariant.

## entry 437

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 438

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 439

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 440

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 441

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 442

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 443

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 444

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 445

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 446

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 447

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 448

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 449

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 450

Walk both pointers from each end inward; advance the smaller side.

## entry 451

StringBuilder: amortize allocation by doubling on grow.

## entry 452

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 453

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 454

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 455

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 456

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 457

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 458

Articulation points: same DFS as bridges, with a slightly different test.

## entry 459

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 460

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 461

Articulation points: same DFS as bridges, with a slightly different test.

## entry 462

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 463

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 464

Stable sort matters when a secondary key was set in a prior pass.

## entry 465

Union-Find with path compression amortizes to near-O(1) per op.

## entry 466

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 467

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 468

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 469

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 470

Union-Find with path compression amortizes to near-O(1) per op.

## entry 471

StringBuilder: amortize allocation by doubling on grow.

## entry 472

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 473

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 474

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 475

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 476

Monotonic stack pops while the new element violates the invariant.

## entry 477

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 478

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 479

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 480

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 481

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 482

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 483

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 484

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 485

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 486

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 487

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 488

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 489

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 490

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 491

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 492

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 493

Monotonic stack pops while the new element violates the invariant.

## entry 494

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 495

Greedy by end-time picks the most non-overlapping intervals.

## entry 496

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 497

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 498

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 499

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 500

Euler tour flattens a tree into an array for range-query LCA.

## entry 501

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 502

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 503

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 504

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 505

Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 506

Greedy by end-time picks the most non-overlapping intervals.

## entry 507

Heap when you only need top-k; full sort is wasted work.

## entry 508

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 509

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 510

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 511

Walk both pointers from each end inward; advance the smaller side.

## entry 512

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 513

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 514

Union-Find with path compression amortizes to near-O(1) per op.

## entry 515

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 516

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 517

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 518

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 519

Stable sort matters when a secondary key was set in a prior pass.

## entry 520

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 521

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 522

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 523

Wavelet tree: range k-th element in O(log Σ) time.

## entry 524

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 525

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 526

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 527

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 528

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 529

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 530

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 531

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 532

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 533

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 534

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 535

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 536

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 537

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 538

ASCII rules are a strict subset of UTF-8; no special handling needed.
