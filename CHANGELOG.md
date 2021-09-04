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

## entry 680

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 681

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 682

- Stable sort matters when a secondary key was set in a prior pass.

## entry 683

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 684

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 685

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 686

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 687

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 688

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 689

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 690

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 691

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 692

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 693

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 694

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 695

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 696

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 697

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 698

- Greedy by end-time picks the most non-overlapping intervals.

## entry 699

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 700

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 701

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 702

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 703

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 704

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 705

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 706

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 707

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 708

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 709

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 710

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 711

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 712

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 713

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 714

- Monotonic stack pops while the new element violates the invariant.

## entry 715

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 716

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 717

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 718

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 719

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 720

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 721

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 722

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 723

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 724

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 725

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 726

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 727

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 728

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 729

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 730

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 731

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 732

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 733

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 734

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 735

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 736

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 737

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 738

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 739

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 740

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 741

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 742

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 743

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 744

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 745

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 746

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 747

- Monotonic stack pops while the new element violates the invariant.

## entry 748

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 749

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 750

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 751

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 752

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 753

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 754

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 755

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 756

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 757

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 758

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 759

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 760

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 761

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 762

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 763

- Walk both pointers from each end inward; advance the smaller side.

## entry 764

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 765

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 766

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 767

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 768

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 769

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 770

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 771

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 772

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 773

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 774

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 775

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 776

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 777

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 778

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 779

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 780

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 781

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 782

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 783

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 784

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 785

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 786

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 787

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 788

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 789

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 790

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 791

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 792

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 793

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 794

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 795

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 796

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 797

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 798

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 799

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 800

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 801

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 802

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 803

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 804

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 805

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 806

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 807

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 808

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 809

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 810

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 811

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 812

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 813

- Stable sort matters when a secondary key was set in a prior pass.

## entry 814

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 815

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 816

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 817

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 818

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 819

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 820

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 821

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 822

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 823

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 824

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 825

- Heap when you only need top-k; full sort is wasted work.

## entry 826

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 827

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 828

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 829

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 830

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 831

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 832

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 833

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 834

- LIS via patience: each pile holds the smallest tail of length k.

## entry 835

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 836

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 837

- Walk both pointers from each end inward; advance the smaller side.

## entry 838

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 839

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 840

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 841

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 842

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 843

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 844

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 845

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 846

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 847

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 848

- Walk both pointers from each end inward; advance the smaller side.

## entry 849

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 850

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 851

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 852

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 853

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 854

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 855

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 856

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 857

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 858

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 859

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 860

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 861

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 862

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 863

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 864

- Heap when you only need top-k; full sort is wasted work.

## entry 865

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 866

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 867

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 868

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 869

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 870

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 871

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 872

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 873

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 874

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 875

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 876

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 877

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 878

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 879

- Greedy by end-time picks the most non-overlapping intervals.

## entry 880

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 881

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 882

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 883

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 884

- LIS via patience: each pile holds the smallest tail of length k.

## entry 885

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 886

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 887

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 888

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 889

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 890

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 891

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 892

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 893

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 894

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 895

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 896

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 897

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 898

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 899

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 900

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 901

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 902

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 903

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 904

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 905

- Splay tree: every access splays to the root; amortized O(log n).

## entry 906

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 907

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 908

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 909

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 910

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 911

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 912

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 913

- Splay tree: every access splays to the root; amortized O(log n).

## entry 914

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 915

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 916

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 917

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 918

- Walk both pointers from each end inward; advance the smaller side.

## entry 919

- Stable sort matters when a secondary key was set in a prior pass.

## entry 920

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 921

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 922

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 923

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 924

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 925

- LIS via patience: each pile holds the smallest tail of length k.

## entry 926

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 927

- Monotonic stack pops while the new element violates the invariant.

## entry 928

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 929

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 930

- Heap when you only need top-k; full sort is wasted work.

## entry 931

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 932

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 933

- LIS via patience: each pile holds the smallest tail of length k.

## entry 934

- LIS via patience: each pile holds the smallest tail of length k.

## entry 935

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 936

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 937

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 938

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 939

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 940

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 941

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 942

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 943

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 944

- Splay tree: every access splays to the root; amortized O(log n).

## entry 945

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 946

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 947

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 948

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 949

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 950

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 951

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 952

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 953

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 954

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 955

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 956

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 957

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 958

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 959

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 960

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 961

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 962

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 963

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 964

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 965

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 966

- Greedy by end-time picks the most non-overlapping intervals.

## entry 967

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 968

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 969

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 970

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 971

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 972

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 973

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 974

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 975

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 976

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 977

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 978

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 979

