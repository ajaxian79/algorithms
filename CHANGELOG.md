# CHANGELOG

## entry 1

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 3

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 4

- Walk both pointers from each end inward; advance the smaller side.

## entry 5

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 6

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 7

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 8

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 9

- Splay tree: every access splays to the root; amortized O(log n).

## entry 10

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 11

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 12

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 13

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 14

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 15

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 16

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 17

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 18

- Stable sort matters when a secondary key was set in a prior pass.

## entry 19

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 20

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 21

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 22

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 23

- Euler tour flattens a tree into an array for range-query LCA.

## entry 24

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 25

- Greedy by end-time picks the most non-overlapping intervals.

## entry 26

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 27

- StringBuilder: amortize allocation by doubling on grow.

## entry 28

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 29

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 30

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 31

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 32

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 33

- Monotonic stack pops while the new element violates the invariant.

## entry 34

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 35

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 36

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 37

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 38

- StringBuilder: amortize allocation by doubling on grow.

## entry 39

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 40

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 41

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 42

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 43

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 44

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 45

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 46

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 47

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 48

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 49

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 50

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 51

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 52

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 53

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 54

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 55

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 56

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 57

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 58

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 59

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 60

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 61

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 62

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 63

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 64

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 65

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 66

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 67

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 68

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 69

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 70

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 71

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 72

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 73

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 74

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 75

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 76

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 77

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 78

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 79

- Walk both pointers from each end inward; advance the smaller side.

## entry 80

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 81

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 82

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 83

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 84

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 85

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 86

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 87

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 88

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 89

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 90

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 91

- Monotonic stack pops while the new element violates the invariant.

## entry 92

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 93

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 94

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 95

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 96

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 97

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 98

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 99

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 100

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 101

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 102

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 103

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 104

- Greedy by end-time picks the most non-overlapping intervals.

## entry 105

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 106

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 107

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 108

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 109

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 110

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 111

- Greedy by end-time picks the most non-overlapping intervals.

## entry 112

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 113

- Splay tree: every access splays to the root; amortized O(log n).

## entry 114

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 115

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 116

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 117

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 118

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 119

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 120

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 121

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 122

- Walk both pointers from each end inward; advance the smaller side.

## entry 123

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 124

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 125

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 126

- Greedy by end-time picks the most non-overlapping intervals.

## entry 127

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 128

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 129

- StringBuilder: amortize allocation by doubling on grow.

## entry 130

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 131

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 132

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 133

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 134

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 135

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 136

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 137

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 138

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 139

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 140

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 141

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 142

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 143

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 144

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 145

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 146

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 147

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 148

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 149

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 150

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 151

- Splay tree: every access splays to the root; amortized O(log n).

## entry 152

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 153

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 154

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 155

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 156

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 157

- Euler tour flattens a tree into an array for range-query LCA.

## entry 158

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 159

- StringBuilder: amortize allocation by doubling on grow.

## entry 160

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 161

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 162

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 163

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 164

- Greedy by end-time picks the most non-overlapping intervals.

## entry 165

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 166

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 167

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 168

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 169

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 170

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 171

- Greedy by end-time picks the most non-overlapping intervals.

## entry 172

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 173

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 174

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 175

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 176

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 177

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 178

- Euler tour flattens a tree into an array for range-query LCA.

## entry 179

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 180

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 181

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 182

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 183

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 184

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 185

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 186

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 187

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 188

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 189

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 190

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 191

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 192

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 193

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 194

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 195

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 196

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 197

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 198

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 199

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 200

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 201

- Euler tour flattens a tree into an array for range-query LCA.

## entry 202

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 203

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 204

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 205

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 206

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 207

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 208

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 209

- Walk both pointers from each end inward; advance the smaller side.

## entry 210

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 211

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 212

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 213

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 214

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 215

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 216

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 217

- Monotonic stack pops while the new element violates the invariant.

## entry 218

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 219

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 220

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 221

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 222

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 223

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 224

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 225

- StringBuilder: amortize allocation by doubling on grow.

