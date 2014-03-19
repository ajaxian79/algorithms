# topological-sort

- Walk both pointers from each end inward; advance the smaller side.

- In-place compaction uses two pointers: read advances always, write only on keep.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Monotonic stack pops while the new element violates the invariant.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Greedy by end-time picks the most non-overlapping intervals.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- LIS via patience: each pile holds the smallest tail of length k.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Stable sort matters when a secondary key was set in a prior pass.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Heap when you only need top-k; full sort is wasted work.

- Union-Find with path compression amortizes to near-O(1) per op.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 1

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 2

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 3

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 4

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 5

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 6

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 7

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 8

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 9

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 10

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 11

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 12

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 13

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 14

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 15

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 16

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 17

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 18

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 19

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 20

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 21

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 22

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 23

- Heap when you only need top-k; full sort is wasted work.

## entry 24

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 25

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 26

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 27

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 28

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 29

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 30

- Splay tree: every access splays to the root; amortized O(log n).

## entry 31

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 32

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 33

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 34

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 35

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 36

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 37

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 38

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 39

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 40

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 41

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 42

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 43

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 44

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 45

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 46

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 47

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 48

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 49

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 50

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 51

- Greedy by end-time picks the most non-overlapping intervals.

## entry 52

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 53

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 54

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 55

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 56

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 57

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 58

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 59

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 60

- Monotonic stack pops while the new element violates the invariant.

## entry 61

- LIS via patience: each pile holds the smallest tail of length k.

## entry 62

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 63

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 64

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 65

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 66

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 67

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 68

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 69

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 70

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 71

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 72

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 73

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 74

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 75

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 76

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 77

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 78

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 79

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 80

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 81

- Walk both pointers from each end inward; advance the smaller side.

## entry 82

- Splay tree: every access splays to the root; amortized O(log n).

## entry 83

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 84

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 85

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 86

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 87

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 88

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 89

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 90

- StringBuilder: amortize allocation by doubling on grow.

## entry 91

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 92

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 93

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 94

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 95

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 96

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 97

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 98

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 99

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 100

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 101

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 102

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 103

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 104

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 105

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 106

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 107

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 108

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 109

- Stable sort matters when a secondary key was set in a prior pass.

## entry 110

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 111

- Heap when you only need top-k; full sort is wasted work.

## entry 112

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 113

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 114

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 115

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 116

- Splay tree: every access splays to the root; amortized O(log n).

## entry 117

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 118

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 119

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 120

- Stable sort matters when a secondary key was set in a prior pass.

## entry 121

- LIS via patience: each pile holds the smallest tail of length k.

## entry 122

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 123

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 124

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 125

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 126

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 127

- Greedy by end-time picks the most non-overlapping intervals.

## entry 128

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 129

- Walk both pointers from each end inward; advance the smaller side.

## entry 130

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 131

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 132

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 133

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 134

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 135

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 136

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 137

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 138

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 139

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 140

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 141

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 142

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 143

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 144

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 145

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 146

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 147

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 148

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 149

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 150

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 151

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 152

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 153

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 154

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 155

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 156

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 157

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 158

- LIS via patience: each pile holds the smallest tail of length k.

## entry 159

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 160

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 161

- StringBuilder: amortize allocation by doubling on grow.

## entry 162

- Walk both pointers from each end inward; advance the smaller side.

## entry 163

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 164

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 165

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 166

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 167

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 168

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 169

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 170

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 171

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 172

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 173

- StringBuilder: amortize allocation by doubling on grow.

## entry 174

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 175

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 176

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 177

- LIS via patience: each pile holds the smallest tail of length k.

## entry 178

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 179

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 180

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 181

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 182

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 183

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 184

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 185

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 186

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 187

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 188

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 189

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 190

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 191

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 192

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 193

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 194

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 195

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 196

- Stable sort matters when a secondary key was set in a prior pass.

## entry 197

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 198

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 199

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 200

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 201

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 202

- StringBuilder: amortize allocation by doubling on grow.

## entry 203

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 204

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 205

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 206

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 207

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 208

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 209

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 210

- Euler tour flattens a tree into an array for range-query LCA.

## entry 211

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 212

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 213

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 214

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 215

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 216

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 217

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 218

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 219

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 220

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 221

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 222

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 223

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 224

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 225

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 226

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 227

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 228

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 229

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 230

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 231

- Monotonic stack pops while the new element violates the invariant.

## entry 232

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 233

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 234

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 235

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 236

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 237

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 238

- Splay tree: every access splays to the root; amortized O(log n).

## entry 239

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 240

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 241

- StringBuilder: amortize allocation by doubling on grow.

## entry 242

- Greedy by end-time picks the most non-overlapping intervals.

