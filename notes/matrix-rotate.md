# matrix-rotate

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Heap when you only need top-k; full sort is wasted work.

- LIS via patience: each pile holds the smallest tail of length k.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Walk both pointers from each end inward; advance the smaller side.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Stable sort matters when a secondary key was set in a prior pass.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Union-Find with path compression amortizes to near-O(1) per op.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Monotonic stack pops while the new element violates the invariant.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 1

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 2

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 3

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 4

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 5

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 6

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 7

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 8

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 9

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 10

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 11

- Walk both pointers from each end inward; advance the smaller side.

## entry 12

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 13

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 14

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 15

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 16

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 17

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 18

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 19

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 20

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 21

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 22

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 23

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 24

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 25

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 26

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 27

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 28

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 29

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 30

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 31

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 32

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 33

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 34

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 35

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 36

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 37

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 38

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 39

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 40

- Euler tour flattens a tree into an array for range-query LCA.

## entry 41

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 42

- Monotonic stack pops while the new element violates the invariant.

## entry 43

- Splay tree: every access splays to the root; amortized O(log n).

## entry 44

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 45

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 46

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 47

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 48

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 49

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 50

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 51

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 52

- Walk both pointers from each end inward; advance the smaller side.

## entry 53

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 54

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 55

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 56

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 57

- Splay tree: every access splays to the root; amortized O(log n).

## entry 58

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 59

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 60

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 61

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 62

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 63

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 64

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 65

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 66

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 67

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 68

- Splay tree: every access splays to the root; amortized O(log n).

## entry 69

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 70

- LIS via patience: each pile holds the smallest tail of length k.

## entry 71

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 72

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 73

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 74

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 75

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 76

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 77

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 78

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 79

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 80

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 81

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 82

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 83

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 84

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 85

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 86

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 87

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 88

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 89

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 90

- LIS via patience: each pile holds the smallest tail of length k.

## entry 91

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 92

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 93

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 94

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 95

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 96

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 97

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 98

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 99

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 100

- Greedy by end-time picks the most non-overlapping intervals.

## entry 101

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 102

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 103

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 104

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 105

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 106

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 107

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 108

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 109

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 110

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 111

- Greedy by end-time picks the most non-overlapping intervals.

## entry 112

- StringBuilder: amortize allocation by doubling on grow.

## entry 113

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 114

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 115

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 116

- Splay tree: every access splays to the root; amortized O(log n).

## entry 117

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 118

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 119

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 120

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 121

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 122

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 123

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 124

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 125

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 126

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 127

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 128

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 129

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 130

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 131

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 132

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 133

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 134

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 135

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 136

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 137

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 138

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 139

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 140

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 141

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 142

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 143

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 144

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 145

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 146

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 147

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 148

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 149

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 150

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 151

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 152

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 153

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 154

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 155

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 156

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 157

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 158

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 159

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 160

- Greedy by end-time picks the most non-overlapping intervals.

## entry 161

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 162

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 163

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 164

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 165

- Greedy by end-time picks the most non-overlapping intervals.

## entry 166

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 167

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 168

- Stable sort matters when a secondary key was set in a prior pass.

## entry 169

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 170

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 171

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 172

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 173

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 174

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 175

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 176

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 177

- Euler tour flattens a tree into an array for range-query LCA.

## entry 178

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 179

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 180

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 181

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 182

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 183

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 184

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 185

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 186

- LIS via patience: each pile holds the smallest tail of length k.

## entry 187

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 188

- LIS via patience: each pile holds the smallest tail of length k.

## entry 189

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 190

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 191

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 192

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 193

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 194

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 195

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 196

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 197

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 198

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 199

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 200

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 201

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 202

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 203

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 204

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 205

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 206

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 207

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 208

- Stable sort matters when a secondary key was set in a prior pass.

## entry 209

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 210

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 211

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 212

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 213

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 214

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 215

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 216

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 217

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 218

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 219

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 220

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 221

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 222

- Heap when you only need top-k; full sort is wasted work.

## entry 223

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 224

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 225

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 226

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 227

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 228

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 229

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 230

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 231

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 232

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 233

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 234

- Heap when you only need top-k; full sort is wasted work.

## entry 235

- Splay tree: every access splays to the root; amortized O(log n).

## entry 236

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 237

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 238

- Greedy by end-time picks the most non-overlapping intervals.

## entry 239

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 240

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 241

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 242

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 243

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 244

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 245

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 246

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 247

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 248

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 249

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 250

- Walk both pointers from each end inward; advance the smaller side.

## entry 251

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 252

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 253

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 254

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 255

- Monotonic stack pops while the new element violates the invariant.

## entry 256

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 257

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 258

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 259

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 260

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 261

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 262

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 263

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 264

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 265

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 266

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 267

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 268

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 269

- Walk both pointers from each end inward; advance the smaller side.

## entry 270

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 271

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 272

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 273

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 274

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 275

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 276

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 277

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 278

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 279

- LIS via patience: each pile holds the smallest tail of length k.

## entry 280

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 281

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 282

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 283

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 284

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 285

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 286

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 287

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 288

- Walk both pointers from each end inward; advance the smaller side.

## entry 289

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 290

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 291

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 292

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 293

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 294

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 295

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 296

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 297

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 298

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 299

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 300

- LIS via patience: each pile holds the smallest tail of length k.

## entry 301

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 302

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 303

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 304

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 305

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 306

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 307

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 308

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 309

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 310

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 311

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 312

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 313

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 314

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 315

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 316

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 317

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 318

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 319

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 320

