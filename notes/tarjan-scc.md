# tarjan-scc

## entry 1

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 2

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 3

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 4

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 5

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 6

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 7

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 8

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 9

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 10

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 11

- Walk both pointers from each end inward; advance the smaller side.

## entry 12

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 13

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 14

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 15

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 16

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 17

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 18

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 19

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 20

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 21

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 22

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 23

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 24

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 25

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 26

- Splay tree: every access splays to the root; amortized O(log n).

## entry 27

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 28

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 29

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 30

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 31

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 32

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 33

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 34

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 35

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 36

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 37

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 38

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 39

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 40

- Stable sort matters when a secondary key was set in a prior pass.

## entry 41

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 42

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 43

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 44

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 45

- Euler tour flattens a tree into an array for range-query LCA.

## entry 46

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 47

- Euler tour flattens a tree into an array for range-query LCA.

## entry 48

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 49

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 50

- LIS via patience: each pile holds the smallest tail of length k.

## entry 51

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 52

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 53

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 54

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 55

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 56

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 57

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 58

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 59

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 60

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 61

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 62

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 63

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 64

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 65

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 66

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 67

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 68

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 69

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 70

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 71

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 72

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 73

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 74

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 75

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 76

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 77

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 78

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 79

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 80

- StringBuilder: amortize allocation by doubling on grow.

## entry 81

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 82

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 83

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 84

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 85

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 86

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 87

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 88

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 89

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 90

- LIS via patience: each pile holds the smallest tail of length k.

## entry 91

- Heap when you only need top-k; full sort is wasted work.

## entry 92

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 93

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 94

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 95

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 96

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 97

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 98

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 99

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 100

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 101

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 102

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 103

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 104

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 105

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 106

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 107

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 108

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 109

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 110

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 111

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 112

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 113

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 114

- Stable sort matters when a secondary key was set in a prior pass.

## entry 115

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 116

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 117

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 118

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 119

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 120

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 121

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 122

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 123

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 124

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 125

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 126

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 127

- Greedy by end-time picks the most non-overlapping intervals.

## entry 128

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 129

- Heap when you only need top-k; full sort is wasted work.

## entry 130

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 131

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 132

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 133

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 134

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 135

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 136

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 137

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 138

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 139

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 140

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 141

- Splay tree: every access splays to the root; amortized O(log n).

## entry 142

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 143

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 144

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 145

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 146

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 147

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 148

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 149

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 150

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 151

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 152

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 153

- Stable sort matters when a secondary key was set in a prior pass.

## entry 154

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 155

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 156

- Heap when you only need top-k; full sort is wasted work.

## entry 157

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 158

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 159

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 160

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 161

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 162

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 163

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 164

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 165

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 166

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 167

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 168

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 169

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 170

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 171

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 172

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 173

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 174

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 175

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 176

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 177

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 178

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 179

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 180

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 181

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 182

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 183

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 184

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 185

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 186

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 187

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 188

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 189

- StringBuilder: amortize allocation by doubling on grow.

## entry 190

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 191

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 192

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 193

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 194

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 195

- Stable sort matters when a secondary key was set in a prior pass.

## entry 196

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 197

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 198

- Walk both pointers from each end inward; advance the smaller side.

## entry 199

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 200

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 201

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 202

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 203

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 204

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 205

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 206

- Stable sort matters when a secondary key was set in a prior pass.

## entry 207

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 208

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 209

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 210

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 211

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 212

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 213

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 214

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 215

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 216

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 217

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 218

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 219

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 220

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 221

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 222

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 223

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 224

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 225

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 226

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 227

- Monotonic stack pops while the new element violates the invariant.

## entry 228

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 229

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 230

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 231

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 232

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 233

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 234

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 235

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 236

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 237

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 238

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 239

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 240

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 241

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 242

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 243

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 244

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 245

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 246

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 247

- Heap when you only need top-k; full sort is wasted work.

## entry 248

- Euler tour flattens a tree into an array for range-query LCA.

## entry 249

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 250

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 251

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 252

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 253

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 254

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 255

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 256

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 257

- Splay tree: every access splays to the root; amortized O(log n).

## entry 258

- Splay tree: every access splays to the root; amortized O(log n).

## entry 259

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 260

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 261

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 262

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 263

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 264

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 265

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 266

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 267

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 268

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 269

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 270

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 271

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 272

- Walk both pointers from each end inward; advance the smaller side.

## entry 273

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 274

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 275

- Euler tour flattens a tree into an array for range-query LCA.

## entry 276

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 277

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 278

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 279

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 280

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 281

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 282

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 283

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 284

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 285

- Walk both pointers from each end inward; advance the smaller side.

## entry 286

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 287

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 288

- LIS via patience: each pile holds the smallest tail of length k.

## entry 289

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 290

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 291

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 292

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 293

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 294

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 295

- Euler tour flattens a tree into an array for range-query LCA.

## entry 296

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 297

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 298

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 299

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 300

- Euler tour flattens a tree into an array for range-query LCA.

## entry 301

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 302

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 303

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 304

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 305

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 306

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 307

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 308

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 309

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 310

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 311

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 312

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 313

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 314

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 315

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 316

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 317

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 318

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 319

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 320

- Monotonic stack pops while the new element violates the invariant.

## entry 321

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 322

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 323

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 324

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 325

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 326

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 327

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 328

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 329

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 330

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 331

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 332

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
