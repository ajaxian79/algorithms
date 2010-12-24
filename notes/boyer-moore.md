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

## entry 373

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 374

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 375

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 376

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 377

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 378

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 379

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 380

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 381

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 382

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 383

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 384

- Walk both pointers from each end inward; advance the smaller side.

## entry 385

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 386

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 387

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 388

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 389

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 390

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 391

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 392

- Greedy by end-time picks the most non-overlapping intervals.

## entry 393

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 394

- Greedy by end-time picks the most non-overlapping intervals.

## entry 395

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 396

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 397

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 398

- Heap when you only need top-k; full sort is wasted work.

## entry 399

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 400

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 401

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 402

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 403

- Splay tree: every access splays to the root; amortized O(log n).

## entry 404

- StringBuilder: amortize allocation by doubling on grow.

## entry 405

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 406

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 407

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 408

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 409

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 410

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 411

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 412

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 413

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 414

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 415

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 416

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 417

- StringBuilder: amortize allocation by doubling on grow.

## entry 418

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 419

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 420

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 421

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 422

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 423

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 424

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 425

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 426

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 427

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 428

- LIS via patience: each pile holds the smallest tail of length k.

## entry 429

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 430

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 431

- Splay tree: every access splays to the root; amortized O(log n).

## entry 432

- Splay tree: every access splays to the root; amortized O(log n).

## entry 433

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 434

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 435

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 436

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 437

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 438

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 439

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 440

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 441

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 442

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 443

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 444

- Greedy by end-time picks the most non-overlapping intervals.

## entry 445

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 446

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 447

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 448

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 449

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 450

- Splay tree: every access splays to the root; amortized O(log n).

## entry 451

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 452

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 453

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 454

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 455

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 456

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 457

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 458

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 459

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 460

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 461

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 462

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 463

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 464

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 465

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 466

- StringBuilder: amortize allocation by doubling on grow.

## entry 467

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 468

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 469

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 470

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 471

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 472

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 473

- Euler tour flattens a tree into an array for range-query LCA.

## entry 474

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 475

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 476

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 477

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 478

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 479

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 480

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 481

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 482

- StringBuilder: amortize allocation by doubling on grow.

## entry 483

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 484

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 485

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 486

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 487

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 488

- Euler tour flattens a tree into an array for range-query LCA.

## entry 489

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 490

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 491

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 492

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 493

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 494

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 495

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 496

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 497

- Stable sort matters when a secondary key was set in a prior pass.

## entry 498

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 499

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 500

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 501

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 502

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 503

- LIS via patience: each pile holds the smallest tail of length k.

## entry 504

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 505

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 506

- Splay tree: every access splays to the root; amortized O(log n).

## entry 507

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 508

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 509

- Monotonic stack pops while the new element violates the invariant.

## entry 510

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 511

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 512

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 513

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 514

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 515

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 516

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 517

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 518

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 519

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 520

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 521

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 522

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 523

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 524

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 525

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 526

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 527

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 528

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 529

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 530

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 531

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 532

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 533

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 534

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 535

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 536

- Monotonic stack pops while the new element violates the invariant.

## entry 537

- Splay tree: every access splays to the root; amortized O(log n).

## entry 538

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 539

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 540

- Walk both pointers from each end inward; advance the smaller side.

## entry 541

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 542

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 543

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 544

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 545

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 546

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 547

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 548

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 549

- Stable sort matters when a secondary key was set in a prior pass.

## entry 550

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 551

- Stable sort matters when a secondary key was set in a prior pass.

## entry 552

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 553

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 554

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 555

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 556

- Greedy by end-time picks the most non-overlapping intervals.

## entry 557

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 558

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 559

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 560

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 561

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 562

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 563

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 564

- Greedy by end-time picks the most non-overlapping intervals.

## entry 565

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 566

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 567

- Monotonic stack pops while the new element violates the invariant.

## entry 568

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 569

- Stable sort matters when a secondary key was set in a prior pass.

## entry 570

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 571

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 572

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 573

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 574

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 575

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 576

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 577

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 578

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 579

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 580

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 581

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 582

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 583

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 584

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 585

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 586

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 587

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 588

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 589

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 590

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 591

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 592

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 593

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 594

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 595

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 596

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 597

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 598

- Stable sort matters when a secondary key was set in a prior pass.

## entry 599

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 600

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 601

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 602

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 603

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 604

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 605

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 606

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 607

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 608

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 609

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 610

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 611

- Stable sort matters when a secondary key was set in a prior pass.

## entry 612

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 613

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 614

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 615

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 616

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 617

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 618

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 619

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 620

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 621

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 622

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 623

- StringBuilder: amortize allocation by doubling on grow.

## entry 624

- StringBuilder: amortize allocation by doubling on grow.

## entry 625

- LIS via patience: each pile holds the smallest tail of length k.

## entry 626

- StringBuilder: amortize allocation by doubling on grow.

## entry 627

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 628

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 629

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 630

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 631

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 632

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 633

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 634

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 635

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 636

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 637

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 638

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 639

- Euler tour flattens a tree into an array for range-query LCA.

## entry 640

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 641

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 642

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 643

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 644

- StringBuilder: amortize allocation by doubling on grow.

## entry 645

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 646

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 647

- Monotonic stack pops while the new element violates the invariant.

## entry 648

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 649

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 650

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 651

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 652

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 653

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 654

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 655

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 656

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 657

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 658

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 659

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 660

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 661

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 662

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 663

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 664

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 665

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 666

- Euler tour flattens a tree into an array for range-query LCA.

## entry 667

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 668

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
