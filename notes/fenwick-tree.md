# fenwick-tree

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Walk both pointers from each end inward; advance the smaller side.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Greedy by end-time picks the most non-overlapping intervals.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- LIS via patience: each pile holds the smallest tail of length k.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Heap when you only need top-k; full sort is wasted work.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Stable sort matters when a secondary key was set in a prior pass.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Monotonic stack pops while the new element violates the invariant.

## entry 1

- Greedy by end-time picks the most non-overlapping intervals.

## entry 2

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 3

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 4

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 5

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 6

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 7

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 8

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 9

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 10

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 11

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 12

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 13

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 14

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 15

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 16

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 17

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 18

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 19

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 20

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 21

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 22

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 23

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 24

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 25

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 26

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 27

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 28

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 29

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 30

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 31

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 32

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 33

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 34

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 35

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 36

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 37

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 38

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 39

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 40

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 41

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 42

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 43

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 44

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 45

- Splay tree: every access splays to the root; amortized O(log n).

## entry 46

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 47

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 48

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 49

- Greedy by end-time picks the most non-overlapping intervals.

## entry 50

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 51

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 52

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 53

- Splay tree: every access splays to the root; amortized O(log n).

## entry 54

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 55

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 56

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 57

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 58

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 59

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 60

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 61

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 62

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 63

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 64

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 65

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 66

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 67

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 68

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 69

- Stable sort matters when a secondary key was set in a prior pass.

## entry 70

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 71

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 72

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 73

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 74

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 75

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 76

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 77

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 78

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 79

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 80

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 81

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 82

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 83

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 84

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 85

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 86

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 87

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 88

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 89

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 90

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 91

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 92

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 93

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 94

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 95

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 96

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 97

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 98

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 99

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 100

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 101

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 102

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 103

- StringBuilder: amortize allocation by doubling on grow.

## entry 104

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 105

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 106

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 107

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 108

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 109

- Stable sort matters when a secondary key was set in a prior pass.

## entry 110

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 111

- StringBuilder: amortize allocation by doubling on grow.

## entry 112

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 113

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 114

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 115

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 116

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 117

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 118

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 119

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 120

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 121

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 122

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 123

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 124

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 125

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 126

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 127

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 128

- StringBuilder: amortize allocation by doubling on grow.

## entry 129

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 130

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 131

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 132

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 133

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 134

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 135

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 136

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 137

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 138

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 139

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 140

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 141

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 142

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 143

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 144

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 145

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 146

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 147

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 148

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 149

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 150

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 151

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 152

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 153

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 154

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 155

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 156

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 157

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 158

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 159

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 160

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 161

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 162

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 163

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 164

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 165

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 166

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 167

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 168

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 169

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 170

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 171

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 172

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 173

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 174

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 175

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 176

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 177

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 178

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 179

- Monotonic stack pops while the new element violates the invariant.

## entry 180

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 181

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 182

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 183

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 184

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 185

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 186

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 187

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 188

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 189

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 190

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 191

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 192

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 193

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 194

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 195

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 196

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 197

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 198

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 199

- Euler tour flattens a tree into an array for range-query LCA.

## entry 200

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 201

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 202

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 203

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 204

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 205

- Euler tour flattens a tree into an array for range-query LCA.

## entry 206

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 207

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 208

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 209

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 210

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 211

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 212

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 213

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 214

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 215

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 216

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 217

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 218

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 219

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 220

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 221

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 222

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 223

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 224

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 225

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 226

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 227

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 228

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 229

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 230

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 231

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 232

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 233

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 234

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 235

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 236

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 237

- Greedy by end-time picks the most non-overlapping intervals.

## entry 238

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 239

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 240

- Heap when you only need top-k; full sort is wasted work.

## entry 241

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 242

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 243

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 244

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 245

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 246

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 247

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 248

- Euler tour flattens a tree into an array for range-query LCA.

## entry 249

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 250

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 251

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 252

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 253

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 254

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 255

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 256

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 257

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 258

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 259

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 260

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 261

- Euler tour flattens a tree into an array for range-query LCA.

## entry 262

- StringBuilder: amortize allocation by doubling on grow.

## entry 263

- Euler tour flattens a tree into an array for range-query LCA.

## entry 264

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 265

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 266

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 267

- Stable sort matters when a secondary key was set in a prior pass.

## entry 268

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 269

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 270

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 271

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 272

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 273

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 274

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 275

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 276

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 277

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 278

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 279

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 280

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 281

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 282

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 283

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 284

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 285

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 286

- Euler tour flattens a tree into an array for range-query LCA.

## entry 287

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 288

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 289

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 290

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 291

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 292

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 293

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 294

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 295

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 296

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 297

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 298

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 299

- Heap when you only need top-k; full sort is wasted work.

## entry 300

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 301

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 302

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 303

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 304

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 305

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 306

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 307

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 308

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 309

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 310

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 311

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 312

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 313

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 314

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 315

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 316

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 317

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 318

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 319

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 320

