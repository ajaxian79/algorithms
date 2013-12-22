# interval-dp

## entry 1

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 2

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 3

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 4

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 6

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 7

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 8

- LIS via patience: each pile holds the smallest tail of length k.

## entry 9

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 10

- Monotonic stack pops while the new element violates the invariant.

## entry 11

- LIS via patience: each pile holds the smallest tail of length k.

## entry 12

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 13

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 14

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 15

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 16

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 17

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 18

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 19

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 20

- Euler tour flattens a tree into an array for range-query LCA.

## entry 21

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 22

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 23

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 24

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 25

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 26

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 27

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 28

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 29

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 30

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 31

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 32

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 33

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 34

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 35

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 36

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 37

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 38

- Stable sort matters when a secondary key was set in a prior pass.

## entry 39

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 40

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 41

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 42

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 43

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 44

- Euler tour flattens a tree into an array for range-query LCA.

## entry 45

- Euler tour flattens a tree into an array for range-query LCA.

## entry 46

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 47

- StringBuilder: amortize allocation by doubling on grow.

## entry 48

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 49

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 50

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 51

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 52

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 53

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 54

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 55

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 56

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 57

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 58

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 59

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 60

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 61

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 62

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 63

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 64

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 65

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 66

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 67

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 68

- StringBuilder: amortize allocation by doubling on grow.

## entry 69

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 70

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 71

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 72

- Monotonic stack pops while the new element violates the invariant.

## entry 73

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 74

- StringBuilder: amortize allocation by doubling on grow.

## entry 75

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 76

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 77

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 78

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 79

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 80

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 81

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 82

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 83

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 84

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 85

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 86

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 87

- Greedy by end-time picks the most non-overlapping intervals.

## entry 88

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 89

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 90

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 91

- Walk both pointers from each end inward; advance the smaller side.

## entry 92

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 93

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 94

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 95

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 96

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 97

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 98

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 99

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 100

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 101

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 102

- LIS via patience: each pile holds the smallest tail of length k.

## entry 103

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 104

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 105

- LIS via patience: each pile holds the smallest tail of length k.

## entry 106

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 107

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 108

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 109

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 110

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 111

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 112

- LIS via patience: each pile holds the smallest tail of length k.

## entry 113

- Heap when you only need top-k; full sort is wasted work.

## entry 114

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 115

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 116

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 117

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 118

- Euler tour flattens a tree into an array for range-query LCA.

## entry 119

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 120

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 121

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 122

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 123

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 124

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 125

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 126

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 127

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 128

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 129

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 130

- Euler tour flattens a tree into an array for range-query LCA.

## entry 131

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 132

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 133

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 134

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 135

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 136

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 137

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 138

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 139

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 140

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 141

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 142

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 143

- Stable sort matters when a secondary key was set in a prior pass.

## entry 144

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 145

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 146

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 147

- Stable sort matters when a secondary key was set in a prior pass.

## entry 148

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 149

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 150

- Stable sort matters when a secondary key was set in a prior pass.

## entry 151

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 152

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 153

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 154

- Euler tour flattens a tree into an array for range-query LCA.

## entry 155

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 156

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 157

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 158

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 159

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 160

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 161

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 162

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 163

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 164

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 165

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 166

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 167

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 168

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 169

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 170

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 171

- Heap when you only need top-k; full sort is wasted work.

## entry 172

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 173

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 174

- LIS via patience: each pile holds the smallest tail of length k.

## entry 175

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 176

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 177

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 178

- Walk both pointers from each end inward; advance the smaller side.

## entry 179

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 180

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 181

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 182

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 183

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 184

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 185

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 186

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 187

- Monotonic stack pops while the new element violates the invariant.

## entry 188

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 189

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 190

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 191

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 192

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 193

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 194

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 195

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 196

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 197

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 198

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 199

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 200

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 201

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 202

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 203

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 204

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 205

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 206

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 207

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 208

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 209

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 210

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 211

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 212

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 213

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 214

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 215

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 216

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 217

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 218

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 219

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 220

- Monotonic stack pops while the new element violates the invariant.

## entry 221

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 222

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 223

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 224

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 225

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 226

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 227

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 228

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 229

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 230

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 231

- Greedy by end-time picks the most non-overlapping intervals.

## entry 232

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 233

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 234

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 235

- StringBuilder: amortize allocation by doubling on grow.

## entry 236

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 237

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 238

- Greedy by end-time picks the most non-overlapping intervals.

## entry 239

- Splay tree: every access splays to the root; amortized O(log n).

## entry 240

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 241

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 242

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 243

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 244

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 245

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 246

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 247

- Walk both pointers from each end inward; advance the smaller side.

## entry 248

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 249

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 250

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 251

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 252

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 253

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 254

- StringBuilder: amortize allocation by doubling on grow.

## entry 255

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 256

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 257

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 258

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 259

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 260

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 261

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 262

- Stable sort matters when a secondary key was set in a prior pass.

## entry 263

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 264

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 265

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 266

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 267

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 268

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 269

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 270

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 271

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 272

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 273

- Heap when you only need top-k; full sort is wasted work.

## entry 274

- Walk both pointers from each end inward; advance the smaller side.

## entry 275

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 276

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 277

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 278

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 279

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 280

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 281

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 282

- Heap when you only need top-k; full sort is wasted work.

## entry 283

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 284

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 285

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 286

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 287

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 288

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 289

- Greedy by end-time picks the most non-overlapping intervals.

## entry 290

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 291

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 292

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 293

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 294

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 295

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 296

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 297

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 298

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 299

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 300

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 301

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 302

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 303

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 304

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 305

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 306

