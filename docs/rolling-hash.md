# rolling-hash

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

DFS on a grid: write a sentinel into the visited cell; restore if needed.

Backtracking template: choose, recurse, un-choose. Mutate then revert.

Unbounded knapsack: capacity inner ascending allows item reuse.

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

Monotonic stack pops while the new element violates the invariant.

Stable sort matters when a secondary key was set in a prior pass.

LIS via patience: each pile holds the smallest tail of length k.

Merge intervals: sort by start; extend the running interval while overlapping.

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

Iterative DFS with an explicit stack avoids recursion-limit issues.

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

In-place compaction uses two pointers: read advances always, write only on keep.

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

Walk both pointers from each end inward; advance the smaller side.

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

Monotonic deque: push back, pop back to maintain order, pop front when stale.

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

Greedy by end-time picks the most non-overlapping intervals.

BFS layers carry implicit shortest-path distance in unweighted graphs.

Heap when you only need top-k; full sort is wasted work.

Manacher expands around each center, reusing prior radii via mirror reflection.

Pick a pivot, partition, recurse on the side that contains the kth slot.

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

Polynomial rolling hash with two moduli kills almost all collisions in practice.

Morris traversal threads predecessors back to current node — O(1) extra space.

Fenwick supports prefix-sum updates in O(log n) with a flat array.

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

Union-Find with path compression amortizes to near-O(1) per op.

## entry 1

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 5

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 6

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 7

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 8

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 9

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 10

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 11

Articulation points: same DFS as bridges, with a slightly different test.

## entry 12

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 13

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 14

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 15

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 16

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 17

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 18

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 19

Stable sort matters when a secondary key was set in a prior pass.

## entry 20

Splay tree: every access splays to the root; amortized O(log n).

## entry 21

Union-Find with path compression amortizes to near-O(1) per op.

## entry 22

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 23

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 24

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 25

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 26

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 27

State compression: bitmask + integer encodes a small subset cheaply.

## entry 28

Monotonic stack pops while the new element violates the invariant.

## entry 29

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 30

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 31

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 32

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 33

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 34

Heap when you only need top-k; full sort is wasted work.

## entry 35

Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 36

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 37

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 38

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 39

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 40

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 41

Union-Find with path compression amortizes to near-O(1) per op.

## entry 42

Stable sort matters when a secondary key was set in a prior pass.

## entry 43

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 44

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 45

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 46

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 47

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 48

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 49

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 50

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 51

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 52

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 53

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 54

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 55

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 56

LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 57

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 58

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 59

StringBuilder: amortize allocation by doubling on grow.

## entry 60

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 61

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 62

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 63

Greedy by end-time picks the most non-overlapping intervals.

## entry 64

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 65

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 66

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 67

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 68

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 69

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 70

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 71

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 72

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 73

Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 74

Heap when you only need top-k; full sort is wasted work.

## entry 75

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 76

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 77

Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 78

Wavelet tree: range k-th element in O(log Σ) time.

## entry 79

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 80

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 81

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 82

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 83

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 84

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 85

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 86

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 87

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 88

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 89

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 90

Articulation points: same DFS as bridges, with a slightly different test.

## entry 91

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 92

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 93

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 94

Stable sort matters when a secondary key was set in a prior pass.

## entry 95

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 96

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 97

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 98

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 99

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 100

Euler tour flattens a tree into an array for range-query LCA.

## entry 101

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 102

Union-Find with path compression amortizes to near-O(1) per op.

## entry 103

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 104

Splay tree: every access splays to the root; amortized O(log n).

## entry 105

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 106

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 107

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 108

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 109

Articulation points: same DFS as bridges, with a slightly different test.

## entry 110

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 111

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 112

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 113

Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 114

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 115

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 116

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 117

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 118

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 119

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 120

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 121

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 122

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 123

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 124

Wavelet tree: range k-th element in O(log Σ) time.

## entry 125

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 126

0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 127

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 128

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 129

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 130

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 131

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 132

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 133

LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 134

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 135

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 136

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 137

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 138

