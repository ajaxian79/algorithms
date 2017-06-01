# manacher

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- LIS via patience: each pile holds the smallest tail of length k.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Greedy by end-time picks the most non-overlapping intervals.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Heap when you only need top-k; full sort is wasted work.

- Monotonic stack pops while the new element violates the invariant.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Stable sort matters when a secondary key was set in a prior pass.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Walk both pointers from each end inward; advance the smaller side.

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 1

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 2

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 3

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 4

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 5

- Monotonic stack pops while the new element violates the invariant.

## entry 6

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 7

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 8

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 9

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 10

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 11

- Euler tour flattens a tree into an array for range-query LCA.

## entry 12

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 13

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 14

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 15

- Greedy by end-time picks the most non-overlapping intervals.

## entry 16

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 17

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 18

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 19

- Stable sort matters when a secondary key was set in a prior pass.

## entry 20

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 21

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 22

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 23

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 24

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 25

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 26

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 27

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 28

- Euler tour flattens a tree into an array for range-query LCA.

## entry 29

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 30

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 31

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 32

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 33

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 34

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 35

- StringBuilder: amortize allocation by doubling on grow.

## entry 36

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 37

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 38

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 39

- Monotonic stack pops while the new element violates the invariant.

## entry 40

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 41

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 42

- Euler tour flattens a tree into an array for range-query LCA.

## entry 43

- Stable sort matters when a secondary key was set in a prior pass.

## entry 44

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 45

- Stable sort matters when a secondary key was set in a prior pass.

## entry 46

- Monotonic stack pops while the new element violates the invariant.

## entry 47

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 48

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 49

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 50

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 51

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 52

- Greedy by end-time picks the most non-overlapping intervals.

## entry 53

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 54

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 55

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 56

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 57

- Monotonic stack pops while the new element violates the invariant.

## entry 58

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 59

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 60

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 61

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 62

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 63

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 64

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 65

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 66

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 67

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 68

- Stable sort matters when a secondary key was set in a prior pass.

## entry 69

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 70

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 71

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 72

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 73

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 74

- Greedy by end-time picks the most non-overlapping intervals.

## entry 75

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 76

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 77

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 78

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 79

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 80

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 81

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 82

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 83

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 84

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 85

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 86

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 87

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 88

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 89

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 90

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 91

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 92

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 93

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 94

- Monotonic stack pops while the new element violates the invariant.

## entry 95

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 96

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 97

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 98

- Stable sort matters when a secondary key was set in a prior pass.

## entry 99

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 100

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 101

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 102

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 103

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 104

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 105

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 106

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 107

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 108

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 109

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 110

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 111

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 112

- Monotonic stack pops while the new element violates the invariant.

## entry 113

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 114

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 115

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 116

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 117

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 118

- LIS via patience: each pile holds the smallest tail of length k.

## entry 119

- Monotonic stack pops while the new element violates the invariant.

## entry 120

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 121

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 122

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 123

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 124

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 125

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 126

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 127

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 128

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 129

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 130

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 131

- StringBuilder: amortize allocation by doubling on grow.

## entry 132

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 133

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 134

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 135

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 136

- Greedy by end-time picks the most non-overlapping intervals.

## entry 137

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 138

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 139

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 140

- Monotonic stack pops while the new element violates the invariant.

## entry 141

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 142

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 143

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 144

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 145

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 146

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 147

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 148

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 149

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 150

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 151

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 152

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 153

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 154

- Stable sort matters when a secondary key was set in a prior pass.

## entry 155

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 156

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 157

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 158

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 159

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 160

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 161

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 162

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 163

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 164

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 165

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 166

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 167

- Monotonic stack pops while the new element violates the invariant.

## entry 168

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 169

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 170

- Walk both pointers from each end inward; advance the smaller side.

## entry 171

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 172

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 173

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 174

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 175

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 176

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 177

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 178

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 179

- Stable sort matters when a secondary key was set in a prior pass.

## entry 180

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 181

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 182

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 183

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 184

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 185

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 186

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 187

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 188

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 189

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 190

- Euler tour flattens a tree into an array for range-query LCA.

