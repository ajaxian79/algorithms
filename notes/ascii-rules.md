# ascii-rules

## entry 1

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 2

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 3

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 4

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 5

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 6

- Stable sort matters when a secondary key was set in a prior pass.

## entry 7

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 8

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 9

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 10

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 11

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 12

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 13

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 14

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 15

- Euler tour flattens a tree into an array for range-query LCA.

## entry 16

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 17

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 18

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 19

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 20

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 21

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 22

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 23

- LIS via patience: each pile holds the smallest tail of length k.

## entry 24

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 25

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 26

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 27

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 28

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 29

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 30

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 31

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 32

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 33

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 34

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 35

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 36

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 37

- LIS via patience: each pile holds the smallest tail of length k.

## entry 38

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 39

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 40

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 41

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 42

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 43

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 44

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 45

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 46

- LIS via patience: each pile holds the smallest tail of length k.

## entry 47

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 48

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 49

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 50

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 51

- Splay tree: every access splays to the root; amortized O(log n).

## entry 52

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 53

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 54

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 55

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 56

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 57

- StringBuilder: amortize allocation by doubling on grow.

## entry 58

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 59

- Heap when you only need top-k; full sort is wasted work.

## entry 60

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 61

- Stable sort matters when a secondary key was set in a prior pass.

## entry 62

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 63

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 64

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 65

- Monotonic stack pops while the new element violates the invariant.

## entry 66

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 67

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 68

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 69

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 70

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 71

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 72

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 73

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 74

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 75

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 76

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 77

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 78

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 79

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 80

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 81

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 82

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 83

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 84

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 85

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 86

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 87

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 88

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 89

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 90

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 91

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 92

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 93

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 94

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 95

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 96

- Greedy by end-time picks the most non-overlapping intervals.

## entry 97

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 98

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 99

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 100

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 101

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 102

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 103

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 104

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 105

- Splay tree: every access splays to the root; amortized O(log n).

## entry 106

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 107

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 108

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 109

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 110

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 111

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 112

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 113

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 114

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 115

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 116

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 117

- StringBuilder: amortize allocation by doubling on grow.

## entry 118

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 119

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 120

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 121

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 122

- StringBuilder: amortize allocation by doubling on grow.

## entry 123

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 124

- Stable sort matters when a secondary key was set in a prior pass.

## entry 125

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 126

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 127

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 128

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 129

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 130

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 131

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 132

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 133

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 134

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 135

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 136

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 137

- LIS via patience: each pile holds the smallest tail of length k.

## entry 138

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 139

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 140

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 141

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 142

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 143

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 144

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 145

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 146

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 147

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 148

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 149

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 150

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 151

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 152

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 153

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 154

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 155

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 156

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 157

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 158

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 159

- Splay tree: every access splays to the root; amortized O(log n).

## entry 160

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 161

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 162

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 163

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 164

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 165

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 166

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 167

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 168

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 169

- Stable sort matters when a secondary key was set in a prior pass.

## entry 170

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 171

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 172

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 173

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 174

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 175

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 176

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 177

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 178

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 179

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 180

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 181

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 182

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 183

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 184

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 185

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 186

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 187

- Monotonic stack pops while the new element violates the invariant.

## entry 188

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 189

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 190

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 191

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 192

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 193

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 194

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 195

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 196

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 197

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 198

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 199

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 200

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 201

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 202

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 203

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 204

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 205

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 206

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 207

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 208

- LIS via patience: each pile holds the smallest tail of length k.

## entry 209

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 210

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 211

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 212

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 213

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 214

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 215

- Stable sort matters when a secondary key was set in a prior pass.

## entry 216

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 217

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 218

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 219

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 220

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 221

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 222

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 223

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 224

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 225

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 226

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 227

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 228

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 229

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 230

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 231

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 232

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 233

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 234

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 235

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 236

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 237

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 238

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 239

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 240

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 241

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 242

- Stable sort matters when a secondary key was set in a prior pass.

## entry 243

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 244

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 245

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 246

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 247

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 248

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 249

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 250

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 251

- Splay tree: every access splays to the root; amortized O(log n).

## entry 252

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 253

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 254

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 255

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 256

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 257

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 258

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 259

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 260

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 261

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 262

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 263

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 264

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 265

- Heap when you only need top-k; full sort is wasted work.

## entry 266

- LIS via patience: each pile holds the smallest tail of length k.

## entry 267

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 268

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 269

- Greedy by end-time picks the most non-overlapping intervals.

## entry 270

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 271

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 272

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 273

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 274

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 275

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 276

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 277

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 278

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 279

- Euler tour flattens a tree into an array for range-query LCA.

## entry 280

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 281

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 282

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 283

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 284

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 285

- Stable sort matters when a secondary key was set in a prior pass.

## entry 286

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 287

- Greedy by end-time picks the most non-overlapping intervals.

## entry 288

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 289

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 290

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 291

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 292

