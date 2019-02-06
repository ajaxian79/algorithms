# boyer-moore

- In-place compaction uses two pointers: read advances always, write only on keep.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Monotonic stack pops while the new element violates the invariant.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Greedy by end-time picks the most non-overlapping intervals.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- LIS via patience: each pile holds the smallest tail of length k.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Heap when you only need top-k; full sort is wasted work.

- Union-Find with path compression amortizes to near-O(1) per op.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Stable sort matters when a secondary key was set in a prior pass.

- Walk both pointers from each end inward; advance the smaller side.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 1

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 2

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 3

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 4

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 5

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 6

- Monotonic stack pops while the new element violates the invariant.

## entry 7

- LIS via patience: each pile holds the smallest tail of length k.

## entry 8

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 9

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 10

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 11

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 12

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 13

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 14

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 15

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 16

- Heap when you only need top-k; full sort is wasted work.

## entry 17

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 18

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 19

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 20

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 21

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 22

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 23

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 24

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 25

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 26

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 27

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 28

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 29

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 30

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 31

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 32

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 33

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 34

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 35

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 36

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 37

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 38

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 39

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 40

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 41

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 42

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 43

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 44

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 45

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 46

- LIS via patience: each pile holds the smallest tail of length k.

## entry 47

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 48

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 49

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 50

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 51

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 52

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 53

- Greedy by end-time picks the most non-overlapping intervals.

## entry 54

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 55

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 56

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 57

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 58

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 59

- Monotonic stack pops while the new element violates the invariant.

## entry 60

- Stable sort matters when a secondary key was set in a prior pass.

## entry 61

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 62

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 63

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 64

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 65

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 66

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 67

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 68

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 69

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 70

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 71

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 72

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 73

- LIS via patience: each pile holds the smallest tail of length k.

## entry 74

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 75

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 76

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 77

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 78

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 79

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 80

- Euler tour flattens a tree into an array for range-query LCA.

## entry 81

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 82

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 83

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 84

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 85

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 86

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 87

- Monotonic stack pops while the new element violates the invariant.

## entry 88

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 89

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 90

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 91

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 92

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 93

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 94

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 95

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 96

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 97

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 98

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 99

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 100

- Walk both pointers from each end inward; advance the smaller side.

## entry 101

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 102

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 103

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 104

- Splay tree: every access splays to the root; amortized O(log n).

## entry 105

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 106

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 107

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 108

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 109

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 110

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 111

- Stable sort matters when a secondary key was set in a prior pass.

## entry 112

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 113

- StringBuilder: amortize allocation by doubling on grow.

## entry 114

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 115

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 116

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 117

- LIS via patience: each pile holds the smallest tail of length k.

## entry 118

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 119

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 120

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 121

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 122

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 123

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 124

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 125

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 126

- Euler tour flattens a tree into an array for range-query LCA.

## entry 127

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 128

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 129

- StringBuilder: amortize allocation by doubling on grow.

## entry 130

- Heap when you only need top-k; full sort is wasted work.

## entry 131

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 132

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 133

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 134

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 135

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 136

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 137

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 138

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 139

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 140

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 141

- Monotonic stack pops while the new element violates the invariant.

## entry 142

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 143

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 144

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 145

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 146

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 147

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 148

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 149

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 150

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 151

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 152

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 153

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 154

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 155

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 156

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 157

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 158

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 159

- LIS via patience: each pile holds the smallest tail of length k.

## entry 160

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 161

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 162

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 163

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 164

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 165

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 166

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 167

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 168

- Stable sort matters when a secondary key was set in a prior pass.

## entry 169

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 170

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 171

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 172

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 173

- Splay tree: every access splays to the root; amortized O(log n).

## entry 174

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 175

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 176

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 177

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 178

- LIS via patience: each pile holds the smallest tail of length k.

## entry 179

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 180

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 181

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 182

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 183

- Greedy by end-time picks the most non-overlapping intervals.

## entry 184

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 185

- Monotonic stack pops while the new element violates the invariant.

## entry 186

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 187

- Euler tour flattens a tree into an array for range-query LCA.

## entry 188

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 189

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 190

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 191

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 192

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 193

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 194

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 195

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 196

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 197

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 198

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 199

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 200

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 201

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 202

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 203

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 204

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 205

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 206

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 207

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 208

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 209

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 210

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 211

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 212

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 213

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 214

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 215

- Stable sort matters when a secondary key was set in a prior pass.

## entry 216

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 217

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 218

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 219

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 220

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 221

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 222

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 223

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 224

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 225

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 226

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 227

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 228

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 229

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 230

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 231

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 232

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 233

- Heap when you only need top-k; full sort is wasted work.

## entry 234

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 235

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 236

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 237

- Stable sort matters when a secondary key was set in a prior pass.

## entry 238

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 239

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 240

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 241

- Greedy by end-time picks the most non-overlapping intervals.

## entry 242

- Splay tree: every access splays to the root; amortized O(log n).

## entry 243

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 244

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 245

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 246

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 247

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 248

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 249

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 250

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 251

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 252

- Heap when you only need top-k; full sort is wasted work.

## entry 253

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 254

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 255

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 256

- Heap when you only need top-k; full sort is wasted work.

## entry 257

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 258

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 259

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 260

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 261

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 262

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 263

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 264

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 265

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 266

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 267

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 268

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 269

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 270

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 271

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 272

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 273

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 274

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 275

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 276

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 277

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 278

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 279

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 280

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 281

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 282

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 283

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 284

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 285

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 286

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 287

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 288

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 289

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 290

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 291

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 292

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 293

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 294

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 295

- Euler tour flattens a tree into an array for range-query LCA.

## entry 296

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 297

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 298

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 299

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 300

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 301

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 302

- Heap when you only need top-k; full sort is wasted work.

## entry 303

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 304

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 305

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 306

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 307

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 308

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 309

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 310

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 311

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 312

- Heap when you only need top-k; full sort is wasted work.

## entry 313

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 314

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 315

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 316

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 317

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 318

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 319

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 320

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 321

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 322

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 323

- Walk both pointers from each end inward; advance the smaller side.

## entry 324

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 325

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 326

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 327

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 328

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 329

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 330

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 331

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 332

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 333

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 334

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 335

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 336

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 337

- Heap when you only need top-k; full sort is wasted work.

## entry 338

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 339

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 340

- Monotonic stack pops while the new element violates the invariant.

## entry 341

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 342

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 343

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 344

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 345

- Euler tour flattens a tree into an array for range-query LCA.

## entry 346

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 347

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 348

- StringBuilder: amortize allocation by doubling on grow.

## entry 349

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 350

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 351

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 352

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 353

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 354

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 355

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 356

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 357

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 358

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 359

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 360

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 361

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 362

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 363

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 364

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 365

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 366

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 367

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 368

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 369

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 370

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 371

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 372

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
