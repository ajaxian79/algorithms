# bitmask-dp

## entry 1

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 4

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 5

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 6

- Splay tree: every access splays to the root; amortized O(log n).

## entry 7

- Splay tree: every access splays to the root; amortized O(log n).

## entry 8

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 9

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 10

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 11

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 12

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 13

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 14

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 15

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 16

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 17

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 18

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 19

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 20

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 21

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 22

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 23

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 24

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 25

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 26

- StringBuilder: amortize allocation by doubling on grow.

## entry 27

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 28

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 29

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 30

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 31

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 32

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 33

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 34

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 35

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 36

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 37

- Walk both pointers from each end inward; advance the smaller side.

## entry 38

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 39

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 40

- Walk both pointers from each end inward; advance the smaller side.

## entry 41

- StringBuilder: amortize allocation by doubling on grow.

## entry 42

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 43

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 44

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 45

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 46

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 47

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 48

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 49

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 50

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 51

- Monotonic stack pops while the new element violates the invariant.

## entry 52

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 53

- StringBuilder: amortize allocation by doubling on grow.

## entry 54

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 55

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 56

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 57

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 58

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 59

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 60

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 61

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 62

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 63

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 64

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 65

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 66

- Monotonic stack pops while the new element violates the invariant.

## entry 67

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 68

- StringBuilder: amortize allocation by doubling on grow.

## entry 69

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 70

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 71

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 72

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 73

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 74

- Walk both pointers from each end inward; advance the smaller side.

## entry 75

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 76

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 77

- Walk both pointers from each end inward; advance the smaller side.

## entry 78

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 79

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 80

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 81

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 82

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 83

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 84

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 85

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 86

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 87

- Heap when you only need top-k; full sort is wasted work.

## entry 88

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 89

- Heap when you only need top-k; full sort is wasted work.

## entry 90

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 91

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 92

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 93

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 94

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 95

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 96

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 97

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 98

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 99

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 100

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 101

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 102

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 103

- Walk both pointers from each end inward; advance the smaller side.

## entry 104

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 105

- Stable sort matters when a secondary key was set in a prior pass.

## entry 106

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 107

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 108

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 109

- LIS via patience: each pile holds the smallest tail of length k.

## entry 110

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 111

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 112

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 113

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 114

- StringBuilder: amortize allocation by doubling on grow.

## entry 115

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 116

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 117

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 118

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 119

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 120

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 121

- StringBuilder: amortize allocation by doubling on grow.

## entry 122

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 123

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 124

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 125

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 126

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 127

- Greedy by end-time picks the most non-overlapping intervals.

## entry 128

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 129

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 130

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 131

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 132

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 133

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 134

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 135

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 136

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 137

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 138

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 139

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 140

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 141

- Walk both pointers from each end inward; advance the smaller side.

## entry 142

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 143

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 144

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 145

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 146

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 147

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 148

- Heap when you only need top-k; full sort is wasted work.

## entry 149

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 150

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 151

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 152

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 153

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 154

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 155

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 156

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 157

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 158

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 159

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 160

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 161

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 162

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 163

- Monotonic stack pops while the new element violates the invariant.

## entry 164

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 165

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 166

- Splay tree: every access splays to the root; amortized O(log n).

## entry 167

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 168

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 169

- Greedy by end-time picks the most non-overlapping intervals.

## entry 170

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 171

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 172

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 173

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 174

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 175

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 176

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 177

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 178

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 179

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 180

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 181

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 182

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 183

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 184

- StringBuilder: amortize allocation by doubling on grow.

## entry 185

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 186

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 187

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 188

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 189

- Splay tree: every access splays to the root; amortized O(log n).

## entry 190

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 191

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 192

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 193

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 194

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 195

- Greedy by end-time picks the most non-overlapping intervals.

## entry 196

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 197

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 198

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 199

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 200

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 201

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 202

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 203

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 204

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 205

- StringBuilder: amortize allocation by doubling on grow.

## entry 206

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 207

- Greedy by end-time picks the most non-overlapping intervals.

## entry 208

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 209

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 210

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 211

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 212

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 213

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 214

- LIS via patience: each pile holds the smallest tail of length k.

## entry 215

- Greedy by end-time picks the most non-overlapping intervals.

## entry 216

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 217

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 218

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 219

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 220

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 221

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 222

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 223

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 224

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 225

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 226

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 227

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 228

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 229

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 230

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 231

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 232

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 233

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 234

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 235

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 236

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 237

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 238

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 239

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 240

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 241

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 242

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 243

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 244

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 245

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 246

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 247

- Splay tree: every access splays to the root; amortized O(log n).

## entry 248

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 249

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 250

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 251

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 252

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 253

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 254

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 255

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 256

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 257

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 258

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 259

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 260

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 261

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 262

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 263

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 264

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 265

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 266

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 267

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 268

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 269

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 270

- Splay tree: every access splays to the root; amortized O(log n).

## entry 271

- LIS via patience: each pile holds the smallest tail of length k.

## entry 272

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 273

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 274

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 275

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 276

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 277

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 278

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 279

- StringBuilder: amortize allocation by doubling on grow.

## entry 280

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 281

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 282

- Heap when you only need top-k; full sort is wasted work.

