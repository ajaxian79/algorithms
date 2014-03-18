# lru-cache

## entry 1

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 2

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 3

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 5

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 6

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 7

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 8

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 9

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 10

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 11

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 12

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 13

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 14

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 15

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 16

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 17

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 18

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 19

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 20

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 21

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 22

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 23

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 24

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 25

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 26

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 27

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 28

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 29

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 30

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 31

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 32

- Greedy by end-time picks the most non-overlapping intervals.

## entry 33

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 34

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 35

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 36

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 37

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 38

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 39

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 40

- Splay tree: every access splays to the root; amortized O(log n).

## entry 41

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 42

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 43

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 44

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 45

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 46

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 47

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 48

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 49

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 50

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 51

- StringBuilder: amortize allocation by doubling on grow.

## entry 52

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 53

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 54

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 55

- Splay tree: every access splays to the root; amortized O(log n).

## entry 56

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 57

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 58

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 59

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 60

- Monotonic stack pops while the new element violates the invariant.

## entry 61

- Greedy by end-time picks the most non-overlapping intervals.

## entry 62

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 63

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 64

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 65

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 66

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 67

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 68

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 69

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 70

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 71

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 72

- Stable sort matters when a secondary key was set in a prior pass.

## entry 73

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 74

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 75

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 76

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 77

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 78

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 79

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 80

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 81

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 82

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 83

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 84

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 85

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 86

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 87

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 88

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 89

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 90

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 91

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 92

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 93

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 94

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 95

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 96

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 97

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 98

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 99

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 100

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 101

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 102

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 103

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 104

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 105

- Stable sort matters when a secondary key was set in a prior pass.

## entry 106

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 107

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 108

- Stable sort matters when a secondary key was set in a prior pass.

## entry 109

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 110

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 111

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 112

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 113

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 114

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 115

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 116

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 117

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 118

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 119

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 120

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 121

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 122

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 123

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 124

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 125

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 126

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 127

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 128

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 129

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 130

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 131

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 132

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 133

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 134

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 135

- Splay tree: every access splays to the root; amortized O(log n).

## entry 136

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 137

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 138

- Heap when you only need top-k; full sort is wasted work.

## entry 139

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 140

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 141

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 142

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 143

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 144

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 145

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 146

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 147

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 148

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 149

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 150

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 151

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 152

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 153

- LIS via patience: each pile holds the smallest tail of length k.

## entry 154

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 155

- Walk both pointers from each end inward; advance the smaller side.

## entry 156

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 157

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 158

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 159

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 160

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 161

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 162

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 163

- Splay tree: every access splays to the root; amortized O(log n).

## entry 164

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 165

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 166

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 167

- Splay tree: every access splays to the root; amortized O(log n).

## entry 168

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 169

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 170

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 171

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 172

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 173

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 174

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 175

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 176

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 177

- LIS via patience: each pile holds the smallest tail of length k.

## entry 178

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 179

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 180

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 181

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 182

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 183

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 184

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 185

- Heap when you only need top-k; full sort is wasted work.

## entry 186

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 187

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 188

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 189

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 190

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 191

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 192

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 193

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 194

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 195

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 196

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 197

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 198

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 199

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 200

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 201

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 202

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 203

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 204

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 205

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 206

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 207

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 208

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 209

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 210

- Splay tree: every access splays to the root; amortized O(log n).

## entry 211

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 212

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 213

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 214

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 215

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 216

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 217

- Euler tour flattens a tree into an array for range-query LCA.

## entry 218

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 219

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 220

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 221

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 222

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 223

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 224

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 225

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 226

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 227

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 228

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 229

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 230

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 231

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 232

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 233

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 234

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 235

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 236

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 237

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 238

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 239

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 240

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 241

- Monotonic stack pops while the new element violates the invariant.

## entry 242

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 243

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 244

- Stable sort matters when a secondary key was set in a prior pass.

## entry 245

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 246

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 247

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 248

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 249

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 250

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 251

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 252

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 253

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 254

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 255

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 256

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 257

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 258

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 259

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 260

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 261

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 262

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 263

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 264

