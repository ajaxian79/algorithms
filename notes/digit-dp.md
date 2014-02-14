# digit-dp

## entry 1

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 3

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 4

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 5

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 6

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 7

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 8

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 9

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 10

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 11

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 12

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 13

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 14

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 15

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 16

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 17

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 18

- Splay tree: every access splays to the root; amortized O(log n).

## entry 19

- LIS via patience: each pile holds the smallest tail of length k.

## entry 20

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 21

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 22

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 23

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 24

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 25

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 26

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 27

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 28

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 29

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 30

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 31

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 32

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 33

- LIS via patience: each pile holds the smallest tail of length k.

## entry 34

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 35

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 36

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 37

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 38

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 39

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 40

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 41

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 42

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 43

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 44

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 45

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 46

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 47

- Stable sort matters when a secondary key was set in a prior pass.

## entry 48

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 49

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 50

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 51

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 52

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 53

- Euler tour flattens a tree into an array for range-query LCA.

## entry 54

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 55

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 56

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 57

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 58

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 59

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 60

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 61

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 62

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 63

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 64

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 65

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 66

- Greedy by end-time picks the most non-overlapping intervals.

## entry 67

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 68

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 69

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 70

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 71

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 72

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 73

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 74

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 75

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 76

- Stable sort matters when a secondary key was set in a prior pass.

## entry 77

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 78

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 79

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 80

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 81

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 82

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 83

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 84

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 85

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 86

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 87

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 88

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 89

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 90

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 91

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 92

- Stable sort matters when a secondary key was set in a prior pass.

## entry 93

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 94

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 95

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 96

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 97

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 98

- Splay tree: every access splays to the root; amortized O(log n).

## entry 99

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 100

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 101

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 102

- Heap when you only need top-k; full sort is wasted work.

## entry 103

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 104

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 105

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 106

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 107

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 108

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 109

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 110

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 111

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 112

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 113

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 114

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 115

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 116

- Splay tree: every access splays to the root; amortized O(log n).

## entry 117

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 118

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 119

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 120

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 121

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 122

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 123

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 124

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 125

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 126

- Stable sort matters when a secondary key was set in a prior pass.

## entry 127

- Heap when you only need top-k; full sort is wasted work.

## entry 128

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 129

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 130

- Monotonic stack pops while the new element violates the invariant.

## entry 131

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 132

- LIS via patience: each pile holds the smallest tail of length k.

## entry 133

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 134

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 135

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 136

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 137

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 138

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 139

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 140

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 141

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 142

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 143

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 144

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 145

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 146

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 147

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 148

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 149

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 150

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 151

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 152

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 153

- Heap when you only need top-k; full sort is wasted work.

## entry 154

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 155

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 156

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 157

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 158

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 159

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 160

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 161

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 162

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 163

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 164

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 165

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 166

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 167

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 168

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 169

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 170

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 171

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 172

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 173

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 174

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 175

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 176

- Heap when you only need top-k; full sort is wasted work.

## entry 177

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 178

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 179

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 180

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 181

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 182

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 183

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 184

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 185

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 186

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 187

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 188

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 189

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 190

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 191

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 192

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 193

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 194

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 195

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 196

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 197

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 198

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 199

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 200

- LIS via patience: each pile holds the smallest tail of length k.

## entry 201

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 202

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 203

- StringBuilder: amortize allocation by doubling on grow.

## entry 204

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 205

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 206

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 207

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 208

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 209

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 210

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 211

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 212

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 213

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 214

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 215

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 216

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 217

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 218

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 219

- Greedy by end-time picks the most non-overlapping intervals.

## entry 220

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 221

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 222

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 223

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 224

- Euler tour flattens a tree into an array for range-query LCA.

## entry 225

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 226

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 227

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 228

- Heap when you only need top-k; full sort is wasted work.

## entry 229

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 230

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 231

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 232

- Monotonic stack pops while the new element violates the invariant.

## entry 233

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 234

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 235

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 236

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 237

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 238

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 239

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 240

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 241

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 242

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 243

- Monotonic stack pops while the new element violates the invariant.

## entry 244

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 245

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 246

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 247

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 248

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 249

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 250

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 251

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 252

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 253

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 254

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 255

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 256

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 257

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 258

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 259

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 260

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 261

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 262

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 263

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 264

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 265

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 266

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 267

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 268

- Greedy by end-time picks the most non-overlapping intervals.

## entry 269

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 270

- Greedy by end-time picks the most non-overlapping intervals.

## entry 271

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 272

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 273

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 274

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 275

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 276

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 277

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 278

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 279

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 280

- Splay tree: every access splays to the root; amortized O(log n).

## entry 281

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 282

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 283

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 284

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 285

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 286

- Euler tour flattens a tree into an array for range-query LCA.

## entry 287

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 288

- Splay tree: every access splays to the root; amortized O(log n).

## entry 289

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 290

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 291

- Monotonic stack pops while the new element violates the invariant.

