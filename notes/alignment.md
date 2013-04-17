# alignment

## entry 1

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 2

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 3

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 6

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 7

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 8

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 9

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 10

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 11

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 12

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 13

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 14

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 15

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 16

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 17

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 18

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 19

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 20

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 21

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 22

- StringBuilder: amortize allocation by doubling on grow.

## entry 23

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 24

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 25

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 26

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 27

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 28

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 29

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 30

- Heap when you only need top-k; full sort is wasted work.

## entry 31

- Stable sort matters when a secondary key was set in a prior pass.

## entry 32

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 33

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 34

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 35

- Splay tree: every access splays to the root; amortized O(log n).

## entry 36

- LIS via patience: each pile holds the smallest tail of length k.

## entry 37

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 38

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 39

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 40

- Greedy by end-time picks the most non-overlapping intervals.

## entry 41

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 42

- Euler tour flattens a tree into an array for range-query LCA.

## entry 43

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 44

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 45

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 46

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 47

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 48

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 49

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 50

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 51

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 52

- StringBuilder: amortize allocation by doubling on grow.

## entry 53

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 54

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 55

- Splay tree: every access splays to the root; amortized O(log n).

## entry 56

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 57

- Monotonic stack pops while the new element violates the invariant.

## entry 58

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 59

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 60

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 61

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 62

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 63

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 64

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 65

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 66

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 67

- Splay tree: every access splays to the root; amortized O(log n).

## entry 68

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 69

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 70

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 71

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 72

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 73

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 74

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 75

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 76

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 77

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 78

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 79

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 80

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 81

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 82

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 83

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 84

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 85

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 86

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 87

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 88

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 89

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 90

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 91

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 92

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 93

- Euler tour flattens a tree into an array for range-query LCA.

## entry 94

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 95

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 96

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 97

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 98

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 99

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 100

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 101

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 102

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 103

- Monotonic stack pops while the new element violates the invariant.

## entry 104

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 105

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 106

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 107

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 108

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 109

- Splay tree: every access splays to the root; amortized O(log n).

## entry 110

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 111

- Euler tour flattens a tree into an array for range-query LCA.

## entry 112

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 113

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 114

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 115

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 116

- StringBuilder: amortize allocation by doubling on grow.

## entry 117

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 118

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 119

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 120

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 121

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 122

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 123

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 124

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 125

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 126

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 127

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 128

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 129

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 130

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 131

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 132

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 133

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 134

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 135

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 136

- Splay tree: every access splays to the root; amortized O(log n).

## entry 137

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 138

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 139

- LIS via patience: each pile holds the smallest tail of length k.

## entry 140

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 141

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 142

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 143

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 144

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 145

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 146

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 147

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 148

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 149

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 150

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 151

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 152

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 153

- Stable sort matters when a secondary key was set in a prior pass.

## entry 154

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 155

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 156

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 157

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 158

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 159

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 160

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 161

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 162

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 163

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 164

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 165

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 166

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 167

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 168

- Euler tour flattens a tree into an array for range-query LCA.

## entry 169

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 170

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 171

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 172

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 173

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 174

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 175

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 176

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 177

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 178

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 179

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 180

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 181

- Walk both pointers from each end inward; advance the smaller side.

## entry 182

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 183

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 184

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 185

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 186

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 187

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 188

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 189

- Greedy by end-time picks the most non-overlapping intervals.

## entry 190

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 191

- Euler tour flattens a tree into an array for range-query LCA.

## entry 192

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 193

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 194

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 195

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 196

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 197

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 198

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 199

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 200

- Greedy by end-time picks the most non-overlapping intervals.

## entry 201

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 202

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 203

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 204

- Monotonic stack pops while the new element violates the invariant.

## entry 205

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 206

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 207

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 208

- LIS via patience: each pile holds the smallest tail of length k.

## entry 209

- Splay tree: every access splays to the root; amortized O(log n).

## entry 210

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 211

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 212

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 213

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 214

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 215

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 216

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 217

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 218

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 219

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 220

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 221

- Monotonic stack pops while the new element violates the invariant.

## entry 222

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 223

- Euler tour flattens a tree into an array for range-query LCA.

## entry 224

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 225

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 226

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 227

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 228

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 229

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 230

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 231

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 232

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 233

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 234

- Euler tour flattens a tree into an array for range-query LCA.

## entry 235

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 236

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 237

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 238

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 239

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 240

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 241

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 242

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 243

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 244

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 245

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 246

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 247

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 248

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 249

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 250

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 251

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 252

- Monotonic stack pops while the new element violates the invariant.

## entry 253

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 254

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 255

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 256

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 257

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 258

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 259

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 260

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 261

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 262

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 263

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 264

- Heap when you only need top-k; full sort is wasted work.

## entry 265

- Stable sort matters when a secondary key was set in a prior pass.

## entry 266

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 267

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 268

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 269

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 270

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 271

- Splay tree: every access splays to the root; amortized O(log n).

## entry 272

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 273

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 274

- Euler tour flattens a tree into an array for range-query LCA.

## entry 275

- Monotonic stack pops while the new element violates the invariant.

## entry 276

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 277

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 278

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 279

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 280

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 281

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 282

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 283