- Splay tree: every access splays to the root; amortized O(log n).

## entry 980

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 981

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 982

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 983

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 984

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 985

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 986

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 987

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 988

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 989

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 990

- Heap when you only need top-k; full sort is wasted work.

## entry 991

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 992

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 993

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 994

- Stable sort matters when a secondary key was set in a prior pass.

## entry 995

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 996

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 997

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 998

- Splay tree: every access splays to the root; amortized O(log n).

## entry 999

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 1000

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 1001

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 1002

- StringBuilder: amortize allocation by doubling on grow.

## entry 1003

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 1004

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 1005

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 1006

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 1007

- Heap when you only need top-k; full sort is wasted work.

## entry 1008

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 1009

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 1010

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 1011

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 1012

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 1013

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 1014

- Monotonic stack pops while the new element violates the invariant.

## entry 1015

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 1016

- Splay tree: every access splays to the root; amortized O(log n).

## entry 1017

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 1018

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 1019

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 1020

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 1021

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 1022

- Walk both pointers from each end inward; advance the smaller side.

## entry 1023

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 1024

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 1025

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 1026

- Greedy by end-time picks the most non-overlapping intervals.

## entry 1027

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 1028

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 1029

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 1030

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 1031

- Splay tree: every access splays to the root; amortized O(log n).

## entry 1032

- Euler tour flattens a tree into an array for range-query LCA.

## entry 1033

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 1034

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 1035

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 1036

- Splay tree: every access splays to the root; amortized O(log n).

## entry 1037

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 1038

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 1039

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 1040

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 1041

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 1042

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 1043

- StringBuilder: amortize allocation by doubling on grow.

## entry 1044

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 1045

- LIS via patience: each pile holds the smallest tail of length k.

## entry 1046

- Monotonic stack pops while the new element violates the invariant.

## entry 1047

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 1048

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 1049

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 1050

- LIS via patience: each pile holds the smallest tail of length k.

## entry 1051

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 1052

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 1053

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 1054

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 1055

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 1056

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 1057

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 1058

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 1059

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 1060

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 1061

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 1062

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 1063

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 1064

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 1065

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 1066

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 1067

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 1068

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 1069

- Euler tour flattens a tree into an array for range-query LCA.

## entry 1070

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 1071

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 1072

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 1073

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 1074

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1075

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 1076

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 1077

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 1078

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 1079

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 1080

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1081

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 1082

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 1083

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 1084

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 1085

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 1086

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 1087

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 1088

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 1089

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 1090

- Walk both pointers from each end inward; advance the smaller side.

## entry 1091

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 1092

- Walk both pointers from each end inward; advance the smaller side.

## entry 1093

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 1094

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 1095

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 1096

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 1097

- Splay tree: every access splays to the root; amortized O(log n).

## entry 1098

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 1099

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1100

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 1101

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 1102

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 1103

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 1104

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 1105

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 1106

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 1107

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 1108

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 1109

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 1110

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 1111

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 1112

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 1113

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 1114

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 1115

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 1116

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 1117

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 1118

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 1119

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 1120

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1121

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 1122

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 1123

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 1124

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 1125

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 1126

- Splay tree: every access splays to the root; amortized O(log n).

## entry 1127

- LIS via patience: each pile holds the smallest tail of length k.

## entry 1128

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 1129

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 1130

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 1131

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 1132

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 1133

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 1134

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 1135

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 1136

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 1137

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 1138

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 1139

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 1140

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1141

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 1142

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 1143

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1144

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 1145

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 1146

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 1147

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 1148

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 1149

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 1150

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 1151

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 1152

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 1153

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 1154

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 1155

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 1156

- Greedy by end-time picks the most non-overlapping intervals.

## entry 1157

- Splay tree: every access splays to the root; amortized O(log n).

## entry 1158

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 1159

- Euler tour flattens a tree into an array for range-query LCA.

## entry 1160

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 1161

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 1162

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 1163

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 1164

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 1165

- Splay tree: every access splays to the root; amortized O(log n).

## entry 1166

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 1167

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 1168

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 1169

- StringBuilder: amortize allocation by doubling on grow.

## entry 1170

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 1171

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 1172

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 1173

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 1174

- Greedy by end-time picks the most non-overlapping intervals.

## entry 1175

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 1176

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 1177

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 1178

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 1179

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 1180

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1181

- Walk both pointers from each end inward; advance the smaller side.

## entry 1182

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 1183

- Euler tour flattens a tree into an array for range-query LCA.

## entry 1184

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 1185

