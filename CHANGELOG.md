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

## entry 1900

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1901

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 1902

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 1903

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 1904

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 1905

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 1906

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 1907

- Heap when you only need top-k; full sort is wasted work.

## entry 1908

- Euler tour flattens a tree into an array for range-query LCA.

## entry 1909

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 1910

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 1911

- Heap when you only need top-k; full sort is wasted work.

## entry 1912

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 1913

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 1914

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 1915

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 1916

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 1917

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 1918

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 1919

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1920

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 1921

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1922

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 1923

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 1924

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 1925

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 1926

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 1927

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 1928

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 1929

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 1930

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 1931

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 1932

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 1933

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 1934

- Greedy by end-time picks the most non-overlapping intervals.

## entry 1935

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 1936

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 1937

- Greedy by end-time picks the most non-overlapping intervals.

## entry 1938

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 1939

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 1940

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 1941

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 1942

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 1943

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 1944

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1945

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 1946

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 1947

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 1948

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 1949

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 1950

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 1951

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 1952

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1953

- Splay tree: every access splays to the root; amortized O(log n).

## entry 1954

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 1955

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 1956

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 1957

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 1958

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 1959

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1960

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 1961

- Monotonic stack pops while the new element violates the invariant.

## entry 1962

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 1963

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 1964

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 1965

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 1966

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 1967

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 1968

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1969

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 1970

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 1971

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 1972

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 1973

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 1974

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 1975

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1976

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 1977

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 1978

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 1979

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 1980

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 1981

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 1982

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 1983

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 1984

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 1985

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 1986

- LIS via patience: each pile holds the smallest tail of length k.

## entry 1987

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 1988

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 1989

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1990

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 1991

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 1992

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 1993

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 1994

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 1995

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 1996

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 1997

- LIS via patience: each pile holds the smallest tail of length k.

## entry 1998

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 1999

- LIS via patience: each pile holds the smallest tail of length k.

## entry 2000

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2001

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 2002

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2003

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2004

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 2005

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 2006

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 2007

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2008

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 2009

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 2010

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2011

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 2012

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 2013

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 2014

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2015

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 2016

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2017

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2018

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 2019

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 2020

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 2021

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 2022

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 2023

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 2024

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 2025

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2026

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 2027

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 2028

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 2029

- Walk both pointers from each end inward; advance the smaller side.

## entry 2030

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 2031

- Heap when you only need top-k; full sort is wasted work.

## entry 2032

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 2033

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2034

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 2035

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 2036

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 2037

- StringBuilder: amortize allocation by doubling on grow.

## entry 2038

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 2039

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 2040

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 2041

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 2042

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 2043

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 2044

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 2045

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2046

- Stable sort matters when a secondary key was set in a prior pass.

## entry 2047

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 2048

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 2049

- Stable sort matters when a secondary key was set in a prior pass.

## entry 2050

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 2051

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 2052

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 2053

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 2054

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 2055

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 2056

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 2057

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 2058

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2059

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2060

- StringBuilder: amortize allocation by doubling on grow.

## entry 2061

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2062

- Greedy by end-time picks the most non-overlapping intervals.

## entry 2063

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2064

- Heap when you only need top-k; full sort is wasted work.

## entry 2065

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 2066

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2067

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 2068

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 2069

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2070

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 2071

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2072

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 2073

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 2074

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 2075

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2076

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2077

- LIS via patience: each pile holds the smallest tail of length k.

## entry 2078

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 2079

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 2080

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2081

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 2082

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 2083

- Heap when you only need top-k; full sort is wasted work.

## entry 2084

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 2085

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 2086

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 2087

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2088

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 2089

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 2090

- Greedy by end-time picks the most non-overlapping intervals.

## entry 2091

- Monotonic stack pops while the new element violates the invariant.

## entry 2092

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 2093

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 2094

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 2095

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 2096

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2097

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 2098

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 2099

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 2100

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 2101

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2102

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 2103

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 2104

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2105

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 2106

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 2107

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 2108

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 2109

- Splay tree: every access splays to the root; amortized O(log n).

## entry 2110

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2111

- LIS via patience: each pile holds the smallest tail of length k.

## entry 2112

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 2113

- LIS via patience: each pile holds the smallest tail of length k.

## entry 2114

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 2115

- Heap when you only need top-k; full sort is wasted work.

## entry 2116

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 2117

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 2118

- Stable sort matters when a secondary key was set in a prior pass.

## entry 2119

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 2120

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 2121

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 2122

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 2123

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 2124

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2125

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2126

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 2127

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2128

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 2129

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 2130

- Splay tree: every access splays to the root; amortized O(log n).

## entry 2131

- Greedy by end-time picks the most non-overlapping intervals.

## entry 2132

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2133

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 2134

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 2135

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 2136

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 2137

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 2138

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2139

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 2140

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2141

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 2142

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 2143

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 2144

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 2145

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 2146

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 2147

- Heap when you only need top-k; full sort is wasted work.

## entry 2148

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2149

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 2150

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 2151

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 2152

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2153

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 2154

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 2155

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2156

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2157

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 2158

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 2159

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 2160

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2161

- StringBuilder: amortize allocation by doubling on grow.

## entry 2162

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 2163

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 2164

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 2165

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 2166

- Heap when you only need top-k; full sort is wasted work.

## entry 2167

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2168

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 2169

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 2170

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 2171

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 2172

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 2173

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 2174

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 2175

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 2176

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 2177

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 2178

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 2179

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 2180

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 2181

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 2182

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2183

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 2184

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 2185

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 2186

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 2187

- Stable sort matters when a secondary key was set in a prior pass.

## entry 2188

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 2189

- Monotonic stack pops while the new element violates the invariant.

## entry 2190

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 2191

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 2192

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 2193

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 2194

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 2195

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 2196

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 2197

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 2198

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 2199

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 2200

- Splay tree: every access splays to the root; amortized O(log n).

## entry 2201

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2202

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 2203

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2204

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 2205

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 2206

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 2207

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2208

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 2209

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 2210

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 2211

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 2212

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 2213

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 2214

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 2215

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 2216

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 2217

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 2218

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2219

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 2220

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 2221

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 2222

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 2223

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2224

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 2225

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 2226

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 2227

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 2228

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 2229

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 2230

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 2231

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2232

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 2233

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2234

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 2235

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 2236

- StringBuilder: amortize allocation by doubling on grow.

## entry 2237

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2238

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 2239

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 2240

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 2241

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 2242

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2243

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 2244

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 2245

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 2246

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 2247

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 2248

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 2249

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2250

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 2251

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 2252

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 2253

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 2254

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 2255

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 2256

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2257

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2258

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 2259

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2260

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2261

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 2262

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 2263

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 2264

- Stable sort matters when a secondary key was set in a prior pass.

## entry 2265

- Euler tour flattens a tree into an array for range-query LCA.

## entry 2266

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 2267

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 2268

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 2269

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 2270

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 2271

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2272

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 2273

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 2274

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2275

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 2276

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 2277

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 2278

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 2279

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 2280

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2281

- Greedy by end-time picks the most non-overlapping intervals.

## entry 2282

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 2283

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2284

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 2285

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 2286

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 2287

- Stable sort matters when a secondary key was set in a prior pass.

## entry 2288

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 2289

- Greedy by end-time picks the most non-overlapping intervals.

## entry 2290

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2291

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2292

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 2293

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 2294

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 2295

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2296

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 2297

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 2298

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 2299

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 2300

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2301

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2302

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 2303

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 2304

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 2305

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2306

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 2307

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 2308

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2309

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2310

- Euler tour flattens a tree into an array for range-query LCA.

## entry 2311

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 2312

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 2313

- StringBuilder: amortize allocation by doubling on grow.

## entry 2314

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 2315

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 2316

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 2317

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2318

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 2319

- Euler tour flattens a tree into an array for range-query LCA.

## entry 2320

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 2321

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 2322

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 2323

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2324

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 2325

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 2326

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2327

- Euler tour flattens a tree into an array for range-query LCA.

## entry 2328

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 2329

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2330

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 2331

- Greedy by end-time picks the most non-overlapping intervals.

## entry 2332

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 2333

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2334

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2335

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2336

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2337

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 2338

- Euler tour flattens a tree into an array for range-query LCA.

## entry 2339

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2340

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 2341

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2342

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 2343

- LIS via patience: each pile holds the smallest tail of length k.

## entry 2344

- StringBuilder: amortize allocation by doubling on grow.

## entry 2345

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 2346

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 2347

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2348

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 2349

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 2350

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 2351

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 2352

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 2353

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 2354

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 2355

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 2356

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 2357

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 2358

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 2359

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2360

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 2361

- Euler tour flattens a tree into an array for range-query LCA.

## entry 2362

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 2363

- Monotonic stack pops while the new element violates the invariant.

## entry 2364

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2365

- LIS via patience: each pile holds the smallest tail of length k.

## entry 2366

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 2367

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 2368

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 2369

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2370

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 2371

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 2372

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 2373

- StringBuilder: amortize allocation by doubling on grow.

## entry 2374

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 2375

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2376

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 2377

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 2378

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 2379

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 2380

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 2381

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2382

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 2383

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 2384

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2385

- Splay tree: every access splays to the root; amortized O(log n).

## entry 2386

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2387

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 2388

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 2389

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 2390

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 2391

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2392

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 2393

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2394

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 2395

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 2396

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 2397

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2398

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2399

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 2400

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 2401

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2402

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 2403

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2404

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 2405

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 2406

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2407

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 2408

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2409

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 2410

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 2411

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 2412

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 2413