- Euler tour flattens a tree into an array for range-query LCA.

## entry 321

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 322

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 323

- Heap when you only need top-k; full sort is wasted work.

## entry 324

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 325

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 326

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 327

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 328

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 329

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 330

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 331

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 332

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 333

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 334

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 335

- Euler tour flattens a tree into an array for range-query LCA.

## entry 336

- Heap when you only need top-k; full sort is wasted work.

## entry 337

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 338

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 339

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 340

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 341

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 342

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 343

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 344

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 345

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 346

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 347

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 348

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 349

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 350

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 351

- Euler tour flattens a tree into an array for range-query LCA.

## entry 352

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 353

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 354

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 355

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 356

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 357

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 358

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 359

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 360

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 361

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 362

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 363

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 364

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 365

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 366

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 367

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 368

- Splay tree: every access splays to the root; amortized O(log n).

## entry 369

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 370

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 371

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 372

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 373

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 374

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 375

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 376

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 377

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 378

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 379

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 380

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 381

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 382

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 383

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 384

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 385

- StringBuilder: amortize allocation by doubling on grow.

## entry 386

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 387

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 388

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 389

- LIS via patience: each pile holds the smallest tail of length k.

## entry 390

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 391

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 392

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 393

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 394

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 395

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 396

- Splay tree: every access splays to the root; amortized O(log n).

## entry 397

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 398

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 399

- Splay tree: every access splays to the root; amortized O(log n).

## entry 400

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 401

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 402

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 403

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 404

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 405

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 406

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 407

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 408

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 409

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 410

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 411

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 412

- Heap when you only need top-k; full sort is wasted work.

## entry 413

- Euler tour flattens a tree into an array for range-query LCA.

## entry 414

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 415

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 416

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 417

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 418

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 419

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 420

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 421

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 422

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 423

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 424

- StringBuilder: amortize allocation by doubling on grow.

## entry 425

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 426

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 427

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 428

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 429

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 430

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 431

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 432

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 433

- Splay tree: every access splays to the root; amortized O(log n).

## entry 434

- LIS via patience: each pile holds the smallest tail of length k.

## entry 435

- Walk both pointers from each end inward; advance the smaller side.

## entry 436

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 437

- Splay tree: every access splays to the root; amortized O(log n).

## entry 438

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 439

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 440

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 441

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 442

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 443

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 444

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 445

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 446

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 447

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 448

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 449

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 450

- Stable sort matters when a secondary key was set in a prior pass.

## entry 451

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 452

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 453

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 454

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 455

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 456

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 457

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 458

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 459

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 460

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 461

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 462

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 463

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 464

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 465

- Greedy by end-time picks the most non-overlapping intervals.

## entry 466

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 467

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 468

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 469

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 470

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 471

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 472

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 473

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 474

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 475

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 476

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 477

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 478

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 479

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 480

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 481

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 482

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 483

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 484

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 485

- Stable sort matters when a secondary key was set in a prior pass.

## entry 486

- Greedy by end-time picks the most non-overlapping intervals.

## entry 487

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 488

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 489

- LIS via patience: each pile holds the smallest tail of length k.

## entry 490

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 491

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 492

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 493

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 494

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 495

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 496

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 497

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 498

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 499

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 500

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 501

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 502

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 503

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 504

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 505

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 506

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 507

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 508

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 509

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 510

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 511

- Euler tour flattens a tree into an array for range-query LCA.

## entry 512

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 513

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 514

- Monotonic stack pops while the new element violates the invariant.

## entry 515

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 516

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 517

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 518

- StringBuilder: amortize allocation by doubling on grow.

## entry 519

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 520

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 521

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 522

- Monotonic stack pops while the new element violates the invariant.

## entry 523

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 524

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 525

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 526

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 527

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 528

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 529

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 530

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 531

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 532

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 533

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 534

- Stable sort matters when a secondary key was set in a prior pass.

## entry 535

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 536

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 537

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 538

- StringBuilder: amortize allocation by doubling on grow.

## entry 539

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 540

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 541

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 542

- Greedy by end-time picks the most non-overlapping intervals.

## entry 543

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 544

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 545

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 546

- Splay tree: every access splays to the root; amortized O(log n).

## entry 547

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 548

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 549

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 550

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 551

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 552

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 553

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 554

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 555

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 556

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 557

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 558

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 559

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 560

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 561

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 562

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 563

- StringBuilder: amortize allocation by doubling on grow.

## entry 564

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 565

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 566

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 567

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 568

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 569

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 570

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 571

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 572

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 573

- Heap when you only need top-k; full sort is wasted work.

## entry 574

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 575

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 576

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 577

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 578

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 579

- Stable sort matters when a secondary key was set in a prior pass.

## entry 580

- Euler tour flattens a tree into an array for range-query LCA.

## entry 581

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 582

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 583

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 584

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 585

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 586

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 587

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 588

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 589

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 590

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 591

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 592

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 593

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 594

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 595

- Euler tour flattens a tree into an array for range-query LCA.

## entry 596

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 597

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 598

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 599

- Splay tree: every access splays to the root; amortized O(log n).

## entry 600

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 601

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 602

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 603

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 604

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 605

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 606

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 607

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 608

- Greedy by end-time picks the most non-overlapping intervals.

## entry 609

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 610

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 611

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 612

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 613

- Tabulation wins when iteration order is obvious and stack depth would blow up.
