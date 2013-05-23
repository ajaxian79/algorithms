# utf8-bytes

## entry 1

- Greedy by end-time picks the most non-overlapping intervals.

## entry 2

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 3

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 5

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 6

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 7

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 8

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 9

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 10

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 11

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 12

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 13

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 14

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 15

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 16

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 17

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 18

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 19

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 20

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 21

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 22

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 23

- StringBuilder: amortize allocation by doubling on grow.

## entry 24

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 25

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 26

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 27

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 28

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 29

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 30

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 31

- LIS via patience: each pile holds the smallest tail of length k.

## entry 32

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 33

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 34

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 35

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 36

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 37

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 38

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 39

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 40

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 41

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 42

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 43

- Euler tour flattens a tree into an array for range-query LCA.

## entry 44

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 45

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 46

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 47

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 48

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 49

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 50

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 51

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 52

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 53

- Euler tour flattens a tree into an array for range-query LCA.

## entry 54

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 55

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 56

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 57

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 58

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 59

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 60

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 61

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 62

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 63

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 64

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 65

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 66

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 67

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 68

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 69

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 70

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 71

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 72

- StringBuilder: amortize allocation by doubling on grow.

## entry 73

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 74

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 75

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 76

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 77

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 78

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 79

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 80

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 81

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 82

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 83

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 84

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 85

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 86

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 87

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 88

- StringBuilder: amortize allocation by doubling on grow.

## entry 89

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 90

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 91

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 92

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 93

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 94

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 95

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 96

- Splay tree: every access splays to the root; amortized O(log n).

## entry 97

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 98

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 99

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 100

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 101

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 102

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 103

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 104

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 105

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 106

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 107

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 108

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 109

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 110

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 111

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 112

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 113

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 114

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 115

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 116

- Euler tour flattens a tree into an array for range-query LCA.

## entry 117

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 118

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 119

- Monotonic stack pops while the new element violates the invariant.

## entry 120

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 121

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 122

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 123

- Heap when you only need top-k; full sort is wasted work.

## entry 124

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 125

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 126

- Stable sort matters when a secondary key was set in a prior pass.

## entry 127

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 128

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 129

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 130

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 131

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 132

- Monotonic stack pops while the new element violates the invariant.

## entry 133

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 134

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 135

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 136

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 137

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 138

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 139

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 140

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 141

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 142

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 143

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 144

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 145

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 146

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 147

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 148

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 149

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 150

- Euler tour flattens a tree into an array for range-query LCA.

## entry 151

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 152

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 153

- Heap when you only need top-k; full sort is wasted work.

## entry 154

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 155

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 156

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 157

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 158

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 159

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 160

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 161

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 162

- Euler tour flattens a tree into an array for range-query LCA.

## entry 163

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 164

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 165

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 166

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 167

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 168

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 169

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 170

- Stable sort matters when a secondary key was set in a prior pass.

## entry 171

- LIS via patience: each pile holds the smallest tail of length k.

## entry 172

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 173

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 174

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 175

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 176

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 177

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 178

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 179

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 180

- Monotonic stack pops while the new element violates the invariant.

## entry 181

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 182

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 183

- Heap when you only need top-k; full sort is wasted work.

## entry 184

- Euler tour flattens a tree into an array for range-query LCA.

## entry 185

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 186

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 187

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 188

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 189

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 190

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 191

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 192

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 193

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 194

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 195

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 196

- Euler tour flattens a tree into an array for range-query LCA.

## entry 197

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 198

- Euler tour flattens a tree into an array for range-query LCA.

## entry 199

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 200

- Greedy by end-time picks the most non-overlapping intervals.

## entry 201

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 202

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 203

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 204

- LIS via patience: each pile holds the smallest tail of length k.

## entry 205

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 206

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 207

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 208

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 209

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 210

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 211

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 212

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 213

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 214

- Stable sort matters when a secondary key was set in a prior pass.

## entry 215

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 216

- Monotonic stack pops while the new element violates the invariant.

## entry 217

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 218

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 219

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 220

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 221

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 222

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 223

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 224

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 225

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 226

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 227

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 228

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 229

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 230

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 231

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 232

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 233

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 234

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 235

- Splay tree: every access splays to the root; amortized O(log n).

## entry 236

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 237

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 238

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 239

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 240

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 241

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 242

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 243

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 244

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 245

- StringBuilder: amortize allocation by doubling on grow.

## entry 246

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 247

- Euler tour flattens a tree into an array for range-query LCA.

## entry 248

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 249

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 250

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 251

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 252

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 253

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 254

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 255

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 256

- Greedy by end-time picks the most non-overlapping intervals.

## entry 257

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 258

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 259

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 260

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 261

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 262

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 263

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 264

- Greedy by end-time picks the most non-overlapping intervals.

## entry 265

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 266

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 267

- Greedy by end-time picks the most non-overlapping intervals.

## entry 268

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 269

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 270

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 271