- Walk both pointers from each end inward; advance the smaller side.

## entry 2414

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 2415

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 2416

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 2417

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 2418

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 2419

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 2420

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 2421

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2422

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 2423

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 2424

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2425

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 2426

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2427

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 2428

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 2429

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 2430

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2431

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 2432

- Monotonic stack pops while the new element violates the invariant.

## entry 2433

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2434

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 2435

- Splay tree: every access splays to the root; amortized O(log n).

## entry 2436

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 2437

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 2438

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 2439

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2440

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 2441

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 2442

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 2443

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2444

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 2445

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 2446

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 2447

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 2448

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 2449

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 2450

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 2451

- LIS via patience: each pile holds the smallest tail of length k.

## entry 2452

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 2453

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2454

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 2455

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 2456

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2457

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 2458

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 2459

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 2460

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 2461

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 2462

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2463

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 2464

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 2465

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 2466

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2467

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 2468

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 2469

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 2470

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2471

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 2472

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 2473

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2474

- StringBuilder: amortize allocation by doubling on grow.

## entry 2475

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 2476

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2477

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 2478

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 2479

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 2480

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 2481

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 2482

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 2483

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 2484

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 2485

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 2486

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2487

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2488

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2489

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 2490

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 2491

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 2492

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2493

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 2494

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 2495

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 2496

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2497

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 2498

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 2499

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 2500

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 2501

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 2502

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 2503

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 2504

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 2505

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 2506

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 2507

- StringBuilder: amortize allocation by doubling on grow.

## entry 2508

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2509

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 2510

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 2511

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 2512

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 2513

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 2514

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 2515

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2516

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 2517

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2518

- Euler tour flattens a tree into an array for range-query LCA.

## entry 2519

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 2520

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 2521

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 2522

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 2523

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 2524

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 2525

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 2526

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2527

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2528

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 2529

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2530

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 2531

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 2532

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2533

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2534

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 2535

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2536

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 2537

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 2538

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 2539

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2540

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2541

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2542

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 2543

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 2544

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 2545

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 2546

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 2547

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 2548

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 2549

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 2550

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 2551

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 2552

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 2553

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 2554

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 2555

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 2556

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2557

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2558

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2559

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2560

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 2561

- Stable sort matters when a secondary key was set in a prior pass.

## entry 2562

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 2563

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2564

- Walk both pointers from each end inward; advance the smaller side.

## entry 2565

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 2566

- LIS via patience: each pile holds the smallest tail of length k.

## entry 2567

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2568

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 2569

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 2570

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 2571

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2572

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 2573

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2574

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 2575

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 2576

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 2577

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2578

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2579

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 2580

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 2581

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 2582

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 2583

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 2584

- Walk both pointers from each end inward; advance the smaller side.

## entry 2585

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2586

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 2587

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 2588

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2589

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 2590

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 2591

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 2592

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 2593

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2594

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 2595

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2596

- LIS via patience: each pile holds the smallest tail of length k.

## entry 2597

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 2598

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 2599

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2600

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 2601

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 2602

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 2603

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 2604

- Greedy by end-time picks the most non-overlapping intervals.

## entry 2605

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 2606

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 2607

- Euler tour flattens a tree into an array for range-query LCA.

## entry 2608

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 2609

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 2610

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2611

- Walk both pointers from each end inward; advance the smaller side.

## entry 2612

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 2613

- Euler tour flattens a tree into an array for range-query LCA.

## entry 2614

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 2615

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 2616

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 2617

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2618

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 2619

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 2620

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2621

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2622

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 2623

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2624

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 2625

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 2626

- Greedy by end-time picks the most non-overlapping intervals.

## entry 2627

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 2628

- StringBuilder: amortize allocation by doubling on grow.

## entry 2629

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 2630

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2631

- Walk both pointers from each end inward; advance the smaller side.

## entry 2632

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 2633

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2634

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 2635

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2636

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 2637

- Stable sort matters when a secondary key was set in a prior pass.

## entry 2638

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2639

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 2640

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 2641

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2642

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 2643

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 2644

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 2645

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 2646

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 2647

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 2648

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 2649

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 2650

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2651

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 2652

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 2653

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 2654

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2655

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 2656

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 2657

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2658

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2659

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 2660

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 2661

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2662

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2663

- Euler tour flattens a tree into an array for range-query LCA.

## entry 2664

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 2665

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 2666

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 2667

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 2668

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 2669

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2670

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2671

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2672

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2673

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 2674

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 2675

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2676

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 2677

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 2678

- Greedy by end-time picks the most non-overlapping intervals.

## entry 2679

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2680

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 2681

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2682

- Walk both pointers from each end inward; advance the smaller side.

## entry 2683

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2684

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 2685

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2686

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2687

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 2688

- Monotonic stack pops while the new element violates the invariant.

## entry 2689

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 2690

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 2691

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 2692

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2693

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 2694

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 2695

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2696

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 2697

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 2698

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 2699

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 2700

- Heap when you only need top-k; full sort is wasted work.

## entry 2701

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2702

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 2703

- Walk both pointers from each end inward; advance the smaller side.

## entry 2704

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2705

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 2706

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2707

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 2708

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 2709

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 2710

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 2711

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2712

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2713

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 2714

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2715

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2716

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 2717

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 2718

- Monotonic stack pops while the new element violates the invariant.

## entry 2719

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 2720

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 2721

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 2722

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 2723

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2724

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 2725

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 2726

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 2727

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2728

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2729

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2730

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 2731

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2732

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 2733

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 2734

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 2735

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2736

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2737

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 2738

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 2739

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 2740

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 2741

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 2742

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 2743

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 2744

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2745

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 2746

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 2747

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2748

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 2749

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2750

- LIS via patience: each pile holds the smallest tail of length k.

## entry 2751

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 2752

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 2753

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 2754

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 2755

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 2756

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 2757

- Heap when you only need top-k; full sort is wasted work.

## entry 2758

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 2759

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 2760

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 2761

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 2762

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 2763

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2764

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 2765

- StringBuilder: amortize allocation by doubling on grow.

## entry 2766

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 2767

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 2768

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2769

- Monotonic stack pops while the new element violates the invariant.

## entry 2770

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2771

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 2772

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2773

- Splay tree: every access splays to the root; amortized O(log n).

## entry 2774

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 2775

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 2776

- Heap when you only need top-k; full sort is wasted work.

## entry 2777

- StringBuilder: amortize allocation by doubling on grow.

## entry 2778

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2779

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 2780

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 2781

- Splay tree: every access splays to the root; amortized O(log n).

## entry 2782

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 2783

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2784

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 2785

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2786

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 2787

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 2788

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 2789

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 2790

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2791

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 2792

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 2793

- Walk both pointers from each end inward; advance the smaller side.

## entry 2794

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 2795

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 2796

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 2797

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 2798

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2799

- StringBuilder: amortize allocation by doubling on grow.

## entry 2800

- Splay tree: every access splays to the root; amortized O(log n).

## entry 2801

- Euler tour flattens a tree into an array for range-query LCA.

## entry 2802

- Monotonic stack pops while the new element violates the invariant.

## entry 2803

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 2804

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2805

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 2806

- StringBuilder: amortize allocation by doubling on grow.

## entry 2807

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 2808

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2809

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 2810

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 2811

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 2812

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2813

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 2814

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 2815

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 2816

- StringBuilder: amortize allocation by doubling on grow.

## entry 2817

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 2818

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2819

- StringBuilder: amortize allocation by doubling on grow.

## entry 2820

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2821

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2822

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 2823

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 2824

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 2825

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 2826

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2827

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 2828

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 2829

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 2830

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2831

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 2832

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 2833

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 2834

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 2835

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 2836

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 2837

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2838

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2839

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 2840

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2841

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2842

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 2843

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 2844

- Walk both pointers from each end inward; advance the smaller side.

## entry 2845

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 2846

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2847

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2848

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 2849

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 2850

- Greedy by end-time picks the most non-overlapping intervals.

## entry 2851

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 2852

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 2853

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 2854

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 2855

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 2856

- Monotonic stack pops while the new element violates the invariant.

## entry 2857

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2858

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 2859

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 2860

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2861

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 2862

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 2863

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 2864

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2865

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 2866

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 2867

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 2868

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 2869

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 2870

- Stable sort matters when a secondary key was set in a prior pass.

## entry 2871

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2872

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 2873

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2874

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 2875

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2876

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 2877

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 2878

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2879

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 2880

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2881

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 2882

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 2883

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 2884

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 2885

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2886

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2887

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 2888

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2889

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 2890

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 2891

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 2892

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 2893

- Greedy by end-time picks the most non-overlapping intervals.

## entry 2894

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 2895

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 2896

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 2897

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 2898

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 2899

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2900

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 2901

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 2902

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2903

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 2904

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 2905

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 2906

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 2907

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 2908

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 2909

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 2910

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 2911

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2912

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2913

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 2914

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2915

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 2916

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 2917

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 2918

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 2919

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 2920

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 2921

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 2922

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 2923

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 2924

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 2925

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 2926

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 2927

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 2928

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 2929

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 2930

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 2931

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 2932

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 2933

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 2934

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 2935

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 2936

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 2937

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 2938

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 2939

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 2940

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 2941

- StringBuilder: amortize allocation by doubling on grow.

## entry 2942

- LIS via patience: each pile holds the smallest tail of length k.

## entry 2943

- Splay tree: every access splays to the root; amortized O(log n).

## entry 2944

- Euler tour flattens a tree into an array for range-query LCA.

## entry 2945

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 2946

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 2947

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 2948

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 2949

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 2950

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 2951

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 2952

