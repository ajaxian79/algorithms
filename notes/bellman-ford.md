# bellman-ford

## entry 1

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 2

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 6

- Splay tree: every access splays to the root; amortized O(log n).

## entry 7

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 8

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 9

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 10

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 11

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 12

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 13

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 14

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 15

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 16

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 17

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 18

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 19

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 20

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 21

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 22

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 23

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 24

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 25

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 26

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 27

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 28

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 29

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 30

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 31

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 32

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 33

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 34

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 35

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 36

- StringBuilder: amortize allocation by doubling on grow.

## entry 37

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 38

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 39

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 40

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 41

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 42

- LIS via patience: each pile holds the smallest tail of length k.

## entry 43

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 44

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 45

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 46

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 47

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 48

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 49

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 50

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 51

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 52

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 53

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 54

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 55

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 56

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 57

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 58

- StringBuilder: amortize allocation by doubling on grow.

## entry 59

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 60

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 61

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 62

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 63

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 64

- Heap when you only need top-k; full sort is wasted work.

## entry 65

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 66

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 67

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 68

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 69

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 70

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 71

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 72

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 73

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 74

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 75

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 76

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 77

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 78

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 79

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 80

- Heap when you only need top-k; full sort is wasted work.

## entry 81

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 82

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 83

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 84

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 85

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 86

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 87

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 88

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 89

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 90

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 91

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 92

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 93

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 94

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 95

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 96

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 97

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 98

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 99

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 100

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 101

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 102

- Euler tour flattens a tree into an array for range-query LCA.

## entry 103

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 104

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 105

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 106

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 107

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 108

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 109

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 110

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 111

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 112

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 113

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 114

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 115

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 116

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 117

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 118

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 119

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 120

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 121

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 122

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 123

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 124

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 125

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 126

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 127

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 128

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 129

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 130

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 131

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 132

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 133

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 134

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 135

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 136

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 137

- Heap when you only need top-k; full sort is wasted work.

## entry 138

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 139

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 140

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 141

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 142

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 143

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 144

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 145

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 146

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 147

- Euler tour flattens a tree into an array for range-query LCA.

## entry 148

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 149

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 150

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 151

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 152

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 153

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 154

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 155

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 156

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 157

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 158

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 159

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 160

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 161

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 162

- Splay tree: every access splays to the root; amortized O(log n).

## entry 163

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 164

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 165

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 166

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 167

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 168

- LIS via patience: each pile holds the smallest tail of length k.

## entry 169

- Walk both pointers from each end inward; advance the smaller side.

## entry 170

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 171

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 172

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 173

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 174

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 175

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 176

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 177

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 178

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 179

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 180

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 181

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 182

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 183

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 184

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 185

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 186

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 187

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 188

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 189

- Heap when you only need top-k; full sort is wasted work.

## entry 190

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 191

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 192

- Euler tour flattens a tree into an array for range-query LCA.

## entry 193

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 194

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 195

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 196

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 197

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 198

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 199

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 200

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 201

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 202

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 203

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 204

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 205

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 206

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 207

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 208

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 209

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 210

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 211

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 212

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 213

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 214

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 215

- Splay tree: every access splays to the root; amortized O(log n).

## entry 216

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 217

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 218

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 219

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 220

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 221

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 222

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 223

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 224

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 225

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 226

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 227

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 228

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 229

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 230

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 231

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 232

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 233

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 234

- StringBuilder: amortize allocation by doubling on grow.

## entry 235

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 236

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 237

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 238

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 239

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 240

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 241

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 242

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 243

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 244

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 245

- LIS via patience: each pile holds the smallest tail of length k.

## entry 246

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 247

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 248

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 249

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 250

- Stable sort matters when a secondary key was set in a prior pass.

## entry 251

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 252

- Walk both pointers from each end inward; advance the smaller side.

## entry 253

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 254

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 255

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 256

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 257

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 258

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 259

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 260

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 261

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 262

- StringBuilder: amortize allocation by doubling on grow.

## entry 263

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 264

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 265

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 266

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 267

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 268

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 269

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 270

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 271

- Greedy by end-time picks the most non-overlapping intervals.

## entry 272

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 273

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 274

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 275

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 276

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 277

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 278

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 279

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 280

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 281

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 282

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 283

- Stable sort matters when a secondary key was set in a prior pass.

## entry 284

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 285

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 286

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 287

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 288

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 289

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 290

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 291

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 292

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 293

- StringBuilder: amortize allocation by doubling on grow.

## entry 294

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 295

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 296

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 297

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 298

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 299

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 300

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 301

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 302

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 303

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 304

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 305

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 306

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 307

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 308

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 309

- LIS via patience: each pile holds the smallest tail of length k.

## entry 310

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 311

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 312

- Monotonic stack pops while the new element violates the invariant.

## entry 313

- Heap when you only need top-k; full sort is wasted work.

## entry 314

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 315

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 316

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 317

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 318

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 319

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 320

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 321

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 322

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 323

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 324

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 325

- Heap when you only need top-k; full sort is wasted work.

## entry 326

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 327

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 328

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 329

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 330

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 331

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 332

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 333

- Monotonic stack pops while the new element violates the invariant.

## entry 334

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 335

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 336

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 337

- Splay tree: every access splays to the root; amortized O(log n).

## entry 338

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 339

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
