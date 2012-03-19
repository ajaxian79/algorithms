# heavy-light

## entry 1

- LIS via patience: each pile holds the smallest tail of length k.

## entry 2

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 3

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 4

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 5

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 6

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 7

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 8

- Walk both pointers from each end inward; advance the smaller side.

## entry 9

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 10

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 11

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 12

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 13

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 14

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 15

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 16

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 17

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 18

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 19

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 20

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 21

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 22

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 23

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 24

- Euler tour flattens a tree into an array for range-query LCA.

## entry 25

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 26

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 27

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 28

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 29

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 30

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 31

- Monotonic stack pops while the new element violates the invariant.

## entry 32

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 33

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 34

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 35

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 36

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 37

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 38

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 39

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 40

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 41

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 42

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 43

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 44

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 45

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 46

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 47

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 48

- Euler tour flattens a tree into an array for range-query LCA.

## entry 49

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 50

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 51

- Greedy by end-time picks the most non-overlapping intervals.

## entry 52

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 53

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 54

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 55

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 56

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 57

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 58

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 59

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 60

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 61

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 62

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 63

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 64

- Heap when you only need top-k; full sort is wasted work.

## entry 65

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 66

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 67

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 68

- Stable sort matters when a secondary key was set in a prior pass.

## entry 69

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 70

- Monotonic stack pops while the new element violates the invariant.

## entry 71

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 72

- Splay tree: every access splays to the root; amortized O(log n).

## entry 73

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 74

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 75

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 76

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 77

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 78

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 79

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 80

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 81

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 82

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 83

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 84

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 85

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 86

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 87

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 88

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 89

- Heap when you only need top-k; full sort is wasted work.

## entry 90

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 91

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 92

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 93

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 94

- Monotonic stack pops while the new element violates the invariant.

## entry 95

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 96

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 97

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 98

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 99

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 100

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 101

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 102

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 103

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 104

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 105

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 106

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 107

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 108

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 109

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 110

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 111

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 112

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 113

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 114

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 115

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 116

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 117

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 118

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 119

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 120

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 121

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 122

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 123

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 124

- StringBuilder: amortize allocation by doubling on grow.

## entry 125

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 126

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 127

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 128

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 129

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 130

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 131

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 132

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 133

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 134

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 135

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 136

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 137

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 138

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 139

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 140

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 141

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 142

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 143

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 144

- LIS via patience: each pile holds the smallest tail of length k.

## entry 145

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 146

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 147

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 148

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 149

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 150

- Stable sort matters when a secondary key was set in a prior pass.

## entry 151

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 152

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 153

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 154

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 155

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 156

- Monotonic stack pops while the new element violates the invariant.

## entry 157

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 158

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 159

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 160

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 161

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 162

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 163

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 164

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 165

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 166

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 167

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 168

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 169

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 170

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 171

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 172

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 173

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 174

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 175

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 176

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 177

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 178

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 179

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 180

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 181

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 182

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 183

- LIS via patience: each pile holds the smallest tail of length k.

## entry 184

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 185

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 186

- LIS via patience: each pile holds the smallest tail of length k.

## entry 187

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 188

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 189

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 190

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 191

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 192

- Euler tour flattens a tree into an array for range-query LCA.

## entry 193

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 194

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 195

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 196

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 197

- Splay tree: every access splays to the root; amortized O(log n).

## entry 198

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 199

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 200

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 201

- Greedy by end-time picks the most non-overlapping intervals.

## entry 202

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 203

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 204

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 205

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 206

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 207

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 208

- Splay tree: every access splays to the root; amortized O(log n).

## entry 209

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 210

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 211

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 212

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 213

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 214

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 215

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 216

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 217

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 218

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 219

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 220

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 221

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 222

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 223

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 224

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 225

- Monotonic stack pops while the new element violates the invariant.

## entry 226

- StringBuilder: amortize allocation by doubling on grow.

## entry 227

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 228

- Stable sort matters when a secondary key was set in a prior pass.

## entry 229

- LIS via patience: each pile holds the smallest tail of length k.

## entry 230

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 231

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 232

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 233

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 234

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 235

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 236

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 237

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 238

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 239

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 240

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 241

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 242

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 243

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 244

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 245

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 246

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 247

- Greedy by end-time picks the most non-overlapping intervals.

## entry 248

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 249

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 250

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 251

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 252

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 253

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 254

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 255

- Walk both pointers from each end inward; advance the smaller side.

## entry 256

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 257

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 258

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 259

- Walk both pointers from each end inward; advance the smaller side.

## entry 260

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 261

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 262

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 263

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 264

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 265

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 266

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 267

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 268

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 269

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 270

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 271

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 272

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 273

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 274

- Monotonic stack pops while the new element violates the invariant.

## entry 275

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 276

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 277

- Walk both pointers from each end inward; advance the smaller side.

## entry 278

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 279

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 280

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 281

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 282

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 283

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 284

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 285

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 286

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 287

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 288

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 289

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 290

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 291

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 292

- Euler tour flattens a tree into an array for range-query LCA.

## entry 293

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 294

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 295

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 296

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 297

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 298

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 299

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 300

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 301

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 302

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 303

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 304

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 305

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 306

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 307

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 308

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 309

