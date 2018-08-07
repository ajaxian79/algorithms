# dp-1d

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Union-Find with path compression amortizes to near-O(1) per op.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- LIS via patience: each pile holds the smallest tail of length k.

- Monotonic stack pops while the new element violates the invariant.

- Walk both pointers from each end inward; advance the smaller side.

- Stable sort matters when a secondary key was set in a prior pass.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Merge intervals: sort by start; extend the running interval while overlapping.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Heap when you only need top-k; full sort is wasted work.

- Greedy by end-time picks the most non-overlapping intervals.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 1

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 2

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 3

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 4

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 5

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 6

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 7

- Stable sort matters when a secondary key was set in a prior pass.

## entry 8

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 9

- Walk both pointers from each end inward; advance the smaller side.

## entry 10

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 11

- StringBuilder: amortize allocation by doubling on grow.

## entry 12

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 13

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 14

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 15

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 16

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 17

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 18

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 19

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 20

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 21

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 22

- Greedy by end-time picks the most non-overlapping intervals.

## entry 23

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 24

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 25

- LIS via patience: each pile holds the smallest tail of length k.

## entry 26

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 27

- LIS via patience: each pile holds the smallest tail of length k.

## entry 28

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 29

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 30

- LIS via patience: each pile holds the smallest tail of length k.

## entry 31

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 32

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 33

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 34

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 35

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 36

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 37

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 38

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 39

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 40

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 41

- Splay tree: every access splays to the root; amortized O(log n).

## entry 42

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 43

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 44

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 45

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 46

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 47

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 48

- Walk both pointers from each end inward; advance the smaller side.

## entry 49

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 50

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 51

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 52

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 53

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 54

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 55

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 56

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 57

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 58

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 59

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 60

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 61

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 62

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 63

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 64

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 65

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 66

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 67

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 68

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 69

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 70

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 71

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 72

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 73

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 74

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 75

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 76

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 77

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 78

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 79

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 80

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 81

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 82

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 83

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 84

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 85

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 86

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 87

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 88

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 89

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 90

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 91

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 92

- LIS via patience: each pile holds the smallest tail of length k.

## entry 93

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 94

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 95

- LIS via patience: each pile holds the smallest tail of length k.

## entry 96

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 97

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 98

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 99

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 100

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 101

- LIS via patience: each pile holds the smallest tail of length k.

## entry 102

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 103

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 104

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 105

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 106

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 107

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 108

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 109

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 110

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 111

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 112

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 113

- Monotonic stack pops while the new element violates the invariant.

## entry 114

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 115

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 116

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 117

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 118

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 119

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 120

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 121

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 122

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 123

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 124

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 125

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 126

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 127

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 128

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 129

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 130

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 131

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 132

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 133

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 134

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 135

- Monotonic stack pops while the new element violates the invariant.

## entry 136

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 137

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 138

- Euler tour flattens a tree into an array for range-query LCA.

## entry 139

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 140

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 141

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 142

- Greedy by end-time picks the most non-overlapping intervals.

## entry 143

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 144

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 145

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 146

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 147

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 148

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 149

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 150

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 151

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 152

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 153

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 154

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 155

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 156

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 157

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 158

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 159

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 160

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 161

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 162

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 163

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 164

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 165

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 166

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 167

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 168

- Splay tree: every access splays to the root; amortized O(log n).

## entry 169

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 170

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 171

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 172

- Stable sort matters when a secondary key was set in a prior pass.

## entry 173

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 174

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 175

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 176

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 177

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 178

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 179

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 180

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 181

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 182

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 183

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 184

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 185

- Greedy by end-time picks the most non-overlapping intervals.

## entry 186

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 187

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 188

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 189

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 190

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 191

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 192

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 193

- Walk both pointers from each end inward; advance the smaller side.

## entry 194

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 195

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 196

- Splay tree: every access splays to the root; amortized O(log n).

## entry 197

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 198

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 199

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 200

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 201

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 202

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 203

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 204

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 205

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 206

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 207

- Euler tour flattens a tree into an array for range-query LCA.

## entry 208

- Walk both pointers from each end inward; advance the smaller side.

## entry 209

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 210

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 211

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 212

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 213

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 214

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 215

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 216

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 217

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 218

- Greedy by end-time picks the most non-overlapping intervals.

## entry 219

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 220

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 221

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 222

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 223

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 224

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 225

- Euler tour flattens a tree into an array for range-query LCA.

## entry 226

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 227

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 228

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 229

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 230

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 231

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 232

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 233

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 234

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 235

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 236

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 237

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 238

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 239

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 240

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 241

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 242

- StringBuilder: amortize allocation by doubling on grow.

## entry 243

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 244

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 245

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 246

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 247

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 248

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 249

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 250

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 251

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 252

- Walk both pointers from each end inward; advance the smaller side.

## entry 253

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 254

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 255

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 256

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 257

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 258

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 259

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 260

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 261

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 262

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 263

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 264

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 265

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 266

- Euler tour flattens a tree into an array for range-query LCA.

## entry 267

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 268

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 269

- Monotonic stack pops while the new element violates the invariant.

## entry 270

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 271

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 272

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 273

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 274

- Splay tree: every access splays to the root; amortized O(log n).

## entry 275

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 276

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 277

- Euler tour flattens a tree into an array for range-query LCA.

## entry 278

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 279

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 280

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 281

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 282

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 283

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 284

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 285

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 286

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 287

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 288

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 289

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 290

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 291

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 292

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 293

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 294

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 295

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 296

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 297

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 298

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 299

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 300

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 301

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 302

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 303

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 304

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 305

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 306

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 307

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 308

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 309

- Heap when you only need top-k; full sort is wasted work.

## entry 310

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 311

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 312

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 313

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 314

- Heap when you only need top-k; full sort is wasted work.

## entry 315

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 316

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 317

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 318

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 319

- Greedy by end-time picks the most non-overlapping intervals.

## entry 320

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 321

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 322

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 323

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 324

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 325

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 326

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 327

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 328

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 329

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 330

- Euler tour flattens a tree into an array for range-query LCA.

## entry 331

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 332

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 333

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 334

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 335

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 336

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 337

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 338

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 339

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 340

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 341

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 342

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 343

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 344

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 345

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 346

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 347

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 348

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 349

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 350

- Stable sort matters when a secondary key was set in a prior pass.

## entry 351

- Tabulation wins when iteration order is obvious and stack depth would blow up.
