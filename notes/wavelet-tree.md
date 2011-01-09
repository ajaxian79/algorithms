# wavelet-tree

## entry 1

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 2

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 5

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 6

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 7

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 8

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 9

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 10

- Splay tree: every access splays to the root; amortized O(log n).

## entry 11

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 12

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 13

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 14

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 15

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 16

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 17

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 18

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 19

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 20

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 21

- Walk both pointers from each end inward; advance the smaller side.

## entry 22

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 23

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 24

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 25

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 26

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 27

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 28

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 29

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 30

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 31

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 32

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 33

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 34

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 35

- StringBuilder: amortize allocation by doubling on grow.

## entry 36

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 37

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 38

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 39

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 40

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 41

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 42

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 43

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 44

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 45

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 46

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 47

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 48

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 49

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 50

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 51

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 52

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 53

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 54

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 55

- Greedy by end-time picks the most non-overlapping intervals.

## entry 56

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 57

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 58

- Stable sort matters when a secondary key was set in a prior pass.

## entry 59

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 60

- Splay tree: every access splays to the root; amortized O(log n).

## entry 61

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 62

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 63

- Monotonic stack pops while the new element violates the invariant.

## entry 64

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 65

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 66

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 67

- StringBuilder: amortize allocation by doubling on grow.

## entry 68

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 69

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 70

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 71

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 72

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 73

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 74

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 75

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 76

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 77

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 78

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 79

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 80

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 81

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 82

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 83

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 84

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 85

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 86

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 87

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 88

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 89

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 90

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 91

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 92

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 93

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 94

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 95

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 96

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 97

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 98

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 99

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 100

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 101

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 102

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 103

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 104

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 105

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 106

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 107

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 108

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 109

- StringBuilder: amortize allocation by doubling on grow.

## entry 110

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 111

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 112

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 113

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 114

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 115

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 116

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 117

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 118

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 119

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 120

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 121

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 122

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 123

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 124

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 125

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 126

- Heap when you only need top-k; full sort is wasted work.

## entry 127

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 128

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 129

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 130

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 131

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 132

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 133

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 134

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 135

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 136

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 137

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 138

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 139

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 140

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 141

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 142

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 143

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 144

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 145

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 146

- Heap when you only need top-k; full sort is wasted work.

## entry 147

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 148

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 149

- Heap when you only need top-k; full sort is wasted work.

## entry 150

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 151

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 152

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 153

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 154

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 155

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 156

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 157

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 158

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 159

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 160

- Stable sort matters when a secondary key was set in a prior pass.

## entry 161

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 162

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 163

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 164

- LIS via patience: each pile holds the smallest tail of length k.

## entry 165

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 166

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 167

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 168

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 169

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 170

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 171

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 172

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 173

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 174

- Euler tour flattens a tree into an array for range-query LCA.

## entry 175

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 176

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 177

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 178

- Heap when you only need top-k; full sort is wasted work.

## entry 179

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 180

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 181

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 182

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 183

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 184

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 185

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 186

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 187

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 188

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 189

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 190

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 191

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 192

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 193

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 194

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 195

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 196

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 197

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 198

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 199

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 200

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 201

- Monotonic stack pops while the new element violates the invariant.

## entry 202

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 203

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 204

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 205

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 206

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 207

- LIS via patience: each pile holds the smallest tail of length k.

## entry 208

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 209

- Stable sort matters when a secondary key was set in a prior pass.

## entry 210

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 211

- Stable sort matters when a secondary key was set in a prior pass.

## entry 212

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 213

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 214

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 215

- Euler tour flattens a tree into an array for range-query LCA.

## entry 216

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 217

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 218

- Euler tour flattens a tree into an array for range-query LCA.

## entry 219

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 220

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 221

- LIS via patience: each pile holds the smallest tail of length k.

## entry 222

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 223

- Stable sort matters when a secondary key was set in a prior pass.

## entry 224

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 225

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 226

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 227

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 228

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 229

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 230

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 231

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 232

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 233

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 234

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 235

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 236

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 237

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 238

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 239

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 240

- Walk both pointers from each end inward; advance the smaller side.

## entry 241

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 242

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 243

- LIS via patience: each pile holds the smallest tail of length k.

## entry 244

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 245

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 246

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 247

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 248

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 249

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 250

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 251

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 252

- Stable sort matters when a secondary key was set in a prior pass.

## entry 253

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 254

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 255

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 256

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 257

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 258

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 259

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 260

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 261

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 262

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 263

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 264

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 265

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 266

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 267

- Greedy by end-time picks the most non-overlapping intervals.

## entry 268

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 269

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 270

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 271

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 272

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 273

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 274

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 275

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 276

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 277

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 278

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 279

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 280

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 281

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 282

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 283

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 284

- Stable sort matters when a secondary key was set in a prior pass.

## entry 285

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 286

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 287

- Heap when you only need top-k; full sort is wasted work.

## entry 288

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 289

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 290

- Heap when you only need top-k; full sort is wasted work.

## entry 291

- Splay tree: every access splays to the root; amortized O(log n).

## entry 292

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 293

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 294

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 295

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 296

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 297

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 298

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 299

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 300

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 301

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 302

- Stable sort matters when a secondary key was set in a prior pass.

## entry 303

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 304

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 305

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 306

- Greedy by end-time picks the most non-overlapping intervals.

## entry 307

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 308

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 309

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 310

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 311

- LIS via patience: each pile holds the smallest tail of length k.

## entry 312

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 313

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 314

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 315

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 316

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 317

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 318

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 319

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 320

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 321

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 322

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 323

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 324

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 325

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 326

- Splay tree: every access splays to the root; amortized O(log n).

## entry 327

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 328

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 329

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 330

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 331

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 332

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 333