Union-Find with path compression amortizes to near-O(1) per op.

## entry 139

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 140

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 141

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 142

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 143

Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 144

Monotonic stack pops while the new element violates the invariant.

## entry 145

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 146

StringBuilder: amortize allocation by doubling on grow.

## entry 147

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 148

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 149

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 150

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 151

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 152

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 153

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 154

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 155

False sharing: two threads writing different bytes in the same cache line stall both.

## entry 156

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 157

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 158

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 159

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 160

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 161

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 162

Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 163

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 164

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 165

State compression: bitmask + integer encodes a small subset cheaply.

## entry 166

SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 167

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 168

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 169

ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 170

Merge intervals: sort by start; extend the running interval while overlapping.

## entry 171

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 172

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 173

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 174

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 175

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 176

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 177

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 178

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 179

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 180

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 181

Walk both pointers from each end inward; advance the smaller side.

## entry 182

Euler tour flattens a tree into an array for range-query LCA.

## entry 183

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 184

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 185

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 186

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 187

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 188

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 189

Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 190

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 191

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 192

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 193

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 194

Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 195

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 196

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 197

Heap when you only need top-k; full sort is wasted work.

## entry 198

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 199

Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 200

BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 201

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 202

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 203

Rope: tree of small string fragments; O(log n) concat and substring.

## entry 204

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 205

Splay tree: every access splays to the root; amortized O(log n).

## entry 206

StringBuilder: amortize allocation by doubling on grow.

## entry 207

Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 208

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 209

Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 210

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 211

Splay tree: every access splays to the root; amortized O(log n).

## entry 212

Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 213

Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 214

Euler tour flattens a tree into an array for range-query LCA.

## entry 215

StringBuilder: amortize allocation by doubling on grow.

## entry 216

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 217

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 218

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 219

Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 220

LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 221

Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 222

k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 223

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 224

Walk both pointers from each end inward; advance the smaller side.

## entry 225

Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 226

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 227

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 228

Greedy by end-time picks the most non-overlapping intervals.

## entry 229

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 230

Stable sort matters when a secondary key was set in a prior pass.

## entry 231

BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 232

Endianness matters when serializing multi-byte ints to a file or wire.

## entry 233

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 234

Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 235

Wavelet tree: range k-th element in O(log Σ) time.

## entry 236

State compression: bitmask + integer encodes a small subset cheaply.

## entry 237

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 238

Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 239

Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 240

Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 241

Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 242

Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 243

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 244

Stable sort matters when a secondary key was set in a prior pass.

## entry 245

DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 246

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 247

StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 248

LIS via patience: each pile holds the smallest tail of length k.

## entry 249

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 250

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 251

Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 252

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 253

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 254

Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 255

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 256

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 257

DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 258

Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 259

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 260

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 261

Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 262

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 263

Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 264

Stable sort matters when a secondary key was set in a prior pass.

## entry 265

In-place compaction uses two pointers: read advances always, write only on keep.

## entry 266

Greedy by end-time picks the most non-overlapping intervals.

## entry 267

Interval DP: solve all `[l, r]` ranges from short to long.

## entry 268

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 269

Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 270

Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 271

Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 272

UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 273

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 274

LIS via patience: each pile holds the smallest tail of length k.

## entry 275

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 276

Stable sort matters when a secondary key was set in a prior pass.

## entry 277

Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 278

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 279

Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 280

Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 281

Walk both pointers from each end inward; advance the smaller side.

## entry 282

Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 283

Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 284

StringBuilder: amortize allocation by doubling on grow.

## entry 285

Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 286

LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 287

Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 288

Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 289

Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 290

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 291

Monotonic stack pops while the new element violates the invariant.

## entry 292

Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 293

Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 294

Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 295

LIS via patience: each pile holds the smallest tail of length k.

## entry 296

Wavelet tree: range k-th element in O(log Σ) time.

## entry 297

Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 298

State compression: bitmask + integer encodes a small subset cheaply.

## entry 299

Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 300

Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 301

Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 302

Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 303

Interval DP: solve all `[l, r]` ranges from short to long.
