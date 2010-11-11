# graph-dp

## entry 1

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 2

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 3

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 4

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 5

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 6

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 7

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 8

- Euler tour flattens a tree into an array for range-query LCA.

## entry 9

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 10

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 11

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 12

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 13

- StringBuilder: amortize allocation by doubling on grow.

## entry 14

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 15

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 16

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 17

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 18

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 19

- LIS via patience: each pile holds the smallest tail of length k.

## entry 20

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 21

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 22

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 23

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 24

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 25

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 26

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 27

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 28

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 29

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 30

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 31

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 32

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 33

- Splay tree: every access splays to the root; amortized O(log n).

## entry 34

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 35

- Monotonic stack pops while the new element violates the invariant.

## entry 36

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 37

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 38

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 39

- Walk both pointers from each end inward; advance the smaller side.

## entry 40

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 41

- Stable sort matters when a secondary key was set in a prior pass.

## entry 42

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 43

- Stable sort matters when a secondary key was set in a prior pass.

## entry 44

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 45

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 46

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 47

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 48

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 49

- Monotonic stack pops while the new element violates the invariant.

## entry 50

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 51

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 52

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 53

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 54

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 55

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 56

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 57

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 58

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 59

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 60

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 61

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 62

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 63

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 64

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 65

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 66

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 67

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 68

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 69

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 70

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 71

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 72

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 73

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 74

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 75

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 76

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 77

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 78

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 79

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 80

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 81

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 82

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 83

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 84

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 85

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 86

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 87

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 88

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 89

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 90

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 91

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 92

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 93

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 94

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 95

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 96

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 97

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 98

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 99

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 100

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 101

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 102

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 103

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 104

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 105

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 106

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 107

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 108

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 109

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 110

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 111

- Heap when you only need top-k; full sort is wasted work.

## entry 112

- Stable sort matters when a secondary key was set in a prior pass.

## entry 113

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 114

- Stable sort matters when a secondary key was set in a prior pass.

## entry 115

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 116

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 117

- Stable sort matters when a secondary key was set in a prior pass.

## entry 118

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 119

- Stable sort matters when a secondary key was set in a prior pass.

## entry 120

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 121

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 122

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 123

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 124

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 125

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 126

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 127

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 128

- Walk both pointers from each end inward; advance the smaller side.

## entry 129

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 130

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 131

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 132

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 133

- Heap when you only need top-k; full sort is wasted work.

## entry 134

- Greedy by end-time picks the most non-overlapping intervals.

## entry 135

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 136

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 137

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 138

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 139

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 140

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 141

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 142

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 143

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 144

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 145

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 146

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 147

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 148

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 149

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 150

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 151

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 152

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 153

- Splay tree: every access splays to the root; amortized O(log n).

## entry 154

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 155

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 156

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 157

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 158

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 159

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 160

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 161

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 162

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 163

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 164

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 165

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 166

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 167

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 168

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 169

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 170

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 171

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 172

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 173

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 174

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 175

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 176

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 177

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 178

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 179

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 180

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 181

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 182

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 183

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 184

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 185

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 186

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 187

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 188

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 189

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 190

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 191

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 192

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 193

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 194

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 195

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 196

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 197

- Walk both pointers from each end inward; advance the smaller side.

## entry 198

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 199

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 200

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 201

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 202

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 203

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 204

- Heap when you only need top-k; full sort is wasted work.

## entry 205

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 206

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 207

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 208

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 209

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 210

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 211

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 212

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 213

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 214

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 215

- Euler tour flattens a tree into an array for range-query LCA.

## entry 216

- Heap when you only need top-k; full sort is wasted work.

## entry 217

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 218

- Greedy by end-time picks the most non-overlapping intervals.

## entry 219

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 220

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 221

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 222

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 223

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 224

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 225

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 226

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 227

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 228

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 229

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 230

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 231

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 232

- Greedy by end-time picks the most non-overlapping intervals.

## entry 233

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 234

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 235

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 236

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 237

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 238

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 239

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 240

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 241

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 242

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 243

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 244

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 245

- Greedy by end-time picks the most non-overlapping intervals.

## entry 246

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 247

- Monotonic stack pops while the new element violates the invariant.

## entry 248

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 249

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 250

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 251

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 252

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 253

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 254

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 255

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 256

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 257

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 258

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 259

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 260

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 261

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 262

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 263

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 264

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 265

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 266

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 267

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 268

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 269

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 270

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 271

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 272

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 273

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 274

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 275

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 276

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 277

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 278

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 279

- Heap when you only need top-k; full sort is wasted work.

## entry 280

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 281

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 282

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 283

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 284

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 285

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 286

- Monotonic stack pops while the new element violates the invariant.

## entry 287

- Monotonic stack pops while the new element violates the invariant.

## entry 288

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 289

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 290

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 291

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 292

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 293

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 294

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 295

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 296

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 297

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 298

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 299

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 300

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 301

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 302

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 303

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 304

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 305

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 306

- Walk both pointers from each end inward; advance the smaller side.

## entry 307

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 308

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 309

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 310

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 311

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 312

- LIS via patience: each pile holds the smallest tail of length k.

## entry 313

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 314

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 315

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 316

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 317

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 318

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 319

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 320

- Stable sort matters when a secondary key was set in a prior pass.

## entry 321

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 322

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 323

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 324

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 325

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 326

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 327

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 328

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 329

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 330

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 331

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 332

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 333

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 334

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 335

- Euler tour flattens a tree into an array for range-query LCA.

