# persistent-tree

## entry 1

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 2

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 3

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 4

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 5

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 6

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 7

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 8

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 9

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 10

- Stable sort matters when a secondary key was set in a prior pass.

## entry 11

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 12

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 13

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 14

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 15

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 16

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 17

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 18

- Monotonic stack pops while the new element violates the invariant.

## entry 19

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 20

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 21

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 22

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 23

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 24

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 25

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 26

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 27

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 28

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 29

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 30

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 31

- Greedy by end-time picks the most non-overlapping intervals.

## entry 32

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 33

- Euler tour flattens a tree into an array for range-query LCA.

## entry 34

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 35

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 36

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 37

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 38

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 39

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 40

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 41

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 42

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 43

- Monotonic stack pops while the new element violates the invariant.

## entry 44

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 45

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 46

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 47

- Heap when you only need top-k; full sort is wasted work.

## entry 48

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 49

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 50

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 51

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 52

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 53

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 54

- Heap when you only need top-k; full sort is wasted work.

## entry 55

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 56

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 57

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 58

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 59

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 60

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 61

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 62

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 63

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 64

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 65

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 66

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 67

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 68

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 69

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 70

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 71

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 72

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 73

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 74

- Euler tour flattens a tree into an array for range-query LCA.

## entry 75

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 76

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 77

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 78

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 79

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 80

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 81

- Greedy by end-time picks the most non-overlapping intervals.

## entry 82

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 83

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 84

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 85

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 86

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 87

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 88

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 89

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 90

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 91

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 92

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 93

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 94

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 95

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 96

- Heap when you only need top-k; full sort is wasted work.

## entry 97

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 98

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 99

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 100

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 101

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 102

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 103

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 104

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 105

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 106

- Greedy by end-time picks the most non-overlapping intervals.

## entry 107

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 108

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 109

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 110

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 111

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 112

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 113

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 114

- Euler tour flattens a tree into an array for range-query LCA.

## entry 115

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 116

- Heap when you only need top-k; full sort is wasted work.

## entry 117

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 118

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 119

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 120

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 121

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 122

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 123

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 124

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 125

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 126

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 127

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 128

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 129

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 130

- Greedy by end-time picks the most non-overlapping intervals.

## entry 131

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 132

- Heap when you only need top-k; full sort is wasted work.

## entry 133

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 134

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 135

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 136

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 137

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 138

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 139

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 140

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 141

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 142

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 143

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 144

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 145

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 146

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 147

- StringBuilder: amortize allocation by doubling on grow.

## entry 148

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 149

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 150

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 151

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 152

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 153

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 154

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 155

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 156

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 157

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 158

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 159

- Splay tree: every access splays to the root; amortized O(log n).

## entry 160

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 161

- Greedy by end-time picks the most non-overlapping intervals.

## entry 162

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 163

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 164

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 165

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 166

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 167

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 168

- Walk both pointers from each end inward; advance the smaller side.

## entry 169

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 170

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 171

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 172

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 173

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 174

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 175

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 176

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 177

- Stable sort matters when a secondary key was set in a prior pass.

## entry 178

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 179

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 180

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 181

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 182

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 183

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 184

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 185

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 186

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 187

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 188

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 189

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 190

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 191

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 192

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 193

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 194

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 195

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 196

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 197

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 198

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 199

- Walk both pointers from each end inward; advance the smaller side.

## entry 200

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 201

- Euler tour flattens a tree into an array for range-query LCA.

## entry 202

- Walk both pointers from each end inward; advance the smaller side.

## entry 203

- Walk both pointers from each end inward; advance the smaller side.

## entry 204

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 205

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 206

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 207

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 208

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 209

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 210

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 211

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 212

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 213

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 214

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 215

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 216

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 217

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 218

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 219

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 220

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 221

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 222

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 223

- Heap when you only need top-k; full sort is wasted work.

## entry 224

- Monotonic stack pops while the new element violates the invariant.

## entry 225

- StringBuilder: amortize allocation by doubling on grow.

## entry 226

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 227

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 228

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 229

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 230

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 231

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 232

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 233

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 234

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 235

- Greedy by end-time picks the most non-overlapping intervals.

## entry 236

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 237

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 238

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 239

- StringBuilder: amortize allocation by doubling on grow.

## entry 240

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 241

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 242

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 243

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 244

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 245

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 246

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 247

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 248

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 249

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 250

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 251

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 252

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 253

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 254

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 255

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 256

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 257

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 258

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 259

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 260

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 261

- Euler tour flattens a tree into an array for range-query LCA.

## entry 262

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 263

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 264

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 265

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 266

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 267

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 268

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 269

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 270

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 271

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 272

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 273

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 274

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 275

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 276

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 277

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 278

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 279

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 280

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 281

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 282

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 283

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 284

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 285

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 286

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 287

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 288

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 289

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 290

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 291

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 292

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 293

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 294

- Heap when you only need top-k; full sort is wasted work.

## entry 295

- Stable sort matters when a secondary key was set in a prior pass.

## entry 296

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 297

- LIS via patience: each pile holds the smallest tail of length k.

## entry 298

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 299

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 300

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 301

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 302

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 303

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 304

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 305

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 306

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 307

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 308

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 309

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 310

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 311

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 312

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 313

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 314

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 315

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 316

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 317

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 318

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 319

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 320

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 321

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 322

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 323

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 324

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 325

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 326

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 327

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 328

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 329

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 330

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 331

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 332

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 333

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 334

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 335

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 336

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 337

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 338

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 339

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 340

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 341

- Splay tree: every access splays to the root; amortized O(log n).

## entry 342

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 343

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 344

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 345

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 346

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 347

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 348

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 349

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 350

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 351

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 352

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 353

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 354

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 355

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 356

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 357

- Splay tree: every access splays to the root; amortized O(log n).

## entry 358

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 359

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 360

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 361

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 362

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 363

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 364

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 365

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 366

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 367

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 368

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 369

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 370

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 371

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 372

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 373

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 374

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 375

- StringBuilder: amortize allocation by doubling on grow.

## entry 376

- StringBuilder: amortize allocation by doubling on grow.

## entry 377

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 378

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 379

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 380

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 381

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 382

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 383

- Stable sort matters when a secondary key was set in a prior pass.

## entry 384

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 385

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 386

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