- StringBuilder: amortize allocation by doubling on grow.

## entry 2953

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 2954

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 2955

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2956

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 2957

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 2958

- Greedy by end-time picks the most non-overlapping intervals.

## entry 2959

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2960

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 2961

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 2962

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 2963

- Monotonic stack pops while the new element violates the invariant.

## entry 2964

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 2965

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 2966

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 2967

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 2968

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 2969

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 2970

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 2971

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2972

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 2973

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2974

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2975

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 2976

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 2977

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 2978

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 2979

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 2980

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 2981

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 2982

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 2983

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 2984

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2985

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 2986

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2987

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 2988

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 2989

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 2990

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 2991

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 2992

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 2993

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 2994

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2995

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 2996

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 2997

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2998

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2999

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 3000

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 3001

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 3002

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 3003

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3004

- LIS via patience: each pile holds the smallest tail of length k.

## entry 3005

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 3006

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3007

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 3008

- LIS via patience: each pile holds the smallest tail of length k.

## entry 3009

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 3010

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 3011

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3012

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3013

- LIS via patience: each pile holds the smallest tail of length k.

## entry 3014

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3015

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 3016

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3017

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 3018

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3019

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 3020

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3021

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3022

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 3023

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3024

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 3025

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 3026

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 3027

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3028

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 3029

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 3030

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3031

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 3032

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3033

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 3034

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3035

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3036

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 3037

- Heap when you only need top-k; full sort is wasted work.

## entry 3038

- StringBuilder: amortize allocation by doubling on grow.

## entry 3039

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3040

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 3041

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3042

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 3043

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3044

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3045

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 3046

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 3047

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3048

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 3049

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 3050

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 3051

- Stable sort matters when a secondary key was set in a prior pass.

## entry 3052

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 3053

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 3054

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 3055

- Splay tree: every access splays to the root; amortized O(log n).

## entry 3056

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3057

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3058

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3059

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3060

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 3061

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 3062

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 3063

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3064

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3065

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3066

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3067

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 3068

- Monotonic stack pops while the new element violates the invariant.

## entry 3069

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 3070

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 3071

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3072

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 3073

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 3074

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 3075

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 3076

- Greedy by end-time picks the most non-overlapping intervals.

## entry 3077

- Stable sort matters when a secondary key was set in a prior pass.

## entry 3078

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 3079

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 3080

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 3081

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 3082

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3083

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 3084

- Splay tree: every access splays to the root; amortized O(log n).

## entry 3085

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 3086

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 3087

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 3088

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3089

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3090

- Walk both pointers from each end inward; advance the smaller side.

## entry 3091

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3092

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 3093

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 3094

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3095

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3096

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 3097

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 3098

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 3099

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 3100

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3101

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 3102

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 3103

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3104

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 3105

- Heap when you only need top-k; full sort is wasted work.

## entry 3106

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 3107

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3108

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3109

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3110

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 3111

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 3112

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3113

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 3114

- Walk both pointers from each end inward; advance the smaller side.

## entry 3115

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3116

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 3117

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3118

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 3119

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3120

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 3121

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 3122

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3123

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3124

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3125

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3126

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 3127

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 3128

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 3129

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3130

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3131

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 3132

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3133

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3134

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3135

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 3136

- Heap when you only need top-k; full sort is wasted work.

## entry 3137

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 3138

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 3139

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3140

- StringBuilder: amortize allocation by doubling on grow.

## entry 3141

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3142

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 3143

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 3144

- Walk both pointers from each end inward; advance the smaller side.

## entry 3145

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 3146

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 3147

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 3148

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 3149

- Euler tour flattens a tree into an array for range-query LCA.

## entry 3150

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3151

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 3152

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 3153

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 3154

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 3155

- Heap when you only need top-k; full sort is wasted work.

## entry 3156

- Greedy by end-time picks the most non-overlapping intervals.

## entry 3157

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3158

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 3159

- Heap when you only need top-k; full sort is wasted work.

## entry 3160

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 3161

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 3162

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3163

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3164

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3165

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 3166

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 3167

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3168

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 3169

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 3170

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3171

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 3172

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 3173

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 3174

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 3175

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3176

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 3177

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3178

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 3179

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 3180

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 3181

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 3182

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3183

- Stable sort matters when a secondary key was set in a prior pass.

## entry 3184

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 3185

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3186

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3187

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3188

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3189

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 3190

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3191

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3192

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3193

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3194

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 3195

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 3196

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 3197

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3198

- Splay tree: every access splays to the root; amortized O(log n).

## entry 3199

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3200

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 3201

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 3202

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 3203

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 3204

- Stable sort matters when a secondary key was set in a prior pass.

## entry 3205

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 3206

- Splay tree: every access splays to the root; amortized O(log n).

## entry 3207

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 3208

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 3209

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3210

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 3211

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3212

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 3213

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 3214

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 3215

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3216

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3217

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 3218

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 3219

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 3220

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 3221

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3222

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 3223

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3224

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 3225

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 3226

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 3227

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 3228

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3229

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 3230

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3231

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 3232

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3233

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 3234

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3235

- Stable sort matters when a secondary key was set in a prior pass.

## entry 3236

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3237

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 3238

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 3239

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 3240

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3241

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 3242

- Euler tour flattens a tree into an array for range-query LCA.

## entry 3243

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 3244

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 3245

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 3246

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 3247

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3248

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3249

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 3250

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3251

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3252

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 3253

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 3254

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3255

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 3256

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 3257

- Stable sort matters when a secondary key was set in a prior pass.

## entry 3258

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 3259

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 3260

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 3261

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 3262

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3263

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 3264

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 3265

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3266

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3267

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3268

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3269

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3270

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3271

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 3272

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 3273

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 3274

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 3275

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 3276

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3277

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 3278

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 3279

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3280

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 3281

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 3282

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3283

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3284

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3285

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 3286

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 3287

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 3288

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 3289

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3290

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 3291

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 3292

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 3293

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 3294

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 3295

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 3296

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 3297

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3298

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 3299

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 3300

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 3301

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3302

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 3303

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 3304

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 3305

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 3306

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 3307

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 3308

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3309

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 3310

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 3311

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 3312

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 3313

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 3314

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 3315

- Stable sort matters when a secondary key was set in a prior pass.

## entry 3316

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 3317

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 3318

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3319

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 3320

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3321

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 3322

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3323

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3324

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 3325

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3326

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 3327

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 3328

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3329

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3330

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3331

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3332

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 3333

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 3334

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 3335

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3336

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 3337

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 3338

- Euler tour flattens a tree into an array for range-query LCA.

## entry 3339

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 3340

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3341

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 3342

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 3343

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 3344

- Splay tree: every access splays to the root; amortized O(log n).

## entry 3345

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 3346

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3347

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 3348

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 3349

- StringBuilder: amortize allocation by doubling on grow.

## entry 3350

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3351

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3352

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3353

- Walk both pointers from each end inward; advance the smaller side.

## entry 3354

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 3355

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3356

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 3357

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3358

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 3359

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 3360

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 3361

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 3362

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 3363

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 3364

- Greedy by end-time picks the most non-overlapping intervals.

## entry 3365

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 3366

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3367

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3368

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3369

- Walk both pointers from each end inward; advance the smaller side.

## entry 3370

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3371

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 3372

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3373

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3374

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 3375

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 3376

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3377

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 3378

- Monotonic stack pops while the new element violates the invariant.

## entry 3379

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 3380

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 3381

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 3382

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 3383

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3384

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 3385

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 3386

- StringBuilder: amortize allocation by doubling on grow.

## entry 3387

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3388

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 3389

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 3390

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3391

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 3392

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3393

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3394

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 3395

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 3396

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3397

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 3398

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3399

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 3400

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 3401

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3402

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 3403

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3404

- StringBuilder: amortize allocation by doubling on grow.

## entry 3405

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3406

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 3407

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 3408

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 3409

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 3410

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3411

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 3412

- Greedy by end-time picks the most non-overlapping intervals.

## entry 3413

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3414

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3415

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 3416

- Euler tour flattens a tree into an array for range-query LCA.

## entry 3417

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 3418

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 3419

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 3420

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3421

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 3422

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 3423

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3424

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3425

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 3426

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 3427

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3428

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3429

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 3430

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3431

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3432

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3433

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 3434

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 3435

- Walk both pointers from each end inward; advance the smaller side.

## entry 3436

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 3437

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 3438

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 3439

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 3440

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 3441

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3442

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 3443

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3444

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 3445

- Euler tour flattens a tree into an array for range-query LCA.

## entry 3446

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3447

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3448

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 3449

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3450

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 3451

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3452

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3453

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3454

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 3455

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3456

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3457

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 3458

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 3459

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 3460

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 3461

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 3462

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 3463

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 3464

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3465

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 3466

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3467

- Stable sort matters when a secondary key was set in a prior pass.

## entry 3468

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 3469

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 3470

- Heap when you only need top-k; full sort is wasted work.

## entry 3471

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3472

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3473

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3474

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 3475

- Euler tour flattens a tree into an array for range-query LCA.

## entry 3476

- Heap when you only need top-k; full sort is wasted work.

## entry 3477

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 3478

- Monotonic stack pops while the new element violates the invariant.

## entry 3479

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 3480

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3481

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 3482

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 3483

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 3484

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 3485

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3486

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 3487

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 3488

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 3489

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 3490

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 3491

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 3492

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3493

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 3494

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3495

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 3496

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3497

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 3498

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 3499

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 3500

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 3501

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3502

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3503

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3504

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 3505

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3506

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 3507

