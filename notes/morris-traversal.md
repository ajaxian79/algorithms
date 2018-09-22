# morris-traversal

- Greedy by end-time picks the most non-overlapping intervals.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- LIS via patience: each pile holds the smallest tail of length k.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Walk both pointers from each end inward; advance the smaller side.

- Monotonic stack pops while the new element violates the invariant.

- Stable sort matters when a secondary key was set in a prior pass.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Union-Find with path compression amortizes to near-O(1) per op.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Heap when you only need top-k; full sort is wasted work.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- In-place compaction uses two pointers: read advances always, write only on keep.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 1

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 2

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 3

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 4

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 5

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 6

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 7

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 8

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 9

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 10

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 11

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 12

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 13

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 14

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 15

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 16

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 17

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 18

- Walk both pointers from each end inward; advance the smaller side.

## entry 19

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 20

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 21

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 22

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 23

- Walk both pointers from each end inward; advance the smaller side.

## entry 24

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 25

- Walk both pointers from each end inward; advance the smaller side.

## entry 26

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 27

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 28

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 29

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 30

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 31

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 32

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 33

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 34

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 35

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 36

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 37

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 38

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 39

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 40

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 41

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 42

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 43

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 44

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 45

- Stable sort matters when a secondary key was set in a prior pass.

## entry 46

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 47

- LIS via patience: each pile holds the smallest tail of length k.

## entry 48

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 49

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 50

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 51

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 52

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 53

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 54

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 55

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 56

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 57

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 58

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 59

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 60

- Heap when you only need top-k; full sort is wasted work.

## entry 61

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 62

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 63

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 64

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 65

- Stable sort matters when a secondary key was set in a prior pass.

## entry 66

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 67

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 68

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 69

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 70

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 71

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 72

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 73

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 74

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 75

- Euler tour flattens a tree into an array for range-query LCA.

## entry 76

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 77

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 78

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 79

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 80

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 81

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 82

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 83

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 84

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 85

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 86

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 87

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 88

- Euler tour flattens a tree into an array for range-query LCA.

## entry 89

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 90

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 91

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 92

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 93

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 94

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 95

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 96

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 97

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 98

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 99

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 100

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 101

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 102

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 103

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 104

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 105

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 106

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 107

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 108

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 109

- Splay tree: every access splays to the root; amortized O(log n).

## entry 110

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 111

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 112

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 113

- Monotonic stack pops while the new element violates the invariant.

## entry 114

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 115

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 116

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 117

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 118

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 119

- Stable sort matters when a secondary key was set in a prior pass.

## entry 120

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 121

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 122

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 123

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 124

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 125

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 126

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 127

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 128

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 129

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 130

- Stable sort matters when a secondary key was set in a prior pass.

## entry 131

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 132

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 133

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 134

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 135

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 136

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 137

- Euler tour flattens a tree into an array for range-query LCA.

## entry 138

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 139

- Stable sort matters when a secondary key was set in a prior pass.

## entry 140

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 141

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 142

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 143

- Euler tour flattens a tree into an array for range-query LCA.

## entry 144

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 145

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 146

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 147

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 148

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 149

- Greedy by end-time picks the most non-overlapping intervals.

## entry 150

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 151

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 152

- Greedy by end-time picks the most non-overlapping intervals.

## entry 153

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 154

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 155

- LIS via patience: each pile holds the smallest tail of length k.

## entry 156

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 157

- Heap when you only need top-k; full sort is wasted work.

## entry 158

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 159

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 160

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 161

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 162

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 163

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 164

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 165

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 166

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 167

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 168

- Euler tour flattens a tree into an array for range-query LCA.

## entry 169

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 170

- Stable sort matters when a secondary key was set in a prior pass.

## entry 171

- Greedy by end-time picks the most non-overlapping intervals.

## entry 172

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 173

- Heap when you only need top-k; full sort is wasted work.

## entry 174

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 175

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 176

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 177

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 178

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 179

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 180

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 181

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 182

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 183

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 184

- Euler tour flattens a tree into an array for range-query LCA.

## entry 185

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 186

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 187

- Walk both pointers from each end inward; advance the smaller side.

## entry 188

- LIS via patience: each pile holds the smallest tail of length k.

## entry 189

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 190

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 191

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 192

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 193

- Splay tree: every access splays to the root; amortized O(log n).

## entry 194

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 195

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 196

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 197

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 198

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 199

- LIS via patience: each pile holds the smallest tail of length k.

## entry 200

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 201

- Monotonic stack pops while the new element violates the invariant.

## entry 202

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 203

- Heap when you only need top-k; full sort is wasted work.

## entry 204

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 205

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 206

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 207

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 208

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 209

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 210

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 211

- Euler tour flattens a tree into an array for range-query LCA.

## entry 212

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 213

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 214

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 215

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 216

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 217

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 218

- Walk both pointers from each end inward; advance the smaller side.

## entry 219

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 220

- StringBuilder: amortize allocation by doubling on grow.

## entry 221

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 222

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 223

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 224

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 225

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 226

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 227

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 228

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 229

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 230

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 231

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 232

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 233

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 234

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 235

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 236

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 237

- Heap when you only need top-k; full sort is wasted work.

## entry 238

- Heap when you only need top-k; full sort is wasted work.

## entry 239

- LIS via patience: each pile holds the smallest tail of length k.

## entry 240

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 241

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 242

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 243

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 244

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 245

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 246

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 247

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 248

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 249

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 250

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 251

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 252

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 253

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 254

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 255

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 256

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 257

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 258

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 259

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 260

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 261

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 262

- Walk both pointers from each end inward; advance the smaller side.

## entry 263

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 264

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 265

- Greedy by end-time picks the most non-overlapping intervals.

## entry 266

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 267

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 268

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 269

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 270

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 271

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 272

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 273

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 274

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 275

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 276

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 277

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 278

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 279

- Stable sort matters when a secondary key was set in a prior pass.

## entry 280

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 281

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 282

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 283

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 284

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 285

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 286

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 287

- StringBuilder: amortize allocation by doubling on grow.

## entry 288

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 289

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 290

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 291

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 292

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 293

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 294

- LIS via patience: each pile holds the smallest tail of length k.

## entry 295

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 296

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 297

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 298

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 299

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 300

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 301

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 302

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 303

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 304

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 305

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 306

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 307

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 308

- StringBuilder: amortize allocation by doubling on grow.

## entry 309

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 310

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 311

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 312

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 313

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 314

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 315

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 316

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 317

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 318

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 319

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 320

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 321

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 322

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 323

- Monotonic stack pops while the new element violates the invariant.

## entry 324

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 325

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 326

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 327

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 328

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 329

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 330

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 331

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 332

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 333

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 334

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 335

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 336

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 337

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 338

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 339

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 340

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 341

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 342

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 343

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 344

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 345

- LIS via patience: each pile holds the smallest tail of length k.

## entry 346

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 347

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 348

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 349

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 350

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 351

- Euler tour flattens a tree into an array for range-query LCA.

## entry 352

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 353

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 354

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 355

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 356

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 357

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 358

- Walk both pointers from each end inward; advance the smaller side.

## entry 359

- Tabulation wins when iteration order is obvious and stack depth would blow up.
