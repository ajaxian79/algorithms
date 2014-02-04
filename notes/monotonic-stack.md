# monotonic-stack

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Stable sort matters when a secondary key was set in a prior pass.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Union-Find with path compression amortizes to near-O(1) per op.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Walk both pointers from each end inward; advance the smaller side.

- LIS via patience: each pile holds the smallest tail of length k.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Greedy by end-time picks the most non-overlapping intervals.

- Heap when you only need top-k; full sort is wasted work.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Monotonic stack pops while the new element violates the invariant.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 2

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 4

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 6

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 7

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 8

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 9

- Heap when you only need top-k; full sort is wasted work.

## entry 10

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 11

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 12

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 13

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 14

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 15

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 16

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 17

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 18

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 19

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 20

- LIS via patience: each pile holds the smallest tail of length k.

## entry 21

- Greedy by end-time picks the most non-overlapping intervals.

## entry 22

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 23

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 24

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 25

- Stable sort matters when a secondary key was set in a prior pass.

## entry 26

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 27

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 28

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 29

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 30

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 31

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 32

- Stable sort matters when a secondary key was set in a prior pass.

## entry 33

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 34

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 35

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 36

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 37

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 38

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 39

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 40

- Euler tour flattens a tree into an array for range-query LCA.

## entry 41

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 42

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 43

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 44

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 45

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 46

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 47

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 48

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 49

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 50

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 51

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 52

- Heap when you only need top-k; full sort is wasted work.

## entry 53

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 54

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 55

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 56

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 57

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 58

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 59

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 60

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 61

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 62

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 63

- Splay tree: every access splays to the root; amortized O(log n).

## entry 64

- Stable sort matters when a secondary key was set in a prior pass.

## entry 65

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 66

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 67

- LIS via patience: each pile holds the smallest tail of length k.

## entry 68

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 69

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 70

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 71

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 72

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 73

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 74

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 75

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 76

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 77

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 78

- Stable sort matters when a secondary key was set in a prior pass.

## entry 79

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 80

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 81

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 82

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 83

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 84

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 85

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 86

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 87

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 88

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 89

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 90

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 91

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 92

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 93

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 94

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 95

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 96

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 97

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 98

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 99

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 100

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 101

- Walk both pointers from each end inward; advance the smaller side.

## entry 102

- Splay tree: every access splays to the root; amortized O(log n).

## entry 103

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 104

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 105

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 106

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 107

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 108

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 109

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 110

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 111

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 112

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 113

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 114

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 115

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 116

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 117

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 118

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 119

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 120

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 121

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 122

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 123

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 124

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 125

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 126

- StringBuilder: amortize allocation by doubling on grow.

## entry 127

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 128

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 129

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 130

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 131

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 132

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 133

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 134

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 135

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 136

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 137

- Splay tree: every access splays to the root; amortized O(log n).

## entry 138

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 139

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 140

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 141

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 142

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 143

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 144

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 145

- Euler tour flattens a tree into an array for range-query LCA.

## entry 146

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 147

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 148

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 149

- Stable sort matters when a secondary key was set in a prior pass.

## entry 150

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 151

- Heap when you only need top-k; full sort is wasted work.

## entry 152

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 153

- Stable sort matters when a secondary key was set in a prior pass.

## entry 154

- Stable sort matters when a secondary key was set in a prior pass.

## entry 155

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 156

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 157

- Heap when you only need top-k; full sort is wasted work.

## entry 158

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 159

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 160

- Splay tree: every access splays to the root; amortized O(log n).

## entry 161

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 162

- StringBuilder: amortize allocation by doubling on grow.

## entry 163

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 164

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 165

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 166

- Heap when you only need top-k; full sort is wasted work.

## entry 167

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 168

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 169

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 170

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 171

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 172

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 173

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 174

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 175

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 176

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 177

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 178

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 179

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 180

- Monotonic stack pops while the new element violates the invariant.

## entry 181

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 182

- Heap when you only need top-k; full sort is wasted work.

## entry 183

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 184

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 185

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 186

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 187

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 188

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 189

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 190

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 191

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 192

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 193

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 194

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 195

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 196

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 197

- Splay tree: every access splays to the root; amortized O(log n).

## entry 198

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 199

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 200

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 201

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 202

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 203

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 204

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 205

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 206

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 207

- StringBuilder: amortize allocation by doubling on grow.

## entry 208

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 209

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 210

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 211

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 212

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 213

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 214

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 215

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 216

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 217

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 218

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 219

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 220

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 221

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 222

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 223

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 224

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 225

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 226

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 227

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 228

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 229

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 230

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 231