- Greedy by end-time picks the most non-overlapping intervals.

## entry 3508

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 3509

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 3510

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 3511

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3512

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 3513

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 3514

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3515

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3516

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 3517

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 3518

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3519

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 3520

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3521

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 3522

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 3523

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 3524

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 3525

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 3526

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3527

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3528

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3529

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 3530

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 3531

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3532

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 3533

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3534

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 3535

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3536

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 3537

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 3538

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3539

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 3540

- Heap when you only need top-k; full sort is wasted work.

## entry 3541

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3542

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 3543

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 3544

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 3545

- Euler tour flattens a tree into an array for range-query LCA.

## entry 3546

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 3547

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 3548

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 3549

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 3550

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 3551

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 3552

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3553

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3554

- StringBuilder: amortize allocation by doubling on grow.

## entry 3555

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 3556

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3557

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 3558

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3559

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 3560

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 3561

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 3562

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3563

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3564

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 3565

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 3566

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 3567

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3568

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3569

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 3570

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 3571

- Greedy by end-time picks the most non-overlapping intervals.

## entry 3572

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 3573

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 3574

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3575

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 3576

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 3577

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3578

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 3579

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3580

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 3581

- Greedy by end-time picks the most non-overlapping intervals.

## entry 3582

- LIS via patience: each pile holds the smallest tail of length k.

## entry 3583

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3584

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 3585

- LIS via patience: each pile holds the smallest tail of length k.

## entry 3586

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3587

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3588

- Splay tree: every access splays to the root; amortized O(log n).

## entry 3589

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 3590

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 3591

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 3592

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 3593

- StringBuilder: amortize allocation by doubling on grow.

## entry 3594

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 3595

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3596

- Walk both pointers from each end inward; advance the smaller side.

## entry 3597

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3598

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 3599

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3600

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 3601

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3602

- Heap when you only need top-k; full sort is wasted work.

## entry 3603

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 3604

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 3605

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 3606

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 3607

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 3608

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3609

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3610

- Walk both pointers from each end inward; advance the smaller side.

## entry 3611

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 3612

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3613

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3614

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 3615

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 3616

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 3617

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 3618

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 3619

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 3620

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 3621

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3622

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 3623

- Splay tree: every access splays to the root; amortized O(log n).

## entry 3624

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 3625

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 3626

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3627

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 3628

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3629

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 3630

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 3631

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 3632

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 3633

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 3634

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 3635

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 3636

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 3637

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 3638

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3639

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3640

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 3641

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3642

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3643

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3644

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3645

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3646

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 3647

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 3648

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 3649

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3650

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3651

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 3652

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 3653

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 3654

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 3655

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 3656

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 3657

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 3658

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 3659

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 3660

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 3661

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 3662

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 3663

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 3664

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 3665

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 3666

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3667

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3668

- Monotonic stack pops while the new element violates the invariant.

## entry 3669

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 3670

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 3671

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 3672

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 3673

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 3674

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 3675

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 3676

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 3677

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 3678

- Monotonic stack pops while the new element violates the invariant.

## entry 3679

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3680

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3681

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 3682

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3683

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3684

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 3685

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 3686

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3687

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 3688

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3689

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 3690

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 3691

- Greedy by end-time picks the most non-overlapping intervals.

## entry 3692

- Walk both pointers from each end inward; advance the smaller side.

## entry 3693

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3694

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3695

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3696

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 3697

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3698

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3699

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 3700

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 3701

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 3702

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3703

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 3704

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 3705

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 3706

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3707

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 3708

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 3709

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 3710

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 3711

- Greedy by end-time picks the most non-overlapping intervals.

## entry 3712

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 3713

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 3714

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 3715

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3716

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3717

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3718

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 3719

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3720

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3721

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 3722

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3723

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 3724

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3725

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 3726

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 3727

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 3728

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 3729

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 3730

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 3731

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3732

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3733

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3734

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3735

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 3736

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 3737

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3738

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 3739

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3740

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 3741

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 3742

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 3743

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3744

- LIS via patience: each pile holds the smallest tail of length k.

## entry 3745

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 3746

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3747

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 3748

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 3749

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3750

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3751

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 3752

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 3753

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3754

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3755

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 3756

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 3757

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 3758

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 3759

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3760

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 3761

- Monotonic stack pops while the new element violates the invariant.

## entry 3762

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3763

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 3764

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 3765

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 3766

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 3767

- Euler tour flattens a tree into an array for range-query LCA.

## entry 3768

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3769

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 3770

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3771

- LIS via patience: each pile holds the smallest tail of length k.

## entry 3772

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 3773

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 3774

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 3775

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 3776

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 3777

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3778

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3779

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 3780

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 3781

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 3782

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3783

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 3784

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 3785

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 3786

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 3787

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3788

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3789

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3790

- Stable sort matters when a secondary key was set in a prior pass.

## entry 3791

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3792

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 3793

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 3794

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3795

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 3796

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 3797

- Monotonic stack pops while the new element violates the invariant.

## entry 3798

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3799

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3800

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3801

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 3802

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 3803

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3804

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 3805

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 3806

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 3807

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3808

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 3809

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 3810

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3811

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3812

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 3813

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3814

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 3815

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3816

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 3817

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 3818

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 3819

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 3820

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3821

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3822

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 3823

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 3824

- Stable sort matters when a secondary key was set in a prior pass.

## entry 3825

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 3826

- Stable sort matters when a secondary key was set in a prior pass.

## entry 3827

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3828

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 3829

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 3830

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3831

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3832

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 3833

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 3834

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3835

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3836

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3837

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 3838

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3839

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3840

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3841

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 3842

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3843

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 3844

- Monotonic stack pops while the new element violates the invariant.

## entry 3845

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 3846

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 3847

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 3848

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 3849

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 3850

- StringBuilder: amortize allocation by doubling on grow.

## entry 3851

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3852

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 3853

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 3854

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 3855

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 3856

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 3857

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 3858

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 3859

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 3860

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 3861

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 3862

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 3863

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 3864

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 3865

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 3866

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3867

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3868

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 3869

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 3870

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 3871

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 3872

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 3873

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 3874

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 3875

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 3876

- StringBuilder: amortize allocation by doubling on grow.

## entry 3877

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 3878

- Euler tour flattens a tree into an array for range-query LCA.

## entry 3879

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 3880

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 3881

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3882

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3883

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 3884

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 3885

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3886

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3887

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 3888

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3889

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 3890

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3891

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 3892

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 3893

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 3894

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 3895

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3896

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 3897

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 3898

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3899

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 3900

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 3901

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 3902

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 3903

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3904

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 3905

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 3906

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 3907

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 3908

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 3909

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 3910

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 3911

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 3912

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3913

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 3914

- Monotonic stack pops while the new element violates the invariant.

## entry 3915

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 3916

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 3917

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 3918

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3919

- Walk both pointers from each end inward; advance the smaller side.

## entry 3920

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 3921

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3922

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 3923

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 3924

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 3925

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 3926

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 3927

- Stable sort matters when a secondary key was set in a prior pass.

## entry 3928

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 3929

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 3930

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3931

- Euler tour flattens a tree into an array for range-query LCA.

## entry 3932

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 3933

- Euler tour flattens a tree into an array for range-query LCA.

## entry 3934

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3935

- Monotonic stack pops while the new element violates the invariant.

## entry 3936

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 3937

- Euler tour flattens a tree into an array for range-query LCA.

## entry 3938

- Euler tour flattens a tree into an array for range-query LCA.

## entry 3939

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 3940

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 3941

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 3942

- Greedy by end-time picks the most non-overlapping intervals.

## entry 3943

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 3944

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3945

- Stable sort matters when a secondary key was set in a prior pass.

## entry 3946

- Euler tour flattens a tree into an array for range-query LCA.

## entry 3947

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 3948

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 3949

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 3950

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 3951

- LIS via patience: each pile holds the smallest tail of length k.

## entry 3952

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3953

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 3954

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 3955

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3956

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 3957

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 3958

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 3959

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3960

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 3961

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 3962

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 3963

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 3964

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3965

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 3966

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 3967

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3968

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 3969

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3970

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3971

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 3972

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 3973

- Euler tour flattens a tree into an array for range-query LCA.

## entry 3974

- Greedy by end-time picks the most non-overlapping intervals.

## entry 3975

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 3976

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 3977

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 3978

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3979

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 3980

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 3981

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 3982

- Heap when you only need top-k; full sort is wasted work.

## entry 3983

- Euler tour flattens a tree into an array for range-query LCA.

## entry 3984

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 3985

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 3986

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 3987

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 3988

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3989

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 3990

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 3991

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 3992

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 3993

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 3994

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 3995

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 3996

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 3997

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3998

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 3999

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 4000

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 4001

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 4002

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 4003

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4004

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 4005

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 4006

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 4007

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 4008

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 4009

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 4010

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 4011

- Walk both pointers from each end inward; advance the smaller side.

## entry 4012

- StringBuilder: amortize allocation by doubling on grow.

## entry 4013

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 4014

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 4015

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 4016

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 4017

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 4018

- Heap when you only need top-k; full sort is wasted work.

## entry 4019

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 4020

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4021

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4022

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 4023

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4024

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 4025

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4026

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 4027

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 4028

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4029

- Stable sort matters when a secondary key was set in a prior pass.

## entry 4030

- Walk both pointers from each end inward; advance the smaller side.

## entry 4031

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4032

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 4033

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 4034

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4035

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 4036

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4037

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 4038

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 4039

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 4040

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 4041

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 4042

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4043

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4044

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 4045

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 4046

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4047

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 4048

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4049

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 4050

