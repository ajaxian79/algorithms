# treap

## entry 1

- Walk both pointers from each end inward; advance the smaller side.

## entry 2

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 4

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 5

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 6

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 7

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 8

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 9

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 10

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 11

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 12

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 13

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 14

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 15

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 16

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 17

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 18

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 19

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 20

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 21

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 22

- Monotonic stack pops while the new element violates the invariant.

## entry 23

- Greedy by end-time picks the most non-overlapping intervals.

## entry 24

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 25

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 26

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 27

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 28

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 29

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 30

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 31

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 32

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 33

- Stable sort matters when a secondary key was set in a prior pass.

## entry 34

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 35

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 36

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 37

- Monotonic stack pops while the new element violates the invariant.

## entry 38

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 39

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 40

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 41

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 42

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 43

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 44

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 45

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 46

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 47

- Walk both pointers from each end inward; advance the smaller side.

## entry 48

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 49

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 50

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 51

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 52

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 53

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 54

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 55

- Monotonic stack pops while the new element violates the invariant.

## entry 56

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 57

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 58

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 59

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 60

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 61

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 62

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 63

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 64

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 65

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 66

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 67

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 68

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 69

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 70

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 71

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 72

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 73

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 74

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 75

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 76

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 77

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 78

- Monotonic stack pops while the new element violates the invariant.

## entry 79

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 80

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 81

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 82

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 83

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 84

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 85

- LIS via patience: each pile holds the smallest tail of length k.

## entry 86

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 87

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 88

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 89

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 90

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 91

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 92

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 93

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 94

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 95

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 96

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 97

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 98

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 99

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 100

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 101

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 102

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 103

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 104

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 105

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 106

- LIS via patience: each pile holds the smallest tail of length k.

## entry 107

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 108

- StringBuilder: amortize allocation by doubling on grow.

## entry 109

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 110

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 111

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 112

- Walk both pointers from each end inward; advance the smaller side.

## entry 113

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 114

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 115

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 116

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 117

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 118

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 119

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 120

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 121

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 122

- Heap when you only need top-k; full sort is wasted work.

## entry 123

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 124

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 125

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 126

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 127

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 128

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 129

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 130

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 131

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 132

- Heap when you only need top-k; full sort is wasted work.

## entry 133

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 134

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 135

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 136

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 137

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 138

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 139

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 140

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 141

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 142

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 143

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 144

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 145

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 146

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 147

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 148

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 149

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 150

- Splay tree: every access splays to the root; amortized O(log n).

## entry 151

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 152

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 153

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 154

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 155

- Splay tree: every access splays to the root; amortized O(log n).

## entry 156

- Monotonic stack pops while the new element violates the invariant.

## entry 157

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 158

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 159

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 160

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 161

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 162

- Stable sort matters when a secondary key was set in a prior pass.

## entry 163

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 164

- Walk both pointers from each end inward; advance the smaller side.

## entry 165

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 166

- Walk both pointers from each end inward; advance the smaller side.

## entry 167

- Stable sort matters when a secondary key was set in a prior pass.

## entry 168

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 169

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 170

- Stable sort matters when a secondary key was set in a prior pass.

## entry 171

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 172

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 173

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 174

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 175

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 176

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 177

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 178

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 179

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 180

- Greedy by end-time picks the most non-overlapping intervals.

## entry 181

- Monotonic stack pops while the new element violates the invariant.

## entry 182

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 183

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 184

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 185

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 186

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 187

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 188

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 189

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 190

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 191

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 192

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 193

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 194

- Heap when you only need top-k; full sort is wasted work.

## entry 195

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 196

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 197

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 198

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 199

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 200

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 201

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 202

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 203

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 204

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 205

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 206

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 207

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 208

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 209

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 210

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 211

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 212

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 213

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 214

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 215

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 216

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 217

- Euler tour flattens a tree into an array for range-query LCA.

## entry 218

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 219

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 220

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 221

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 222

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 223

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 224

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 225

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 226

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 227

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 228

- Euler tour flattens a tree into an array for range-query LCA.

## entry 229

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 230

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 231

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 232

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 233

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 234

- Heap when you only need top-k; full sort is wasted work.

## entry 235

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 236

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 237

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 238

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 239

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 240

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 241

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 242

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 243

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 244

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 245

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 246

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 247

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 248

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 249

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 250

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 251

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 252

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 253

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 254

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 255

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 256

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 257

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 258

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 259

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 260

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 261

- Euler tour flattens a tree into an array for range-query LCA.

## entry 262

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 263

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 264

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 265

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 266

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 267

