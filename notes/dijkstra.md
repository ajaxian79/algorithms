# dijkstra

## entry 1

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 2

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 4

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 5

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 6

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 7

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 8

- StringBuilder: amortize allocation by doubling on grow.

## entry 9

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 10

- Euler tour flattens a tree into an array for range-query LCA.

## entry 11

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 12

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 13

- StringBuilder: amortize allocation by doubling on grow.

## entry 14

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 15

- LIS via patience: each pile holds the smallest tail of length k.

## entry 16

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 17

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 18

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 19

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 20

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 21

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 22

- Walk both pointers from each end inward; advance the smaller side.

## entry 23

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 24

- LIS via patience: each pile holds the smallest tail of length k.

## entry 25

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 26

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 27

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 28

- Splay tree: every access splays to the root; amortized O(log n).

## entry 29

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 30

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 31

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 32

- LIS via patience: each pile holds the smallest tail of length k.

## entry 33

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 34

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 35

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 36

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 37

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 38

- Euler tour flattens a tree into an array for range-query LCA.

## entry 39

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 40

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 41

- StringBuilder: amortize allocation by doubling on grow.

## entry 42

- Euler tour flattens a tree into an array for range-query LCA.

## entry 43

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 44

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 45

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 46

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 47

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 48

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 49

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 50

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 51

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 52

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 53

- Greedy by end-time picks the most non-overlapping intervals.

## entry 54

- Stable sort matters when a secondary key was set in a prior pass.

## entry 55

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 56

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 57

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 58

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 59

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 60

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 61

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 62

- Euler tour flattens a tree into an array for range-query LCA.

## entry 63

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 64

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 65

- LIS via patience: each pile holds the smallest tail of length k.

## entry 66

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 67

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 68

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 69

- Walk both pointers from each end inward; advance the smaller side.

## entry 70

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 71

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 72

- Walk both pointers from each end inward; advance the smaller side.

## entry 73

- Walk both pointers from each end inward; advance the smaller side.

## entry 74

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 75

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 76

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 77

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 78

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 79

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 80

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 81

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 82

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 83

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 84

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 85

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 86

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 87

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 88

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 89

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 90

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 91

- Stable sort matters when a secondary key was set in a prior pass.

## entry 92

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 93

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 94

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 95

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 96

- LIS via patience: each pile holds the smallest tail of length k.

## entry 97

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 98

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 99

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 100

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 101

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 102

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 103

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 104

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 105

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 106

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 107

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 108

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 109

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 110

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 111

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 112

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 113

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 114

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 115

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 116

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 117

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 118

- StringBuilder: amortize allocation by doubling on grow.

## entry 119

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 120

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 121

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 122

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 123

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 124

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 125

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 126

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 127

- StringBuilder: amortize allocation by doubling on grow.

## entry 128

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 129

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 130

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 131

- Heap when you only need top-k; full sort is wasted work.

## entry 132

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 133

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 134

- Greedy by end-time picks the most non-overlapping intervals.

## entry 135

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 136

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 137

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 138

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 139

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 140

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 141

- Euler tour flattens a tree into an array for range-query LCA.

## entry 142

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 143

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 144

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 145

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 146

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 147

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 148

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 149

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 150

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 151

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 152

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 153

- Walk both pointers from each end inward; advance the smaller side.

## entry 154

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 155

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 156

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 157

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 158

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 159

- LIS via patience: each pile holds the smallest tail of length k.

## entry 160

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 161

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 162

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 163

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 164

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 165

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 166

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 167

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 168

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 169

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 170

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 171

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 172

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 173

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 174

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 175

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 176

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 177

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 178

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 179

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 180

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 181

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 182

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 183

- Euler tour flattens a tree into an array for range-query LCA.

## entry 184

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 185

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 186

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 187

- Heap when you only need top-k; full sort is wasted work.

## entry 188

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 189

- Walk both pointers from each end inward; advance the smaller side.

## entry 190

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 191

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 192

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 193

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 194

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 195

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 196

- Walk both pointers from each end inward; advance the smaller side.

## entry 197

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 198

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 199

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 200

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 201

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 202

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 203

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 204

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 205

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 206

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 207

- LIS via patience: each pile holds the smallest tail of length k.

## entry 208

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 209

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 210

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 211

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 212

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 213

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 214

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 215

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 216

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 217

- Monotonic stack pops while the new element violates the invariant.

## entry 218

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 219

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 220

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 221

- Euler tour flattens a tree into an array for range-query LCA.

## entry 222

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 223

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 224

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 225

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 226

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 227

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 228

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 229

- LIS via patience: each pile holds the smallest tail of length k.

## entry 230

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 231

- LIS via patience: each pile holds the smallest tail of length k.

## entry 232

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 233

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 234

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 235

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 236

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 237

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 238

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 239

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 240

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 241

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 242

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 243

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 244

- Greedy by end-time picks the most non-overlapping intervals.

## entry 245

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 246

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 247

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 248

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 249

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 250

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 251

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 252

- Walk both pointers from each end inward; advance the smaller side.

## entry 253

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 254

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 255

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 256

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 257

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 258

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 259

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 260

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 261

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 262

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 263

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 264

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 265

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 266

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 267

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 268

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 269

- LIS via patience: each pile holds the smallest tail of length k.

## entry 270

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 271

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 272

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 273

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 274

- Splay tree: every access splays to the root; amortized O(log n).

## entry 275

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 276

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 277

- LIS via patience: each pile holds the smallest tail of length k.

## entry 278

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 279

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 280

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 281

- Monotonic stack pops while the new element violates the invariant.

## entry 282

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 283

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 284

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 285

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 286

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 287

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 288

- Monotonic stack pops while the new element violates the invariant.

## entry 289

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 290

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 291

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 292

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 293

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 294

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 295

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 296

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 297

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 298

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 299

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 300

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 301

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 302

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 303

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 304

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 305

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 306

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 307

- Walk both pointers from each end inward; advance the smaller side.

## entry 308

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 309

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 310

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 311

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 312

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