## entry 336

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 337

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 338

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 339

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 340

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 341

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 342

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 343

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 344

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 345

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 346

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 347

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 348

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 349

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 350

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 351

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 352

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 353

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 354

- Walk both pointers from each end inward; advance the smaller side.

## entry 355

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 356

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 357

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 358

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 359

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 360

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 361

- Heap when you only need top-k; full sort is wasted work.

## entry 362

- StringBuilder: amortize allocation by doubling on grow.

## entry 363

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 364

- LIS via patience: each pile holds the smallest tail of length k.

## entry 365

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 366

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 367

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 368

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 369

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 370

- LIS via patience: each pile holds the smallest tail of length k.

## entry 371

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 372

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 373

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 374

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 375

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 376

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 377

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 378

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 379

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 380

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 381

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 382

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 383

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 384

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 385

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 386

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 387

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 388

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 389

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 390

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 391

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 392

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 393

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 394

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 395

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 396

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 397

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 398

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 399

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 400

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 401

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 402

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 403

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 404

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 405

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 406

- Splay tree: every access splays to the root; amortized O(log n).

## entry 407

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 408

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 409

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 410

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 411

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 412

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 413

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 414

- LIS via patience: each pile holds the smallest tail of length k.

## entry 415

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 416

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 417

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 418

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 419

- Euler tour flattens a tree into an array for range-query LCA.

## entry 420

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 421

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 422

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 423

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 424

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 425

- StringBuilder: amortize allocation by doubling on grow.

## entry 426

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 427

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 428

- Walk both pointers from each end inward; advance the smaller side.

## entry 429

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 430

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 431

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 432

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 433

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 434

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 435

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 436

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 437

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 438

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 439

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 440

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 441

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 442

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 443

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 444

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 445

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 446

- Euler tour flattens a tree into an array for range-query LCA.

## entry 447

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 448

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 449

- Walk both pointers from each end inward; advance the smaller side.

## entry 450

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 451

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 452

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 453

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 454

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 455

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 456

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 457

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 458

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 459

- Greedy by end-time picks the most non-overlapping intervals.

## entry 460

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 461

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 462

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 463

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 464

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 465

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 466

- Stable sort matters when a secondary key was set in a prior pass.

## entry 467

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 468

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 469

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 470

- Euler tour flattens a tree into an array for range-query LCA.

## entry 471

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 472

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 473

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 474

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 475

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 476

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 477

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 478

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 479

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 480

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 481

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 482

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 483

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 484

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 485

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 486

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 487

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 488

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 489

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 490

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 491

- StringBuilder: amortize allocation by doubling on grow.

## entry 492

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 493

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 494

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 495

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 496

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 497

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 498

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 499

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 500

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 501

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 502

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 503

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 504

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 505

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 506

- LIS via patience: each pile holds the smallest tail of length k.

## entry 507

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 508

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 509

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 510

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 511

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 512

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 513

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 514

- Heap when you only need top-k; full sort is wasted work.

## entry 515

- Greedy by end-time picks the most non-overlapping intervals.

## entry 516

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 517

- Monotonic stack pops while the new element violates the invariant.

## entry 518

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 519

- LIS via patience: each pile holds the smallest tail of length k.

## entry 520

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 521

- Walk both pointers from each end inward; advance the smaller side.

## entry 522

- Monotonic stack pops while the new element violates the invariant.

## entry 523

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 524

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 525

- Greedy by end-time picks the most non-overlapping intervals.

## entry 526

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 527

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 528

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 529

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 530

- Walk both pointers from each end inward; advance the smaller side.

## entry 531

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 532

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 533

- Heap when you only need top-k; full sort is wasted work.

## entry 534

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 535

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 536

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 537

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 538

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 539

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 540

- Stable sort matters when a secondary key was set in a prior pass.

## entry 541

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 542

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 543

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 544

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 545

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 546

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 547

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 548

- Heap when you only need top-k; full sort is wasted work.

## entry 549

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 550

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 551

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 552

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 553

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 554

- Walk both pointers from each end inward; advance the smaller side.

## entry 555

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 556

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 557

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 558

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 559

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 560

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 561

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 562

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 563

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 564

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 565

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 566

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 567

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 568

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 569

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 570

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 571

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 572

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 573

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 574

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 575

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 576

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 577

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 578

- LIS via patience: each pile holds the smallest tail of length k.

## entry 579

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 580

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 581

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 582

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 583

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 584

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 585

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 586

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 587

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 588

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 589

- Euler tour flattens a tree into an array for range-query LCA.

## entry 590

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 591

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 592

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 593

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 594

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 595

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 596

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 597

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 598

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 599

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 600

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 601

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 602

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 603

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 604

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 605

- Monotonic stack pops while the new element violates the invariant.

## entry 606

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 607

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 608

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 609

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 610

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 611

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 612

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 613

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 614

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 615

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 616

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 617

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 618

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 619

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 620

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 621

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 622

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 623

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 624

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 625

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 626

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 627

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 628

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 629

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 630

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 631

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 632

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 633

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 634

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 635

- Splay tree: every access splays to the root; amortized O(log n).

## entry 636

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 637

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 638

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 639

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 640

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 641

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 642

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 643

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 644

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 645

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 646

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 647

- StringBuilder: amortize allocation by doubling on grow.

## entry 648

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 649

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 650

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 651

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 652

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 653

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 654

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 655

- Tarjan SCC: low-link values find strongly connected components in one DFS.
