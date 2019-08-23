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
