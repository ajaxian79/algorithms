# euler-tour

## entry 1

- StringBuilder: amortize allocation by doubling on grow.

## entry 2

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 3

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 4

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 5

- Heap when you only need top-k; full sort is wasted work.

## entry 6

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 7

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 8

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 9

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 10

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 11

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 12

- Walk both pointers from each end inward; advance the smaller side.

## entry 13

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 14

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 15

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 16

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 17

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 18

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 19

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 20

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 21

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 22

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 23

- Stable sort matters when a secondary key was set in a prior pass.

## entry 24

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 25

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 26

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 27

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 28

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 29

- StringBuilder: amortize allocation by doubling on grow.

## entry 30

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 31

- Euler tour flattens a tree into an array for range-query LCA.

## entry 32

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 33

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 34

- Walk both pointers from each end inward; advance the smaller side.

## entry 35

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 36

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 37

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 38

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 39

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 40

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 41

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 42

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 43

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 44

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 45

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 46

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 47

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 48

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 49

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 50

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 51

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 52

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 53

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 54

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 55

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 56

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 57

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 58

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 59

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 60

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 61

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 62

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 63

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 64

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 65

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 66

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 67

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 68

- LIS via patience: each pile holds the smallest tail of length k.

## entry 69

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 70

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 71

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 72

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 73

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 74

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 75

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 76

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 77

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 78

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 79

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 80

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 81

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 82

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 83

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 84

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 85

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 86

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 87

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 88

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 89

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 90

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 91

- Greedy by end-time picks the most non-overlapping intervals.

## entry 92

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 93

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 94

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 95

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 96

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 97

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 98

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 99

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 100

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 101

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 102

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 103

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 104

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 105

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 106

- Greedy by end-time picks the most non-overlapping intervals.

## entry 107

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 108

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 109

- LIS via patience: each pile holds the smallest tail of length k.

## entry 110

- StringBuilder: amortize allocation by doubling on grow.

## entry 111

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 112

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 113

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 114

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 115

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 116

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 117

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 118

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 119

- Stable sort matters when a secondary key was set in a prior pass.

## entry 120

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 121

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 122

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 123

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 124

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 125

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 126

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 127

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 128

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 129

- Walk both pointers from each end inward; advance the smaller side.

## entry 130

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 131

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 132

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 133

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 134

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 135

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 136

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 137

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 138

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 139

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 140

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 141

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 142

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 143

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 144

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 145

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 146

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 147

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 148

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 149

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 150

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 151

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 152

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 153

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 154

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 155

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 156

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 157

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 158

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 159

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 160

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 161

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 162

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 163

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 164

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 165

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 166

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 167

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 168

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 169

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 170

- LIS via patience: each pile holds the smallest tail of length k.

## entry 171

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 172

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 173

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 174

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 175

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 176

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 177

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 178

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 179

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 180

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 181

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 182

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 183

- Heap when you only need top-k; full sort is wasted work.

## entry 184

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 185

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 186

- Heap when you only need top-k; full sort is wasted work.

## entry 187

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 188

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 189

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 190

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 191

- Stable sort matters when a secondary key was set in a prior pass.

## entry 192

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 193

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 194

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 195

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 196

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 197

- Heap when you only need top-k; full sort is wasted work.

## entry 198

- Splay tree: every access splays to the root; amortized O(log n).

## entry 199

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 200

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 201

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 202

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 203

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 204

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 205

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 206

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 207

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 208

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 209

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 210

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 211

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 212

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 213

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 214

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 215

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 216

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 217

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 218

- Walk both pointers from each end inward; advance the smaller side.

## entry 219

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 220

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 221

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 222

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 223

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 224

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 225

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 226

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 227

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 228

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 229

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 230

- LIS via patience: each pile holds the smallest tail of length k.

## entry 231

- LIS via patience: each pile holds the smallest tail of length k.

## entry 232

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 233

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 234

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 235

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 236

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 237

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 238

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 239

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 240

- Stable sort matters when a secondary key was set in a prior pass.

## entry 241

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 242

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 243

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 244

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 245

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 246

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 247

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 248

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 249

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 250

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 251

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 252

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 253

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 254

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 255

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 256

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 257

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 258

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 259

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 260

- Greedy by end-time picks the most non-overlapping intervals.

