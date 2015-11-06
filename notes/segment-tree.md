# segment-tree

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Merge intervals: sort by start; extend the running interval while overlapping.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- LIS via patience: each pile holds the smallest tail of length k.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Heap when you only need top-k; full sort is wasted work.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Stable sort matters when a secondary key was set in a prior pass.

- Monotonic stack pops while the new element violates the invariant.

- Union-Find with path compression amortizes to near-O(1) per op.

- Greedy by end-time picks the most non-overlapping intervals.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Walk both pointers from each end inward; advance the smaller side.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 1

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 2

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 3

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 4

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 5

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 6

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 7

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 8

- Euler tour flattens a tree into an array for range-query LCA.

## entry 9

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 10

- Stable sort matters when a secondary key was set in a prior pass.

## entry 11

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 12

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 13

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 14

- Stable sort matters when a secondary key was set in a prior pass.

## entry 15

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 16

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 17

- Greedy by end-time picks the most non-overlapping intervals.

## entry 18

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 19

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 20

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 21

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 22

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 23

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 24

- Heap when you only need top-k; full sort is wasted work.

## entry 25

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 26

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 27

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 28

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 29

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 30

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 31

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 32

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 33

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 34

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 35

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 36

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 37

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 38

- Heap when you only need top-k; full sort is wasted work.

## entry 39

- Walk both pointers from each end inward; advance the smaller side.

## entry 40

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 41

- Euler tour flattens a tree into an array for range-query LCA.

## entry 42

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 43

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 44

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 45

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 46

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 47

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 48

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 49

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 50

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 51

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 52

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 53

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 54

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 55

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 56

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 57

- Heap when you only need top-k; full sort is wasted work.

## entry 58

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 59

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 60

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 61

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 62

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 63

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 64

- Greedy by end-time picks the most non-overlapping intervals.

## entry 65

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 66

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 67

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 68

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 69

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 70

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 71

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 72

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 73

- StringBuilder: amortize allocation by doubling on grow.

## entry 74

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 75

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 76

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 77

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 78

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 79

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 80

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 81

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 82

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 83

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 84

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 85

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 86

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 87

- Walk both pointers from each end inward; advance the smaller side.

## entry 88

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 89

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 90

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 91

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 92

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 93

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 94

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 95

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 96

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 97

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 98

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 99

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 100

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 101

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 102

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 103

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 104

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 105

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 106

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 107

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 108

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 109

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 110

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 111

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 112

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 113

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 114

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 115

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 116

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 117

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 118

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 119

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 120

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 121

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 122

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 123

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 124

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 125

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 126

- Monotonic stack pops while the new element violates the invariant.

## entry 127

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 128

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 129

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 130

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 131

- Stable sort matters when a secondary key was set in a prior pass.

## entry 132

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 133

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 134

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 135

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 136

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 137

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 138

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 139

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 140

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 141

- StringBuilder: amortize allocation by doubling on grow.

## entry 142

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 143

- Stable sort matters when a secondary key was set in a prior pass.

## entry 144

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 145

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 146

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 147

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 148

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 149

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 150

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 151

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 152

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 153

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 154

- Splay tree: every access splays to the root; amortized O(log n).

## entry 155

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 156

- LIS via patience: each pile holds the smallest tail of length k.

## entry 157

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 158

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 159

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 160

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 161

- StringBuilder: amortize allocation by doubling on grow.

## entry 162

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 163

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 164

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 165

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 166

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 167

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 168

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 169

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 170

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 171

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 172

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 173

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 174

- Euler tour flattens a tree into an array for range-query LCA.

## entry 175

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 176

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 177

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 178

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 179

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 180

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 181

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 182

- StringBuilder: amortize allocation by doubling on grow.

## entry 183

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 184

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 185

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 186

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 187

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 188

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 189

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 190

- LIS via patience: each pile holds the smallest tail of length k.

## entry 191

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 192

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 193

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 194

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 195

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 196

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 197

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 198

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 199

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 200

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 201

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 202

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 203

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 204