- StringBuilder: amortize allocation by doubling on grow.

## entry 265

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 266

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 267

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 268

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 269

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 270

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 271

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 272

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 273

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 274

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 275

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 276

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 277

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 278

- Stable sort matters when a secondary key was set in a prior pass.

## entry 279

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 280

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 281

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 282

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 283

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 284

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 285

- Stable sort matters when a secondary key was set in a prior pass.

## entry 286

- Monotonic stack pops while the new element violates the invariant.

## entry 287

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 288

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 289

- Greedy by end-time picks the most non-overlapping intervals.

## entry 290

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 291

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 292

- Monotonic stack pops while the new element violates the invariant.

## entry 293

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 294

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 295

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 296

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 297

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 298

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 299

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 300

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 301

- LIS via patience: each pile holds the smallest tail of length k.

## entry 302

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 303

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 304

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 305

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 306

- LIS via patience: each pile holds the smallest tail of length k.

## entry 307

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 308

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 309

- Stable sort matters when a secondary key was set in a prior pass.

## entry 310

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 311

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 312

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 313

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 314

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 315

- Monotonic stack pops while the new element violates the invariant.

## entry 316

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 317

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 318

- Monotonic stack pops while the new element violates the invariant.

## entry 319

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 320

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 321

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 322

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 323

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 324

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 325

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 326

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 327

- Euler tour flattens a tree into an array for range-query LCA.

## entry 328

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 329

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 330

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 331

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 332

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 333

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 334

- Greedy by end-time picks the most non-overlapping intervals.

## entry 335

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 336

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 337

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 338

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 339

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 340

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 341

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 342

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 343

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 344

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 345

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 346

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 347

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 348

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 349

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 350

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 351

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 352

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 353

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 354

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 355

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 356

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 357

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 358

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 359

- Heap when you only need top-k; full sort is wasted work.

## entry 360

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 361

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 362

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 363

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 364

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 365

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 366

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 367

- Splay tree: every access splays to the root; amortized O(log n).

## entry 368

- Heap when you only need top-k; full sort is wasted work.

## entry 369

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 370

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 371

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 372

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 373

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 374

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 375

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 376

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 377

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 378

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 379

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 380

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 381

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 382

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 383

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 384

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 385

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 386

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 387

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 388

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 389

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 390

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 391

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 392

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 393

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 394

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 395

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 396

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 397

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 398

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 399

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 400

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 401

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 402

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 403

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 404

- Stable sort matters when a secondary key was set in a prior pass.

## entry 405

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 406

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 407

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 408

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 409

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 410

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 411

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 412

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 413

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 414

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 415

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 416

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 417

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 418

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 419

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 420

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 421

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 422

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 423

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 424

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 425

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 426

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 427

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 428

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 429

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 430

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 431

- Stable sort matters when a secondary key was set in a prior pass.

## entry 432

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 433

- Walk both pointers from each end inward; advance the smaller side.

## entry 434

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 435

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 436

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 437

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 438

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 439

- Heap when you only need top-k; full sort is wasted work.

## entry 440

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 441

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 442

- Greedy by end-time picks the most non-overlapping intervals.

## entry 443

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 444

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 445

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 446

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 447

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 448

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 449

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 450

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 451

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 452

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 453

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 454

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 455

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 456

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 457

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 458

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 459

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 460

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 461

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 462

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 463

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 464

- Stable sort matters when a secondary key was set in a prior pass.

## entry 465

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 466

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 467

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 468

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 469

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 470

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 471

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 472

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 473

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 474

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 475

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 476

- Monotonic stack pops while the new element violates the invariant.

## entry 477

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 478

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 479

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 480

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 481

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 482

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 483

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 484

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 485

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 486

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 487

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 488

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 489

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 490

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 491

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 492

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 493

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 494

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 495

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 496

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 497

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 498

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 499

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 500

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 501

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 502

- StringBuilder: amortize allocation by doubling on grow.

## entry 503

- StringBuilder: amortize allocation by doubling on grow.

## entry 504

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 505

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 506

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 507

- LIS via patience: each pile holds the smallest tail of length k.