- Splay tree: every access splays to the root; amortized O(log n).

## entry 321

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 322

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 323

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 324

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 325

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 326

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 327

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 328

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 329

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 330

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 331

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 332

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 333

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 334

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 335

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 336

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 337

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 338

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 339

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 340

- Greedy by end-time picks the most non-overlapping intervals.

## entry 341

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 342

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 343

- Euler tour flattens a tree into an array for range-query LCA.

## entry 344

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 345

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 346

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 347

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 348

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 349

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 350

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 351

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 352

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 353

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 354

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 355

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 356

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 357

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 358

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 359

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 360

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 361

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 362

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 363

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 364

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 365

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 366

- Heap when you only need top-k; full sort is wasted work.

## entry 367

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 368

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 369

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 370

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 371

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 372

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 373

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 374

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 375

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 376

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 377

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 378

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 379

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 380

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 381

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 382

- StringBuilder: amortize allocation by doubling on grow.

## entry 383

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 384

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 385

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 386

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 387

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 388

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 389

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 390

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 391

- Stable sort matters when a secondary key was set in a prior pass.

## entry 392

- Euler tour flattens a tree into an array for range-query LCA.

## entry 393

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 394

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 395

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 396

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 397

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 398

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 399

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 400

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 401

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 402

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 403

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 404

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 405

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 406

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 407

- Greedy by end-time picks the most non-overlapping intervals.

## entry 408

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 409

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 410

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 411

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 412

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 413

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 414

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 415

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 416

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 417

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 418

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 419

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 420

- StringBuilder: amortize allocation by doubling on grow.

## entry 421

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 422

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 423

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 424

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 425

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 426

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 427

- Walk both pointers from each end inward; advance the smaller side.

## entry 428

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 429

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 430

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 431

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 432

- Monotonic stack pops while the new element violates the invariant.

## entry 433

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 434

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 435

- Greedy by end-time picks the most non-overlapping intervals.

## entry 436

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 437

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 438

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 439

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 440

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 441

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 442

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 443

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 444

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 445

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 446

- Heap when you only need top-k; full sort is wasted work.

## entry 447

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 448

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 449

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 450

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 451

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 452

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 453

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 454

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 455

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 456

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 457

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 458

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 459

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 460

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 461

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 462

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 463

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 464

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 465

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 466

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 467

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 468

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 469

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 470

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 471

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 472

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 473

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 474

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 475

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 476

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 477

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 478

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 479

- Stable sort matters when a secondary key was set in a prior pass.

## entry 480

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 481

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 482

- Euler tour flattens a tree into an array for range-query LCA.

## entry 483

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 484

- Greedy by end-time picks the most non-overlapping intervals.

## entry 485

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 486

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 487

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 488

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 489

- Monotonic stack pops while the new element violates the invariant.

## entry 490

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 491

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 492

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 493

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 494

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 495

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 496

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 497

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 498

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 499

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 500

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 501

- Euler tour flattens a tree into an array for range-query LCA.

## entry 502

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 503

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 504

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 505

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 506

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 507

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 508

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 509

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 510

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 511

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 512

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 513

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 514

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 515

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 516

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 517

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 518

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 519

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 520

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 521

- Monotonic stack pops while the new element violates the invariant.

## entry 522

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 523

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 524

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 525

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 526

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 527

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 528

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 529

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 530

- Heap when you only need top-k; full sort is wasted work.

## entry 531

- Splay tree: every access splays to the root; amortized O(log n).

## entry 532

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 533

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 534

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 535

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 536

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 537

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 538

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 539

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 540

- Euler tour flattens a tree into an array for range-query LCA.

## entry 541

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 542

- StringBuilder: amortize allocation by doubling on grow.

## entry 543

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 544

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 545

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 546

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 547

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 548

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 549

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 550

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 551

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 552

- Stable sort matters when a secondary key was set in a prior pass.

## entry 553

- Splay tree: every access splays to the root; amortized O(log n).

## entry 554

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 555

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 556

- Stable sort matters when a secondary key was set in a prior pass.

## entry 557

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 558

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 559

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 560

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 561

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 562

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 563

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 564

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 565

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 566

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 567

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 568

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 569

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 570

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 571

- Walk both pointers from each end inward; advance the smaller side.

## entry 572

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 573

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 574

- Euler tour flattens a tree into an array for range-query LCA.

## entry 575

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 576

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 577

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 578

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 579

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 580

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 581

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 582

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 583

- Greedy by end-time picks the most non-overlapping intervals.

## entry 584

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 585

- Monotonic stack pops while the new element violates the invariant.

## entry 586

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 587

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 588

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 589

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 590

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 591

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 592

- Stable sort matters when a secondary key was set in a prior pass.

## entry 593

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 594

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 595

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 596

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 597

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 598

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 599

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