- Heap when you only need top-k; full sort is wasted work.

## entry 4051

- Heap when you only need top-k; full sort is wasted work.

## entry 4052

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 4053

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4054

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 4055

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4056

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4057

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4058

- Stable sort matters when a secondary key was set in a prior pass.

## entry 4059

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 4060

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 4061

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 4062

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 4063

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4064

- Stable sort matters when a secondary key was set in a prior pass.

## entry 4065

- Greedy by end-time picks the most non-overlapping intervals.

## entry 4066

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 4067

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 4068

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4069

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 4070

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 4071

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 4072

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4073

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4074

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 4075

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4076

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 4077

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 4078

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4079

- Monotonic stack pops while the new element violates the invariant.

## entry 4080

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4081

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 4082

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 4083

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 4084

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 4085

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 4086

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4087

- StringBuilder: amortize allocation by doubling on grow.

## entry 4088

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 4089

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4090

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 4091

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 4092

- Stable sort matters when a secondary key was set in a prior pass.

## entry 4093

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 4094

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 4095

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4096

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 4097

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 4098

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 4099

- Heap when you only need top-k; full sort is wasted work.

## entry 4100

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 4101

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 4102

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4103

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 4104

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 4105

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 4106

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 4107

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 4108

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 4109

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 4110

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 4111

- Heap when you only need top-k; full sort is wasted work.

## entry 4112

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 4113

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 4114

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4115

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 4116

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 4117

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 4118

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 4119

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 4120

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 4121

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 4122

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 4123

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 4124

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 4125

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4126

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 4127

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 4128

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 4129

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4130

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 4131

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 4132

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 4133

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 4134

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 4135

- Monotonic stack pops while the new element violates the invariant.

## entry 4136

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 4137

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 4138

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 4139

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 4140

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 4141

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 4142

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 4143

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4144

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 4145

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4146

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 4147

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 4148

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4149

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 4150

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4151

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 4152

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4153

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 4154

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 4155

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4156

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 4157

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4158

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 4159

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 4160

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 4161

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4162

- Splay tree: every access splays to the root; amortized O(log n).

## entry 4163

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4164

- StringBuilder: amortize allocation by doubling on grow.

## entry 4165

- Walk both pointers from each end inward; advance the smaller side.

## entry 4166

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4167

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 4168

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 4169

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4170

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 4171

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4172

- Euler tour flattens a tree into an array for range-query LCA.

## entry 4173

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 4174

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 4175

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 4176

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4177

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 4178

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 4179

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 4180

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 4181

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 4182

- Splay tree: every access splays to the root; amortized O(log n).

## entry 4183

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 4184

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 4185

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4186

- Heap when you only need top-k; full sort is wasted work.

## entry 4187

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 4188

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 4189

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4190

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 4191

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 4192

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4193

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 4194

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 4195

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4196

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 4197

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 4198

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4199

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4200

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4201

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4202

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 4203

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 4204

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 4205

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 4206

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 4207

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 4208

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 4209

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 4210

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 4211

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 4212

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 4213

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4214

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 4215

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 4216

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 4217

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 4218

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 4219

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 4220

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 4221

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4222

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 4223

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 4224

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 4225

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 4226

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 4227

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4228

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 4229

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 4230

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 4231

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 4232

- StringBuilder: amortize allocation by doubling on grow.

## entry 4233

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4234

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 4235

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 4236

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4237

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 4238

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4239

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 4240

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4241

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 4242

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4243

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 4244

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 4245

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 4246

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 4247

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 4248

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4249

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 4250

- LIS via patience: each pile holds the smallest tail of length k.

## entry 4251

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 4252

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 4253

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 4254

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 4255

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 4256

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 4257

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4258

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 4259

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4260

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 4261

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4262

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4263

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 4264

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 4265

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 4266

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 4267

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 4268

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 4269

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4270

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 4271

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 4272

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 4273

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4274

- StringBuilder: amortize allocation by doubling on grow.

## entry 4275

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4276

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 4277

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 4278

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4279

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4280

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 4281

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 4282

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4283

- Monotonic stack pops while the new element violates the invariant.

## entry 4284

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 4285

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 4286

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 4287

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4288

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 4289

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 4290

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 4291

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 4292

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4293

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4294

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 4295

- Euler tour flattens a tree into an array for range-query LCA.

## entry 4296

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 4297

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 4298

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 4299

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 4300

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 4301

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 4302

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 4303

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4304

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4305

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 4306

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 4307

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 4308

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 4309

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 4310

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 4311

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4312

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 4313

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4314

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4315

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4316

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 4317

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 4318

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 4319

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 4320

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4321

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 4322

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4323

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4324

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 4325

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 4326

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4327

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 4328

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 4329

- Heap when you only need top-k; full sort is wasted work.

## entry 4330

- Walk both pointers from each end inward; advance the smaller side.

## entry 4331

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4332

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 4333

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4334

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 4335

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 4336

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4337

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 4338

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 4339

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4340

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4341

- Heap when you only need top-k; full sort is wasted work.

## entry 4342

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4343

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4344

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4345

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 4346

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4347

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4348

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 4349

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4350

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4351

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 4352

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4353

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 4354

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4355

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 4356

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4357

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 4358

- Greedy by end-time picks the most non-overlapping intervals.

## entry 4359

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4360

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4361

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 4362

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 4363

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4364

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 4365

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 4366

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 4367

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 4368

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 4369

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4370

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4371

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 4372

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 4373

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4374

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 4375

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 4376

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 4377

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 4378

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4379

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4380

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 4381

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 4382

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 4383

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 4384

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 4385

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 4386

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 4387

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4388

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 4389

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 4390

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 4391

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4392

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 4393

- Walk both pointers from each end inward; advance the smaller side.

## entry 4394

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 4395

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 4396

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4397

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 4398

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 4399

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 4400

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 4401

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4402

- StringBuilder: amortize allocation by doubling on grow.

## entry 4403

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 4404

- Stable sort matters when a secondary key was set in a prior pass.

## entry 4405

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 4406

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4407

- Greedy by end-time picks the most non-overlapping intervals.

## entry 4408

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 4409

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4410

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4411

- Splay tree: every access splays to the root; amortized O(log n).

## entry 4412

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4413

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 4414

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4415

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 4416

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 4417

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 4418

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 4419

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 4420

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 4421

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4422

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 4423

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4424

- Heap when you only need top-k; full sort is wasted work.

## entry 4425

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 4426

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 4427

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 4428

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 4429

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 4430

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4431

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 4432

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 4433

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4434

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4435

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4436

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 4437

- Walk both pointers from each end inward; advance the smaller side.

## entry 4438

- Stable sort matters when a secondary key was set in a prior pass.

## entry 4439

- Splay tree: every access splays to the root; amortized O(log n).

## entry 4440

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 4441

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 4442

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 4443

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 4444

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 4445

- LIS via patience: each pile holds the smallest tail of length k.

## entry 4446

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 4447

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4448

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 4449

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4450

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 4451

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4452

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 4453

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 4454

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 4455

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 4456

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 4457

- Walk both pointers from each end inward; advance the smaller side.

## entry 4458

- Greedy by end-time picks the most non-overlapping intervals.

## entry 4459

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 4460

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4461

- Walk both pointers from each end inward; advance the smaller side.

## entry 4462

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 4463

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 4464

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 4465

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 4466

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 4467

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4468

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 4469

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 4470

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 4471

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 4472

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 4473

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4474

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4475

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 4476

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 4477

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 4478

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4479

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4480

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 4481

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4482

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4483

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 4484

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 4485

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 4486

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4487

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 4488

- Greedy by end-time picks the most non-overlapping intervals.

## entry 4489

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 4490

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 4491

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4492

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 4493

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 4494

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4495

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 4496

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 4497

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 4498

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4499

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 4500

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 4501

- LIS via patience: each pile holds the smallest tail of length k.

## entry 4502

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4503

- Heap when you only need top-k; full sort is wasted work.

## entry 4504

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 4505

- LIS via patience: each pile holds the smallest tail of length k.

## entry 4506

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 4507

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4508

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4509

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 4510

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 4511

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 4512

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4513

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4514

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 4515

- LIS via patience: each pile holds the smallest tail of length k.

## entry 4516

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 4517

- StringBuilder: amortize allocation by doubling on grow.

## entry 4518

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4519

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 4520

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 4521

- Stable sort matters when a secondary key was set in a prior pass.

## entry 4522

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 4523

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4524

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 4525

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 4526

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 4527

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4528

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 4529

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 4530

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 4531

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 4532

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 4533

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4534

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4535

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 4536

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 4537

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 4538

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 4539

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 4540

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 4541

- Heap when you only need top-k; full sort is wasted work.

## entry 4542

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 4543

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 4544

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 4545

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 4546

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 4547

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 4548

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 4549

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4550

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 4551

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 4552

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4553

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 4554

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 4555

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 4556

- Heap when you only need top-k; full sort is wasted work.

## entry 4557

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 4558

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 4559

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 4560

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4561

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 4562

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4563

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4564

- Splay tree: every access splays to the root; amortized O(log n).

## entry 4565

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 4566

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 4567

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 4568

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 4569

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 4570

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 4571

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 4572

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 4573

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 4574

- LIS via patience: each pile holds the smallest tail of length k.

## entry 4575

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 4576

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4577

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4578

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 4579

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 4580

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 4581

- Heap when you only need top-k; full sort is wasted work.

## entry 4582

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 4583

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 4584

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4585

- Stable sort matters when a secondary key was set in a prior pass.

## entry 4586

