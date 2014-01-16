# false-sharing

## entry 1

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 2

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 3

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 4

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 5

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 6

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 7

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 8

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 9

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 10

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 11

- Splay tree: every access splays to the root; amortized O(log n).

## entry 12

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 13

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 14

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 15

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 16

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 17

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 18

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 19

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 20

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 21

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 22

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 23

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 24

- Splay tree: every access splays to the root; amortized O(log n).

## entry 25

- Euler tour flattens a tree into an array for range-query LCA.

## entry 26

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 27

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 28

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 29

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 30

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 31

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 32

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 33

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 34

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 35

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 36

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 37

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 38

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 39

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 40

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 41

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 42

- LIS via patience: each pile holds the smallest tail of length k.

## entry 43

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 44

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 45

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 46

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 47

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 48

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 49

- Splay tree: every access splays to the root; amortized O(log n).

## entry 50

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 51

- Walk both pointers from each end inward; advance the smaller side.

## entry 52

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 53

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 54

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 55

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 56

- LIS via patience: each pile holds the smallest tail of length k.

## entry 57

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 58

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 59

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 60

- Euler tour flattens a tree into an array for range-query LCA.

## entry 61

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 62

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 63

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 64

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 65

- Monotonic stack pops while the new element violates the invariant.

## entry 66

- Euler tour flattens a tree into an array for range-query LCA.

## entry 67

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 68

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 69

- Splay tree: every access splays to the root; amortized O(log n).

## entry 70

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 71

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 72

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 73

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 74

- Stable sort matters when a secondary key was set in a prior pass.

## entry 75

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 76

- Euler tour flattens a tree into an array for range-query LCA.

## entry 77

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 78

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 79

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 80

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 81

- Walk both pointers from each end inward; advance the smaller side.

## entry 82

- Stable sort matters when a secondary key was set in a prior pass.

## entry 83

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 84

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 85

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 86

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 87

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 88

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 89

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 90

- Euler tour flattens a tree into an array for range-query LCA.

## entry 91

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 92

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 93

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 94

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 95

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 96

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 97

- Walk both pointers from each end inward; advance the smaller side.

## entry 98

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 99

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 100

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 101

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 102

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 103

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 104

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 105

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 106

- Walk both pointers from each end inward; advance the smaller side.

## entry 107

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 108

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 109

- Stable sort matters when a secondary key was set in a prior pass.

## entry 110

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 111

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 112

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 113

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 114

- Heap when you only need top-k; full sort is wasted work.

## entry 115

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 116

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 117

- Euler tour flattens a tree into an array for range-query LCA.

## entry 118

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 119

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 120

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 121

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 122

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 123

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 124

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 125

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 126

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 127

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 128

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 129

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 130

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 131

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 132

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 133

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 134

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 135

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 136

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 137

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 138

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 139

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 140

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 141

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 142

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 143

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 144

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 145

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 146

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 147

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 148

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 149

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 150

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 151

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 152

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 153

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 154

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 155

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 156

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 157

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 158

- Walk both pointers from each end inward; advance the smaller side.

## entry 159

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 160

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 161

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 162

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 163

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 164

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 165

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 166

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 167

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 168

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 169

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 170

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 171

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 172

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 173

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 174

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 175

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 176

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 177

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 178

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 179

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 180

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 181

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 182

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 183

- StringBuilder: amortize allocation by doubling on grow.

## entry 184

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 185

- Heap when you only need top-k; full sort is wasted work.

## entry 186

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 187

- StringBuilder: amortize allocation by doubling on grow.

## entry 188

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 189

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 190

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 191

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 192

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 193

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 194

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 195

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 196

- Greedy by end-time picks the most non-overlapping intervals.

## entry 197

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 198

- Monotonic stack pops while the new element violates the invariant.

## entry 199

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 200

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 201

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 202

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 203

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 204

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 205

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 206

- Stable sort matters when a secondary key was set in a prior pass.

## entry 207

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 208

- Euler tour flattens a tree into an array for range-query LCA.

## entry 209

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 210

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 211

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 212

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 213

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 214

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 215

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 216

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 217

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 218

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 219

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 220

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 221

- Monotonic stack pops while the new element violates the invariant.

## entry 222

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 223

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 224

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 225

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 226

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 227

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 228

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 229

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 230

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 231

- Walk both pointers from each end inward; advance the smaller side.