## entry 243

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 244

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 245

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 246

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 247

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 248

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 249

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 250

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 251

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 252

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 253

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 254

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 255

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 256

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 257

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 258

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 259

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 260

- Heap when you only need top-k; full sort is wasted work.

## entry 261

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 262

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 263

- Monotonic stack pops while the new element violates the invariant.

## entry 264

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 265

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 266

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 267

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 268

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 269

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 270

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 271

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 272

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 273

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 274

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 275

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 276

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 277

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 278

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 279

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 280

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 281

- LIS via patience: each pile holds the smallest tail of length k.

## entry 282

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 283

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 284

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 285

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 286

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 287

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 288

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 289

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 290

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 291

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 292

- StringBuilder: amortize allocation by doubling on grow.

## entry 293

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 294

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 295

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 296

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 297

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 298

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 299

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 300

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 301

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 302

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 303

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 304

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 305

- Monotonic stack pops while the new element violates the invariant.

## entry 306

- StringBuilder: amortize allocation by doubling on grow.

## entry 307

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 308

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 309

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 310

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 311

- Stable sort matters when a secondary key was set in a prior pass.

## entry 312

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 313

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 314

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 315

- Splay tree: every access splays to the root; amortized O(log n).

## entry 316

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 317

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 318

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 319

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 320

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 321

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 322

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 323

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 324

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 325

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 326

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 327

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 328

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 329

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 330

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 331

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 332

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 333

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 334

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 335

- Stable sort matters when a secondary key was set in a prior pass.

## entry 336

- Stable sort matters when a secondary key was set in a prior pass.

## entry 337

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 338

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 339

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 340

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 341

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 342

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 343

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 344

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 345

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 346

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 347

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 348

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 349

- Heap when you only need top-k; full sort is wasted work.

## entry 350

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 351

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 352

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 353

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 354

- Walk both pointers from each end inward; advance the smaller side.

## entry 355

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 356

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 357

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 358

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 359

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 360

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 361

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 362

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 363

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 364

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 365

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 366

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 367

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 368

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 369

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 370

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 371

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 372

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 373

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 374

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 375

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 376

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 377

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 378

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 379

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 380

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 381

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 382

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 383

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 384

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 385

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 386

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 387

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 388

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 389

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 390

- Euler tour flattens a tree into an array for range-query LCA.

## entry 391

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 392

- Splay tree: every access splays to the root; amortized O(log n).

## entry 393

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 394

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 395

- LIS via patience: each pile holds the smallest tail of length k.

## entry 396

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 397

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 398

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 399

- Walk both pointers from each end inward; advance the smaller side.

## entry 400

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 401

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 402

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 403

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 404

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 405

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 406

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 407

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 408

- Walk both pointers from each end inward; advance the smaller side.

## entry 409

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 410

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 411

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 412

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 413

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 414

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 415

- Euler tour flattens a tree into an array for range-query LCA.

## entry 416

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 417

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 418

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 419

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 420

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 421

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 422

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 423

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 424

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 425

- Walk both pointers from each end inward; advance the smaller side.

## entry 426

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 427

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 428

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 429

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 430

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 431

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 432

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 433

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 434

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 435

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 436

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 437

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 438

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 439

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 440

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 441

- Splay tree: every access splays to the root; amortized O(log n).

## entry 442

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 443

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 444

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 445

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 446

- Splay tree: every access splays to the root; amortized O(log n).

## entry 447

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 448

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 449

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 450

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 451

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 452

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 453

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 454

- Walk both pointers from each end inward; advance the smaller side.

## entry 455

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 456

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 457

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 458

- LIS via patience: each pile holds the smallest tail of length k.

## entry 459

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 460

- Heap when you only need top-k; full sort is wasted work.

## entry 461

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 462

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 463

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 464

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 465

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 466

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 467

- Stable sort matters when a secondary key was set in a prior pass.

## entry 468

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 469

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 470

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 471

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 472

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 473

- Greedy by end-time picks the most non-overlapping intervals.

## entry 474

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 475

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 476

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 477

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 478

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 479

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 480

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 481

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 482

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 483

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 484

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 485

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 486

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 487

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 488

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 489

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 490

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 491

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 492

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 493

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 494

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 495

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 496

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 497

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 498

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 499

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 500

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 501

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 502

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 503

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 504

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 505

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 506

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 507

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 508

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 509

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 510

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 511

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 512

- Stable sort matters when a secondary key was set in a prior pass.

## entry 513

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 514

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 515

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 516

- Euler tour flattens a tree into an array for range-query LCA.

## entry 517

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 518

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 519

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 520

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 521

- Tree DP: post-order DFS lets children inform the parent in one pass.