- Walk both pointers from each end inward; advance the smaller side.

## entry 4587

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 4588

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 4589

- Monotonic stack pops while the new element violates the invariant.

## entry 4590

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4591

- StringBuilder: amortize allocation by doubling on grow.

## entry 4592

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4593

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4594

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 4595

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4596

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4597

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4598

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4599

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 4600

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 4601

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4602

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 4603

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4604

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 4605

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4606

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 4607

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 4608

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4609

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 4610

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 4611

- Greedy by end-time picks the most non-overlapping intervals.

## entry 4612

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4613

- Stable sort matters when a secondary key was set in a prior pass.

## entry 4614

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4615

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 4616

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4617

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 4618

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4619

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4620

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 4621

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 4622

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 4623

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 4624

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4625

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4626

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 4627

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4628

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 4629

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 4630

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 4631

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 4632

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 4633

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4634

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 4635

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 4636

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4637

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 4638

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4639

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 4640

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 4641

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 4642

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 4643

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 4644

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 4645

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 4646

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 4647

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 4648

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 4649

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 4650

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 4651

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 4652

- Stable sort matters when a secondary key was set in a prior pass.

## entry 4653

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 4654

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 4655

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 4656

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 4657

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 4658

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 4659

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 4660

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 4661

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4662

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 4663

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4664

- Splay tree: every access splays to the root; amortized O(log n).

## entry 4665

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4666

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 4667

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 4668

- Stable sort matters when a secondary key was set in a prior pass.

## entry 4669

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 4670

- LIS via patience: each pile holds the smallest tail of length k.

## entry 4671

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4672

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 4673

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4674

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 4675

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 4676

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 4677

- StringBuilder: amortize allocation by doubling on grow.

## entry 4678

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 4679

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 4680

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 4681

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 4682

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4683

- Monotonic stack pops while the new element violates the invariant.

## entry 4684

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 4685

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 4686

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4687

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 4688

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 4689

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 4690

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 4691

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 4692

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 4693

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4694

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 4695

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 4696

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4697

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 4698

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 4699

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 4700

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 4701

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 4702

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4703

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 4704

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 4705

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 4706

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4707

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4708

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 4709

- Monotonic stack pops while the new element violates the invariant.

## entry 4710

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4711

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4712

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4713

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 4714

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 4715

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 4716

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 4717

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4718

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 4719

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 4720

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 4721

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 4722

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 4723

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 4724

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 4725

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 4726

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 4727

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 4728

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 4729

- StringBuilder: amortize allocation by doubling on grow.

## entry 4730

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 4731

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 4732

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 4733

- Splay tree: every access splays to the root; amortized O(log n).

## entry 4734

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4735

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 4736

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 4737

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4738

- StringBuilder: amortize allocation by doubling on grow.

## entry 4739

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4740

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 4741

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4742

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4743

- StringBuilder: amortize allocation by doubling on grow.

## entry 4744

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4745

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 4746

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4747

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 4748

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4749

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 4750

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 4751

- Stable sort matters when a secondary key was set in a prior pass.

## entry 4752

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4753

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 4754

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 4755

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4756

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 4757

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 4758

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 4759

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 4760

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 4761

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 4762

- Heap when you only need top-k; full sort is wasted work.

## entry 4763

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 4764

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 4765

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 4766

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 4767

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4768

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4769

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 4770

- StringBuilder: amortize allocation by doubling on grow.

## entry 4771

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 4772

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4773

- Greedy by end-time picks the most non-overlapping intervals.

## entry 4774

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 4775

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 4776

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4777

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 4778

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 4779

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4780

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 4781

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 4782

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 4783

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4784

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4785

- Splay tree: every access splays to the root; amortized O(log n).

## entry 4786

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 4787

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 4788

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 4789

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 4790

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 4791

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4792

- StringBuilder: amortize allocation by doubling on grow.

## entry 4793

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 4794

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 4795

- Splay tree: every access splays to the root; amortized O(log n).

## entry 4796

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 4797

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4798

- LIS via patience: each pile holds the smallest tail of length k.

## entry 4799

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4800

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 4801

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 4802

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 4803

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4804

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 4805

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 4806

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 4807

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 4808

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 4809

- Euler tour flattens a tree into an array for range-query LCA.

## entry 4810

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4811

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 4812

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 4813

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 4814

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4815

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4816

- Walk both pointers from each end inward; advance the smaller side.

## entry 4817

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 4818

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 4819

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 4820

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 4821

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 4822

- Walk both pointers from each end inward; advance the smaller side.

## entry 4823

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 4824

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 4825

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4826

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 4827

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4828

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4829

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 4830

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4831

- Monotonic stack pops while the new element violates the invariant.

## entry 4832

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4833

- Walk both pointers from each end inward; advance the smaller side.

## entry 4834

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4835

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 4836

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 4837

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 4838

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 4839

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 4840

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4841

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4842

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 4843

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4844

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 4845

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4846

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 4847

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 4848

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 4849

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4850

- StringBuilder: amortize allocation by doubling on grow.

## entry 4851

- Euler tour flattens a tree into an array for range-query LCA.

## entry 4852

- Greedy by end-time picks the most non-overlapping intervals.

## entry 4853

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4854

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4855

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 4856

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 4857

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 4858

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 4859

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 4860

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4861

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 4862

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4863

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 4864

- LIS via patience: each pile holds the smallest tail of length k.

## entry 4865

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 4866

- StringBuilder: amortize allocation by doubling on grow.

## entry 4867

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4868

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 4869

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 4870

- Monotonic stack pops while the new element violates the invariant.

## entry 4871

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 4872

- Euler tour flattens a tree into an array for range-query LCA.

## entry 4873

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 4874

- Splay tree: every access splays to the root; amortized O(log n).

## entry 4875

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 4876

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 4877

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 4878

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 4879

- Heap when you only need top-k; full sort is wasted work.

## entry 4880

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4881

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 4882

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 4883

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 4884

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 4885

- Monotonic stack pops while the new element violates the invariant.

## entry 4886

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 4887

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4888

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 4889

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 4890

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 4891

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 4892

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 4893

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 4894

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4895

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 4896

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4897

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4898

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 4899

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 4900

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 4901

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4902

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 4903

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 4904

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 4905

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4906

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 4907

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 4908

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 4909

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 4910

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 4911

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 4912

- Greedy by end-time picks the most non-overlapping intervals.

## entry 4913

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4914

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 4915

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 4916

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 4917

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 4918

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 4919

- Greedy by end-time picks the most non-overlapping intervals.

## entry 4920

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 4921

- LIS via patience: each pile holds the smallest tail of length k.

## entry 4922

- Greedy by end-time picks the most non-overlapping intervals.

## entry 4923

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 4924

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 4925

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4926

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 4927

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4928

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 4929

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 4930

- LIS via patience: each pile holds the smallest tail of length k.

## entry 4931

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 4932

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4933

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 4934

- StringBuilder: amortize allocation by doubling on grow.

## entry 4935

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 4936

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4937

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 4938

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 4939

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 4940

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 4941

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 4942

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 4943

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 4944

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 4945

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 4946

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 4947

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 4948

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 4949

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4950

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 4951

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 4952

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 4953

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 4954

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 4955

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4956

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 4957

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 4958

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 4959

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 4960

- Walk both pointers from each end inward; advance the smaller side.

## entry 4961

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 4962

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 4963

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 4964

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 4965

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4966

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4967

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 4968

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 4969

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4970

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4971

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 4972

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 4973

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 4974

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 4975

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 4976

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 4977

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 4978

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 4979

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 4980

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 4981

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 4982

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4983

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 4984

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 4985

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 4986

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 4987

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4988

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 4989

- Greedy by end-time picks the most non-overlapping intervals.

## entry 4990

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 4991

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 4992

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 4993

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 4994

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 4995

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 4996

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 4997

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4998

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 4999

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 5000

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5001

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 5002

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5003

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 5004

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 5005

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 5006

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5007

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 5008

- Stable sort matters when a secondary key was set in a prior pass.

## entry 5009

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5010

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 5011

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5012

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5013

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 5014

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 5015

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5016

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 5017

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5018

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 5019

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 5020

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5021

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 5022

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 5023

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 5024

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 5025

- Walk both pointers from each end inward; advance the smaller side.

## entry 5026

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 5027

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 5028

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 5029

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 5030

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 5031

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 5032

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5033

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 5034

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5035

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 5036

- Walk both pointers from each end inward; advance the smaller side.

## entry 5037

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5038

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5039

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 5040

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 5041

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5042

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5043

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 5044

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 5045

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5046

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 5047

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 5048

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 5049

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 5050

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 5051

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 5052

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5053

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 5054

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 5055

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 5056

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 5057

- Monotonic stack pops while the new element violates the invariant.

## entry 5058

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 5059

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5060

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 5061

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 5062

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 5063

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5064

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 5065

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5066

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 5067

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 5068

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 5069

- Greedy by end-time picks the most non-overlapping intervals.

## entry 5070

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 5071

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5072

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 5073

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 5074

- Walk both pointers from each end inward; advance the smaller side.

## entry 5075

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 5076

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5077

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 5078

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5079

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 5080

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 5081

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 5082

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 5083

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 5084

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 5085

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5086

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5087

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 5088

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 5089

- Monotonic stack pops while the new element violates the invariant.

## entry 5090

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5091

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5092

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 5093

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 5094

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 5095

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5096

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 5097

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 5098

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 5099

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 5100

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5101

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 5102

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 5103

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 5104

- Walk both pointers from each end inward; advance the smaller side.