## entry 232

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 233

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 234

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 235

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 236

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 237

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 238

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 239

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 240

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 241

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 242

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 243

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 244

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 245

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 246

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 247

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 248

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 249

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 250

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 251

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 252

- Euler tour flattens a tree into an array for range-query LCA.

## entry 253

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 254

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 255

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 256

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 257

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 258

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 259

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 260

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 261

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 262

- Heap when you only need top-k; full sort is wasted work.

## entry 263

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 264

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 265

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 266

- Splay tree: every access splays to the root; amortized O(log n).

## entry 267

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 268

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 269

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 270

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 271

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 272

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 273

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 274

- Stable sort matters when a secondary key was set in a prior pass.

## entry 275

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 276

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 277

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 278

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 279

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 280

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 281

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 282

- Greedy by end-time picks the most non-overlapping intervals.

## entry 283

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 284

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 285

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 286

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 287

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 288

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 289

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 290

- Greedy by end-time picks the most non-overlapping intervals.

## entry 291

- Monotonic stack pops while the new element violates the invariant.

## entry 292

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 293

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 294

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 295

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 296

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 297

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 298

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 299

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 300

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 301

- Greedy by end-time picks the most non-overlapping intervals.

## entry 302

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 303

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 304

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 305

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 306

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 307

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 308

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 309

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 310

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 311

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 312

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 313

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 314

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 315

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 316

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 317

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 318

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 319

- StringBuilder: amortize allocation by doubling on grow.

## entry 320

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 321

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 322

- Monotonic stack pops while the new element violates the invariant.

## entry 323

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 324

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 325

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 326

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 327

- LIS via patience: each pile holds the smallest tail of length k.

## entry 328

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 329

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 330

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 331

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 332

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 333

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 334

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 335

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 336

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 337

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 338

- Heap when you only need top-k; full sort is wasted work.

## entry 339

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 340

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 341

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 342

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 343

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 344

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 345

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 346

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 347

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 348

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 349

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 350

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 351

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 352

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 353

- Stable sort matters when a secondary key was set in a prior pass.

## entry 354

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 355

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 356

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 357

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 358

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 359

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 360

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 361

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 362

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 363

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 364

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 365

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 366

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 367

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 368

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 369

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 370

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 371

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 372

- Greedy by end-time picks the most non-overlapping intervals.

## entry 373

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 374

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 375

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 376

- Monotonic stack pops while the new element violates the invariant.

## entry 377

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 378

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 379

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 380

- Greedy by end-time picks the most non-overlapping intervals.

## entry 381

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 382

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 383

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 384

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 385

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 386

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 387

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 388

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 389

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 390

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 391

- LIS via patience: each pile holds the smallest tail of length k.

## entry 392

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 393

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 394

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 395

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 396

- LIS via patience: each pile holds the smallest tail of length k.

## entry 397

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 398

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 399

- Stable sort matters when a secondary key was set in a prior pass.

## entry 400

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 401

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 402

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 403

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 404

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 405

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 406

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 407

- Heap when you only need top-k; full sort is wasted work.

## entry 408

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 409

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 410

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 411

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 412

- Heap when you only need top-k; full sort is wasted work.

## entry 413

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 414

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 415

- Greedy by end-time picks the most non-overlapping intervals.

## entry 416

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 417

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 418

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 419

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 420

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 421

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 422

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 423

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 424

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 425

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 426

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 427

- Walk both pointers from each end inward; advance the smaller side.

## entry 428

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 429

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 430

- Heap when you only need top-k; full sort is wasted work.

## entry 431

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 432

- LIS via patience: each pile holds the smallest tail of length k.

## entry 433

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 434

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 435

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 436

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 437

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 438

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 439

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 440

- Monotonic stack pops while the new element violates the invariant.

## entry 441

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 442

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 443

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 444

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 445

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 446

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 447

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 448

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 449

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 450

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 451

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 452

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 453

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 454

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 455

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 456

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 457

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 458

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 459

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 460

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 461

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 462

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 463

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 464

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 465

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 466

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 467

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 468

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 469

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 470

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 471

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 472

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 473

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 474

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 475

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 476

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 477

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 478

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 479

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 480

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 481

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 482

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 483

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 484

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 485

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 486

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 487

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 488

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 489

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 490

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 491

- Stable sort matters when a secondary key was set in a prior pass.

## entry 492

- Edit distance is LCS with a twist: substitution is a third option at each cell.
