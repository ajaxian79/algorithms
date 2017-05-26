# spfa

## entry 1

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 2

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 4

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 6

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 7

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 8

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 9

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 10

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 11

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 12

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 13

- Splay tree: every access splays to the root; amortized O(log n).

## entry 14

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 15

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 16

- Heap when you only need top-k; full sort is wasted work.

## entry 17

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 18

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 19

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 20

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 21

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 22

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 23

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 24

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 25

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 26

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 27

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 28

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 29

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 30

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 31

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 32

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 33

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 34

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 35

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 36

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 37

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 38

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 39

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 40

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 41

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 42

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 43

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 44

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 45

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 46

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 47

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 48

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 49

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 50

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 51

- StringBuilder: amortize allocation by doubling on grow.

## entry 52

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 53

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 54

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 55

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 56

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 57

- Stable sort matters when a secondary key was set in a prior pass.

## entry 58

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 59

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 60

- Greedy by end-time picks the most non-overlapping intervals.

## entry 61

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 62

- Stable sort matters when a secondary key was set in a prior pass.

## entry 63

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 64

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 65

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 66

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 67

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 68

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 69

- Splay tree: every access splays to the root; amortized O(log n).

## entry 70

- Walk both pointers from each end inward; advance the smaller side.

## entry 71

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 72

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 73

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 74

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 75

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 76

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 77

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 78

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 79

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 80

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 81

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 82

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 83

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 84

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 85

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 86

- StringBuilder: amortize allocation by doubling on grow.

## entry 87

- Walk both pointers from each end inward; advance the smaller side.

## entry 88

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 89

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 90

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 91

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 92

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 93

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 94

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 95

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 96

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 97

- Heap when you only need top-k; full sort is wasted work.

## entry 98

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 99

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 100

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 101

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 102

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 103

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 104

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 105

- Splay tree: every access splays to the root; amortized O(log n).

## entry 106

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 107

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 108

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 109

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 110

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 111

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 112

- Monotonic stack pops while the new element violates the invariant.

## entry 113

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 114

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 115

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 116

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 117

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 118

- Stable sort matters when a secondary key was set in a prior pass.

## entry 119

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 120

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 121

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 122

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 123

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 124

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 125

- Stable sort matters when a secondary key was set in a prior pass.

## entry 126

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 127

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 128

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 129

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 130

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 131

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 132

- Splay tree: every access splays to the root; amortized O(log n).

## entry 133

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 134

- StringBuilder: amortize allocation by doubling on grow.

## entry 135

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 136

- Heap when you only need top-k; full sort is wasted work.

## entry 137

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 138

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 139

- Monotonic stack pops while the new element violates the invariant.

## entry 140

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 141

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 142

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 143

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 144

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 145

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 146

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 147

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 148

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 149

- Heap when you only need top-k; full sort is wasted work.

## entry 150

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 151

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 152

- Heap when you only need top-k; full sort is wasted work.

## entry 153

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 154

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 155

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 156

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 157

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 158

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 159

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 160

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 161

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 162

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 163

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 164

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 165

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 166

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 167

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 168

- StringBuilder: amortize allocation by doubling on grow.

## entry 169

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 170

- Heap when you only need top-k; full sort is wasted work.

## entry 171

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 172

- Euler tour flattens a tree into an array for range-query LCA.

## entry 173

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 174

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 175

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 176

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 177

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 178

- Stable sort matters when a secondary key was set in a prior pass.

## entry 179

- StringBuilder: amortize allocation by doubling on grow.

## entry 180

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 181

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 182

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 183

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 184

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 185

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 186

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 187

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 188

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 189

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 190

- LIS via patience: each pile holds the smallest tail of length k.

## entry 191

- Stable sort matters when a secondary key was set in a prior pass.

## entry 192

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 193

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 194

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 195

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 196

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 197

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 198

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 199

- Stable sort matters when a secondary key was set in a prior pass.

## entry 200

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 201

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 202

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 203

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 204

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 205

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 206

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 207

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 208

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 209

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 210

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 211

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 212

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 213

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 214

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 215

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 216

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 217

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 218

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 219

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 220

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 221

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 222

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 223

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 224