- Heap when you only need top-k; full sort is wasted work.

## entry 272

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 273

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 274

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 275

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 276

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 277

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 278

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 279

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 280

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 281

- Walk both pointers from each end inward; advance the smaller side.

## entry 282

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 283

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 284

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 285

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 286

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 287

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 288

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 289

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 290

- Heap when you only need top-k; full sort is wasted work.

## entry 291

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 292

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 293

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 294

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 295

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 296

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 297

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 298

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 299

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 300

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 301

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 302

- Splay tree: every access splays to the root; amortized O(log n).

## entry 303

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 304

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 305

- Stable sort matters when a secondary key was set in a prior pass.

## entry 306

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 307

- Stable sort matters when a secondary key was set in a prior pass.

## entry 308

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 309

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 310

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 311

- Euler tour flattens a tree into an array for range-query LCA.

## entry 312

- Greedy by end-time picks the most non-overlapping intervals.

## entry 313

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 314

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 315

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 316

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 317

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 318

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 319

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 320

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 321

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 322

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 323

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 324

- LIS via patience: each pile holds the smallest tail of length k.

## entry 325

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 326

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 327

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 328

- Heap when you only need top-k; full sort is wasted work.

## entry 329

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 330

- Heap when you only need top-k; full sort is wasted work.

## entry 331

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 332

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 333

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 334

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 335

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 336

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 337

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 338

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 339

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 340

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 341

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 342

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 343

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 344

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 345

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 346

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 347

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 348

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 349

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 350

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 351

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 352

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 353

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 354

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 355

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 356

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 357

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 358

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 359

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 360

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 361

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 362

- Greedy by end-time picks the most non-overlapping intervals.

## entry 363

- Euler tour flattens a tree into an array for range-query LCA.

## entry 364

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 365

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 366

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 367

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 368

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 369

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 370

- Stable sort matters when a secondary key was set in a prior pass.

## entry 371

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 372

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 373

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 374

- Greedy by end-time picks the most non-overlapping intervals.

## entry 375

- Walk both pointers from each end inward; advance the smaller side.

## entry 376

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 377

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 378

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 379

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 380

- LIS via patience: each pile holds the smallest tail of length k.

## entry 381

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 382

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 383

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 384

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 385

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 386

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 387

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 388

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 389

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 390

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 391

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 392

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 393

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 394

- Monotonic stack pops while the new element violates the invariant.

## entry 395

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 396

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 397

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 398

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 399

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 400

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 401

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 402

- StringBuilder: amortize allocation by doubling on grow.

## entry 403

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 404

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 405

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 406

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 407

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 408

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 409

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 410

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 411

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 412

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 413

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 414

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 415

- Walk both pointers from each end inward; advance the smaller side.

## entry 416

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 417

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 418

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 419

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 420

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 421

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 422

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 423

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 424

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 425

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 426

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 427

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 428

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 429

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 430

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 431

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 432

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 433

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 434

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 435

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 436

- Monotonic stack pops while the new element violates the invariant.

## entry 437

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 438

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 439

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 440

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 441

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 442

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 443

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 444

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 445

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 446

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 447

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 448

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 449

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 450

- StringBuilder: amortize allocation by doubling on grow.

## entry 451

- Greedy by end-time picks the most non-overlapping intervals.

## entry 452

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 453

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 454

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 455

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 456

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 457

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 458

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 459

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 460

- Stable sort matters when a secondary key was set in a prior pass.

## entry 461

- Euler tour flattens a tree into an array for range-query LCA.

## entry 462

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 463

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 464

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 465

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 466

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 467

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 468

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 469

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 470

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 471

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 472

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 473

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 474

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 475

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 476

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 477

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 478

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 479

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 480

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 481

- StringBuilder: amortize allocation by doubling on grow.

## entry 482

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 483

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 484

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 485

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 486

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 487

- Euler tour flattens a tree into an array for range-query LCA.

## entry 488

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 489

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 490

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 491

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 492

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 493

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 494

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 495

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 496

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 497

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 498

- Greedy by end-time picks the most non-overlapping intervals.

## entry 499

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 500

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 501

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 502

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 503

- Stable sort matters when a secondary key was set in a prior pass.

## entry 504

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 505

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 506

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 507

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 508

- Stable sort matters when a secondary key was set in a prior pass.

## entry 509

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 510

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 511

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 512

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 513

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 514

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 515

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 516

- LIS via patience: each pile holds the smallest tail of length k.

## entry 517

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 518

- Heap when you only need top-k; full sort is wasted work.

## entry 519

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 520

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 521

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 522

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 523

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 524

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 525

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 526

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 527

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 528

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 529

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 530

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 531

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 532

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 533

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 534

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 535

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 536

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 537

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 538

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 539

- Walk both pointers from each end inward; advance the smaller side.

## entry 540

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 541

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 542

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 543

- Stable sort matters when a secondary key was set in a prior pass.

## entry 544

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 545

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 546

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 547

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 548

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 549

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
