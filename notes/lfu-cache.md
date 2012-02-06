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

## entry 302

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 303

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 304

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 305

- StringBuilder: amortize allocation by doubling on grow.

## entry 306

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 307

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 308

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 309

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 310

- StringBuilder: amortize allocation by doubling on grow.

## entry 311

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 312

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 313

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 314

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 315

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 316

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 317

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 318

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 319

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 320

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 321

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 322

- Splay tree: every access splays to the root; amortized O(log n).

## entry 323

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 324

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 325

- Walk both pointers from each end inward; advance the smaller side.

## entry 326

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 327

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 328

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 329

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 330

- LIS via patience: each pile holds the smallest tail of length k.

## entry 331

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 332

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 333

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 334

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 335

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 336

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 337

- LIS via patience: each pile holds the smallest tail of length k.

## entry 338

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 339

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 340

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 341

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 342

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 343

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 344

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 345

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 346

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 347

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 348

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 349

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 350

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 351

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 352

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 353

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 354

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 355

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 356

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 357

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 358

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 359

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 360

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 361

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 362

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 363

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 364

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 365

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 366

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 367

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 368

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 369

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 370

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 371

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 372

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 373

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 374

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 375

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 376

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 377

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 378

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 379

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 380

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 381

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 382

- Splay tree: every access splays to the root; amortized O(log n).

## entry 383

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 384

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 385

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 386

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 387

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 388

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 389

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 390

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 391

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 392

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 393

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 394

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 395

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 396

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 397

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 398

- Euler tour flattens a tree into an array for range-query LCA.

## entry 399

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 400

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 401

- Euler tour flattens a tree into an array for range-query LCA.

## entry 402

- StringBuilder: amortize allocation by doubling on grow.

## entry 403

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 404

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 405

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 406

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 407

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 408

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 409

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 410

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 411

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 412

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 413

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 414

- Walk both pointers from each end inward; advance the smaller side.

## entry 415

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 416

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 417

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 418

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 419

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 420

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 421

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 422

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 423

- StringBuilder: amortize allocation by doubling on grow.

## entry 424

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 425

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 426

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 427

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 428

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 429

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 430

- Walk both pointers from each end inward; advance the smaller side.

## entry 431

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 432

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 433

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 434

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 435

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 436

- Monotonic stack pops while the new element violates the invariant.

## entry 437

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 438

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 439

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 440

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 441

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 442

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 443

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 444

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 445

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 446

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 447

- StringBuilder: amortize allocation by doubling on grow.

## entry 448

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 449

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 450

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 451

- Stable sort matters when a secondary key was set in a prior pass.

## entry 452

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 453

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 454

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 455

- Euler tour flattens a tree into an array for range-query LCA.

## entry 456

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 457

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 458

- Monotonic stack pops while the new element violates the invariant.

## entry 459

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 460

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 461

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 462

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 463

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 464

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 465

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 466

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 467

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 468

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 469

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 470

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 471

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 472

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 473

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 474

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 475

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 476

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 477

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 478

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 479

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 480

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 481

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 482

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 483

- LIS via patience: each pile holds the smallest tail of length k.

## entry 484

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 485

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 486

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 487

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 488

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 489

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 490

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 491

- Monotonic stack pops while the new element violates the invariant.

## entry 492

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 493

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 494

- Greedy by end-time picks the most non-overlapping intervals.

## entry 495

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 496

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 497

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 498

- Monotonic stack pops while the new element violates the invariant.

## entry 499

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 500

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 501

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 502

- Heap when you only need top-k; full sort is wasted work.

## entry 503

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 504

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 505

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 506

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 507

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 508

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 509

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 510

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 511

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 512

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 513

- Splay tree: every access splays to the root; amortized O(log n).

## entry 514

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 515

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 516

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 517

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 518

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 519

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 520

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 521

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 522

- Stable sort matters when a secondary key was set in a prior pass.

## entry 523

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 524

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 525

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 526

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 527

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 528

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 529

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 530

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 531

- StringBuilder: amortize allocation by doubling on grow.

## entry 532

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 533

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 534

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 535

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 536

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 537

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 538

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 539

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 540

- StringBuilder: amortize allocation by doubling on grow.

## entry 541

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 542

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 543

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 544

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 545

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 546

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 547

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 548

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 549

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 550

- Walk both pointers from each end inward; advance the smaller side.

## entry 551

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 552

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 553

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 554

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 555

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 556

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 557

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 558

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 559

- Euler tour flattens a tree into an array for range-query LCA.

## entry 560

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 561

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 562

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 563

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 564

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 565

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 566

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 567

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 568

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 569

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 570

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 571

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 572

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 573

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 574

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 575

- StringBuilder: amortize allocation by doubling on grow.

## entry 576

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 577

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 578

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 579

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 580

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 581

- Tree DP: post-order DFS lets children inform the parent in one pass.