## entry 292

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 293

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 294

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 295

- Monotonic stack pops while the new element violates the invariant.

## entry 296

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 297

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 298

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 299

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 300

- Euler tour flattens a tree into an array for range-query LCA.

## entry 301

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 302

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 303

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 304

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 305

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 306

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 307

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 308

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 309

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 310

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 311

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 312

- Greedy by end-time picks the most non-overlapping intervals.

## entry 313

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 314

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 315

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 316

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 317

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 318

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 319

- Walk both pointers from each end inward; advance the smaller side.

## entry 320

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 321

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 322

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 323

- Splay tree: every access splays to the root; amortized O(log n).

## entry 324

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 325

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 326

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 327

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 328

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 329

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 330

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 331

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 332

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 333

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 334

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 335

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 336

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 337

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 338

- StringBuilder: amortize allocation by doubling on grow.

## entry 339

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 340

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 341

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 342

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 343

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 344

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 345

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 346

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 347

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 348

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 349

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 350

- Euler tour flattens a tree into an array for range-query LCA.

## entry 351

- Monotonic stack pops while the new element violates the invariant.

## entry 352

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 353

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 354

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 355

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 356

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 357

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 358

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 359

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 360

- Euler tour flattens a tree into an array for range-query LCA.

## entry 361

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 362

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 363

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 364

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 365

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 366

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 367

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 368

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 369

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 370

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 371

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 372

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 373

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 374

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 375

- Heap when you only need top-k; full sort is wasted work.

## entry 376

- Euler tour flattens a tree into an array for range-query LCA.

## entry 377

- Greedy by end-time picks the most non-overlapping intervals.

## entry 378

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 379

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 380

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 381

- Monotonic stack pops while the new element violates the invariant.

## entry 382

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 383

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 384

- Walk both pointers from each end inward; advance the smaller side.

## entry 385

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 386

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 387

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 388

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 389

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 390

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 391

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 392

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 393

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 394

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 395

- Walk both pointers from each end inward; advance the smaller side.

## entry 396

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 397

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 398

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 399

- Splay tree: every access splays to the root; amortized O(log n).

## entry 400

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 401

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 402

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 403

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 404

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 405

- Monotonic stack pops while the new element violates the invariant.

## entry 406

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 407

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 408

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 409

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 410

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 411

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 412

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 413

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 414

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 415

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 416

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 417

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 418

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 419

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 420

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 421

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 422

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 423

- Splay tree: every access splays to the root; amortized O(log n).

## entry 424

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 425

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 426

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 427

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 428

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 429

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 430

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 431

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 432

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 433

- Euler tour flattens a tree into an array for range-query LCA.

## entry 434

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 435

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 436

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 437

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 438

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 439

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 440

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 441

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 442

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 443

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 444

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 445

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 446

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 447

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 448

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 449

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 450

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 451

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 452

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 453

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 454

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 455

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 456

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 457

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 458

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 459

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 460

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 461

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 462

- Walk both pointers from each end inward; advance the smaller side.

## entry 463

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 464

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 465

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 466

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 467

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 468

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 469

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 470

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 471

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 472

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 473

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 474

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 475

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 476

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 477

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 478

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 479

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 480

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 481

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 482

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 483

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 484

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 485

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 486

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 487

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 488

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 489

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 490

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 491

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 492

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 493

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 494

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 495

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 496

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 497

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 498

- Euler tour flattens a tree into an array for range-query LCA.

## entry 499

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 500

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 501

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 502

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 503

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 504

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 505

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 506

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 507

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 508

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 509

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 510

- Walk both pointers from each end inward; advance the smaller side.

## entry 511

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 512

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 513

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 514

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 515

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 516

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 517

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 518

- Greedy by end-time picks the most non-overlapping intervals.

## entry 519

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 520

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 521

- LIS via patience: each pile holds the smallest tail of length k.

## entry 522

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 523

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 524

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 525

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 526

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 527

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 528

- Heap when you only need top-k; full sort is wasted work.

## entry 529

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 530

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 531

- Greedy by end-time picks the most non-overlapping intervals.

## entry 532

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 533

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 534

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 535

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 536

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 537

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 538

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 539

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 540

- Heap when you only need top-k; full sort is wasted work.

## entry 541

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 542

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 543

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 544

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 545

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 546

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 547

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 548

- Splay tree: every access splays to the root; amortized O(log n).

## entry 549

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 550

- Splay tree: every access splays to the root; amortized O(log n).

## entry 551

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 552

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 553

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 554

- Walk both pointers from each end inward; advance the smaller side.

## entry 555

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 556

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 557

- Euler tour flattens a tree into an array for range-query LCA.

## entry 558

- Euler tour flattens a tree into an array for range-query LCA.

## entry 559

- Monotonic stack pops while the new element violates the invariant.

## entry 560

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 561

- Unbounded knapsack: capacity inner ascending allows item reuse.