- LIS via patience: each pile holds the smallest tail of length k.

## entry 284

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 285

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 286

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 287

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 288

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 289

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 290

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 291

- Heap when you only need top-k; full sort is wasted work.

## entry 292

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 293

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 294

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 295

- StringBuilder: amortize allocation by doubling on grow.

## entry 296

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 297

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 298

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 299

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 300

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 301

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 302

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 303

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 304

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 305

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 306

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 307

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 308

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 309

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 310

- Stable sort matters when a secondary key was set in a prior pass.

## entry 311

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 312

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 313

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 314

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 315

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 316

- Splay tree: every access splays to the root; amortized O(log n).

## entry 317

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 318

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 319

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 320

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 321

- StringBuilder: amortize allocation by doubling on grow.

## entry 322

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 323

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 324

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 325

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 326

- Heap when you only need top-k; full sort is wasted work.

## entry 327

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 328

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 329

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 330

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 331

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 332

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 333

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 334

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 335

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 336

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 337

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 338

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 339

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 340

- Heap when you only need top-k; full sort is wasted work.

## entry 341

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 342

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 343

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 344

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 345

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 346

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 347

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 348

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 349

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 350

- Stable sort matters when a secondary key was set in a prior pass.

## entry 351

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 352

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 353

- Euler tour flattens a tree into an array for range-query LCA.

## entry 354

- Splay tree: every access splays to the root; amortized O(log n).

## entry 355

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 356

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 357

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 358

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 359

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 360

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 361

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 362

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 363

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 364

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 365

- Splay tree: every access splays to the root; amortized O(log n).

## entry 366

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 367

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 368

- Stable sort matters when a secondary key was set in a prior pass.

## entry 369

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 370

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 371

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 372

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 373

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 374

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 375

- StringBuilder: amortize allocation by doubling on grow.

## entry 376

- Greedy by end-time picks the most non-overlapping intervals.

## entry 377

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 378

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 379

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 380

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 381

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 382

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 383

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 384

- Monotonic stack pops while the new element violates the invariant.

## entry 385

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 386

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 387

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 388

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 389

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 390

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 391

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 392

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 393

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 394

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 395

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 396

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 397

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 398

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 399

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 400

- Greedy by end-time picks the most non-overlapping intervals.

## entry 401

- Splay tree: every access splays to the root; amortized O(log n).

## entry 402

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 403

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 404

- Monotonic stack pops while the new element violates the invariant.

## entry 405

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 406

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 407

- Greedy by end-time picks the most non-overlapping intervals.

## entry 408

- Greedy by end-time picks the most non-overlapping intervals.

## entry 409

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 410

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 411

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 412

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 413

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 414

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 415

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 416

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 417

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 418

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 419

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 420

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 421

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 422

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 423

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 424

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 425

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 426

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 427

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 428

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 429

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 430

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 431

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 432

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 433

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 434

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 435

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 436

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 437

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 438

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 439

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 440

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 441

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 442

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 443

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 444

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 445

- StringBuilder: amortize allocation by doubling on grow.

## entry 446

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 447

- Walk both pointers from each end inward; advance the smaller side.

## entry 448

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 449

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 450

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 451

- Monotonic stack pops while the new element violates the invariant.

## entry 452

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 453

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 454

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 455

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 456

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 457

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 458

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 459

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 460

- Monotonic stack pops while the new element violates the invariant.

## entry 461

- StringBuilder: amortize allocation by doubling on grow.

## entry 462

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 463

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 464

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 465

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 466

- Heap when you only need top-k; full sort is wasted work.

## entry 467

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 468

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 469

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 470

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 471

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 472

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 473

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 474

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 475

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 476

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 477

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 478

- Greedy by end-time picks the most non-overlapping intervals.

## entry 479

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 480

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 481

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 482

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 483

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 484

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 485

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 486

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 487

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 488

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 489

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 490

- Stable sort matters when a secondary key was set in a prior pass.

## entry 491

- Splay tree: every access splays to the root; amortized O(log n).

## entry 492

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 493

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 494

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 495

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 496

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 497

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 498

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 499

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 500

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 501

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 502

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 503

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 504

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 505

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 506

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 507

- LIS via patience: each pile holds the smallest tail of length k.

## entry 508

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 509

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 510

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 511

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 512

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 513

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 514

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 515

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 516

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 517

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 518

- Greedy by end-time picks the most non-overlapping intervals.

## entry 519

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 520

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 521

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 522

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 523

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 524

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 525

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 526

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 527

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 528

- Walk both pointers from each end inward; advance the smaller side.

## entry 529

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 530

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 531

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 532

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 533

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 534

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 535

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 536

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 537

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 538

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 539

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 540

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 541

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 542

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 543

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 544

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 545

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 546

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 547

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 548

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 549

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 550

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 551

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 552

- Splay tree: every access splays to the root; amortized O(log n).

## entry 553

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 554

- StringBuilder: amortize allocation by doubling on grow.

## entry 555

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 556

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 557

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 558

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 559

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 560

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 561

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 562

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 563

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 564

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 565

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 566

- Heap when you only need top-k; full sort is wasted work.

## entry 567

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 568

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