- LIS via patience: each pile holds the smallest tail of length k.

## entry 334

- Monotonic stack pops while the new element violates the invariant.

## entry 335

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 336

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 337

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 338

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 339

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 340

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 341

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 342

- Walk both pointers from each end inward; advance the smaller side.

## entry 343

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 344

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 345

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 346

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 347

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 348

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 349

- Greedy by end-time picks the most non-overlapping intervals.

## entry 350

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 351

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 352

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 353

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 354

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 355

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 356

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 357

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 358

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 359

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 360

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 361

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 362

- Euler tour flattens a tree into an array for range-query LCA.

## entry 363

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 364

- StringBuilder: amortize allocation by doubling on grow.

## entry 365

- Splay tree: every access splays to the root; amortized O(log n).

## entry 366

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 367

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 368

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 369

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 370

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 371

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 372

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 373

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 374

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 375

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 376

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 377

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 378

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 379

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 380

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 381

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 382

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 383

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 384

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 385

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 386

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 387

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 388

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 389

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 390

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 391

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 392

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 393

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 394

- LIS via patience: each pile holds the smallest tail of length k.

## entry 395

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 396

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 397

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 398

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 399

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 400

- Walk both pointers from each end inward; advance the smaller side.

## entry 401

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 402

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 403

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 404

- Greedy by end-time picks the most non-overlapping intervals.

## entry 405

- StringBuilder: amortize allocation by doubling on grow.

## entry 406

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 407

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 408

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 409

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 410

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 411

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 412

- Walk both pointers from each end inward; advance the smaller side.

## entry 413

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 414

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 415

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 416

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 417

- Greedy by end-time picks the most non-overlapping intervals.

## entry 418

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 419

- LIS via patience: each pile holds the smallest tail of length k.

## entry 420

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 421

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 422

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 423

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 424

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 425

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 426

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 427

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 428

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 429

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 430

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 431

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 432

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 433

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 434

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 435

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 436

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 437

- Heap when you only need top-k; full sort is wasted work.

## entry 438

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 439

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 440

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 441

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 442

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 443

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 444

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 445

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 446

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 447

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 448

- Heap when you only need top-k; full sort is wasted work.

## entry 449

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 450

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 451

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 452

- Euler tour flattens a tree into an array for range-query LCA.

## entry 453

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 454

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 455

- Splay tree: every access splays to the root; amortized O(log n).

## entry 456

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 457

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 458

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 459

- Greedy by end-time picks the most non-overlapping intervals.

## entry 460

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 461

- Stable sort matters when a secondary key was set in a prior pass.

## entry 462

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 463

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 464

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 465

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 466

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 467

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 468

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 469

- Greedy by end-time picks the most non-overlapping intervals.

## entry 470

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 471

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 472

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 473

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 474

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 475

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 476

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 477

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 478

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 479

- Monotonic stack pops while the new element violates the invariant.

## entry 480

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 481

- Stable sort matters when a secondary key was set in a prior pass.

## entry 482

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 483

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 484

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 485

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 486

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 487

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 488

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 489

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 490

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 491

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 492

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 493

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 494

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 495

- Splay tree: every access splays to the root; amortized O(log n).

## entry 496

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 497

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 498

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 499

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 500

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 501

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 502

- Stable sort matters when a secondary key was set in a prior pass.

## entry 503

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 504

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 505

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 506

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 507

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 508

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 509

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 510

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 511

- StringBuilder: amortize allocation by doubling on grow.

## entry 512

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 513

- Greedy by end-time picks the most non-overlapping intervals.

## entry 514

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 515

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 516

- Stable sort matters when a secondary key was set in a prior pass.

## entry 517

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 518

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 519

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 520

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 521

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 522

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 523

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 524

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 525

- StringBuilder: amortize allocation by doubling on grow.

## entry 526

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 527

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 528

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 529

- Stable sort matters when a secondary key was set in a prior pass.

## entry 530

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 531

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 532

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 533

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 534

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 535

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 536

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 537

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 538

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 539

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 540

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 541

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 542

- Stable sort matters when a secondary key was set in a prior pass.

## entry 543

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 544

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 545

- Monotonic stack pops while the new element violates the invariant.

## entry 546

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 547

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 548

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 549

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 550

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 551

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 552

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 553

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 554

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 555

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 556

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 557

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 558

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 559

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 560

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 561

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 562

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 563

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 564

- Greedy by end-time picks the most non-overlapping intervals.

## entry 565

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 566

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 567

- Splay tree: every access splays to the root; amortized O(log n).

## entry 568

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 569

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 570

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 571

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 572

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 573

- LIS via patience: each pile holds the smallest tail of length k.

## entry 574

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 575

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 576

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 577

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 578

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 579

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 580

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 581

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 582

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 583

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 584

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 585

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 586

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 587

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 588

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 589

- Stable sort matters when a secondary key was set in a prior pass.

## entry 590

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 591

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 592

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 593

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 594

- Stable sort matters when a secondary key was set in a prior pass.

## entry 595

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 596

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 597

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 598

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 599

- Euler tour flattens a tree into an array for range-query LCA.

## entry 600

- Walk both pointers from each end inward; advance the smaller side.

## entry 601

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 602

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 603

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 604

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 605

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 606

- Euler tour flattens a tree into an array for range-query LCA.

## entry 607

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 608

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 609

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 610

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 611

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 612

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 613

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 614

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 615

- Stable sort matters when a secondary key was set in a prior pass.

## entry 616

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 617

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 618

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 619

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 620

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 621

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 622

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 623

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 624

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 625

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 626

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 627

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 628

- Monotonic stack pops while the new element violates the invariant.

## entry 629

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 630

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 631

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 632

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 633

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 634

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