## entry 283

- Greedy by end-time picks the most non-overlapping intervals.

## entry 284

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 285

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 286

- Greedy by end-time picks the most non-overlapping intervals.

## entry 287

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 288

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 289

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 290

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 291

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 292

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 293

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 294

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 295

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 296

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 297

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 298

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 299

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 300

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 301

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 302

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 303

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 304

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 305

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 306

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 307

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 308

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 309

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 310

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 311

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 312

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 313

- Stable sort matters when a secondary key was set in a prior pass.

## entry 314

- LIS via patience: each pile holds the smallest tail of length k.

## entry 315

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 316

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 317

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 318

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 319

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 320

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 321

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 322

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 323

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 324

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 325

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 326

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 327

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 328

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 329

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 330

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 331

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 332

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 333

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 334

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 335

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 336

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 337

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 338

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 339

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 340

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 341

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 342

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 343

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 344

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 345

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 346

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 347

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 348

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 349

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 350

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 351

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 352

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 353

- Walk both pointers from each end inward; advance the smaller side.

## entry 354

- Stable sort matters when a secondary key was set in a prior pass.

## entry 355

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 356

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 357

- StringBuilder: amortize allocation by doubling on grow.

## entry 358

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 359

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 360

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 361

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 362

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 363

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 364

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 365

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 366

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 367

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 368

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 369

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 370

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 371

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 372

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 373

- LIS via patience: each pile holds the smallest tail of length k.

## entry 374

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 375

- Stable sort matters when a secondary key was set in a prior pass.

## entry 376

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 377

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 378

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 379

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 380

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 381

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 382

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 383

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 384

- Monotonic stack pops while the new element violates the invariant.

## entry 385

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 386

- Euler tour flattens a tree into an array for range-query LCA.

## entry 387

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 388

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 389

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 390

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 391

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 392

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 393

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 394

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 395

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 396

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 397

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 398

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 399

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 400

- Euler tour flattens a tree into an array for range-query LCA.

## entry 401

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 402

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 403

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 404

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 405

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 406

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 407

- Splay tree: every access splays to the root; amortized O(log n).

## entry 408

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 409

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 410

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 411

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 412

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 413

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 414

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 415

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 416

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 417

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 418

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 419

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 420

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 421

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 422

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 423

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 424

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 425

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 426

- Walk both pointers from each end inward; advance the smaller side.

## entry 427

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 428

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 429

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 430

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 431

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 432

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 433

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 434

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 435

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 436

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 437

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 438

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 439

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 440

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 441

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 442

- Greedy by end-time picks the most non-overlapping intervals.

## entry 443

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 444

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 445

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 446

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 447

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 448

- Euler tour flattens a tree into an array for range-query LCA.

## entry 449

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 450

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 451

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 452

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 453

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 454

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 455

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 456

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 457

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 458

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 459

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 460

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 461

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 462

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 463

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 464

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 465

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 466

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 467

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 468

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 469

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 470

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 471

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 472

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 473

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 474

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 475

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 476

- Walk both pointers from each end inward; advance the smaller side.

## entry 477

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 478

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 479

- Heap when you only need top-k; full sort is wasted work.

## entry 480

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 481

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 482

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 483

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 484

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 485

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 486

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 487

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 488

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 489

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 490

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 491

- Heap when you only need top-k; full sort is wasted work.

## entry 492

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 493

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 494

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 495

- Greedy by end-time picks the most non-overlapping intervals.

## entry 496

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 497

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 498

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 499

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 500

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 501

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 502

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 503

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 504

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 505

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 506

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 507

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 508

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 509

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 510

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 511

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 512

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 513

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 514

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 515

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 516

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 517

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 518

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 519

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 520

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 521

- LIS via patience: each pile holds the smallest tail of length k.

## entry 522

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 523

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 524

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 525

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 526

- Heap when you only need top-k; full sort is wasted work.

## entry 527

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 528

- Heap when you only need top-k; full sort is wasted work.

## entry 529

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 530

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 531

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 532

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 533

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 534

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 535

- Splay tree: every access splays to the root; amortized O(log n).

## entry 536

- Euler tour flattens a tree into an array for range-query LCA.

## entry 537

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 538

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 539

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 540

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 541

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 542

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 543

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 544

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 545

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 546

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 547

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 548

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 549

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 550

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 551

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 552

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 553

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 554

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 555

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 556

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 557

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 558

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 559

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 560

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 561

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 562

- Greedy by end-time picks the most non-overlapping intervals.

## entry 563

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 564

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 565

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 566

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 567

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 568

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 569

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 570

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 571

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 572

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 573

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 574

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 575

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 576

- Walk both pointers from each end inward; advance the smaller side.

## entry 577

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 578

- Monotonic stack pops while the new element violates the invariant.

## entry 579

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 580

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 581

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 582

- Splay tree: every access splays to the root; amortized O(log n).

## entry 583

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 584

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 585

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 586

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 587

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 588

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 589

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 590

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 591

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 592

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 593

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 594

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 595

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 596

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 597

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 598

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 599

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 600

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 601

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 602

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 603

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 604

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 605

- Tarjan SCC: low-link values find strongly connected components in one DFS.