- Heap when you only need top-k; full sort is wasted work.

## entry 1186

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 1187

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 1188

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1189

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 1190

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 1191

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 1192

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 1193

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 1194

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 1195

- Walk both pointers from each end inward; advance the smaller side.

## entry 1196

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 1197

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 1198

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1199

- Euler tour flattens a tree into an array for range-query LCA.

## entry 1200

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 1201

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 1202

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 1203

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 1204

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 1205

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 1206

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 1207

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1208

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 1209

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 1210

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1211

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 1212

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 1213

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 1214

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 1215

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 1216

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 1217

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 1218

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 1219

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 1220

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 1221

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 1222

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 1223

- LIS via patience: each pile holds the smallest tail of length k.

## entry 1224

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1225

- Monotonic stack pops while the new element violates the invariant.

## entry 1226

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1227

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 1228

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 1229

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 1230

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 1231

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1232

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 1233

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 1234

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1235

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 1236

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 1237

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 1238

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 1239

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 1240

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 1241

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 1242

- Heap when you only need top-k; full sort is wasted work.

## entry 1243

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 1244

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 1245

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1246

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 1247

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 1248

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 1249

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 1250

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 1251

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 1252

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 1253

- Greedy by end-time picks the most non-overlapping intervals.

## entry 1254

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 1255

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1256

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 1257

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 1258

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 1259

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 1260

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 1261

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 1262

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 1263

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 1264

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 1265

- Euler tour flattens a tree into an array for range-query LCA.

## entry 1266

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 1267

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 1268

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 1269

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 1270

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 1271

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 1272

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 1273

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 1274

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 1275

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1276

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 1277

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 1278

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 1279

- Walk both pointers from each end inward; advance the smaller side.

## entry 1280

- Heap when you only need top-k; full sort is wasted work.

## entry 1281

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 1282

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 1283

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 1284

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 1285

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 1286

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 1287

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 1288

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 1289

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 1290

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 1291

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 1292

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 1293

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 1294

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 1295

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 1296

- LIS via patience: each pile holds the smallest tail of length k.

## entry 1297

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 1298

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 1299

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 1300

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1301

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1302

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 1303

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 1304

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 1305

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 1306

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 1307

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 1308

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 1309

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 1310

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 1311

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 1312

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 1313

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 1314

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 1315

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 1316

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 1317

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 1318

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1319

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1320

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1321

- Splay tree: every access splays to the root; amortized O(log n).

## entry 1322

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 1323

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 1324

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 1325

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 1326

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 1327

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 1328

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 1329

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 1330

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 1331

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 1332

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 1333

- Monotonic stack pops while the new element violates the invariant.

## entry 1334

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 1335

- Euler tour flattens a tree into an array for range-query LCA.

## entry 1336

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 1337

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 1338

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 1339

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 1340

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 1341

- Stable sort matters when a secondary key was set in a prior pass.

## entry 1342

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 1343

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 1344

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 1345

- Heap when you only need top-k; full sort is wasted work.

## entry 1346

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 1347

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 1348

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 1349

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 1350

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 1351

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 1352

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 1353

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 1354

- Monotonic stack pops while the new element violates the invariant.

## entry 1355

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 1356

- Heap when you only need top-k; full sort is wasted work.

## entry 1357

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 1358

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 1359

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 1360

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 1361

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 1362

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 1363

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 1364

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 1365

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 1366

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 1367

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 1368

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 1369

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 1370

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 1371

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 1372

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1373

- Splay tree: every access splays to the root; amortized O(log n).

## entry 1374

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 1375

- Stable sort matters when a secondary key was set in a prior pass.

## entry 1376

- Heap when you only need top-k; full sort is wasted work.

## entry 1377

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 1378

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 1379

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 1380

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 1381

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 1382

- Monotonic stack pops while the new element violates the invariant.

## entry 1383

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 1384

- Euler tour flattens a tree into an array for range-query LCA.

## entry 1385

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 1386

- LIS via patience: each pile holds the smallest tail of length k.

## entry 1387

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 1388

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1389

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 1390

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 1391

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1392

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 1393

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 1394

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 1395

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 1396

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 1397

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 1398

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 1399

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 1400

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1401

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1402

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 1403

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 1404

- StringBuilder: amortize allocation by doubling on grow.

## entry 1405

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 1406

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 1407

- Heap when you only need top-k; full sort is wasted work.

## entry 1408

- Splay tree: every access splays to the root; amortized O(log n).

## entry 1409

- Euler tour flattens a tree into an array for range-query LCA.

