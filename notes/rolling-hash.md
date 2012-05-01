# rolling-hash

- Walk both pointers from each end inward; advance the smaller side.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Stable sort matters when a secondary key was set in a prior pass.

- LIS via patience: each pile holds the smallest tail of length k.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Monotonic stack pops while the new element violates the invariant.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Greedy by end-time picks the most non-overlapping intervals.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Heap when you only need top-k; full sort is wasted work.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Union-Find with path compression amortizes to near-O(1) per op.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 1

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 2

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 3

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 4

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 5

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 6

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 7

- Monotonic stack pops while the new element violates the invariant.

## entry 8

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 9

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 10

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 11

- Euler tour flattens a tree into an array for range-query LCA.

## entry 12

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 13

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 14

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 15

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 16

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 17

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 18

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 19

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 20

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 21

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 22

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 23

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 24

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 25

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 26

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 27

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 28

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 29

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 30

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 31

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 32

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 33

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 34

- StringBuilder: amortize allocation by doubling on grow.

## entry 35

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 36

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 37

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 38

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 39

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 40

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 41

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 42

- Euler tour flattens a tree into an array for range-query LCA.

## entry 43

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 44

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 45

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 46

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 47

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 48

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 49

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 50

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 51

- Stable sort matters when a secondary key was set in a prior pass.

## entry 52

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 53

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 54

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 55

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 56

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 57

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 58

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 59

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 60

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 61

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 62

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 63

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 64

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 65

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 66

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 67

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 68

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 69

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 70

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 71

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 72

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 73

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 74

- Heap when you only need top-k; full sort is wasted work.

## entry 75

- Heap when you only need top-k; full sort is wasted work.

## entry 76

- LIS via patience: each pile holds the smallest tail of length k.

## entry 77

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 78

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 79

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 80

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 81

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 82

- Stable sort matters when a secondary key was set in a prior pass.

## entry 83

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 84

- Monotonic stack pops while the new element violates the invariant.

## entry 85

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 86

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 87

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 88

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 89

- Heap when you only need top-k; full sort is wasted work.

## entry 90

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 91

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 92

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 93

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 94

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 95

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 96

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 97

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 98

- Walk both pointers from each end inward; advance the smaller side.

## entry 99

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 100

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 101

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 102

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 103

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 104

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 105

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 106

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 107

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 108

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 109

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 110

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 111

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 112

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 113

- StringBuilder: amortize allocation by doubling on grow.

## entry 114

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 115

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 116

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 117

- Walk both pointers from each end inward; advance the smaller side.

## entry 118

- StringBuilder: amortize allocation by doubling on grow.

## entry 119

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 120

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 121

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 122

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 123

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 124

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 125

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 126

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 127

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 128

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 129

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 130

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 131

- Greedy by end-time picks the most non-overlapping intervals.

## entry 132

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 133

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 134

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 135

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 136

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 137

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 138

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 139

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 140

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 141

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 142

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 143

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 144

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 145

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 146

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 147

- Euler tour flattens a tree into an array for range-query LCA.

## entry 148

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 149

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 150

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 151

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 152

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 153

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 154

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 155

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 156

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 157

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 158

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 159

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 160

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 161

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 162

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 163

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 164

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 165

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 166

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 167

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 168

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 169

- Euler tour flattens a tree into an array for range-query LCA.

## entry 170

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 171

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 172

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 173

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 174

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 175

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 176

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 177

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 178

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 179

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 180

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 181

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 182

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 183

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 184

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 185

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 186

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 187

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 188

- Heap when you only need top-k; full sort is wasted work.

## entry 189

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 190

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 191

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 192

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 193

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 194

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 195

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 196

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 197

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 198

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 199

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 200

- Heap when you only need top-k; full sort is wasted work.

## entry 201

- Heap when you only need top-k; full sort is wasted work.

## entry 202

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 203

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 204

- Heap when you only need top-k; full sort is wasted work.