## entry 5105

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5106

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 5107

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5108

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5109

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 5110

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5111

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5112

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 5113

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 5114

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 5115

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 5116

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 5117

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 5118

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 5119

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 5120

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 5121

- StringBuilder: amortize allocation by doubling on grow.

## entry 5122

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 5123

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 5124

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 5125

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 5126

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 5127

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5128

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 5129

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5130

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 5131

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 5132

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5133

- StringBuilder: amortize allocation by doubling on grow.

## entry 5134

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 5135

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 5136

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 5137

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 5138

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5139

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 5140

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 5141

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 5142

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5143

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 5144

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 5145

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5146

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5147

- Walk both pointers from each end inward; advance the smaller side.

## entry 5148

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5149

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 5150

- Stable sort matters when a secondary key was set in a prior pass.

## entry 5151

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 5152

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 5153

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 5154

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5155

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 5156

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 5157

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 5158

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5159

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5160

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 5161

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5162

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 5163

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 5164

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 5165

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 5166

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 5167

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 5168

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 5169

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 5170

- Splay tree: every access splays to the root; amortized O(log n).

## entry 5171

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5172

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 5173

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 5174

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 5175

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5176

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 5177

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5178

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5179

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 5180

- Heap when you only need top-k; full sort is wasted work.

## entry 5181

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 5182

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5183

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5184

- Heap when you only need top-k; full sort is wasted work.

## entry 5185

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5186

- Monotonic stack pops while the new element violates the invariant.

## entry 5187

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 5188

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5189

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 5190

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 5191

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 5192

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5193

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 5194

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 5195

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 5196

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 5197

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 5198

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 5199

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5200

- Greedy by end-time picks the most non-overlapping intervals.

## entry 5201

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 5202

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5203

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 5204

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 5205

- StringBuilder: amortize allocation by doubling on grow.

## entry 5206

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 5207

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 5208

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 5209

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 5210

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5211

- Heap when you only need top-k; full sort is wasted work.

## entry 5212

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 5213

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 5214

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5215

- Splay tree: every access splays to the root; amortized O(log n).

## entry 5216

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 5217

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 5218

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 5219

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 5220

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 5221

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 5222

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 5223

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 5224

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5225

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 5226

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5227

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5228

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5229

- Walk both pointers from each end inward; advance the smaller side.

## entry 5230

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 5231

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5232

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 5233

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 5234

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 5235

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5236

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 5237

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 5238

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5239

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5240

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 5241

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 5242

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5243

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 5244

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 5245

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 5246

- StringBuilder: amortize allocation by doubling on grow.

## entry 5247

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 5248

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 5249

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 5250

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5251

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5252

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5253

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 5254

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 5255

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 5256

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 5257

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 5258

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5259

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 5260

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 5261

- Stable sort matters when a secondary key was set in a prior pass.

## entry 5262

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 5263

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 5264

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 5265

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5266

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 5267

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 5268

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 5269

- Stable sort matters when a secondary key was set in a prior pass.

## entry 5270

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 5271

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 5272

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 5273

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5274

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 5275

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 5276

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5277

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 5278

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 5279

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 5280

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5281

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 5282

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 5283

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 5284

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 5285

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 5286

- Stable sort matters when a secondary key was set in a prior pass.

## entry 5287

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 5288

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 5289

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 5290

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5291

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 5292

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5293

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 5294

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 5295

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 5296

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5297

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 5298

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 5299

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 5300

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 5301

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 5302

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 5303

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 5304

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5305

- Heap when you only need top-k; full sort is wasted work.

## entry 5306

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5307

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5308

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 5309

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5310

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 5311

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5312

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 5313

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 5314

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 5315

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5316

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 5317

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 5318

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 5319

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 5320

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 5321

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5322

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5323

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 5324

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 5325

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 5326

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 5327

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 5328

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 5329

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 5330

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 5331

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 5332

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 5333

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 5334

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 5335

- Monotonic stack pops while the new element violates the invariant.

## entry 5336

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 5337

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 5338

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 5339

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5340

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 5341

- LIS via patience: each pile holds the smallest tail of length k.

## entry 5342

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 5343

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 5344

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 5345

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 5346

- Walk both pointers from each end inward; advance the smaller side.

## entry 5347

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 5348

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5349

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 5350

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 5351

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 5352

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5353

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5354

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5355

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 5356

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 5357

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5358

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 5359

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 5360

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 5361

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 5362

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5363

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 5364

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5365

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 5366

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 5367

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 5368

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5369

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 5370

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 5371

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 5372

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 5373

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 5374

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5375

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5376

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 5377

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 5378

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 5379

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 5380

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 5381

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 5382

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5383

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 5384

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 5385

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5386

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 5387

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 5388

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 5389

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 5390

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 5391

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5392

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 5393

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 5394

- LIS via patience: each pile holds the smallest tail of length k.

## entry 5395

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 5396

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5397

- Greedy by end-time picks the most non-overlapping intervals.

## entry 5398

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5399

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 5400

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 5401

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 5402

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 5403

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5404

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 5405

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 5406

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 5407

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5408

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5409

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 5410

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5411

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 5412

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 5413

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 5414

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5415

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 5416

- Stable sort matters when a secondary key was set in a prior pass.

## entry 5417

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 5418

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 5419

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5420

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 5421

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 5422

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5423

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 5424

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5425

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5426

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 5427

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 5428

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 5429

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5430

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 5431

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5432

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 5433

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 5434

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 5435

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 5436

- Heap when you only need top-k; full sort is wasted work.

## entry 5437

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5438

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 5439

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5440

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 5441

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 5442

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5443

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 5444

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5445

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 5446

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 5447

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5448

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 5449

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 5450

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 5451

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 5452

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 5453

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 5454

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 5455

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5456

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 5457

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 5458

- Stable sort matters when a secondary key was set in a prior pass.

## entry 5459

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 5460

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 5461

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5462

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 5463

- LIS via patience: each pile holds the smallest tail of length k.

## entry 5464

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5465

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 5466

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 5467

- Monotonic stack pops while the new element violates the invariant.

## entry 5468

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 5469

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 5470

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 5471

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 5472

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 5473

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 5474

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 5475

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 5476

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 5477

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 5478

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 5479

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 5480

- StringBuilder: amortize allocation by doubling on grow.

## entry 5481

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 5482

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 5483

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 5484

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 5485

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 5486

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 5487

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5488

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 5489

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 5490

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 5491

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 5492

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 5493

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 5494

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 5495

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 5496

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 5497

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 5498

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 5499

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5500

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 5501

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 5502

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 5503

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 5504

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5505

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5506

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 5507

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5508

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 5509

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 5510

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5511

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 5512

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 5513

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 5514

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 5515

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 5516

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 5517

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 5518

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 5519

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 5520

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 5521

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 5522

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 5523

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5524

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 5525

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 5526

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5527

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 5528

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5529

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 5530

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 5531

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 5532

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 5533

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5534

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 5535

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 5536

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 5537

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5538

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 5539

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 5540

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 5541

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 5542

- LIS via patience: each pile holds the smallest tail of length k.

## entry 5543

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5544

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 5545

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 5546

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 5547

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 5548

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 5549

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5550

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 5551

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 5552

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5553

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5554

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5555

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 5556

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 5557

- LIS via patience: each pile holds the smallest tail of length k.

## entry 5558

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 5559

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 5560

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 5561

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 5562

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 5563

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 5564

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 5565

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 5566

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 5567

- Greedy by end-time picks the most non-overlapping intervals.

## entry 5568

- StringBuilder: amortize allocation by doubling on grow.

## entry 5569

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 5570

- Stable sort matters when a secondary key was set in a prior pass.

## entry 5571

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5572

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5573

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 5574

- LIS via patience: each pile holds the smallest tail of length k.

## entry 5575

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 5576

- Greedy by end-time picks the most non-overlapping intervals.

## entry 5577

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 5578

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 5579

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 5580

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 5581

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 5582

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 5583

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 5584

- Stable sort matters when a secondary key was set in a prior pass.

## entry 5585

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 5586

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 5587

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 5588

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 5589

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5590

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5591

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 5592

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5593

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5594

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 5595

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 5596

- Walk both pointers from each end inward; advance the smaller side.

## entry 5597

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 5598

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 5599

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 5600

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5601

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5602

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5603

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 5604

- Heap when you only need top-k; full sort is wasted work.

## entry 5605

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 5606

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5607

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 5608

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 5609

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 5610

- Heap when you only need top-k; full sort is wasted work.

## entry 5611

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 5612

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5613

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 5614

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 5615

- Splay tree: every access splays to the root; amortized O(log n).

## entry 5616

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 5617

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5618

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 5619

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 5620

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 5621

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5622

- LIS via patience: each pile holds the smallest tail of length k.

## entry 5623

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 5624

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5625

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 5626

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 5627

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5628

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 5629

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5630

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 5631

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 5632

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 5633

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 5634

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 5635

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 5636

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5637

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 5638

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 5639

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 5640

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 5641

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5642

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 5643

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 5644

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5645

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5646

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5647

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 5648

- Heap when you only need top-k; full sort is wasted work.

## entry 5649

- Splay tree: every access splays to the root; amortized O(log n).

## entry 5650

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 5651

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 5652

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 5653

- StringBuilder: amortize allocation by doubling on grow.

## entry 5654

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 5655

- Splay tree: every access splays to the root; amortized O(log n).

## entry 5656

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 5657

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5658

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 5659

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 5660

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 5661

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 5662

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 5663

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5664

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 5665

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5666

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 5667

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 5668

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5669

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 5670

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 5671

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 5672

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 5673

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 5674