## entry 1410

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 1411

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 1412

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 1413

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 1414

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 1415

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 1416

- Greedy by end-time picks the most non-overlapping intervals.

## entry 1417

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 1418

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 1419

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 1420

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 1421

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 1422

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 1423

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1424

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 1425

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 1426

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 1427

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 1428

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1429

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 1430

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 1431

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 1432

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 1433

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 1434

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 1435

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 1436

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 1437

- Heap when you only need top-k; full sort is wasted work.

## entry 1438

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 1439

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 1440

- Splay tree: every access splays to the root; amortized O(log n).

## entry 1441

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 1442

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 1443

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 1444

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 1445

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 1446

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 1447

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 1448

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 1449

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 1450

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 1451

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 1452

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 1453

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 1454

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 1455

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 1456

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1457

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 1458

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 1459

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 1460

- Walk both pointers from each end inward; advance the smaller side.

## entry 1461

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 1462

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 1463

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 1464

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 1465

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1466

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 1467

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1468

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 1469

- StringBuilder: amortize allocation by doubling on grow.

## entry 1470

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 1471

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 1472

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 1473

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1474

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 1475

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1476

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 1477

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 1478

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 1479

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 1480

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 1481

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 1482

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 1483

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 1484

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 1485

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 1486

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 1487

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 1488

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 1489

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 1490

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 1491

- Euler tour flattens a tree into an array for range-query LCA.

## entry 1492

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 1493

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1494

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 1495

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 1496

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 1497

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 1498

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 1499

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 1500

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1501

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 1502

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 1503

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1504

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 1505

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 1506

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 1507

- Heap when you only need top-k; full sort is wasted work.

## entry 1508

- StringBuilder: amortize allocation by doubling on grow.

## entry 1509

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 1510

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 1511

- Heap when you only need top-k; full sort is wasted work.

## entry 1512

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 1513

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1514

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 1515

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 1516

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 1517

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 1518

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 1519

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 1520

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 1521

- StringBuilder: amortize allocation by doubling on grow.

## entry 1522

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 1523

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 1524

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 1525

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 1526

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 1527

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 1528

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 1529

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 1530

- Greedy by end-time picks the most non-overlapping intervals.

## entry 1531

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1532

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 1533

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 1534

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 1535

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 1536

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1537

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 1538

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 1539

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 1540

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 1541

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 1542

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 1543

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 1544

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 1545

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 1546

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 1547

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1548

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 1549

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1550

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 1551

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 1552

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1553

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 1554

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 1555

- Heap when you only need top-k; full sort is wasted work.

## entry 1556

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 1557

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 1558

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 1559

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 1560

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 1561

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 1562

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 1563

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 1564

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 1565

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 1566

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 1567

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 1568

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 1569

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 1570

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 1571

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 1572

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1573

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 1574

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 1575

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 1576

- Greedy by end-time picks the most non-overlapping intervals.

## entry 1577

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 1578

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 1579

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 1580

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 1581

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 1582

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 1583

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 1584

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 1585

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 1586

- Walk both pointers from each end inward; advance the smaller side.

## entry 1587

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 1588

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 1589

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 1590

- Monotonic stack pops while the new element violates the invariant.

## entry 1591

- Splay tree: every access splays to the root; amortized O(log n).

## entry 1592

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 1593

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1594

- Stable sort matters when a secondary key was set in a prior pass.

## entry 1595

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 1596

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 1597

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 1598

- Monotonic stack pops while the new element violates the invariant.

## entry 1599

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 1600

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 1601

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 1602

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 1603

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 1604

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 1605

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 1606

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 1607

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 1608

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 1609

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 1610

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 1611

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 1612

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 1613

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 1614

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 1615

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 1616

- LIS via patience: each pile holds the smallest tail of length k.

## entry 1617

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 1618

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 1619

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 1620

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 1621

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 1622

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 1623

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 1624

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 1625

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 1626

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 1627

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 1628

- Euler tour flattens a tree into an array for range-query LCA.

## entry 1629

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1630

- StringBuilder: amortize allocation by doubling on grow.

## entry 1631

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 1632

- LIS via patience: each pile holds the smallest tail of length k.

## entry 1633

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 1634

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 1635

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 1636

- Greedy by end-time picks the most non-overlapping intervals.

## entry 1637

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 1638

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 1639

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 1640

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1641

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 1642

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 1643

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 1644

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 1645

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 1646

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 1647

- Walk both pointers from each end inward; advance the smaller side.

## entry 1648

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 1649

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 1650

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 1651

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 1652

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 1653

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 1654

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 1655