## entry 261

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 262

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 263

- LIS via patience: each pile holds the smallest tail of length k.

## entry 264

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 265

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 266

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 267

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 268

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 269

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 270

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 271

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 272

- Euler tour flattens a tree into an array for range-query LCA.

## entry 273

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 274

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 275

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 276

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 277

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 278

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 279

- Splay tree: every access splays to the root; amortized O(log n).

## entry 280

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 281

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 282

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 283

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 284

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 285

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 286

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 287

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 288

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 289

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 290

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 291

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 292

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 293

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 294

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 295

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 296

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 297

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 298

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 299

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 300

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 301

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 302

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 303

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 304

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 305

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 306

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 307

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 308

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 309

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 310

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 311

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 312

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 313

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 314

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 315

- Stable sort matters when a secondary key was set in a prior pass.

## entry 316

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 317

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 318

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 319

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 320

- Euler tour flattens a tree into an array for range-query LCA.

## entry 321

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 322

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 323

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 324

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 325

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 326

- StringBuilder: amortize allocation by doubling on grow.

## entry 327

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 328

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 329

- Monotonic stack pops while the new element violates the invariant.

## entry 330

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 331

- Stable sort matters when a secondary key was set in a prior pass.

## entry 332

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 333

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 334

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 335

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 336

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 337

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 338

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 339

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 340

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 341

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 342

- LIS via patience: each pile holds the smallest tail of length k.

## entry 343

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 344

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 345

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 346

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 347

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 348

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 349

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 350

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 351

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 352

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 353

- Stable sort matters when a secondary key was set in a prior pass.

## entry 354

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 355

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 356

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 357

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 358

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 359

- Stable sort matters when a secondary key was set in a prior pass.

## entry 360

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 361

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 362

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 363

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 364

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 365

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 366

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 367

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 368

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 369

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 370

- Euler tour flattens a tree into an array for range-query LCA.

## entry 371

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 372

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 373

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 374

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 375

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 376

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 377

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 378

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 379

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 380

- Walk both pointers from each end inward; advance the smaller side.

## entry 381

- Walk both pointers from each end inward; advance the smaller side.

## entry 382

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 383

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 384

- LIS via patience: each pile holds the smallest tail of length k.

## entry 385

- Walk both pointers from each end inward; advance the smaller side.

## entry 386

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 387

- Splay tree: every access splays to the root; amortized O(log n).

## entry 388

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 389

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 390

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 391

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 392

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 393

- Euler tour flattens a tree into an array for range-query LCA.

## entry 394

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 395

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 396

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 397

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 398

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 399

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 400

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 401

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 402

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 403

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 404

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 405

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 406

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 407

- Euler tour flattens a tree into an array for range-query LCA.

## entry 408

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 409

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 410

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 411

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 412

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 413

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 414

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 415

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 416

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 417

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 418

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 419

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 420

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 421

- Greedy by end-time picks the most non-overlapping intervals.

## entry 422

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 423

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 424

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 425

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 426

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 427

- Walk both pointers from each end inward; advance the smaller side.

## entry 428

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 429

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 430

- Walk both pointers from each end inward; advance the smaller side.

## entry 431

- LIS via patience: each pile holds the smallest tail of length k.

## entry 432

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 433

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 434

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 435

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 436

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 437

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 438

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 439

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 440

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 441

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 442

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 443

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 444

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 445

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 446

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 447

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 448

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 449

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 450

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 451

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 452

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 453

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 454

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 455

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 456

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 457

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 458

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 459

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 460

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 461

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 462

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 463

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 464

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 465

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 466

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 467

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 468

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 469

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 470

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 471

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 472

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 473

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 474

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 475

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 476

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 477

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 478

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 479

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 480

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 481

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 482

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 483

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 484

- Stable sort matters when a secondary key was set in a prior pass.

## entry 485

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 486

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 487

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 488

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 489

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 490

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 491

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 492

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 493

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 494

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 495

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 496

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 497

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 498

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 499

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 500

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 501

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 502

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 503

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 504

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 505

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 506

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 507

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 508

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 509

- StringBuilder: amortize allocation by doubling on grow.

## entry 510

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 511

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 512

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 513

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 514

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 515

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 516

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 517

- Treap: BST + heap on random priorities; expected O(log n) per op.
