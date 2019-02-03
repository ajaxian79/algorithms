# lca

## entry 1

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 2

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 4

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 6

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 7

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 8

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 9

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 10

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 11

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 12

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 13

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 14

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 15

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 16

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 17

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 18

- Stable sort matters when a secondary key was set in a prior pass.

## entry 19

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 20

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 21

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 22

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 23

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 24

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 25

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 26

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 27

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 28

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 29

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 30

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 31

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 32

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 33

- Splay tree: every access splays to the root; amortized O(log n).

## entry 34

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 35

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 36

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 37

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 38

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 39

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 40

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 41

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 42

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 43

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 44

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 45

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 46

- StringBuilder: amortize allocation by doubling on grow.

## entry 47

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 48

- Greedy by end-time picks the most non-overlapping intervals.

## entry 49

- Splay tree: every access splays to the root; amortized O(log n).

## entry 50

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 51

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 52

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 53

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 54

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 55

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 56

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 57

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 58

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 59

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 60

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 61

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 62

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 63

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 64

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 65

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 66

- StringBuilder: amortize allocation by doubling on grow.

## entry 67

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 68

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 69

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 70

- Greedy by end-time picks the most non-overlapping intervals.

## entry 71

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 72

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 73

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 74

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 75

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 76

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 77

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 78

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 79

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 80

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 81

- Greedy by end-time picks the most non-overlapping intervals.

## entry 82

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 83

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 84

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 85

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 86

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 87

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 88

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 89

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 90

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 91

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 92

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 93

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 94

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 95

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 96

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 97

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 98

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 99

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 100

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 101

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 102

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 103

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 104

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 105

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 106

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 107

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 108

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 109

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 110

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 111

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 112

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 113

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 114

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 115

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 116

- Stable sort matters when a secondary key was set in a prior pass.

## entry 117

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 118

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 119

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 120

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 121

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 122

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 123

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 124

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 125

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 126

- LIS via patience: each pile holds the smallest tail of length k.

## entry 127

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 128

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 129

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 130

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 131

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 132

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 133

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 134

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 135

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 136

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 137

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 138

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 139

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 140

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 141

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 142

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 143

- Stable sort matters when a secondary key was set in a prior pass.

## entry 144

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 145

- LIS via patience: each pile holds the smallest tail of length k.

## entry 146

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 147

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 148

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 149

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 150

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 151

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 152

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 153

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 154

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 155

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 156

- Monotonic stack pops while the new element violates the invariant.

## entry 157

- Walk both pointers from each end inward; advance the smaller side.

## entry 158

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 159

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 160

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 161

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 162

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 163

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 164

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 165

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 166

- Stable sort matters when a secondary key was set in a prior pass.

## entry 167

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 168

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 169

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 170

- Stable sort matters when a secondary key was set in a prior pass.

## entry 171

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 172

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 173

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 174

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 175

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 176

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 177

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 178

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 179

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 180

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 181

- Heap when you only need top-k; full sort is wasted work.

## entry 182

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 183

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 184

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 185

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 186

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 187

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 188

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 189

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 190

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 191

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 192

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 193

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 194

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 195

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 196

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 197

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 198

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 199

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 200

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 201

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 202

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 203

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 204

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 205

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 206

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 207

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 208

- Greedy by end-time picks the most non-overlapping intervals.

## entry 209

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 210

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 211

- Heap when you only need top-k; full sort is wasted work.

## entry 212

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 213

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 214

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 215

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 216

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 217

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 218

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 219

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 220

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 221

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 222

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 223

- Walk both pointers from each end inward; advance the smaller side.

## entry 224

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 225

- StringBuilder: amortize allocation by doubling on grow.

## entry 226

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 227

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 228

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 229

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 230

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 231

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 232

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 233

- Splay tree: every access splays to the root; amortized O(log n).

## entry 234

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 235

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 236

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 237

- Splay tree: every access splays to the root; amortized O(log n).

## entry 238

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 239

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 240

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 241

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 242

- Euler tour flattens a tree into an array for range-query LCA.

## entry 243

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 244

- StringBuilder: amortize allocation by doubling on grow.

## entry 245

- Heap when you only need top-k; full sort is wasted work.

## entry 246

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 247

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 248

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 249

- Euler tour flattens a tree into an array for range-query LCA.

## entry 250

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 251

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 252

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 253

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 254

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 255

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 256

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 257

- Walk both pointers from each end inward; advance the smaller side.

## entry 258

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 259

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 260

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 261

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 262

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 263

- Heap when you only need top-k; full sort is wasted work.

## entry 264

- Splay tree: every access splays to the root; amortized O(log n).

## entry 265

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 266

- LIS via patience: each pile holds the smallest tail of length k.

## entry 267

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 268

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 269

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 270

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 271

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 272

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 273

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 274

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 275

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 276

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 277

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 278

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 279

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 280

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 281

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 282

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 283

- Walk both pointers from each end inward; advance the smaller side.

## entry 284

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 285

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 286

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 287

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 288

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 289

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 290

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 291

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 292

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 293

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 294

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 295

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 296

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 297

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 298

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 299

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 300

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 301

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 302

- Heap when you only need top-k; full sort is wasted work.

## entry 303

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 304

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 305

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 306

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 307

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 308

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 309

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 310

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 311

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 312

- Heap when you only need top-k; full sort is wasted work.

## entry 313

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 314

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 315

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 316

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 317

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 318

- LIS via patience: each pile holds the smallest tail of length k.

## entry 319

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 320

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 321

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 322

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 323

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 324

- LIS via patience: each pile holds the smallest tail of length k.

## entry 325

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 326

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 327

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 328

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 329

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 330

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 331

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 332

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 333

- Euler tour flattens a tree into an array for range-query LCA.

## entry 334

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 335

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 336

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 337

- Polynomial rolling hash with two moduli kills almost all collisions in practice.
