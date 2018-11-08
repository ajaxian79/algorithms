# articulation-points

## entry 1

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 2

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 3

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 4

- Splay tree: every access splays to the root; amortized O(log n).

## entry 5

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 6

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 7

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 8

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 9

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 10

- StringBuilder: amortize allocation by doubling on grow.

## entry 11

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 12

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 13

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 14

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 15

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 16

- Walk both pointers from each end inward; advance the smaller side.

## entry 17

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 18

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 19

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 20

- Euler tour flattens a tree into an array for range-query LCA.

## entry 21

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 22

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 23

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 24

- Greedy by end-time picks the most non-overlapping intervals.

## entry 25

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 26

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 27

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 28

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 29

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 30

- Splay tree: every access splays to the root; amortized O(log n).

## entry 31

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 32

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 33

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 34

- Euler tour flattens a tree into an array for range-query LCA.

## entry 35

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 36

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 37

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 38

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 39

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 40

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 41

- Greedy by end-time picks the most non-overlapping intervals.

## entry 42

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 43

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 44

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 45

- Walk both pointers from each end inward; advance the smaller side.

## entry 46

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 47

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 48

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 49

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 50

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 51

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 52

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 53

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 54

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 55

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 56

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 57

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 58

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 59

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 60

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 61

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 62

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 63

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 64

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 65

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 66

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 67

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 68

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 69

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 70

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 71

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 72

- Monotonic stack pops while the new element violates the invariant.

## entry 73

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 74

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 75

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 76

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 77

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 78

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 79

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 80

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 81

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 82

- LIS via patience: each pile holds the smallest tail of length k.

## entry 83

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 84

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 85

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 86

- StringBuilder: amortize allocation by doubling on grow.

## entry 87

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 88

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 89

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 90

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 91

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 92

- Walk both pointers from each end inward; advance the smaller side.

## entry 93

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 94

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 95

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 96

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 97

- Walk both pointers from each end inward; advance the smaller side.

## entry 98

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 99

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 100

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 101

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 102

- Monotonic stack pops while the new element violates the invariant.

## entry 103

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 104

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 105

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 106

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 107

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 108

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 109

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 110

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 111

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 112

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 113

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 114

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 115

- LIS via patience: each pile holds the smallest tail of length k.

## entry 116

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 117

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 118

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 119

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 120

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 121

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 122

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 123

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 124

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 125

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 126

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 127

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 128

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 129

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 130

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 131

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 132

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 133

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 134

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 135

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 136

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 137

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 138

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 139

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 140

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 141

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 142

- LIS via patience: each pile holds the smallest tail of length k.

## entry 143

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 144

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 145

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 146

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 147

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 148

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 149

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 150

- Greedy by end-time picks the most non-overlapping intervals.

## entry 151

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 152

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 153

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 154

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 155

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 156

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 157

- LIS via patience: each pile holds the smallest tail of length k.

## entry 158

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 159

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 160

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 161

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 162

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 163

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 164

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 165

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 166

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 167

- Stable sort matters when a secondary key was set in a prior pass.

## entry 168

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 169

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 170

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 171

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 172

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 173

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 174

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 175

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 176

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 177

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 178

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 179

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 180

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 181

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 182

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 183

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 184

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 185

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 186

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 187

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 188

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 189

- StringBuilder: amortize allocation by doubling on grow.

## entry 190

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 191

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 192

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 193

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 194

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 195

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 196

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 197

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 198

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 199

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 200

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 201

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 202

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 203

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 204

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 205

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 206

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 207

- Splay tree: every access splays to the root; amortized O(log n).

## entry 208

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 209

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 210

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 211

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 212

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 213

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 214

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 215

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 216

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 217

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 218

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 219

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 220

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 221

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 222

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 223

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 224

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 225

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 226

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 227

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 228

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 229

- Euler tour flattens a tree into an array for range-query LCA.

## entry 230

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 231

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 232

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 233

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 234

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 235

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 236

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 237

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 238

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 239

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 240

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 241

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 242

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 243

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 244

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 245

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 246

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 247

- Greedy by end-time picks the most non-overlapping intervals.

## entry 248

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 249

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 250

- Monotonic stack pops while the new element violates the invariant.

## entry 251

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 252

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 253

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 254

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 255

- Heap when you only need top-k; full sort is wasted work.

## entry 256

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 257

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 258

- LIS via patience: each pile holds the smallest tail of length k.

## entry 259

- Heap when you only need top-k; full sort is wasted work.

## entry 260

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 261

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 262

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 263

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 264

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 265

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 266

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 267

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 268

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 269

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 270

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 271

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 272

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 273

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 274

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 275

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 276

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 277

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 278

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 279

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 280

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 281

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 282

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 283

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 284

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 285

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 286

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 287

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 288

- LIS via patience: each pile holds the smallest tail of length k.

## entry 289

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 290

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 291

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 292

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 293

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 294

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 295

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 296

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 297

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 298

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 299

- Euler tour flattens a tree into an array for range-query LCA.

## entry 300

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 301

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 302

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 303

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 304

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 305

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 306

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 307

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 308

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 309

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 310

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 311

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 312

- Greedy by end-time picks the most non-overlapping intervals.

## entry 313

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 314

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 315

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 316

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 317

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 318

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 319

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 320

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 321

- Walk both pointers from each end inward; advance the smaller side.

## entry 322

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 323

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 324

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 325

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 326

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 327

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 328

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 329

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 330

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 331

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 332

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 333

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 334

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 335

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 336

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 337

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 338

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 339

- Greedy by end-time picks the most non-overlapping intervals.

## entry 340

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 341

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 342

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 343

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 344

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 345

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 346

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 347

- LCA via binary lifting: jump up powers of two until depths match, then converge.
