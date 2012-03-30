# lis

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Heap when you only need top-k; full sort is wasted work.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Walk both pointers from each end inward; advance the smaller side.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Monotonic stack pops while the new element violates the invariant.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- LIS via patience: each pile holds the smallest tail of length k.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Union-Find with path compression amortizes to near-O(1) per op.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Stable sort matters when a secondary key was set in a prior pass.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Greedy by end-time picks the most non-overlapping intervals.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 1

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 2

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 3

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 4

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 5

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 6

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 7

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 8

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 9

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 10

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 11

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 12

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 13

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 14

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 15

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 16

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 17

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 18

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 19

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 20

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 21

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 22

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 23

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 24

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 25

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 26

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 27

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 28

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 29

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 30

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 31

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 32

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 33

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 34

- StringBuilder: amortize allocation by doubling on grow.

## entry 35

- Heap when you only need top-k; full sort is wasted work.

## entry 36

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 37

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 38

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 39

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 40

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 41

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 42

- Monotonic stack pops while the new element violates the invariant.

## entry 43

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 44

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 45

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 46

- Euler tour flattens a tree into an array for range-query LCA.

## entry 47

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 48

- Monotonic stack pops while the new element violates the invariant.

## entry 49

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 50

- Monotonic stack pops while the new element violates the invariant.

## entry 51

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 52

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 53

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 54

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 55

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 56

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 57

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 58

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 59

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 60

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 61

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 62

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 63

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 64

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 65

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 66

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 67

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 68

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 69

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 70

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 71

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 72

- StringBuilder: amortize allocation by doubling on grow.

## entry 73

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 74

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 75

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 76

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 77

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 78

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 79

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 80

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 81

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 82

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 83

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 84

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 85

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 86

- Heap when you only need top-k; full sort is wasted work.

## entry 87

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 88

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 89

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 90

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 91

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 92

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 93

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 94

- Splay tree: every access splays to the root; amortized O(log n).

## entry 95

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 96

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 97

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 98

- Stable sort matters when a secondary key was set in a prior pass.

## entry 99

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 100

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 101

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 102

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 103

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 104

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 105

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 106

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 107

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 108

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 109

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 110

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 111

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 112

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 113

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 114

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 115

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 116

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 117

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 118

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 119

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 120

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 121

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 122

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 123

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 124

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 125

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 126

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 127

- StringBuilder: amortize allocation by doubling on grow.

## entry 128

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 129

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 130

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 131

- Walk both pointers from each end inward; advance the smaller side.

## entry 132

- Monotonic stack pops while the new element violates the invariant.

## entry 133

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 134

- Splay tree: every access splays to the root; amortized O(log n).

## entry 135

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 136

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 137

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 138

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 139

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 140

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 141

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 142

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 143

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 144

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 145

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 146

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 147

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 148

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 149

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 150

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 151

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 152

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 153

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 154

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 155

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 156

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 157

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 158

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 159

- Monotonic stack pops while the new element violates the invariant.

## entry 160

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 161

- Greedy by end-time picks the most non-overlapping intervals.

## entry 162

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 163

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 164

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 165

- Euler tour flattens a tree into an array for range-query LCA.

## entry 166

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 167

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 168

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 169

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 170

- Euler tour flattens a tree into an array for range-query LCA.

## entry 171

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 172

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 173

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 174

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 175

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 176

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 177

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 178

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 179

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 180

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 181

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 182

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 183

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 184

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 185

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 186

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 187

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 188

- LIS via patience: each pile holds the smallest tail of length k.

## entry 189

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 190

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 191

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 192

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 193

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 194

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 195

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 196

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 197

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 198

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 199

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 200

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 201

- Splay tree: every access splays to the root; amortized O(log n).

## entry 202

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 203

- LIS via patience: each pile holds the smallest tail of length k.

## entry 204

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 205

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 206

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 207

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 208

- Heap when you only need top-k; full sort is wasted work.

## entry 209

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 210

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 211

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 212

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 213

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 214

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 215

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 216

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 217

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 218

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 219

- Euler tour flattens a tree into an array for range-query LCA.

## entry 220

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 221

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 222

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 223

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 224

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 225

- Heap when you only need top-k; full sort is wasted work.

## entry 226

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 227

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 228

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 229

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 230

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 231

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 232

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 233

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 234

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 235

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 236

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 237

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 238

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 239

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 240

- Heap when you only need top-k; full sort is wasted work.

## entry 241

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 242

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 243

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 244

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 245

- StringBuilder: amortize allocation by doubling on grow.

## entry 246

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 247

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 248

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 249

- LIS via patience: each pile holds the smallest tail of length k.

## entry 250

- Heap when you only need top-k; full sort is wasted work.

## entry 251

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 252

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 253

- Monotonic stack pops while the new element violates the invariant.

## entry 254