## entry 226

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 227

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 228

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 229

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 230

- LIS via patience: each pile holds the smallest tail of length k.

## entry 231

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 232

- Greedy by end-time picks the most non-overlapping intervals.

## entry 233

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 234

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 235

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 236

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 237

- Heap when you only need top-k; full sort is wasted work.

## entry 238

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 239

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 240

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 241

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 242

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 243

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 244

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 245

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 246

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 247

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 248

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 249

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 250

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 251

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 252

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 253

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 254

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 255

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 256

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 257

- Splay tree: every access splays to the root; amortized O(log n).

## entry 258

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 259

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 260

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 261

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 262

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 263

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 264

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 265

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 266

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 267

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 268

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 269

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 270

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 271

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 272

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 273

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 274

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 275

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 276

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 277

- Euler tour flattens a tree into an array for range-query LCA.

## entry 278

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 279

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 280

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 281

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 282

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 283

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 284

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 285

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 286

- Walk both pointers from each end inward; advance the smaller side.

## entry 287

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 288

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 289

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 290

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 291

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 292

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 293

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 294

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 295

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 296

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 297

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 298

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 299

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 300

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 301

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 302

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 303

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 304

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 305

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 306

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 307

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 308

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 309

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 310

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 311

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 312

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 313

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 314

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 315

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 316

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 317

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 318

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 319

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 320

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 321

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 322

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 323

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 324

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 325

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 326

- Walk both pointers from each end inward; advance the smaller side.

## entry 327

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 328

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 329

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 330

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 331

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 332

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 333

- Heap when you only need top-k; full sort is wasted work.

## entry 334

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 335

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 336

- Heap when you only need top-k; full sort is wasted work.

## entry 337

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 338

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 339

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 340

- Walk both pointers from each end inward; advance the smaller side.

## entry 341

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 342

- Stable sort matters when a secondary key was set in a prior pass.

## entry 343

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 344

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 345

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 346

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 347

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 348

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 349

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 350

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 351

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 352

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 353

- Monotonic stack pops while the new element violates the invariant.

## entry 354

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 355

- StringBuilder: amortize allocation by doubling on grow.

## entry 356

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 357

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 358

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 359

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 360

- Greedy by end-time picks the most non-overlapping intervals.

## entry 361

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 362

- Monotonic stack pops while the new element violates the invariant.

## entry 363

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 364

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 365

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 366

- Splay tree: every access splays to the root; amortized O(log n).

## entry 367

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 368

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 369

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 370

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 371

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 372

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 373

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 374

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 375

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 376

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 377

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 378

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 379

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 380

- StringBuilder: amortize allocation by doubling on grow.

## entry 381

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 382

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 383

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 384

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 385

- Euler tour flattens a tree into an array for range-query LCA.

## entry 386

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 387

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 388

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 389

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 390

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 391

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 392

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 393

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 394

- Heap when you only need top-k; full sort is wasted work.

## entry 395

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 396

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 397

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 398

- Stable sort matters when a secondary key was set in a prior pass.

## entry 399

- LIS via patience: each pile holds the smallest tail of length k.

## entry 400

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 401

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 402

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 403

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 404

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 405

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 406

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 407

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 408

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 409

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 410

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 411

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 412

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 413

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 414

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 415

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 416

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 417

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 418

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 419

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 420

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 421

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 422

- Splay tree: every access splays to the root; amortized O(log n).

## entry 423

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 424

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 425

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 426

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 427

- Monotonic stack pops while the new element violates the invariant.

## entry 428

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 429

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 430

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 431

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 432

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 433

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 434

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 435

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 436

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 437

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 438

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 439

- Stable sort matters when a secondary key was set in a prior pass.

## entry 440

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 441

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 442

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 443

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 444

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 445

- Euler tour flattens a tree into an array for range-query LCA.

## entry 446

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 447

- Monotonic stack pops while the new element violates the invariant.

## entry 448

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 449

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 450

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 451

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 452

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 453

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 454

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 455

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 456

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 457

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 458

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 459

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 460

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 461

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 462

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 463

