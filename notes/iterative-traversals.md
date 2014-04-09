# iterative-traversals

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Monotonic stack pops while the new element violates the invariant.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- LIS via patience: each pile holds the smallest tail of length k.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Greedy by end-time picks the most non-overlapping intervals.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Walk both pointers from each end inward; advance the smaller side.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Union-Find with path compression amortizes to near-O(1) per op.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Heap when you only need top-k; full sort is wasted work.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Stable sort matters when a secondary key was set in a prior pass.

## entry 1

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 2

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 3

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 4

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 5

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 6

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 7

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 8

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 9

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 10

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 11

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 12

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 13

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 14

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 15

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 16

- Splay tree: every access splays to the root; amortized O(log n).

## entry 17

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 18

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 19

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 20

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 21

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 22

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 23

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 24

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 25

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 26

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 27

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 28

- Euler tour flattens a tree into an array for range-query LCA.

## entry 29

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 30

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 31

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 32

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 33

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 34

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 35

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 36

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 37

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 38

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 39

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 40

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 41

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 42

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 43

- StringBuilder: amortize allocation by doubling on grow.

## entry 44

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 45

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 46

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 47

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 48

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 49

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 50

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 51

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 52

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 53

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 54

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 55

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 56

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 57

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 58

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 59

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 60

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 61

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 62

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 63

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 64

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 65

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 66

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 67

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 68

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 69

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 70

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 71

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 72

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 73

- Splay tree: every access splays to the root; amortized O(log n).

## entry 74

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 75

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 76

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 77

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 78

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 79

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 80

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 81

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 82

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 83

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 84

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 85

- Monotonic stack pops while the new element violates the invariant.

## entry 86

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 87

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 88

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 89

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 90

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 91

- LIS via patience: each pile holds the smallest tail of length k.

## entry 92

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 93

- Monotonic stack pops while the new element violates the invariant.

## entry 94

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 95

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 96

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 97

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 98

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 99

- Euler tour flattens a tree into an array for range-query LCA.

## entry 100

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 101

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 102

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 103

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 104

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 105

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 106

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 107

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 108

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 109

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 110

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 111

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 112

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 113

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 114

- Stable sort matters when a secondary key was set in a prior pass.

## entry 115

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 116

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 117

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 118

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 119

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 120

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 121

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 122

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 123

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 124

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 125

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 126

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 127

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 128

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 129

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 130

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 131

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 132

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 133

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 134

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 135

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 136

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 137

- Greedy by end-time picks the most non-overlapping intervals.

## entry 138

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 139

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 140

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 141

- Walk both pointers from each end inward; advance the smaller side.

## entry 142

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 143

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 144

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 145

- Greedy by end-time picks the most non-overlapping intervals.

## entry 146

- Monotonic stack pops while the new element violates the invariant.

## entry 147

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 148

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 149

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 150

- Monotonic stack pops while the new element violates the invariant.

## entry 151

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 152

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 153

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 154

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 155

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 156

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 157

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 158

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 159

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 160

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 161

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 162

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 163

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 164

- Stable sort matters when a secondary key was set in a prior pass.

## entry 165

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 166

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 167

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 168

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 169

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 170

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 171

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 172

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 173

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 174

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 175

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 176

- Splay tree: every access splays to the root; amortized O(log n).

## entry 177

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 178

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 179

- Walk both pointers from each end inward; advance the smaller side.

## entry 180

- Monotonic stack pops while the new element violates the invariant.

## entry 181

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 182

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 183

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 184

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 185

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 186

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 187

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 188

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 189

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 190

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 191

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 192

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 193

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 194

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 195

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 196

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 197

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 198

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 199

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 200

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 201

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 202

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 203

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 204

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 205

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 206

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 207

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 208

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 209

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 210

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 211

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 212

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 213

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 214

- Walk both pointers from each end inward; advance the smaller side.

## entry 215

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 216

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 217

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 218

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 219

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 220

- Splay tree: every access splays to the root; amortized O(log n).

## entry 221

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 222

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 223

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 224

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 225

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 226

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 227

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 228

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 229

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 230

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 231

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 232

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 233

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 234

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 235

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 236

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 237

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 238

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 239

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 240

- Stable sort matters when a secondary key was set in a prior pass.

## entry 241

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 242

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 243

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 244

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 245

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 246

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 247

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 248

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 249

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 250

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 251

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 252

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 253

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 254

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 255

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 256

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 257

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 258

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 259

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 260

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 261

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 262

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 263

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 264

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 265

