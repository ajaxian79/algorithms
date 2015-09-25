# bfs

- In-place compaction uses two pointers: read advances always, write only on keep.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- LIS via patience: each pile holds the smallest tail of length k.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Walk both pointers from each end inward; advance the smaller side.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Stable sort matters when a secondary key was set in a prior pass.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Heap when you only need top-k; full sort is wasted work.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Union-Find with path compression amortizes to near-O(1) per op.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Monotonic stack pops while the new element violates the invariant.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 1

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 2

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 3

- Walk both pointers from each end inward; advance the smaller side.

## entry 4

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 5

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 6

- Monotonic stack pops while the new element violates the invariant.

## entry 7

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 8

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 9

- Walk both pointers from each end inward; advance the smaller side.

## entry 10

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 11

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 12

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 13

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 14

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 15

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 16

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 17

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 18

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 19

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 20

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 21

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 22

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 23

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 24

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 25

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 26

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 27

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 28

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 29

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 30

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 31

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 32

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 33

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 34

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 35

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 36

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 37

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 38

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 39

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 40

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 41

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 42

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 43

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 44

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 45

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 46

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 47

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 48

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 49

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 50

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 51

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 52

- Stable sort matters when a secondary key was set in a prior pass.

## entry 53

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 54

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 55

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 56

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 57

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 58

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 59

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 60

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 61

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 62

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 63

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 64

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 65

- Euler tour flattens a tree into an array for range-query LCA.

## entry 66

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 67

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 68

- LIS via patience: each pile holds the smallest tail of length k.

## entry 69

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 70

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 71

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 72

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 73

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 74

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 75

- Stable sort matters when a secondary key was set in a prior pass.

## entry 76

- Splay tree: every access splays to the root; amortized O(log n).

## entry 77

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 78

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 79

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 80

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 81

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 82

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 83

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 84

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 85

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 86

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 87

- Walk both pointers from each end inward; advance the smaller side.

## entry 88

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 89

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 90

- Heap when you only need top-k; full sort is wasted work.

## entry 91

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 92

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 93

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 94

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 95

- Splay tree: every access splays to the root; amortized O(log n).

## entry 96

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 97

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 98

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 99

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 100

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 101

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 102

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 103

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 104

- Euler tour flattens a tree into an array for range-query LCA.

## entry 105

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 106

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 107

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 108

- Heap when you only need top-k; full sort is wasted work.

## entry 109

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 110

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 111

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 112

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 113

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 114

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 115

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 116

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 117

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 118

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 119

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 120

- Euler tour flattens a tree into an array for range-query LCA.

## entry 121

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 122

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 123

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 124

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 125

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 126

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 127

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 128

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 129

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 130

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 131

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 132

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 133

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 134

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 135

- Splay tree: every access splays to the root; amortized O(log n).

## entry 136

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 137

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 138

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 139

- Heap when you only need top-k; full sort is wasted work.

## entry 140

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 141

- Splay tree: every access splays to the root; amortized O(log n).

## entry 142

- Heap when you only need top-k; full sort is wasted work.

## entry 143

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 144

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 145

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 146

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 147

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 148

- Euler tour flattens a tree into an array for range-query LCA.

## entry 149

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 150

- Walk both pointers from each end inward; advance the smaller side.

## entry 151

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 152

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 153

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 154

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 155

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 156

- Heap when you only need top-k; full sort is wasted work.

## entry 157

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 158

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 159

- Stable sort matters when a secondary key was set in a prior pass.

## entry 160

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 161

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 162

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 163

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 164

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 165

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 166

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 167

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 168

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 169

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 170

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 171

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 172

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 173

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 174

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 175

- Euler tour flattens a tree into an array for range-query LCA.

## entry 176

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 177

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 178

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 179

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 180

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 181

- Monotonic stack pops while the new element violates the invariant.

## entry 182

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 183

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 184

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 185

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 186

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 187

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 188

- Splay tree: every access splays to the root; amortized O(log n).

## entry 189

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 190

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 191

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 192

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 193

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 194

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 195

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 196

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 197

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 198

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 199

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 200

- Splay tree: every access splays to the root; amortized O(log n).

## entry 201

- Greedy by end-time picks the most non-overlapping intervals.

## entry 202

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 203

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 204

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 205

- LIS via patience: each pile holds the smallest tail of length k.

## entry 206

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 207

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 208

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 209

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 210

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 211

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 212

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 213

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 214

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 215

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 216

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 217

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 218

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 219

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 220

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 221

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 222