- Greedy by end-time picks the most non-overlapping intervals.

## entry 464

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 465

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 466

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 467

- Greedy by end-time picks the most non-overlapping intervals.

## entry 468

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 469

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 470

- LIS via patience: each pile holds the smallest tail of length k.

## entry 471

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 472

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 473

- Stable sort matters when a secondary key was set in a prior pass.

## entry 474

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 475

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 476

- LIS via patience: each pile holds the smallest tail of length k.

## entry 477

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 478

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 479

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 480

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 481

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 482

- Euler tour flattens a tree into an array for range-query LCA.

## entry 483

- Monotonic stack pops while the new element violates the invariant.

## entry 484

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 485

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 486

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 487

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 488

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 489

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 490

- Euler tour flattens a tree into an array for range-query LCA.

## entry 491

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 492

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 493

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 494

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 495

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 496

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 497

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 498

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 499

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 500

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 501

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 502

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 503

- Splay tree: every access splays to the root; amortized O(log n).

## entry 504

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 505

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 506

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 507

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 508

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 509

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 510

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 511

- Stable sort matters when a secondary key was set in a prior pass.

## entry 512

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 513

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 514

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 515

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 516

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 517

- Greedy by end-time picks the most non-overlapping intervals.

## entry 518

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 519

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 520

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 521

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 522

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 523

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 524

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 525

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 526

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 527

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 528

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 529

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 530

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 531

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 532

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 533

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 534

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 535

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 536

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 537

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 538

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 539

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 540

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 541

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 542

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 543

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 544

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 545

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 546

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 547

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 548

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 549

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 550

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 551

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 552

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 553

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 554

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 555

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 556

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 557

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 558

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 559

- Splay tree: every access splays to the root; amortized O(log n).

## entry 560

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 561

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 562

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 563

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 564

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 565

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 566

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 567

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 568

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 569

- Walk both pointers from each end inward; advance the smaller side.

## entry 570

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 571

- StringBuilder: amortize allocation by doubling on grow.

## entry 572

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 573

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 574

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 575

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 576

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 577

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 578

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 579

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 580

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 581

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 582

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 583

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 584

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 585

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 586

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 587

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 588

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 589

- Monotonic stack pops while the new element violates the invariant.

## entry 590

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 591

- Monotonic stack pops while the new element violates the invariant.

## entry 592

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 593

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 594

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 595

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 596

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 597

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 598

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 599

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 600

- Walk both pointers from each end inward; advance the smaller side.

## entry 601

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 602

- StringBuilder: amortize allocation by doubling on grow.

## entry 603

- Greedy by end-time picks the most non-overlapping intervals.

## entry 604

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 605

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 606

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 607

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 608

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 609

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 610

- Greedy by end-time picks the most non-overlapping intervals.

## entry 611

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 612

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 613

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 614

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 615

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 616

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 617

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 618

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 619

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 620

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 621

- Greedy by end-time picks the most non-overlapping intervals.

## entry 622

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 623

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 624

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 625

- Heap when you only need top-k; full sort is wasted work.

## entry 626

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 627

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 628

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 629

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 630

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 631

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 632

- Greedy by end-time picks the most non-overlapping intervals.

## entry 633

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 634

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 635

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 636

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 637

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 638

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 639

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 640

- LIS via patience: each pile holds the smallest tail of length k.

## entry 641

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 642

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 643

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 644

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 645

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 646

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 647

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 648

- Monotonic stack pops while the new element violates the invariant.

## entry 649

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 650

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 651

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 652

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 653

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 654

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 655

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 656

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 657

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 658

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 659

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 660

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 661

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 662

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 663

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 664

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 665

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 666

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 667

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 668

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 669

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 670

- Walk both pointers from each end inward; advance the smaller side.

## entry 671

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 672

- StringBuilder: amortize allocation by doubling on grow.

## entry 673

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 674

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 675

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 676

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 677

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 678

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 679

- Treap: BST + heap on random priorities; expected O(log n) per op.