- Greedy by end-time picks the most non-overlapping intervals.

## entry 232

- Walk both pointers from each end inward; advance the smaller side.

## entry 233

- Walk both pointers from each end inward; advance the smaller side.

## entry 234

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 235

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 236

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 237

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 238

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 239

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 240

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 241

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 242

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 243

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 244

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 245

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 246

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 247

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 248

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 249

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 250

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 251

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 252

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 253

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 254

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 255

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 256

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 257

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 258

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 259

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 260

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 261

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 262

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 263

- Splay tree: every access splays to the root; amortized O(log n).

## entry 264

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 265

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 266

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 267

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 268

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 269

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 270

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 271

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 272

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 273

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 274

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 275

- LIS via patience: each pile holds the smallest tail of length k.

## entry 276

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 277

- Splay tree: every access splays to the root; amortized O(log n).

## entry 278

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 279

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 280

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 281

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 282

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 283

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 284

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 285

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 286

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 287

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 288

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 289

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 290

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 291

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 292

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 293

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 294

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 295

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 296

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 297

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 298

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 299

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 300

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 301

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 302

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 303

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 304

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 305

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 306

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 307

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 308

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 309

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 310

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 311

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 312

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 313

- LIS via patience: each pile holds the smallest tail of length k.

## entry 314

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 315

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 316

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 317

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 318

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 319

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 320

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 321

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 322

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 323

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 324

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 325

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 326

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 327

- Stable sort matters when a secondary key was set in a prior pass.

## entry 328

- Euler tour flattens a tree into an array for range-query LCA.

## entry 329

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 330

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 331

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 332

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 333

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 334

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 335

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 336

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 337

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 338

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 339

- Euler tour flattens a tree into an array for range-query LCA.

## entry 340

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 341

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 342

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 343

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 344

- Monotonic stack pops while the new element violates the invariant.

## entry 345

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 346

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 347

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 348

- Euler tour flattens a tree into an array for range-query LCA.

## entry 349

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 350

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 351

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 352

- StringBuilder: amortize allocation by doubling on grow.

## entry 353

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 354

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 355

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 356

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 357

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 358

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 359

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 360

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 361

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 362

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 363

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 364

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 365

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 366

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 367

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 368

- StringBuilder: amortize allocation by doubling on grow.

## entry 369

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 370

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 371

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 372

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 373

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 374

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 375

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 376

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 377

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 378

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 379

- Heap when you only need top-k; full sort is wasted work.

## entry 380

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 381

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 382

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 383

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 384

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 385

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 386

- Walk both pointers from each end inward; advance the smaller side.

## entry 387

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 388

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 389

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 390

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 391

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 392

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 393

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 394

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 395

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 396

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 397

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 398

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 399

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 400

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 401

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 402

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 403

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 404

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 405

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 406

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 407

- Monotonic stack pops while the new element violates the invariant.

## entry 408

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 409

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 410

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 411

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 412

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 413

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 414

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 415

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 416

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 417

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 418

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 419

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 420

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 421

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 422

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 423

- Walk both pointers from each end inward; advance the smaller side.

## entry 424

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 425

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 426

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 427

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 428

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 429

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 430

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 431

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 432

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 433

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 434

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 435

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 436

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 437

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 438

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 439

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 440

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 441

- StringBuilder: amortize allocation by doubling on grow.

## entry 442

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 443

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 444

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 445

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 446

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 447

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 448

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 449

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 450

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 451

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 452

- Heap when you only need top-k; full sort is wasted work.

## entry 453

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 454

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 455

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 456

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 457

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 458

- StringBuilder: amortize allocation by doubling on grow.

## entry 459

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 460

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 461

- Stable sort matters when a secondary key was set in a prior pass.

## entry 462

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 463

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 464

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 465

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 466

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 467

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 468

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 469

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 470

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 471

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 472

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 473

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 474

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 475

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 476

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 477

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 478

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 479

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 480

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 481

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 482

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 483

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 484

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 485

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 486

- Heap when you only need top-k; full sort is wasted work.

## entry 487

- Monotonic stack pops while the new element violates the invariant.

## entry 488

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 489

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 490

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 491

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 492

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 493

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 494

- Splay tree: every access splays to the root; amortized O(log n).

## entry 495

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 496

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 497

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 498

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 499

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 500

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 501

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 502

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 503

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 504

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 505

- StringBuilder: amortize allocation by doubling on grow.

## entry 506

- State compression: bitmask + integer encodes a small subset cheaply.