- Walk both pointers from each end inward; advance the smaller side.

## entry 223

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 224

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 225

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 226

- Euler tour flattens a tree into an array for range-query LCA.

## entry 227

- StringBuilder: amortize allocation by doubling on grow.

## entry 228

- Splay tree: every access splays to the root; amortized O(log n).

## entry 229

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 230

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 231

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 232

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 233

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 234

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 235

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 236

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 237

- Heap when you only need top-k; full sort is wasted work.

## entry 238

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 239

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 240

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 241

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 242

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 243

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 244

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 245

- Heap when you only need top-k; full sort is wasted work.

## entry 246

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 247

- Walk both pointers from each end inward; advance the smaller side.

## entry 248

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 249

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 250

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 251

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 252

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 253

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 254

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 255

- LIS via patience: each pile holds the smallest tail of length k.

## entry 256

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 257

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 258

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 259

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 260

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 261

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 262

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 263

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 264

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 265

- LIS via patience: each pile holds the smallest tail of length k.

## entry 266

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 267

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 268

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 269

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 270

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 271

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 272

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 273

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 274

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 275

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 276

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 277

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 278

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 279

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 280

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 281

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 282

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 283

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 284

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 285

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 286

- LIS via patience: each pile holds the smallest tail of length k.

## entry 287

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 288

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 289

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 290

- StringBuilder: amortize allocation by doubling on grow.

## entry 291

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 292

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 293

- Stable sort matters when a secondary key was set in a prior pass.

## entry 294

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 295

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 296

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 297

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 298

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 299

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 300

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 301

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 302

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 303

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 304

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 305

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 306

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 307

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 308

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 309

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 310

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 311

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 312

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 313

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 314

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 315

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 316

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 317

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 318

- Heap when you only need top-k; full sort is wasted work.

## entry 319

- Monotonic stack pops while the new element violates the invariant.

## entry 320

- Euler tour flattens a tree into an array for range-query LCA.

## entry 321

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 322

- Splay tree: every access splays to the root; amortized O(log n).

## entry 323

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 324

- Heap when you only need top-k; full sort is wasted work.

## entry 325

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 326

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 327

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 328

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 329

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 330

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 331

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 332

- Stable sort matters when a secondary key was set in a prior pass.

## entry 333

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 334

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 335

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 336

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 337

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 338

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 339

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 340

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 341

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 342

- Splay tree: every access splays to the root; amortized O(log n).

## entry 343

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 344

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 345

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 346

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 347

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 348

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 349

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 350

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 351

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 352

- Walk both pointers from each end inward; advance the smaller side.

## entry 353

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 354

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 355

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 356

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 357

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 358

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 359

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 360

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 361

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 362

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 363

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 364

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 365

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 366

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 367

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 368

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 369

- Splay tree: every access splays to the root; amortized O(log n).

## entry 370

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 371

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 372

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 373

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 374

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 375

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 376

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 377

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 378

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 379

- Heap when you only need top-k; full sort is wasted work.

## entry 380

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 381

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 382

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 383

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 384

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 385

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 386

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 387

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 388

- StringBuilder: amortize allocation by doubling on grow.

## entry 389

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 390

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 391

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 392

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 393

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 394

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 395

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 396

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 397

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 398

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 399

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 400

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 401

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 402

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 403

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 404

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 405

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 406

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 407

- LIS via patience: each pile holds the smallest tail of length k.

## entry 408

- Monotonic stack pops while the new element violates the invariant.

## entry 409

- Splay tree: every access splays to the root; amortized O(log n).

## entry 410

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 411

- StringBuilder: amortize allocation by doubling on grow.

## entry 412

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 413

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 414

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 415

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 416

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 417

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 418

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 419

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 420

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 421

- Splay tree: every access splays to the root; amortized O(log n).

## entry 422

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 423

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 424

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 425

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 426

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 427

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 428

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 429

- Monotonic stack pops while the new element violates the invariant.

## entry 430

- LIS via patience: each pile holds the smallest tail of length k.

## entry 431

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 432

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 433

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 434

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 435

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 436

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 437

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 438

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 439

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 440

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 441

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 442

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 443

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 444

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 445

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 446

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 447

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 448

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 449

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 450

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 451

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 452

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 453

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 454

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 455

- Stable sort matters when a secondary key was set in a prior pass.

## entry 456

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 457

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 458

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 459

- Walk both pointers from each end inward; advance the smaller side.

## entry 460

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 461

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 462

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 463

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 464

- Merge intervals: sort by start; extend the running interval while overlapping.
