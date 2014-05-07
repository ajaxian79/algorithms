# monotonic-queue

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Heap when you only need top-k; full sort is wasted work.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Union-Find with path compression amortizes to near-O(1) per op.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- LIS via patience: each pile holds the smallest tail of length k.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Walk both pointers from each end inward; advance the smaller side.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Greedy by end-time picks the most non-overlapping intervals.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Stable sort matters when a secondary key was set in a prior pass.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Monotonic stack pops while the new element violates the invariant.

## entry 1

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 2

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 3

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 4

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 5

- Walk both pointers from each end inward; advance the smaller side.

## entry 6

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 7

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 8

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 9

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 10

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 11

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 12

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 13

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 14

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 15

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 16

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 17

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 18

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 19

- Euler tour flattens a tree into an array for range-query LCA.

## entry 20

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 21

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 22

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 23

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 24

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 25

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 26

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 27

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 28

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 29

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 30

- LIS via patience: each pile holds the smallest tail of length k.

## entry 31

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 32

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 33

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 34

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 35

- Stable sort matters when a secondary key was set in a prior pass.

## entry 36

- Monotonic stack pops while the new element violates the invariant.

## entry 37

- StringBuilder: amortize allocation by doubling on grow.

## entry 38

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 39

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 40

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 41

- Walk both pointers from each end inward; advance the smaller side.

## entry 42

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 43

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 44

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 45

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 46

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 47

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 48

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 49

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 50

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 51

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 52

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 53

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 54

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 55

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 56

- StringBuilder: amortize allocation by doubling on grow.

## entry 57

- Euler tour flattens a tree into an array for range-query LCA.

## entry 58

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 59

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 60

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 61

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 62

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 63

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 64

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 65

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 66

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 67

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 68

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 69

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 70

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 71

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 72

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 73

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 74

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 75

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 76

- Monotonic stack pops while the new element violates the invariant.

## entry 77

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 78

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 79

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 80

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 81

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 82

- Stable sort matters when a secondary key was set in a prior pass.

## entry 83

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 84

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 85

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 86

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 87

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 88

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 89

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 90

- Splay tree: every access splays to the root; amortized O(log n).

## entry 91

- Splay tree: every access splays to the root; amortized O(log n).

## entry 92

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 93

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 94

- Heap when you only need top-k; full sort is wasted work.

## entry 95

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 96

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 97

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 98

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 99

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 100

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 101

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 102

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 103

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 104

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 105

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 106

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 107

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 108

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 109

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 110

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 111

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 112

- Heap when you only need top-k; full sort is wasted work.

## entry 113

- Heap when you only need top-k; full sort is wasted work.

## entry 114

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 115

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 116

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 117

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 118

- Stable sort matters when a secondary key was set in a prior pass.

## entry 119

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 120

- Monotonic stack pops while the new element violates the invariant.

## entry 121

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 122

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 123

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 124

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 125

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 126

- Euler tour flattens a tree into an array for range-query LCA.

## entry 127

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 128

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 129

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 130

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 131

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 132

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 133

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 134

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 135

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 136

- Euler tour flattens a tree into an array for range-query LCA.

## entry 137

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 138

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 139

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 140

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 141

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 142

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 143

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 144

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 145

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 146

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 147

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 148

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 149

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 150

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 151

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 152

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 153

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 154

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 155

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 156

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 157

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 158

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 159

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 160

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 161

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 162

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 163

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 164

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 165

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 166

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 167

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 168

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 169

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 170

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 171

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 172

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 173

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 174

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 175

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 176

- LIS via patience: each pile holds the smallest tail of length k.

## entry 177

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 178

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 179

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 180

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 181

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 182

- StringBuilder: amortize allocation by doubling on grow.

## entry 183

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 184

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 185

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 186

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 187

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 188

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 189

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 190

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 191

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 192

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 193

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 194

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 195

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 196

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 197

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 198

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 199

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 200

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 201

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 202

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 203

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 204

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 205

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 206

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 207

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 208

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 209

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 210

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 211

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 212

- StringBuilder: amortize allocation by doubling on grow.

## entry 213

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 214

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 215

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 216

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 217

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 218

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 219

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 220

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 221

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 222

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 223

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 224

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 225

- Heap when you only need top-k; full sort is wasted work.

## entry 226

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 227

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 228

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 229

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 230

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 231

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 232

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 233

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 234

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 235

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 236

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 237

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 238

- Heap when you only need top-k; full sort is wasted work.

## entry 239

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 240

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 241

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 242

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 243

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 244

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 245

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 246

- Euler tour flattens a tree into an array for range-query LCA.

## entry 247

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 248

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 249

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 250

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 251

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 252

- Walk both pointers from each end inward; advance the smaller side.

## entry 253

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 254

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 255

- Euler tour flattens a tree into an array for range-query LCA.

## entry 256

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 257

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 258

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 259

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 260

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 261

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 262

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 263

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 264

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 265

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 266

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 267

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 268

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 269

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 270

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 271

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 272