- LIS via patience: each pile holds the smallest tail of length k.

## entry 205

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 206

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 207

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 208

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 209

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 210

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 211

- Monotonic stack pops while the new element violates the invariant.

## entry 212

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 213

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 214

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 215

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 216

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 217

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 218

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 219

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 220

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 221

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 222

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 223

- LIS via patience: each pile holds the smallest tail of length k.

## entry 224

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 225

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 226

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 227

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 228

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 229

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 230

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 231

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 232

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 233

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 234

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 235

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 236

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 237

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 238

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 239

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 240

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 241

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 242

- Walk both pointers from each end inward; advance the smaller side.

## entry 243

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 244

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 245

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 246

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 247

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 248

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 249

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 250

- Euler tour flattens a tree into an array for range-query LCA.

## entry 251

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 252

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 253

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 254

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 255

- Splay tree: every access splays to the root; amortized O(log n).

## entry 256

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 257

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 258

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 259

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 260

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 261

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 262

- Heap when you only need top-k; full sort is wasted work.

## entry 263

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 264

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 265

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 266

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 267

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 268

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 269

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 270

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 271

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 272

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 273

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 274

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 275

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 276

- StringBuilder: amortize allocation by doubling on grow.

## entry 277

- Heap when you only need top-k; full sort is wasted work.

## entry 278

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 279

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 280

- Euler tour flattens a tree into an array for range-query LCA.

## entry 281

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 282

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 283

- StringBuilder: amortize allocation by doubling on grow.

## entry 284

- Greedy by end-time picks the most non-overlapping intervals.

## entry 285

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 286

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 287

- Euler tour flattens a tree into an array for range-query LCA.

## entry 288

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 289

- Stable sort matters when a secondary key was set in a prior pass.

## entry 290

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 291

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 292

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 293

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 294

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 295

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 296

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 297

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 298

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 299

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 300

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 301

- Monotonic stack pops while the new element violates the invariant.

## entry 302

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 303

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 304

- Euler tour flattens a tree into an array for range-query LCA.

## entry 305

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 306

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 307

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 308

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 309

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 310

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 311

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 312

- Greedy by end-time picks the most non-overlapping intervals.

## entry 313

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 314

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 315

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 316

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 317

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 318

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 319

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 320

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 321

- StringBuilder: amortize allocation by doubling on grow.

## entry 322

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 323

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 324

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 325

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 326

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 327

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 328

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 329

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 330

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 331

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 332

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 333

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 334

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 335

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 336

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 337

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 338

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 339

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 340

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 341

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 342

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 343

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 344

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 345

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 346

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 347

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 348

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 349

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 350

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 351

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 352

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 353

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 354

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 355

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 356

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 357

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 358

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 359

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 360

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 361

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 362

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 363

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 364

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 365

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 366

- Heap when you only need top-k; full sort is wasted work.

## entry 367

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 368

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 369

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 370

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 371

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 372

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 373

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 374

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 375

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 376

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 377

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 378

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 379

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 380

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 381

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 382

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 383

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 384

- Monotonic stack pops while the new element violates the invariant.

## entry 385

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 386

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 387

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 388

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 389

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 390

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 391

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 392

- LIS via patience: each pile holds the smallest tail of length k.

## entry 393

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 394

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 395

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 396

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 397

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 398

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 399

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 400

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 401

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 402

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 403

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 404

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 405

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 406

- Heap when you only need top-k; full sort is wasted work.

## entry 407

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 408

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 409

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 410

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 411

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 412

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 413

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 414

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 415

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 416

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 417

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 418

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 419

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 420

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 421

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 422

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 423

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 424

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 425

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 426

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 427

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 428

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 429

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 430

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 431

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 432

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 433

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 434

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 435

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 436

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 437

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 438

- StringBuilder: amortize allocation by doubling on grow.

## entry 439

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 440

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 441

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 442

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 443

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 444

- Monotonic stack pops while the new element violates the invariant.

## entry 445

- DFS on a grid: write a sentinel into the visited cell; restore if needed.