- Stable sort matters when a secondary key was set in a prior pass.

## entry 255

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 256

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 257

- Heap when you only need top-k; full sort is wasted work.

## entry 258

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 259

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 260

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 261

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 262

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 263

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 264

- LIS via patience: each pile holds the smallest tail of length k.

## entry 265

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 266

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 267

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 268

- Stable sort matters when a secondary key was set in a prior pass.

## entry 269

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 270

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 271

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 272

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 273

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 274

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 275

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 276

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 277

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 278

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 279

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 280

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 281

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 282

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 283

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 284

- Greedy by end-time picks the most non-overlapping intervals.

## entry 285

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 286

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 287

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 288

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 289

- Heap when you only need top-k; full sort is wasted work.

## entry 290

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 291

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 292

- Stable sort matters when a secondary key was set in a prior pass.

## entry 293

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 294

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 295

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 296

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 297

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 298

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 299

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 300

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 301

- Greedy by end-time picks the most non-overlapping intervals.

## entry 302

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 303

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 304

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 305

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 306

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 307

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 308

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 309

- Stable sort matters when a secondary key was set in a prior pass.

## entry 310

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 311

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 312

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 313

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 314

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 315

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 316

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 317

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 318

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 319

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 320

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 321

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 322

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 323

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 324

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 325

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 326

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 327

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 328

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 329

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 330

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 331

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 332

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 333

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 334

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 335

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 336

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 337

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 338

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 339

- Euler tour flattens a tree into an array for range-query LCA.

## entry 340

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 341

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 342

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 343

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 344

- Heap when you only need top-k; full sort is wasted work.

## entry 345

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 346

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 347

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 348

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 349

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 350

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 351

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 352

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 353

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 354

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 355

- StringBuilder: amortize allocation by doubling on grow.

## entry 356

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 357

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 358

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 359

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 360

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 361

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 362

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 363

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 364

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 365

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 366

- Walk both pointers from each end inward; advance the smaller side.

## entry 367

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 368

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 369

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 370

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 371

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 372

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 373

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 374

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 375

- Stable sort matters when a secondary key was set in a prior pass.

## entry 376

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 377

- LIS via patience: each pile holds the smallest tail of length k.

## entry 378

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 379

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 380

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 381

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 382

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 383

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 384

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 385

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 386

- Walk both pointers from each end inward; advance the smaller side.

## entry 387

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 388

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 389

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 390

- StringBuilder: amortize allocation by doubling on grow.

## entry 391

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 392

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 393

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 394

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 395

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 396

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 397

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 398

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 399

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 400

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 401

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 402

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 403

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 404

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 405

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 406

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 407

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 408

- Stable sort matters when a secondary key was set in a prior pass.

## entry 409

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 410

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 411

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 412

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 413

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 414

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 415

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 416

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 417

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 418

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 419

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 420

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 421

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 422

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 423

- StringBuilder: amortize allocation by doubling on grow.

## entry 424

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 425

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 426

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 427

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 428

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 429

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 430

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 431

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 432

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 433

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 434

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 435

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 436

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 437

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 438

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 439

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 440

- Splay tree: every access splays to the root; amortized O(log n).

## entry 441

- LIS via patience: each pile holds the smallest tail of length k.

## entry 442

- LIS via patience: each pile holds the smallest tail of length k.

## entry 443

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 444

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 445

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 446

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 447

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 448

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 449

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 450

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 451

- Splay tree: every access splays to the root; amortized O(log n).

## entry 452

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 453

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 454

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 455

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 456

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 457

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 458

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 459

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 460

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 461

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 462

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 463

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 464

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 465

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 466

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 467

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 468

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 469

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 470

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 471

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 472

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 473

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 474

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 475

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 476

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 477

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 478

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 479

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 480

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 481

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 482

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 483

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 484

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 485

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 486

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 487

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 488

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 489

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 490

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 491

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 492

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 493

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 494

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 495

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 496

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 497

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 498

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 499

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 500

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 501

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 502

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 503

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 504

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 505

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 506

- Euler tour flattens a tree into an array for range-query LCA.

## entry 507

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 508

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 509

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 510

- LIS via patience: each pile holds the smallest tail of length k.

## entry 511

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 512

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 513

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 514

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 515

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 516

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 517

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 518

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 519

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 520

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 521

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 522

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 523

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 524

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 525

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 526

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 527

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 528

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 529

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 530

- LIS via patience: each pile holds the smallest tail of length k.

## entry 531

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 532

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 533

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 534

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 535

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 536

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 537

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 538

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 539

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 540

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 541

- Splay tree: every access splays to the root; amortized O(log n).

## entry 542

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 543

- Heap when you only need top-k; full sort is wasted work.

## entry 544

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 545

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 546

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 547

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 548

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 549

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 550

- In-place compaction uses two pointers: read advances always, write only on keep.