- Monotonic stack pops while the new element violates the invariant.

## entry 273

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 274

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 275

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 276

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 277

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 278

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 279

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 280

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 281

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 282

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 283

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 284

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 285

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 286

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 287

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 288

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 289

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 290

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 291

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 292

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 293

- Splay tree: every access splays to the root; amortized O(log n).

## entry 294

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 295

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 296

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 297

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 298

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 299

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 300

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 301

- StringBuilder: amortize allocation by doubling on grow.

## entry 302

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 303

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 304

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 305

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 306

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 307

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 308

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 309

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 310

- Greedy by end-time picks the most non-overlapping intervals.

## entry 311

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 312

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 313

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 314

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 315

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 316

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 317

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 318

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 319

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 320

- LIS via patience: each pile holds the smallest tail of length k.

## entry 321

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 322

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 323

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 324

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 325

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 326

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 327

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 328

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 329

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 330

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 331

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 332

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 333

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 334

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 335

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 336

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 337

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 338

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 339

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 340

- Monotonic stack pops while the new element violates the invariant.

## entry 341

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 342

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 343

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 344

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 345

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 346

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 347

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 348

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 349

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 350

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 351

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 352

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 353

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 354

- StringBuilder: amortize allocation by doubling on grow.

## entry 355

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 356

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 357

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 358

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 359

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 360

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 361

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 362

- Euler tour flattens a tree into an array for range-query LCA.

## entry 363

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 364

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 365

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 366

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 367

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 368

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 369

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 370

- LIS via patience: each pile holds the smallest tail of length k.

## entry 371

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 372

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 373

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 374

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 375

- Greedy by end-time picks the most non-overlapping intervals.

## entry 376

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 377

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 378

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 379

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 380

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 381

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 382

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 383

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 384

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 385

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 386

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 387

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 388

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 389

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 390

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 391

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 392

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 393

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 394

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 395

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 396

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 397

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 398

- Heap when you only need top-k; full sort is wasted work.

## entry 399

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 400

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 401

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 402

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 403

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 404

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 405

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 406

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 407

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 408

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 409

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 410

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 411

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 412

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 413

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 414

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 415

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 416

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 417

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 418

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 419

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 420

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 421

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 422

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 423

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 424

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 425

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 426

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 427

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 428

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 429

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 430

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 431

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 432

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 433

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 434

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 435

- Heap when you only need top-k; full sort is wasted work.

## entry 436

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 437

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 438

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 439

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 440

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 441

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 442

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 443

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 444

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 445

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 446

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 447

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 448

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 449

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 450

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 451

- Walk both pointers from each end inward; advance the smaller side.

## entry 452

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 453

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 454

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 455

- Stable sort matters when a secondary key was set in a prior pass.

## entry 456

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 457

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 458

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 459

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 460

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 461

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 462

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 463

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 464

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 465

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 466

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 467

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 468

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 469

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 470

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 471

- Euler tour flattens a tree into an array for range-query LCA.

## entry 472

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 473

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 474

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 475

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 476

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 477

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 478

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 479

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 480

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 481

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 482

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 483

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 484

- Splay tree: every access splays to the root; amortized O(log n).

## entry 485

- Greedy by end-time picks the most non-overlapping intervals.

## entry 486

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 487

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 488

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 489

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 490

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 491

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 492

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 493

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 494

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 495

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 496

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 497

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 498

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 499

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 500

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 501

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 502

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 503

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 504

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 505

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 506

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 507

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 508

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 509

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 510

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 511

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 512

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 513

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 514

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 515

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 516

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 517

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 518

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 519

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 520

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 521

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 522

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 523

- Heap when you only need top-k; full sort is wasted work.

## entry 524

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 525

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 526

- Stable sort matters when a secondary key was set in a prior pass.

## entry 527

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 528

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 529

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 530

- Euler tour flattens a tree into an array for range-query LCA.

## entry 531

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 532

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 533

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 534

- StringBuilder: amortize allocation by doubling on grow.

## entry 535

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 536

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 537

- Splay tree: every access splays to the root; amortized O(log n).

## entry 538

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 539

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 540

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 541

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 542

- Greedy by end-time picks the most non-overlapping intervals.

## entry 543

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 544

- Monotonic stack pops while the new element violates the invariant.

## entry 545

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 546

- Greedy by end-time picks the most non-overlapping intervals.

## entry 547

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 548

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 549

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 550

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 551

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 552

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 553

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 554

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 555

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 556

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 557

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 558

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 559

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 560

- Monotonic stack pops while the new element violates the invariant.

## entry 561

- Stable sort matters when a secondary key was set in a prior pass.

## entry 562

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 563

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 564

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 565

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 566

- Greedy by end-time picks the most non-overlapping intervals.

## entry 567

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 568

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 569

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 570

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 571

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 572

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 573

- BFS layers carry implicit shortest-path distance in unweighted graphs.
