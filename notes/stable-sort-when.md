# stable-sort-when

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- In-place compaction uses two pointers: read advances always, write only on keep.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Stable sort matters when a secondary key was set in a prior pass.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Walk both pointers from each end inward; advance the smaller side.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- LIS via patience: each pile holds the smallest tail of length k.

- Greedy by end-time picks the most non-overlapping intervals.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Monotonic stack pops while the new element violates the invariant.

- Merge intervals: sort by start; extend the running interval while overlapping.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Heap when you only need top-k; full sort is wasted work.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Union-Find with path compression amortizes to near-O(1) per op.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 1

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 2

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 3

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 4

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 6

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 7

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 8

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 9

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 10

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 11

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 12

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 13

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 14

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 15

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 16

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 17

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 18

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 19

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 20

- Monotonic stack pops while the new element violates the invariant.

## entry 21

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 22

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 23

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 24

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 25

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 26

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 27

- Walk both pointers from each end inward; advance the smaller side.

## entry 28

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 29

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 30

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 31

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 32

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 33

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 34

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 35

- Stable sort matters when a secondary key was set in a prior pass.

## entry 36

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 37

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 38

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 39

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 40

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 41

- Euler tour flattens a tree into an array for range-query LCA.

## entry 42

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 43

- Stable sort matters when a secondary key was set in a prior pass.

## entry 44

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 45

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 46

- Greedy by end-time picks the most non-overlapping intervals.

## entry 47

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 48

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 49

- Splay tree: every access splays to the root; amortized O(log n).

## entry 50

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 51

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 52

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 53

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 54

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 55

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 56

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 57

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 58

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 59

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 60

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 61

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 62

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 63

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 64

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 65

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 66

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 67

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 68

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 69

- StringBuilder: amortize allocation by doubling on grow.

## entry 70

- Monotonic stack pops while the new element violates the invariant.

## entry 71

- Walk both pointers from each end inward; advance the smaller side.

## entry 72

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 73

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 74

- Monotonic stack pops while the new element violates the invariant.

## entry 75

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 76

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 77

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 78

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 79

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 80

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 81

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 82

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 83

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 84

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 85

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 86

- Walk both pointers from each end inward; advance the smaller side.

## entry 87

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 88

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 89

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 90

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 91

- Stable sort matters when a secondary key was set in a prior pass.

## entry 92

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 93

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 94

- LIS via patience: each pile holds the smallest tail of length k.

## entry 95

- LIS via patience: each pile holds the smallest tail of length k.

## entry 96

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 97

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 98

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 99

- LIS via patience: each pile holds the smallest tail of length k.

## entry 100

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 101

- Greedy by end-time picks the most non-overlapping intervals.

## entry 102

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 103

- Euler tour flattens a tree into an array for range-query LCA.

## entry 104

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 105

- Greedy by end-time picks the most non-overlapping intervals.

## entry 106

- Monotonic stack pops while the new element violates the invariant.

## entry 107

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 108

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 109

- Walk both pointers from each end inward; advance the smaller side.

## entry 110

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 111

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 112

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 113

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 114

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 115

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 116

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 117

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 118

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 119

- Monotonic stack pops while the new element violates the invariant.

## entry 120

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 121

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 122

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 123

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 124

- Splay tree: every access splays to the root; amortized O(log n).

## entry 125

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 126

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 127

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 128

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 129

- Walk both pointers from each end inward; advance the smaller side.

## entry 130

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 131

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 132

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 133

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 134

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 135

- Monotonic stack pops while the new element violates the invariant.

## entry 136

- Splay tree: every access splays to the root; amortized O(log n).

## entry 137

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 138

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 139

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 140

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 141

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 142

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 143

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 144

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 145

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 146

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 147

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 148

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 149

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 150

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 151

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 152

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 153

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 154

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 155

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 156

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 157

- Monotonic stack pops while the new element violates the invariant.

## entry 158

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 159

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 160

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 161

- Walk both pointers from each end inward; advance the smaller side.

## entry 162

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 163

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 164

- Splay tree: every access splays to the root; amortized O(log n).

## entry 165

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 166

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 167

- StringBuilder: amortize allocation by doubling on grow.

## entry 168

- LIS via patience: each pile holds the smallest tail of length k.

## entry 169

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 170

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 171

- StringBuilder: amortize allocation by doubling on grow.

## entry 172

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 173

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 174

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 175

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 176

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 177

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 178

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 179

- Greedy by end-time picks the most non-overlapping intervals.

## entry 180

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 181

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 182

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 183

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 184

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 185

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 186

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 187

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 188

- LIS via patience: each pile holds the smallest tail of length k.

## entry 189

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 190

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 191

- Euler tour flattens a tree into an array for range-query LCA.

## entry 192

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 193

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 194

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 195

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 196

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 197

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 198

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 199

- LIS via patience: each pile holds the smallest tail of length k.

## entry 200

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 201

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 202

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 203

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 204

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 205

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 206

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 207

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 208

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 209

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 210

- Splay tree: every access splays to the root; amortized O(log n).

## entry 211

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 212

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 213

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 214

- Heap when you only need top-k; full sort is wasted work.

## entry 215

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 216

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 217

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 218

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 219

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 220

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 221

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 222

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 223

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 224

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 225

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 226

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 227

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 228

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 229

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 230

- Splay tree: every access splays to the root; amortized O(log n).

## entry 231

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 232

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 233

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 234

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 235

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 236

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 237

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 238

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 239

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 240

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 241

- Euler tour flattens a tree into an array for range-query LCA.

## entry 242

- Splay tree: every access splays to the root; amortized O(log n).

## entry 243

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 244

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 245

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 246

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 247

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 248

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 249

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 250

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 251

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 252

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 253

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 254

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 255

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 256

- LIS via patience: each pile holds the smallest tail of length k.

## entry 257

- StringBuilder: amortize allocation by doubling on grow.

## entry 258

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 259

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 260

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 261

- Euler tour flattens a tree into an array for range-query LCA.

## entry 262

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 263

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 264

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 265

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 266

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 267

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 268

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 269

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 270

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 271

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 272

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 273

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 274

- Splay tree: every access splays to the root; amortized O(log n).

## entry 275

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 276

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 277

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 278

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 279

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 280

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 281

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 282

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 283

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 284

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 285

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 286

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 287

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 288

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 289

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 290

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 291

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 292

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 293

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 294

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 295

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 296

- Euler tour flattens a tree into an array for range-query LCA.