- Splay tree: every access splays to the root; amortized O(log n).

## entry 307

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 308

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 309

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 310

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 311

- StringBuilder: amortize allocation by doubling on grow.

## entry 312

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 313

- Walk both pointers from each end inward; advance the smaller side.

## entry 314

- Greedy by end-time picks the most non-overlapping intervals.

## entry 315

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 316

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 317

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 318

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 319

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 320

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 321

- StringBuilder: amortize allocation by doubling on grow.

## entry 322

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 323

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 324

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 325

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 326

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 327

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 328

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 329

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 330

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 331

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 332

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 333

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 334

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 335

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 336

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 337

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 338

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 339

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 340

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 341

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 342

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 343

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 344

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 345

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 346

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 347

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 348

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 349

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 350

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 351

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 352

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 353

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 354

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 355

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 356

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 357

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 358

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 359

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 360

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 361

- StringBuilder: amortize allocation by doubling on grow.

## entry 362

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 363

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 364

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 365

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 366

- Stable sort matters when a secondary key was set in a prior pass.

## entry 367

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 368

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 369

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 370

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 371

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 372

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 373

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 374

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 375

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 376

- Greedy by end-time picks the most non-overlapping intervals.

## entry 377

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 378

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 379

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 380

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 381

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 382

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 383

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 384

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 385

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 386

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 387

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 388

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 389

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 390

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 391

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 392

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 393

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 394

- Monotonic stack pops while the new element violates the invariant.

## entry 395

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 396

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 397

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 398

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 399

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 400

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 401

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 402

- Splay tree: every access splays to the root; amortized O(log n).

## entry 403

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 404

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 405

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 406

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 407

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 408

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 409

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 410

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 411

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 412

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 413

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 414

- Splay tree: every access splays to the root; amortized O(log n).

## entry 415

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 416

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 417

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 418

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 419

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 420

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 421

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 422

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 423

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 424

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 425

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 426

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 427

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 428

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 429

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 430

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 431

- Monotonic stack pops while the new element violates the invariant.

## entry 432

- Monotonic stack pops while the new element violates the invariant.

## entry 433

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 434

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 435

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 436

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 437

- LIS via patience: each pile holds the smallest tail of length k.

## entry 438

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 439

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 440

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 441

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 442

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 443

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 444

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 445

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 446

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 447

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 448

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 449

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 450

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 451

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 452

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 453

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 454

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 455

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 456

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 457

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 458

- Heap when you only need top-k; full sort is wasted work.

## entry 459

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 460

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 461

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 462

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 463

- Walk both pointers from each end inward; advance the smaller side.

## entry 464

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 465

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 466

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 467

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 468

- Monotonic stack pops while the new element violates the invariant.

## entry 469

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 470

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 471

- Greedy by end-time picks the most non-overlapping intervals.

## entry 472

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 473

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 474

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 475

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 476

- LIS via patience: each pile holds the smallest tail of length k.

## entry 477

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 478

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 479

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 480

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 481

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 482

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 483

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 484

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 485

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 486

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 487

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 488

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 489

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 490

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 491

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 492

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 493

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 494

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 495

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 496

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 497

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 498

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 499

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 500

- Heap when you only need top-k; full sort is wasted work.

## entry 501

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 502

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 503

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 504

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 505

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 506

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 507

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 508

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 509

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 510

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 511

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 512

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 513

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 514

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 515

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 516

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 517

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 518

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 519

- Splay tree: every access splays to the root; amortized O(log n).

## entry 520

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 521

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 522

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 523

- Walk both pointers from each end inward; advance the smaller side.

## entry 524

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 525

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 526

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 527

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 528

- Stable sort matters when a secondary key was set in a prior pass.

## entry 529

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 530

- Greedy by end-time picks the most non-overlapping intervals.

## entry 531

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 532

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 533

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 534

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 535

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 536

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 537

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 538

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 539

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 540

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 541

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 542

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 543

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 544

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 545

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 546

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 547

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 548

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 549

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 550

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 551

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 552

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 553

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 554

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 555

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 556

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 557

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 558

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 559

- Stable sort matters when a secondary key was set in a prior pass.

## entry 560

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 561

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 562

- LIS via patience: each pile holds the smallest tail of length k.

## entry 563

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 564

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 565

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 566

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 567

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 568

- Heap when you only need top-k; full sort is wasted work.

## entry 569

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 570

- Walk both pointers from each end inward; advance the smaller side.

## entry 571

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 572

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 573

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 574

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 575

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 576

- Monotonic stack pops while the new element violates the invariant.

## entry 577

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 578

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 579

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 580

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 581

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 582

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 583

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 584

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 585

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 586

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 587

- Greedy by end-time picks the most non-overlapping intervals.

## entry 588

- Heap when you only need top-k; full sort is wasted work.

## entry 589

- LIS via patience: each pile holds the smallest tail of length k.

## entry 590

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 591

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 592

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 593

- Splay tree: every access splays to the root; amortized O(log n).

## entry 594

- LIS via patience: each pile holds the smallest tail of length k.

## entry 595

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 596

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 597

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 598

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 599

- Splay tree: every access splays to the root; amortized O(log n).

## entry 600

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 601

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 602

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 603

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 604

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 605

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 606

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 607

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 608

- LIS via patience: each pile holds the smallest tail of length k.

## entry 609

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 610

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 611

- LIS via patience: each pile holds the smallest tail of length k.

## entry 612

- Open addressing with linear probing wins until load factor exceeds 0.7.