- Monotonic stack pops while the new element violates the invariant.

## entry 225

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 226

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 227

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 228

- LIS via patience: each pile holds the smallest tail of length k.

## entry 229

- Monotonic stack pops while the new element violates the invariant.

## entry 230

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 231

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 232

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 233

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 234

- Walk both pointers from each end inward; advance the smaller side.

## entry 235

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 236

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 237

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 238

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 239

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 240

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 241

- Euler tour flattens a tree into an array for range-query LCA.

## entry 242

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 243

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 244

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 245

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 246

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 247

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 248

- Stable sort matters when a secondary key was set in a prior pass.

## entry 249

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 250

- Stable sort matters when a secondary key was set in a prior pass.

## entry 251

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 252

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 253

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 254

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 255

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 256

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 257

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 258

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 259

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 260

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 261

- Euler tour flattens a tree into an array for range-query LCA.

## entry 262

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 263

- Greedy by end-time picks the most non-overlapping intervals.

## entry 264

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 265

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 266

- Euler tour flattens a tree into an array for range-query LCA.

## entry 267

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 268

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 269

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 270

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 271

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 272

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 273

- Heap when you only need top-k; full sort is wasted work.

## entry 274

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 275

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 276

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 277

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 278

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 279

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 280

- Monotonic stack pops while the new element violates the invariant.

## entry 281

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 282

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 283

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 284

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 285

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 286

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 287

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 288

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 289

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 290

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 291

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 292

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 293

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 294

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 295

- Stable sort matters when a secondary key was set in a prior pass.

## entry 296

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 297

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 298

- Euler tour flattens a tree into an array for range-query LCA.

## entry 299

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 300

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 301

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 302

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 303

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 304

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 305

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 306

- Euler tour flattens a tree into an array for range-query LCA.

## entry 307

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 308

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 309

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 310

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 311

- Stable sort matters when a secondary key was set in a prior pass.

## entry 312

- Greedy by end-time picks the most non-overlapping intervals.

## entry 313

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 314

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 315

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 316

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 317

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 318

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 319

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 320

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 321

- StringBuilder: amortize allocation by doubling on grow.

## entry 322

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 323

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 324

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 325

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 326

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 327

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 328

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 329

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 330

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 331

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 332

- Splay tree: every access splays to the root; amortized O(log n).

## entry 333

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 334

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 335

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 336

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 337

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 338

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 339

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 340

- Monotonic stack pops while the new element violates the invariant.

## entry 341

- Greedy by end-time picks the most non-overlapping intervals.

## entry 342

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 343

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 344

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 345

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 346

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 347

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 348

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 349

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 350

- Monotonic stack pops while the new element violates the invariant.

## entry 351

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 352

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 353

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 354

- Walk both pointers from each end inward; advance the smaller side.

## entry 355

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 356

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 357

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 358

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 359

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 360

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 361

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 362

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 363

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 364

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 365

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 366

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 367

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 368

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 369

- Heap when you only need top-k; full sort is wasted work.

## entry 370

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 371

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 372

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 373

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 374

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 375

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 376

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 377

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 378

- StringBuilder: amortize allocation by doubling on grow.

## entry 379

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 380

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 381

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 382

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 383

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 384

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 385

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 386

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 387

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 388

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 389

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 390

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 391

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 392

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 393

- LIS via patience: each pile holds the smallest tail of length k.

## entry 394

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 395

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 396

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 397

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 398

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 399

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 400

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 401

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 402

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 403

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 404

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 405

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 406

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 407

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 408

- Monotonic stack pops while the new element violates the invariant.

## entry 409

- Walk both pointers from each end inward; advance the smaller side.

## entry 410

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 411

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 412

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 413

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 414

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 415

- StringBuilder: amortize allocation by doubling on grow.

## entry 416

- Stable sort matters when a secondary key was set in a prior pass.

## entry 417

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 418

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 419

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 420

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 421

- Walk both pointers from each end inward; advance the smaller side.

## entry 422

- Walk both pointers from each end inward; advance the smaller side.