- LIS via patience: each pile holds the smallest tail of length k.

## entry 5675

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 5676

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 5677

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 5678

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 5679

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 5680

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5681

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5682

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 5683

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 5684

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 5685

- Greedy by end-time picks the most non-overlapping intervals.

## entry 5686

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5687

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 5688

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 5689

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 5690

- LIS via patience: each pile holds the smallest tail of length k.

## entry 5691

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 5692

- Monotonic stack pops while the new element violates the invariant.

## entry 5693

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5694

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 5695

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 5696

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5697

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 5698

- Heap when you only need top-k; full sort is wasted work.

## entry 5699

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 5700

- Splay tree: every access splays to the root; amortized O(log n).

## entry 5701

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 5702

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5703

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 5704

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 5705

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 5706

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 5707

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 5708

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 5709

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5710

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 5711

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 5712

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 5713

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 5714

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 5715

- Monotonic stack pops while the new element violates the invariant.

## entry 5716

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 5717

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 5718

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 5719

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 5720

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 5721

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 5722

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5723

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 5724

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5725

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 5726

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5727

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 5728

- Greedy by end-time picks the most non-overlapping intervals.

## entry 5729

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5730

- Walk both pointers from each end inward; advance the smaller side.

## entry 5731

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 5732

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 5733

- Monotonic stack pops while the new element violates the invariant.

## entry 5734

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 5735

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5736

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 5737

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 5738

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5739

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 5740

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 5741

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 5742

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 5743

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5744

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5745

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 5746

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 5747

- LIS via patience: each pile holds the smallest tail of length k.

## entry 5748

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 5749

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 5750

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 5751

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 5752

- Heap when you only need top-k; full sort is wasted work.

## entry 5753

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 5754

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 5755

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5756

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5757

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 5758

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5759

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5760

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5761

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5762

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 5763

- Greedy by end-time picks the most non-overlapping intervals.

## entry 5764

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 5765

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 5766

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5767

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 5768

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 5769

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 5770

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 5771

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 5772

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 5773

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5774

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 5775

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 5776

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 5777

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 5778

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5779

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 5780

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 5781

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 5782

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 5783

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 5784

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 5785

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5786

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 5787

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5788

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 5789

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 5790

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 5791

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 5792

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 5793

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 5794

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 5795

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 5796

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 5797

- Greedy by end-time picks the most non-overlapping intervals.

## entry 5798

- Greedy by end-time picks the most non-overlapping intervals.

## entry 5799

- Walk both pointers from each end inward; advance the smaller side.

## entry 5800

- Greedy by end-time picks the most non-overlapping intervals.

## entry 5801

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 5802

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 5803

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 5804

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 5805

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 5806

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 5807

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 5808

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 5809

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 5810

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 5811

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 5812

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 5813

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 5814

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5815

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 5816

- Monotonic stack pops while the new element violates the invariant.

## entry 5817

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5818

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 5819

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5820

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 5821

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5822

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 5823

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 5824

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5825

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 5826

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 5827

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5828

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 5829

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 5830

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 5831

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 5832

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 5833

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 5834

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5835

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 5836

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 5837

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 5838

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5839

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5840

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5841

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 5842

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 5843

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 5844

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 5845

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 5846

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 5847

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 5848

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 5849

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 5850

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 5851

- Splay tree: every access splays to the root; amortized O(log n).

## entry 5852

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 5853

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 5854

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 5855

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 5856

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 5857

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 5858

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5859

- StringBuilder: amortize allocation by doubling on grow.

## entry 5860

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5861

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5862

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 5863

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5864

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 5865

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 5866

- Monotonic stack pops while the new element violates the invariant.

## entry 5867

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 5868

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5869

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 5870

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 5871

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 5872

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 5873

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 5874

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 5875

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 5876

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 5877

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 5878

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5879

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5880

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5881

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 5882

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5883

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 5884

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 5885

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 5886

- Stable sort matters when a secondary key was set in a prior pass.

## entry 5887

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 5888

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5889

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 5890

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 5891

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 5892

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 5893

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5894

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 5895

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5896

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 5897

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5898

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5899

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 5900

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 5901

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 5902

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5903

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 5904

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 5905

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 5906

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 5907

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 5908

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 5909

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 5910

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 5911

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 5912

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 5913

- Splay tree: every access splays to the root; amortized O(log n).

## entry 5914

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 5915

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 5916

- Greedy by end-time picks the most non-overlapping intervals.

## entry 5917

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 5918

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 5919

- Stable sort matters when a secondary key was set in a prior pass.

## entry 5920

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 5921

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 5922

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 5923

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 5924

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 5925

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 5926

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 5927

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 5928

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 5929

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 5930

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 5931

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 5932

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 5933

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 5934

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 5935

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 5936

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5937

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 5938

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 5939

- Heap when you only need top-k; full sort is wasted work.

## entry 5940

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 5941

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 5942

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 5943

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 5944

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 5945

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 5946

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5947

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5948

- Splay tree: every access splays to the root; amortized O(log n).

## entry 5949

- Greedy by end-time picks the most non-overlapping intervals.

## entry 5950

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 5951

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 5952

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 5953

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 5954

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 5955

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 5956

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 5957

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5958

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 5959

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 5960

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5961

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 5962

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 5963

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 5964

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 5965

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 5966

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 5967

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 5968

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 5969

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 5970

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5971

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 5972

- Stable sort matters when a secondary key was set in a prior pass.

## entry 5973

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 5974

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 5975

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5976

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 5977

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5978

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 5979

- Heap when you only need top-k; full sort is wasted work.

## entry 5980

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 5981

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5982

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 5983

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 5984

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 5985

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 5986

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5987

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5988

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 5989

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 5990

- Walk both pointers from each end inward; advance the smaller side.

## entry 5991

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 5992

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 5993

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 5994

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 5995

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 5996

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 5997

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 5998

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 5999

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 6000

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 6001

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 6002

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 6003

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 6004

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 6005

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 6006

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 6007

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 6008

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 6009

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 6010

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 6011

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 6012

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 6013

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 6014

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 6015

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 6016

- Splay tree: every access splays to the root; amortized O(log n).

## entry 6017

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 6018

- Walk both pointers from each end inward; advance the smaller side.

## entry 6019

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 6020

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 6021

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 6022

- Walk both pointers from each end inward; advance the smaller side.

## entry 6023

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 6024

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 6025

- Heap when you only need top-k; full sort is wasted work.

## entry 6026

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 6027

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 6028

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 6029

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 6030

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 6031

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 6032

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 6033

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 6034

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 6035

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 6036

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 6037

- Splay tree: every access splays to the root; amortized O(log n).

## entry 6038

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 6039

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 6040

- Euler tour flattens a tree into an array for range-query LCA.

## entry 6041

- LIS via patience: each pile holds the smallest tail of length k.

## entry 6042

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 6043

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 6044

- Monotonic stack pops while the new element violates the invariant.

## entry 6045

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 6046

- Splay tree: every access splays to the root; amortized O(log n).

## entry 6047

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 6048

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 6049

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 6050

- Stable sort matters when a secondary key was set in a prior pass.

## entry 6051

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 6052

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 6053

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 6054

- LIS via patience: each pile holds the smallest tail of length k.

## entry 6055

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 6056

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 6057

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 6058

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 6059

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 6060

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 6061

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 6062

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 6063

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 6064

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 6065

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 6066

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 6067

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 6068

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 6069

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 6070

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 6071

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 6072

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 6073

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 6074

- Stable sort matters when a secondary key was set in a prior pass.

## entry 6075

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 6076

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 6077

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 6078

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 6079

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 6080

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 6081

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 6082

- Greedy by end-time picks the most non-overlapping intervals.

## entry 6083

- Monotonic stack pops while the new element violates the invariant.

## entry 6084

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 6085

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 6086

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 6087

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 6088

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 6089

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 6090

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 6091

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 6092

- Walk both pointers from each end inward; advance the smaller side.

## entry 6093

- Monotonic stack pops while the new element violates the invariant.

## entry 6094

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 6095

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 6096

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 6097

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 6098

- Stable sort matters when a secondary key was set in a prior pass.

## entry 6099

- Monotonic stack pops while the new element violates the invariant.

## entry 6100

- Heap when you only need top-k; full sort is wasted work.

## entry 6101

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 6102

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 6103

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 6104

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 6105

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 6106

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 6107

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 6108

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 6109

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 6110

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 6111

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 6112

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 6113

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 6114

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 6115

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 6116

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 6117

- StringBuilder: amortize allocation by doubling on grow.

## entry 6118

- Splay tree: every access splays to the root; amortized O(log n).

## entry 6119

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 6120

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 6121

- Greedy by end-time picks the most non-overlapping intervals.

## entry 6122

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 6123

- Stable sort matters when a secondary key was set in a prior pass.

## entry 6124

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 6125

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 6126

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 6127

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 6128

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 6129

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 6130

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 6131

- Splay tree: every access splays to the root; amortized O(log n).

## entry 6132

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 6133

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 6134

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 6135

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 6136

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 6137

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 6138

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 6139

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 6140

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 6141

- Splay tree: every access splays to the root; amortized O(log n).

## entry 6142

- Greedy by end-time picks the most non-overlapping intervals.

## entry 6143

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 6144

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 6145

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 6146

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 6147

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 6148

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 6149

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 6150

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 6151

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 6152

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 6153

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 6154

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 6155

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 6156

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 6157

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 6158

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 6159

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 6160

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 6161

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 6162

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 6163

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 6164

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 6165

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 6166

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 6167

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 6168

- Heap when you only need top-k; full sort is wasted work.