- LIS via patience: each pile holds the smallest tail of length k.

## entry 1656

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 1657

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 1658

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 1659

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 1660

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 1661

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 1662

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 1663

- Greedy by end-time picks the most non-overlapping intervals.

## entry 1664

- StringBuilder: amortize allocation by doubling on grow.

## entry 1665

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 1666

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 1667

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 1668

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1669

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 1670

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 1671

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 1672

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1673

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 1674

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1675

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 1676

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1677

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 1678

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 1679

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 1680

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 1681

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 1682

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 1683

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 1684

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 1685

- LIS via patience: each pile holds the smallest tail of length k.

## entry 1686

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 1687

- Splay tree: every access splays to the root; amortized O(log n).

## entry 1688

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 1689

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1690

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 1691

- Euler tour flattens a tree into an array for range-query LCA.

## entry 1692

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 1693

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 1694

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 1695

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 1696

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 1697

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 1698

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 1699

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 1700

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 1701

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 1702

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 1703

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 1704

- Euler tour flattens a tree into an array for range-query LCA.

## entry 1705

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 1706

- Monotonic stack pops while the new element violates the invariant.

## entry 1707

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 1708

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 1709

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 1710

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 1711

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 1712

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 1713

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1714

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 1715

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 1716

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 1717

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 1718

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 1719

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 1720

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 1721

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 1722

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 1723

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1724

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 1725

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 1726

- Euler tour flattens a tree into an array for range-query LCA.

## entry 1727

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 1728

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 1729

- Splay tree: every access splays to the root; amortized O(log n).

## entry 1730

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 1731

- Splay tree: every access splays to the root; amortized O(log n).

## entry 1732

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 1733

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 1734

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 1735

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 1736

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 1737

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 1738

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 1739

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 1740

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 1741

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 1742

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1743

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 1744

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 1745

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 1746

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1747

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 1748

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 1749

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 1750

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 1751

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 1752

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 1753

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 1754

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 1755

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 1756

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 1757

- LIS via patience: each pile holds the smallest tail of length k.

## entry 1758

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 1759

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 1760

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 1761

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 1762

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 1763

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 1764

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 1765

- StringBuilder: amortize allocation by doubling on grow.

## entry 1766

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 1767

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 1768

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 1769

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 1770

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 1771

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 1772

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 1773

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 1774

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 1775

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 1776

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 1777

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 1778

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 1779

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 1780

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 1781

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 1782

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 1783

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 1784

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 1785

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 1786

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 1787

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 1788

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 1789

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 1790

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 1791

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 1792

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 1793

- LIS via patience: each pile holds the smallest tail of length k.

## entry 1794

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 1795

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 1796

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 1797

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 1798

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 1799

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 1800

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 1801

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 1802

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 1803

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 1804

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 1805

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 1806

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 1807

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 1808

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 1809

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 1810

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 1811

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 1812

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 1813

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 1814

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 1815

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 1816

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 1817

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 1818

- Stable sort matters when a secondary key was set in a prior pass.

## entry 1819

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 1820

- Heap when you only need top-k; full sort is wasted work.

## entry 1821

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 1822

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 1823

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 1824

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 1825

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 1826

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 1827

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 1828

- Splay tree: every access splays to the root; amortized O(log n).

## entry 1829

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 1830

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 1831

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 1832

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 1833

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 1834

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 1835

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 1836

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1837

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 1838

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 1839

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 1840

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 1841

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 1842

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 1843

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 1844

- Splay tree: every access splays to the root; amortized O(log n).

## entry 1845

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 1846

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 1847

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 1848

- Splay tree: every access splays to the root; amortized O(log n).

## entry 1849

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 1850

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1851

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 1852

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 1853

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 1854

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 1855

- Euler tour flattens a tree into an array for range-query LCA.

## entry 1856

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 1857

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 1858

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 1859

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1860

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 1861

- Greedy by end-time picks the most non-overlapping intervals.

## entry 1862

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 1863

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 1864

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 1865

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 1866

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 1867

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 1868

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 1869

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 1870

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 1871

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 1872

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 1873

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 1874

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 1875

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 1876

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 1877

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 1878

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 1879

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 1880

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 1881

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 1882

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 1883

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 1884

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 1885

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 1886

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 1887

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 1888

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 1889

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 1890

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 1891

- LIS via patience: each pile holds the smallest tail of length k.

## entry 1892

- Heap when you only need top-k; full sort is wasted work.

## entry 1893

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 1894

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 1895

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 1896

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 1897

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 1898

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 1899

- Walk both pointers from each end inward; advance the smaller side.