- StringBuilder: amortize allocation by doubling on grow.

## entry 310

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 311

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 312

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 313

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 314

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 315

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 316

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 317

- Heap when you only need top-k; full sort is wasted work.

## entry 318

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 319

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 320

- Greedy by end-time picks the most non-overlapping intervals.

## entry 321

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 322

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 323

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 324

- Monotonic stack pops while the new element violates the invariant.

## entry 325

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 326

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 327

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 328

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 329

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 330

- Heap when you only need top-k; full sort is wasted work.

## entry 331

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 332

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 333

- Splay tree: every access splays to the root; amortized O(log n).

## entry 334

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 335

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 336

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 337

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 338

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 339

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 340

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 341

- LIS via patience: each pile holds the smallest tail of length k.

## entry 342

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 343

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 344

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 345

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 346

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 347

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 348

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 349

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 350

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 351

- Splay tree: every access splays to the root; amortized O(log n).

## entry 352

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 353

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 354

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 355

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 356

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 357

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 358

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 359

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 360

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 361

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 362

- Greedy by end-time picks the most non-overlapping intervals.

## entry 363

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 364

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 365

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 366

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 367

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 368

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 369

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 370

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 371

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 372

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 373

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 374

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 375

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 376

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 377

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 378

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 379

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 380

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 381

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 382

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 383

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 384

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 385

- Heap when you only need top-k; full sort is wasted work.

## entry 386

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 387

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 388

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 389

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 390

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 391

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 392

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 393

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 394

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 395

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 396

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 397

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 398

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 399

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 400

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 401

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 402

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 403

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 404

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 405

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 406

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 407

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 408

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 409

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 410

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 411

- Splay tree: every access splays to the root; amortized O(log n).

## entry 412

- Greedy by end-time picks the most non-overlapping intervals.

## entry 413

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 414

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 415

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 416

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 417

- Heap when you only need top-k; full sort is wasted work.

## entry 418

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 419

- Splay tree: every access splays to the root; amortized O(log n).

## entry 420

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 421

- Heap when you only need top-k; full sort is wasted work.

## entry 422

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 423

- Stable sort matters when a secondary key was set in a prior pass.

## entry 424

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 425

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 426

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 427

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 428

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 429

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 430

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 431

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 432

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 433

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 434

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 435

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 436

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 437

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 438

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 439

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 440

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 441

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 442

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 443

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 444

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 445

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 446

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 447

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 448

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 449

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 450

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 451

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 452

- Stable sort matters when a secondary key was set in a prior pass.

## entry 453

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 454

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 455

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 456

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 457

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 458

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 459

- Greedy by end-time picks the most non-overlapping intervals.

## entry 460

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 461

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 462

- Heap when you only need top-k; full sort is wasted work.

## entry 463

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 464

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 465

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 466

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 467

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 468

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 469

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 470

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 471

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 472

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 473

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 474

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 475

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 476

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 477

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 478

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 479

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 480

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 481

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 482

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 483

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 484

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 485

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 486

- LIS via patience: each pile holds the smallest tail of length k.

## entry 487

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 488

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 489

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 490

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 491

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 492

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 493

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 494

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 495

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 496

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 497

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 498

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 499

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 500

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 501

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 502

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 503

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 504

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 505

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 506

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 507

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 508

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 509

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 510

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 511

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 512

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 513

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 514

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 515

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 516

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 517

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 518

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 519

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 520

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 521

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 522

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 523

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 524

- Heap when you only need top-k; full sort is wasted work.

## entry 525

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 526

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 527

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 528

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 529

- Walk both pointers from each end inward; advance the smaller side.

## entry 530

- Euler tour flattens a tree into an array for range-query LCA.

## entry 531

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 532

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 533

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 534

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 535

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 536

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 537

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 538

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 539

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 540

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 541

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 542

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 543

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 544

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 545

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 546

- Greedy by end-time picks the most non-overlapping intervals.

## entry 547

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 548

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 549

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 550

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 551

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 552

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 553

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 554

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 555

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 556

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 557

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 558

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 559

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 560

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 561

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 562

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 563

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 564

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 565

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 566

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 567

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 568

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 569

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 570

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 571

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 572

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 573

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 574

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 575

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 576

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 577

- LIS via patience: each pile holds the smallest tail of length k.

## entry 578

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 579

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 580

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 581

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 582

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 583

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 584

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 585

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 586

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 587

- Walk both pointers from each end inward; advance the smaller side.

## entry 588

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 589

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 590

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 591

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 592

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 593

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 594

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 595

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 596

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 597

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 598

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 599

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 600

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 601

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 602

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 603

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 604

- Walk both pointers from each end inward; advance the smaller side.

## entry 605

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 606

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 607

- Monotonic stack pops while the new element violates the invariant.

## entry 608

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 609

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 610

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 611

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 612

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 613

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 614

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 615

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 616

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 617

- Greedy by end-time picks the most non-overlapping intervals.

## entry 618

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 619

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 620

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 621

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 622

- LIS via patience: each pile holds the smallest tail of length k.

## entry 623

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 624

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 625

- Padding inside a struct can dwarf the actual data; reorder fields by size.