- Walk both pointers from each end inward; advance the smaller side.

## entry 268

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 269

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 270

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 271

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 272

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 273

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 274

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 275

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 276

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 277

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 278

- LIS via patience: each pile holds the smallest tail of length k.

## entry 279

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 280

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 281

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 282

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 283

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 284

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 285

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 286

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 287

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 288

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 289

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 290

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 291

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 292

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 293

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 294

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 295

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 296

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 297

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 298

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 299

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 300

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 301

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 302

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 303

- Greedy by end-time picks the most non-overlapping intervals.

## entry 304

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 305

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 306

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 307

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 308

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 309

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 310

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 311

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 312

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 313

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 314

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 315

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 316

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 317

- Euler tour flattens a tree into an array for range-query LCA.

## entry 318

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 319

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 320

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 321

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 322

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 323

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 324

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 325

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 326

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 327

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 328

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 329

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 330

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 331

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 332

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 333

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 334

- Stable sort matters when a secondary key was set in a prior pass.

## entry 335

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 336

- Heap when you only need top-k; full sort is wasted work.

## entry 337

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 338

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 339

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 340

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 341

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 342

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 343

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 344

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 345

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 346

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 347

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 348

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 349

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 350

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 351

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 352

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 353

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 354

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 355

- Monotonic stack pops while the new element violates the invariant.

## entry 356

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 357

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 358

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 359

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 360

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 361

- Monotonic stack pops while the new element violates the invariant.

## entry 362

- Splay tree: every access splays to the root; amortized O(log n).

## entry 363

- Splay tree: every access splays to the root; amortized O(log n).

## entry 364

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 365

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 366

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 367

- StringBuilder: amortize allocation by doubling on grow.

## entry 368

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 369

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 370

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 371

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 372

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 373

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 374

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 375

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 376

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 377

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 378

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 379

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 380

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 381

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 382

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 383

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 384

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 385

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 386

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 387

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 388

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 389

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 390

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 391

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 392

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 393

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 394

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 395

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 396

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 397

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 398

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 399

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 400

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 401

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 402

- Monotonic stack pops while the new element violates the invariant.

## entry 403

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 404

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 405

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 406

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 407

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 408

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 409

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 410

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 411

- Stable sort matters when a secondary key was set in a prior pass.

## entry 412

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 413

- StringBuilder: amortize allocation by doubling on grow.

## entry 414

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 415

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 416

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 417

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 418

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 419

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 420

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 421

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 422

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 423

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 424

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 425

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 426

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 427

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 428

- Stable sort matters when a secondary key was set in a prior pass.

## entry 429

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 430

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 431

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 432

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 433

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 434

- Greedy by end-time picks the most non-overlapping intervals.

## entry 435

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 436

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 437

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 438

- Euler tour flattens a tree into an array for range-query LCA.

## entry 439

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 440

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 441

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 442

- Euler tour flattens a tree into an array for range-query LCA.

## entry 443

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 444

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 445

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 446

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 447

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 448

- Stable sort matters when a secondary key was set in a prior pass.

## entry 449

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 450

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 451

- Euler tour flattens a tree into an array for range-query LCA.

## entry 452

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 453

- Monotonic stack pops while the new element violates the invariant.

## entry 454

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 455

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 456

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 457

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 458

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 459

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 460

- LIS via patience: each pile holds the smallest tail of length k.

## entry 461

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 462

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 463

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 464

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 465

- Heap when you only need top-k; full sort is wasted work.

## entry 466

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 467

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 468

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 469

- Stable sort matters when a secondary key was set in a prior pass.

## entry 470

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 471

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 472

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 473

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 474

- Monotonic stack pops while the new element violates the invariant.

## entry 475

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 476

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 477

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 478

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 479

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 480

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 481

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 482

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 483

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 484

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 485

- Greedy by end-time picks the most non-overlapping intervals.

## entry 486

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 487

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 488

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 489

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 490

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 491

- Euler tour flattens a tree into an array for range-query LCA.

## entry 492

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 493

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 494

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 495

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 496

- Stable sort matters when a secondary key was set in a prior pass.

## entry 497

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 498

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 499

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 500

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 501

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 502

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 503

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 504

- Splay tree: every access splays to the root; amortized O(log n).

## entry 505

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 506

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 507

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 508

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 509

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 510

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 511

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 512

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 513

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 514

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 515

- Greedy by end-time picks the most non-overlapping intervals.

## entry 516

- Walk both pointers from each end inward; advance the smaller side.

## entry 517

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 518

- Walk both pointers from each end inward; advance the smaller side.

## entry 519

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 520

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 521

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
