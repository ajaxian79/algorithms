# bridges

## entry 1

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 2

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 4

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 5

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 6

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 7

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 8

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 9

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 10

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 11

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 12

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 13

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 14

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 15

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 16

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 17

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 18

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 19

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 20

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 21

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 22

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 23

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 24

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 25

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 26

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 27

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 28

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 29

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 30

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 31

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 32

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 33

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 34

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 35

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 36

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 37

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 38

- Monotonic stack pops while the new element violates the invariant.

## entry 39

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 40

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 41

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 42

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 43

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 44

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 45

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 46

- Walk both pointers from each end inward; advance the smaller side.

## entry 47

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 48

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 49

- LIS via patience: each pile holds the smallest tail of length k.

## entry 50

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 51

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 52

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 53

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 54

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 55

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 56

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 57

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 58

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 59

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 60

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 61

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 62

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 63

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 64

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 65

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 66

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 67

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 68

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 69

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 70

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 71

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 72

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 73

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 74

- Stable sort matters when a secondary key was set in a prior pass.

## entry 75

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 76

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 77

- Monotonic stack pops while the new element violates the invariant.

## entry 78

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 79

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 80

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 81

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 82

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 83

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 84

- Walk both pointers from each end inward; advance the smaller side.

## entry 85

- StringBuilder: amortize allocation by doubling on grow.

## entry 86

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 87

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 88

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 89

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 90

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 91

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 92

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 93

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 94

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 95

- Walk both pointers from each end inward; advance the smaller side.

## entry 96

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 97

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 98

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 99

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 100

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 101

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 102

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 103

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 104

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 105

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 106

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 107

- Stable sort matters when a secondary key was set in a prior pass.

## entry 108

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 109

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 110

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 111

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 112

- Monotonic stack pops while the new element violates the invariant.

## entry 113

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 114

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 115

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 116

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 117

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 118

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 119

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 120

- Splay tree: every access splays to the root; amortized O(log n).

## entry 121

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 122

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 123

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 124

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 125

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 126

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 127

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 128

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 129

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 130

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 131

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 132

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 133

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 134

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 135

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 136

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 137

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 138

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 139

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 140

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 141

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 142

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 143

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 144

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 145

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 146

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 147

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 148

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 149

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 150

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 151

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 152

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 153

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 154

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 155

- Monotonic stack pops while the new element violates the invariant.

## entry 156

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 157

- StringBuilder: amortize allocation by doubling on grow.

## entry 158

- Stable sort matters when a secondary key was set in a prior pass.

## entry 159

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 160

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 161

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 162

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 163

- Heap when you only need top-k; full sort is wasted work.

## entry 164

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 165

- StringBuilder: amortize allocation by doubling on grow.

## entry 166

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 167

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 168

- Monotonic stack pops while the new element violates the invariant.

## entry 169

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 170

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 171

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 172

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 173

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 174

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 175

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 176

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 177

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 178

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 179

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 180

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 181

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 182

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 183

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 184

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 185

- Monotonic stack pops while the new element violates the invariant.

## entry 186

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 187

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 188

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 189

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 190

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 191

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 192

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 193

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 194

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 195

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 196

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 197

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 198

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 199

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 200

- StringBuilder: amortize allocation by doubling on grow.

## entry 201

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 202

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 203

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 204

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 205

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 206

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 207

- Walk both pointers from each end inward; advance the smaller side.

## entry 208

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 209

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 210

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 211

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 212

- StringBuilder: amortize allocation by doubling on grow.

## entry 213

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 214

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 215

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 216

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 217

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 218

- Stable sort matters when a secondary key was set in a prior pass.

## entry 219

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 220

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 221

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 222

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 223

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 224

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 225

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 226

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 227

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 228

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 229

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 230

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 231

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 232

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 233

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 234

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 235

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 236

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 237

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 238

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 239

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 240

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 241

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 242

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 243

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 244

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 245

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 246

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 247

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 248

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 249

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 250

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 251

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 252

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 253

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 254

- StringBuilder: amortize allocation by doubling on grow.

## entry 255

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 256

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 257

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 258

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 259

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 260

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 261

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 262

- Walk both pointers from each end inward; advance the smaller side.

## entry 263

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 264

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 265

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 266

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 267

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 268

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 269

- Splay tree: every access splays to the root; amortized O(log n).

## entry 270

- Euler tour flattens a tree into an array for range-query LCA.

## entry 271

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 272

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 273

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 274

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 275

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 276

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 277

- Stable sort matters when a secondary key was set in a prior pass.

## entry 278

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 279

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 280

- Heap when you only need top-k; full sort is wasted work.

## entry 281

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 282

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 283

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 284

- Stable sort matters when a secondary key was set in a prior pass.