## entry 191

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 192

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 193

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 194

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 195

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 196

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 197

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 198

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 199

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 200

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 201

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 202

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 203

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 204

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 205

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 206

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 207

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 208

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 209

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 210

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 211

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 212

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 213

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 214

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 215

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 216

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 217

- Stable sort matters when a secondary key was set in a prior pass.

## entry 218

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 219

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 220

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 221

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 222

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 223

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 224

- Euler tour flattens a tree into an array for range-query LCA.

## entry 225

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 226

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 227

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 228

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 229

- StringBuilder: amortize allocation by doubling on grow.

## entry 230

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 231

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 232

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 233

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 234

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 235

- StringBuilder: amortize allocation by doubling on grow.

## entry 236

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 237

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 238

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 239

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 240

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 241

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 242

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 243

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 244

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 245

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 246

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 247

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 248

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 249

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 250

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 251

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 252

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 253

- Walk both pointers from each end inward; advance the smaller side.

## entry 254

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 255

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 256

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 257

- Monotonic stack pops while the new element violates the invariant.

## entry 258

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 259

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 260

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 261

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 262

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 263

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 264

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 265

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 266

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 267

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 268

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 269

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 270

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 271

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 272

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 273

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 274

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 275

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 276

- Walk both pointers from each end inward; advance the smaller side.

## entry 277

- Walk both pointers from each end inward; advance the smaller side.

## entry 278

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 279

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 280

- Stable sort matters when a secondary key was set in a prior pass.

## entry 281

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 282

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 283

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 284

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 285

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 286

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 287

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 288

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 289

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 290

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 291

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 292

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 293

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 294

- Splay tree: every access splays to the root; amortized O(log n).

## entry 295

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 296

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 297

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 298

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 299

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 300

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 301

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 302

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 303

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 304

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 305

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 306

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 307

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 308

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 309

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 310

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 311

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 312

- LIS via patience: each pile holds the smallest tail of length k.

## entry 313

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 314

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 315

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 316

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 317

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 318

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 319

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 320

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 321

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 322

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 323

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 324

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 325

- Euler tour flattens a tree into an array for range-query LCA.

## entry 326

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 327

- Monotonic stack pops while the new element violates the invariant.

## entry 328

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 329

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 330

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 331

- StringBuilder: amortize allocation by doubling on grow.

## entry 332

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 333

- Greedy by end-time picks the most non-overlapping intervals.

## entry 334

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 335

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 336

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 337

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 338

- Monotonic stack pops while the new element violates the invariant.

## entry 339

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 340

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 341

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 342

- LIS via patience: each pile holds the smallest tail of length k.

## entry 343

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 344

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 345

- Stable sort matters when a secondary key was set in a prior pass.

## entry 346

- Monotonic stack pops while the new element violates the invariant.

## entry 347

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 348

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 349

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 350

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 351

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 352

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 353

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 354

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 355

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 356

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 357

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 358

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 359

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 360

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 361

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 362

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 363

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 364

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 365

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 366

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 367

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 368

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 369

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 370

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 371

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 372

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 373

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 374

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 375

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 376

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 377

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 378

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 379

- StringBuilder: amortize allocation by doubling on grow.

## entry 380

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 381

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 382

- Walk both pointers from each end inward; advance the smaller side.

## entry 383

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 384

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 385

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 386

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 387

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 388

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 389

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 390

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 391

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 392

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 393

- Stable sort matters when a secondary key was set in a prior pass.

## entry 394

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 395

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 396

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 397

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 398

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 399

- Heap when you only need top-k; full sort is wasted work.

## entry 400

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 401

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 402

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 403

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 404

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 405

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 406

- Heap when you only need top-k; full sort is wasted work.

## entry 407

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 408

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 409

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 410

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 411

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 412

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 413

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 414

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 415

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 416

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 417

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 418

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 419

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 420

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 421

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 422

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 423

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 424

- Splay tree: every access splays to the root; amortized O(log n).

## entry 425

- Monotonic stack pops while the new element violates the invariant.

## entry 426

- Hash collision: chain or open-address; chained handles arbitrary load factor.