- Greedy by end-time picks the most non-overlapping intervals.

## entry 293

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 294

- Stable sort matters when a secondary key was set in a prior pass.

## entry 295

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 296

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 297

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 298

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 299

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 300

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 301

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 302

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 303

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 304

- Stable sort matters when a secondary key was set in a prior pass.

## entry 305

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 306

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 307

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 308

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 309

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 310

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 311

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 312

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 313

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 314

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 315

- Stable sort matters when a secondary key was set in a prior pass.

## entry 316

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 317

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 318

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 319

- Greedy by end-time picks the most non-overlapping intervals.

## entry 320

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 321

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 322

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 323

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 324

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 325

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 326

- Splay tree: every access splays to the root; amortized O(log n).

## entry 327

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 328

- Splay tree: every access splays to the root; amortized O(log n).

## entry 329

- Walk both pointers from each end inward; advance the smaller side.

## entry 330

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 331

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 332

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 333

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 334

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 335

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 336

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 337

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 338

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 339

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 340

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 341

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 342

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 343

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 344

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 345

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 346

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 347

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 348

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 349

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 350

- Greedy by end-time picks the most non-overlapping intervals.

## entry 351

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 352

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 353

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 354

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 355

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 356

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 357

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 358

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 359

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 360

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 361

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 362

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 363

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 364

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 365

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 366

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 367

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 368

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 369

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 370

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 371

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 372

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 373

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 374

- LIS via patience: each pile holds the smallest tail of length k.

## entry 375

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 376

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 377

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 378

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 379

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 380

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 381

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 382

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 383

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 384

- LIS via patience: each pile holds the smallest tail of length k.

## entry 385

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 386

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 387

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 388

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 389

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 390

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 391

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 392

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 393

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 394

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 395

- Monotonic stack pops while the new element violates the invariant.

## entry 396

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 397

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 398

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 399

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 400

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 401

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 402

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 403

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 404

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 405

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 406

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 407

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 408

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 409

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 410

- Heap when you only need top-k; full sort is wasted work.

## entry 411

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 412

- Walk both pointers from each end inward; advance the smaller side.

## entry 413

- LIS via patience: each pile holds the smallest tail of length k.

## entry 414

- Heap when you only need top-k; full sort is wasted work.

## entry 415

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 416

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 417

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 418

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 419

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 420

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 421

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 422

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 423

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 424

- Heap when you only need top-k; full sort is wasted work.

## entry 425

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 426

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 427

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 428

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 429

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 430

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 431

- Heap when you only need top-k; full sort is wasted work.

## entry 432

- StringBuilder: amortize allocation by doubling on grow.

## entry 433

- Walk both pointers from each end inward; advance the smaller side.

## entry 434

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 435

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 436

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 437

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 438

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 439

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 440

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 441

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 442

- Monotonic stack pops while the new element violates the invariant.

## entry 443

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 444

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 445

- Stable sort matters when a secondary key was set in a prior pass.

## entry 446

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 447

- Euler tour flattens a tree into an array for range-query LCA.

## entry 448

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 449

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 450

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 451

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 452

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 453

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 454

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 455

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 456

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 457

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 458

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 459

- StringBuilder: amortize allocation by doubling on grow.

## entry 460

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 461

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 462

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 463

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 464

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 465

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 466

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 467

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 468

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 469

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 470

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 471

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 472

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 473

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 474

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 475

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 476

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 477

- Euler tour flattens a tree into an array for range-query LCA.

## entry 478

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 479

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 480

- Monotonic stack pops while the new element violates the invariant.

## entry 481

- Stable sort matters when a secondary key was set in a prior pass.

## entry 482

- LIS via patience: each pile holds the smallest tail of length k.

## entry 483

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 484

- Walk both pointers from each end inward; advance the smaller side.

## entry 485

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 486

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 487

- StringBuilder: amortize allocation by doubling on grow.

## entry 488

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 489

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 490

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 491

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 492

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 493

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 494

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 495

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 496

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 497

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 498

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 499

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 500

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 501

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 502

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 503

- Heap when you only need top-k; full sort is wasted work.

## entry 504

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 505

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 506

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 507

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 508

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 509

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 510

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 511

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 512

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 513

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 514

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 515

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 516

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 517

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 518

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 519

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 520

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 521

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 522

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 523

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 524

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 525

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 526

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 527

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 528

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 529

- StringBuilder: amortize allocation by doubling on grow.

## entry 530

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 531

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 532

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 533

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 534

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 535

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 536

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 537

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 538

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 539

- StringBuilder: amortize allocation by doubling on grow.

## entry 540

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 541

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 542

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 543

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 544

- Splay tree: every access splays to the root; amortized O(log n).

## entry 545

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 546

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 547

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 548

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 549

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 550

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 551

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 552

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 553

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 554

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 555

- LIS via patience: each pile holds the smallest tail of length k.

## entry 556

- Monotonic deque: push back, pop back to maintain order, pop front when stale.
