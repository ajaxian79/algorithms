# lfu-cache

## entry 1

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 2

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 3

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 4

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 5

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 6

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 7

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 8

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 9

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 10

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 11

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 12

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 13

- Stable sort matters when a secondary key was set in a prior pass.

## entry 14

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 15

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 16

- Heap when you only need top-k; full sort is wasted work.

## entry 17

- Monotonic stack pops while the new element violates the invariant.

## entry 18

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 19

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 20

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 21

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 22

- LIS via patience: each pile holds the smallest tail of length k.

## entry 23

- StringBuilder: amortize allocation by doubling on grow.

## entry 24

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 25

- Walk both pointers from each end inward; advance the smaller side.

## entry 26

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 27

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 28

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 29

- Splay tree: every access splays to the root; amortized O(log n).

## entry 30

- Walk both pointers from each end inward; advance the smaller side.

## entry 31

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 32

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 33

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 34

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 35

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 36

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 37

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 38

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 39

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 40

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 41

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 42

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 43

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 44

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 45

- Heap when you only need top-k; full sort is wasted work.

## entry 46

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 47

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 48

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 49

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 50

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 51

- Monotonic stack pops while the new element violates the invariant.

## entry 52

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 53

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 54

- Heap when you only need top-k; full sort is wasted work.

## entry 55

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 56

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 57

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 58

- Monotonic stack pops while the new element violates the invariant.

## entry 59

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 60

- Monotonic stack pops while the new element violates the invariant.

## entry 61

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 62

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 63

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 64

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 65

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 66

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 67

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 68

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 69

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 70

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 71

- Walk both pointers from each end inward; advance the smaller side.

## entry 72

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 73

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 74

- Greedy by end-time picks the most non-overlapping intervals.

## entry 75

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 76

- LIS via patience: each pile holds the smallest tail of length k.

## entry 77

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 78

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 79

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 80

- Heap when you only need top-k; full sort is wasted work.

## entry 81

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 82

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 83

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 84

- Greedy by end-time picks the most non-overlapping intervals.

## entry 85

- Walk both pointers from each end inward; advance the smaller side.

## entry 86

- Euler tour flattens a tree into an array for range-query LCA.

## entry 87

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 88

- Walk both pointers from each end inward; advance the smaller side.

## entry 89

- Walk both pointers from each end inward; advance the smaller side.

## entry 90

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 91

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 92

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 93

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 94

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 95

- Walk both pointers from each end inward; advance the smaller side.

## entry 96

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 97

- StringBuilder: amortize allocation by doubling on grow.

## entry 98

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 99

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 100

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 101

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 102

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 103

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 104

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 105

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 106

- LIS via patience: each pile holds the smallest tail of length k.

## entry 107

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 108

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 109

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 110

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 111

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 112

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 113

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 114

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 115

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 116

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 117

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 118

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 119

- Splay tree: every access splays to the root; amortized O(log n).

## entry 120

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 121

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 122

- StringBuilder: amortize allocation by doubling on grow.

## entry 123

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 124

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 125

- LIS via patience: each pile holds the smallest tail of length k.

## entry 126

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 127

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 128

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 129

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 130

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 131

- StringBuilder: amortize allocation by doubling on grow.

## entry 132

- Monotonic stack pops while the new element violates the invariant.

## entry 133

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 134

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 135

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 136

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 137

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 138

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 139

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 140

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 141

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 142

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 143

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 144

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 145

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 146

- Stable sort matters when a secondary key was set in a prior pass.

## entry 147

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 148

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 149

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 150

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 151

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 152

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 153

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 154

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 155

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 156

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 157

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 158

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 159

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 160

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 161

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 162

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 163

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 164

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 165

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 166

- StringBuilder: amortize allocation by doubling on grow.

## entry 167

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 168

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 169

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 170

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 171

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 172

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 173

- Walk both pointers from each end inward; advance the smaller side.

## entry 174

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 175

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 176

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 177

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 178

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 179

- Walk both pointers from each end inward; advance the smaller side.

## entry 180

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 181

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 182

- Stable sort matters when a secondary key was set in a prior pass.

## entry 183

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 184

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 185

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 186

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 187

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 188

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 189

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 190

- Splay tree: every access splays to the root; amortized O(log n).

## entry 191

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 192

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 193

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 194

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 195

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 196

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 197

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 198

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 199

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 200

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 201

- Stable sort matters when a secondary key was set in a prior pass.

## entry 202

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 203

- Stable sort matters when a secondary key was set in a prior pass.

## entry 204

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 205

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 206

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 207

- Greedy by end-time picks the most non-overlapping intervals.

## entry 208

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 209

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 210

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 211

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 212

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 213

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 214

- Stable sort matters when a secondary key was set in a prior pass.

## entry 215

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 216

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 217

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 218

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 219

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 220

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 221

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 222

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 223

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 224

- Greedy by end-time picks the most non-overlapping intervals.

## entry 225

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 226

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 227

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 228

- Monotonic stack pops while the new element violates the invariant.

## entry 229

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 230

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 231

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 232

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 233

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 234

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 235

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 236

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 237

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 238

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 239

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 240

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 241

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 242

- Walk both pointers from each end inward; advance the smaller side.

## entry 243

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 244

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 245

- Walk both pointers from each end inward; advance the smaller side.

## entry 246

- Monotonic stack pops while the new element violates the invariant.

## entry 247

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 248

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 249

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 250

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 251

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 252

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 253

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 254

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 255

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 256

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 257

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 258

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 259

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 260

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 261

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 262

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 263

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 264

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 265

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 266

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 267

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 268

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 269

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 270

- Monotonic stack pops while the new element violates the invariant.

## entry 271

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 272

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 273

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 274

- Walk both pointers from each end inward; advance the smaller side.

## entry 275

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 276

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 277

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 278

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 279

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 280

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 281

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 282

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 283

- Stable sort matters when a secondary key was set in a prior pass.

## entry 284

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 285

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 286

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 287

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 288

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 289

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 290

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 291

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 292

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 293

- Greedy by end-time picks the most non-overlapping intervals.

## entry 294

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 295

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 296

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 297

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 298

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 299

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 300

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 301

- Manacher expands around each center, reusing prior radii via mirror reflection.