## entry 205

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 206

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 207

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 208

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 209

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 210

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 211

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 212

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 213

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 214

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 215

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 216

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 217

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 218

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 219

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 220

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 221

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 222

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 223

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 224

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 225

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 226

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 227

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 228

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 229

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 230

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 231

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 232

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 233

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 234

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 235

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 236

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 237

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 238

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 239

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 240

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 241

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 242

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 243

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 244

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 245

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 246

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 247

- Monotonic stack pops while the new element violates the invariant.

## entry 248

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 249

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 250

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 251

- StringBuilder: amortize allocation by doubling on grow.

## entry 252

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 253

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 254

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 255

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 256

- Stable sort matters when a secondary key was set in a prior pass.

## entry 257

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 258

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 259

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 260

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 261

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 262

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 263

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 264

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 265

- LIS via patience: each pile holds the smallest tail of length k.

## entry 266

- Walk both pointers from each end inward; advance the smaller side.

## entry 267

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 268

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 269

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 270

- StringBuilder: amortize allocation by doubling on grow.

## entry 271

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 272

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 273

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 274

- Greedy by end-time picks the most non-overlapping intervals.

## entry 275

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 276

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 277

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 278

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 279

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 280

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 281

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 282

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 283

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 284

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 285

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 286

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 287

- StringBuilder: amortize allocation by doubling on grow.

## entry 288

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 289

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 290

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 291

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 292

- Heap when you only need top-k; full sort is wasted work.

## entry 293

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 294

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 295

- Greedy by end-time picks the most non-overlapping intervals.

## entry 296

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 297

- Splay tree: every access splays to the root; amortized O(log n).

## entry 298

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 299

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 300

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 301

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 302

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 303

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 304

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 305

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 306

- Heap when you only need top-k; full sort is wasted work.

## entry 307

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 308

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 309

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 310

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 311

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 312

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 313

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 314

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 315

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 316

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 317

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 318

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 319

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 320

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 321

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 322

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 323

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 324

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 325

- Walk both pointers from each end inward; advance the smaller side.

## entry 326

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 327

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 328

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 329

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 330

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 331

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 332

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 333

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 334

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 335

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 336

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 337

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 338

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 339

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 340

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 341

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 342

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 343

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 344

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 345

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 346

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 347

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 348

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 349

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 350

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 351

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 352

- Walk both pointers from each end inward; advance the smaller side.

## entry 353

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 354

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 355

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 356

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 357

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 358

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 359

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 360

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 361

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 362

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 363

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 364

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 365

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 366

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 367

- Stable sort matters when a secondary key was set in a prior pass.

## entry 368

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 369

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 370

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 371

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 372

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 373

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 374

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 375

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 376

- Walk both pointers from each end inward; advance the smaller side.

## entry 377

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 378

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 379

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 380

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 381

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 382

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 383

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 384

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 385

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 386

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 387

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 388

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 389

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 390

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 391

- Splay tree: every access splays to the root; amortized O(log n).

## entry 392

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 393

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 394

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 395

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 396

- Greedy by end-time picks the most non-overlapping intervals.

## entry 397

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 398

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 399

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 400

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 401

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 402

- Euler tour flattens a tree into an array for range-query LCA.

## entry 403

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 404

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 405

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 406

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 407

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 408

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 409

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 410

- Splay tree: every access splays to the root; amortized O(log n).

## entry 411

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 412

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 413

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 414

- Stable sort matters when a secondary key was set in a prior pass.

## entry 415

- Heap when you only need top-k; full sort is wasted work.

## entry 416

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 417

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 418

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 419

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 420

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 421

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 422

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 423

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 424

- LIS via patience: each pile holds the smallest tail of length k.

## entry 425

- Heap when you only need top-k; full sort is wasted work.

## entry 426

- Euler tour flattens a tree into an array for range-query LCA.

