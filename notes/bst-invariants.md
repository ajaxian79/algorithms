# bst-invariants

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Monotonic stack pops while the new element violates the invariant.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Walk both pointers from each end inward; advance the smaller side.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Heap when you only need top-k; full sort is wasted work.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Stable sort matters when a secondary key was set in a prior pass.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- LIS via patience: each pile holds the smallest tail of length k.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Greedy by end-time picks the most non-overlapping intervals.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 1

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 2

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 3

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 4

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 5

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 6

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 7

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 8

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 9

- Greedy by end-time picks the most non-overlapping intervals.

## entry 10

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 11

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 12

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 13

- StringBuilder: amortize allocation by doubling on grow.

## entry 14

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 15

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 16

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 17

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 18

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 19

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 20

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 21

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 22

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 23

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 24

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 25

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 26

- Stable sort matters when a secondary key was set in a prior pass.

## entry 27

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 28

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 29

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 30

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 31

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 32

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 33

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 34

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 35

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 36

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 37

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 38

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 39

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 40

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 41

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 42

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 43

- LIS via patience: each pile holds the smallest tail of length k.

## entry 44

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 45

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 46

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 47

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 48

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 49

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 50

- Walk both pointers from each end inward; advance the smaller side.

## entry 51

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 52

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 53

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 54

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 55

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 56

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 57

- Stable sort matters when a secondary key was set in a prior pass.

## entry 58

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 59

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 60

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 61

- Stable sort matters when a secondary key was set in a prior pass.

## entry 62

- Splay tree: every access splays to the root; amortized O(log n).

## entry 63

- Heap when you only need top-k; full sort is wasted work.

## entry 64

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 65

- StringBuilder: amortize allocation by doubling on grow.

## entry 66

- Heap when you only need top-k; full sort is wasted work.

## entry 67

- Greedy by end-time picks the most non-overlapping intervals.

## entry 68

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 69

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 70

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 71

- Monotonic stack pops while the new element violates the invariant.

## entry 72

- Stable sort matters when a secondary key was set in a prior pass.

## entry 73

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 74

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 75

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 76

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 77

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 78

- StringBuilder: amortize allocation by doubling on grow.

## entry 79

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 80

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 81

- Heap when you only need top-k; full sort is wasted work.

## entry 82

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 83

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 84

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 85

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 86

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 87

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 88

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 89

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 90

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 91

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 92

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 93

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 94

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 95

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 96

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 97

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 98

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 99

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 100

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 101

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 102

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 103

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 104

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 105

- StringBuilder: amortize allocation by doubling on grow.

## entry 106

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 107

- Walk both pointers from each end inward; advance the smaller side.

## entry 108

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 109

- Heap when you only need top-k; full sort is wasted work.

## entry 110

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 111

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 112

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 113

- Greedy by end-time picks the most non-overlapping intervals.

## entry 114

- LIS via patience: each pile holds the smallest tail of length k.

## entry 115

- Euler tour flattens a tree into an array for range-query LCA.

## entry 116

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 117

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 118

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 119

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 120

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 121

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 122

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 123

- Splay tree: every access splays to the root; amortized O(log n).

## entry 124

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 125

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 126

- StringBuilder: amortize allocation by doubling on grow.

## entry 127

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 128

- LIS via patience: each pile holds the smallest tail of length k.

## entry 129

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 130

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 131

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 132

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 133

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 134

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 135

- Splay tree: every access splays to the root; amortized O(log n).

## entry 136

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 137

- Walk both pointers from each end inward; advance the smaller side.

## entry 138

- Monotonic stack pops while the new element violates the invariant.

## entry 139

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 140

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 141

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 142

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 143

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 144

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 145

- Splay tree: every access splays to the root; amortized O(log n).

## entry 146

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 147

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 148

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 149

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 150

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 151

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 152

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 153

- Walk both pointers from each end inward; advance the smaller side.

## entry 154

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 155

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 156

- Splay tree: every access splays to the root; amortized O(log n).

## entry 157

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 158

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 159

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 160

- Greedy by end-time picks the most non-overlapping intervals.

## entry 161

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 162

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 163

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 164

- Stable sort matters when a secondary key was set in a prior pass.

## entry 165

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 166

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 167

- LIS via patience: each pile holds the smallest tail of length k.

## entry 168

- LIS via patience: each pile holds the smallest tail of length k.

## entry 169

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 170

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 171

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 172

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 173

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 174

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 175

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 176

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 177

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 178

- LIS via patience: each pile holds the smallest tail of length k.

## entry 179

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 180

- Monotonic stack pops while the new element violates the invariant.

## entry 181

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 182

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 183

- Splay tree: every access splays to the root; amortized O(log n).

## entry 184

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 185

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 186

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 187

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 188

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 189

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 190

- Euler tour flattens a tree into an array for range-query LCA.

## entry 191

- LIS via patience: each pile holds the smallest tail of length k.

## entry 192

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 193

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 194

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 195

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 196

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 197

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 198

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 199

- Heap when you only need top-k; full sort is wasted work.

## entry 200

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 201

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 202

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 203

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 204

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 205

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 206

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 207

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 208

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 209

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 210

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 211

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 212

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 213

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 214

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 215

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 216

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 217

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 218

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 219

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 220

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 221

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 222

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 223

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 224

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 225

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 226

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 227

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 228

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 229

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 230

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 231

- Splay tree: every access splays to the root; amortized O(log n).

## entry 232

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 233

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 234

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 235

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 236

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 237

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 238

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 239

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 240

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 241

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 242

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 243

- Greedy by end-time picks the most non-overlapping intervals.

## entry 244

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 245

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 246

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 247

- Stable sort matters when a secondary key was set in a prior pass.

## entry 248

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 249

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 250

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 251

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 252

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 253

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 254

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 255

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 256

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 257

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 258

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 259

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 260

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 261

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 262

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 263

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 264

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 265

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 266

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 267

- Greedy by end-time picks the most non-overlapping intervals.

## entry 268

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 269

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 270

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 271

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 272

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 273

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 274

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 275

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 276

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 277

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 278

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 279

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 280

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 281

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 282

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 283

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 284

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 285

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 286

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 287

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 288

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 289

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 290

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 291

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 292

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 293

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 294

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 295

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 296

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 297

- Greedy by end-time picks the most non-overlapping intervals.

## entry 298

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 299

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 300

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 301

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 302

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 303

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 304

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 305

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 306

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 307

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 308

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 309

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 310

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 311

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 312

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 313

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 314

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 315

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 316

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 317

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 318

- LIS via patience: each pile holds the smallest tail of length k.

## entry 319

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 320

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 321

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 322

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 323

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 324

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 325

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 326

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 327

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 328

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 329

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 330

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 331

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 332

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 333

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 334

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 335

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 336

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