- Euler tour flattens a tree into an array for range-query LCA.

## entry 266

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 267

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 268

- Heap when you only need top-k; full sort is wasted work.

## entry 269

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 270

- Splay tree: every access splays to the root; amortized O(log n).

## entry 271

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 272

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 273

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 274

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 275

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 276

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 277

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 278

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 279

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 280

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 281

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 282

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 283

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 284

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 285

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 286

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 287

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 288

- Splay tree: every access splays to the root; amortized O(log n).

## entry 289

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 290

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 291

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 292

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 293

- Splay tree: every access splays to the root; amortized O(log n).

## entry 294

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 295

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 296

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 297

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 298

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 299

- LIS via patience: each pile holds the smallest tail of length k.

## entry 300

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 301

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 302

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 303

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 304

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 305

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 306

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 307

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 308

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 309

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 310

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 311

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 312

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 313

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 314

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 315

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 316

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 317

- Monotonic stack pops while the new element violates the invariant.

## entry 318

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 319

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 320

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 321

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 322

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 323

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 324

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 325

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 326

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 327

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 328

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 329

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 330

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 331

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 332

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 333

- Stable sort matters when a secondary key was set in a prior pass.

## entry 334

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 335

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 336

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 337

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 338

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 339

- Walk both pointers from each end inward; advance the smaller side.

## entry 340

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 341

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 342

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 343

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 344

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 345

- Stable sort matters when a secondary key was set in a prior pass.

## entry 346

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 347

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 348

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 349

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 350

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 351

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 352

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 353

- StringBuilder: amortize allocation by doubling on grow.

## entry 354

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 355

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 356

- Splay tree: every access splays to the root; amortized O(log n).

## entry 357

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 358

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 359

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 360

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 361

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 362

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 363

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 364

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 365

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 366

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 367

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 368

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 369

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 370

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 371

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 372

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 373

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 374

- Stable sort matters when a secondary key was set in a prior pass.

## entry 375

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 376

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 377

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 378

- StringBuilder: amortize allocation by doubling on grow.

## entry 379

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 380

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 381

- Walk both pointers from each end inward; advance the smaller side.

## entry 382

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 383

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 384

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 385

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 386

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 387

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 388

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 389

- Walk both pointers from each end inward; advance the smaller side.

## entry 390

- Greedy by end-time picks the most non-overlapping intervals.

## entry 391

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 392

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 393

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 394

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 395

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 396

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 397

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 398

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 399

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 400

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 401

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 402

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 403

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 404

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 405

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 406

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 407

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 408

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 409

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 410

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 411

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 412

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 413

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 414

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 415

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 416

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 417

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 418

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 419

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 420

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 421

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 422

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 423

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 424

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 425

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 426

- Heap when you only need top-k; full sort is wasted work.

## entry 427

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 428

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 429

- LIS via patience: each pile holds the smallest tail of length k.

## entry 430

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 431

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 432

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 433

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 434

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 435

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 436

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 437

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 438

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 439

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 440

- Splay tree: every access splays to the root; amortized O(log n).

## entry 441

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 442

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 443

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 444

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 445

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 446

- Walk both pointers from each end inward; advance the smaller side.

## entry 447

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 448

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 449

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 450

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 451

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 452

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 453

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 454

- Stable sort matters when a secondary key was set in a prior pass.

## entry 455

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 456

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 457

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 458

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 459

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 460

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 461

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 462

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 463

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 464

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 465

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 466

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 467

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 468

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 469

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 470

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 471

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 472

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 473

- Heap when you only need top-k; full sort is wasted work.

## entry 474

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 475

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 476

- Splay tree: every access splays to the root; amortized O(log n).

## entry 477

- Monotonic stack pops while the new element violates the invariant.

## entry 478

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 479

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 480

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 481

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 482

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 483

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 484

- StringBuilder: amortize allocation by doubling on grow.

## entry 485

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 486

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 487

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 488

- Heap when you only need top-k; full sort is wasted work.

## entry 489

- Splay tree: every access splays to the root; amortized O(log n).

## entry 490

- Walk both pointers from each end inward; advance the smaller side.

## entry 491

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 492

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 493

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 494

- StringBuilder: amortize allocation by doubling on grow.

## entry 495

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 496

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 497

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 498

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 499

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 500

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 501

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 502

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 503

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 504

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