## entry 427

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 428

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 429

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 430

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 431

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 432

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 433

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 434

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 435

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 436

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 437

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 438

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 439

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 440

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 441

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 442

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 443

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 444

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 445

- StringBuilder: amortize allocation by doubling on grow.

## entry 446

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 447

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 448

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 449

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 450

- Stable sort matters when a secondary key was set in a prior pass.

## entry 451

- Walk both pointers from each end inward; advance the smaller side.

## entry 452

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 453

- Splay tree: every access splays to the root; amortized O(log n).

## entry 454

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 455

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 456

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 457

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 458

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 459

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 460

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 461

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 462

- Heap when you only need top-k; full sort is wasted work.

## entry 463

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 464

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 465

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 466

- Splay tree: every access splays to the root; amortized O(log n).

## entry 467

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 468

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 469

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 470

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 471

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 472

- Stable sort matters when a secondary key was set in a prior pass.

## entry 473

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 474

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 475

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 476

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 477

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 478

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 479

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 480

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 481

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 482

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 483

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 484

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 485

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 486

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 487

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 488

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 489

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 490

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 491

- Heap when you only need top-k; full sort is wasted work.

## entry 492

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 493

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 494

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 495

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 496

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 497

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 498

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 499

- Stable sort matters when a secondary key was set in a prior pass.

## entry 500

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 501

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 502

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 503

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 504

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 505

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 506

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 507

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 508

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 509

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 510

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 511

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 512

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 513

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 514

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 515

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 516

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 517

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 518

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 519

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 520

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 521

- Euler tour flattens a tree into an array for range-query LCA.

## entry 522

- Euler tour flattens a tree into an array for range-query LCA.

## entry 523

- Splay tree: every access splays to the root; amortized O(log n).

## entry 524

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 525

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 526

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 527

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 528

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 529

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 530

- Greedy by end-time picks the most non-overlapping intervals.

## entry 531

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 532

- Monotonic stack pops while the new element violates the invariant.

## entry 533

- Splay tree: every access splays to the root; amortized O(log n).

## entry 534

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 535

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 536

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 537

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 538

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 539

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 540

- Stable sort matters when a secondary key was set in a prior pass.

## entry 541

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 542

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 543

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 544

- Euler tour flattens a tree into an array for range-query LCA.

## entry 545

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 546

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 547

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 548

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 549

- Monotonic stack pops while the new element violates the invariant.

## entry 550

- Heap when you only need top-k; full sort is wasted work.

## entry 551

- Stable sort matters when a secondary key was set in a prior pass.

## entry 552

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 553

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 554

- Greedy by end-time picks the most non-overlapping intervals.

## entry 555

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 556

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 557

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 558

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 559

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 560

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 561

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 562

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 563

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 564

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 565

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 566

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 567

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 568

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 569

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 570

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 571

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 572

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 573

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 574

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 575

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 576

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 577

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 578

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 579

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 580

- Greedy by end-time picks the most non-overlapping intervals.

## entry 581

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 582

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 583

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 584

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 585

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 586

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 587

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 588

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 589

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 590

- LIS via patience: each pile holds the smallest tail of length k.

## entry 591

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 592

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 593

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 594

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 595

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 596

- Walk both pointers from each end inward; advance the smaller side.

## entry 597

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 598

- LIS via patience: each pile holds the smallest tail of length k.

## entry 599

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 600

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 601

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 602

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 603

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 604

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 605

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 606

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 607

- Stable sort matters when a secondary key was set in a prior pass.

## entry 608

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 609

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 610

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 611

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 612

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 613

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 614

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 615

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 616

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 617

- Greedy by end-time picks the most non-overlapping intervals.

## entry 618

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 619

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 620

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 621

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 622

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 623

- Monotonic stack pops while the new element violates the invariant.

## entry 624

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 625

- Greedy by end-time picks the most non-overlapping intervals.

## entry 626

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 627

- Splay tree: every access splays to the root; amortized O(log n).
