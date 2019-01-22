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
