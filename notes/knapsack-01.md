# knapsack-01

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Heap when you only need top-k; full sort is wasted work.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- LIS via patience: each pile holds the smallest tail of length k.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- In-place compaction uses two pointers: read advances always, write only on keep.

- Monotonic stack pops while the new element violates the invariant.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Unbounded knapsack: capacity inner ascending allows item reuse.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- Union-Find with path compression amortizes to near-O(1) per op.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Merge intervals: sort by start; extend the running interval while overlapping.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 1

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 2

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 3

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 4

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 5

- Splay tree: every access splays to the root; amortized O(log n).

## entry 6

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 7

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 8

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 9

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 10

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 11

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 12

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 13

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 14

- StringBuilder: amortize allocation by doubling on grow.

## entry 15

- Greedy by end-time picks the most non-overlapping intervals.

## entry 16

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 17

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 18

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 19

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 20

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 21

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 22

- LIS via patience: each pile holds the smallest tail of length k.

## entry 23

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 24

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 25

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 26

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 27

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 28

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 29

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 30

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 31

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 32

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 33

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 34

- Splay tree: every access splays to the root; amortized O(log n).

## entry 35

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 36

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 37

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 38

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 39

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 40

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 41

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 42

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 43

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 44

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 45

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 46

- StringBuilder: amortize allocation by doubling on grow.

## entry 47

- Euler tour flattens a tree into an array for range-query LCA.

## entry 48

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 49

- Monotonic stack pops while the new element violates the invariant.

## entry 50

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 51

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 52

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 53

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 54

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 55

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 56

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 57

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 58

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 59

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 60

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 61

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 62

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 63

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 64

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 65

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 66

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 67

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 68

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 69

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 70

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 71

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 72

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 73

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 74

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 75

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 76

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 77

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 78

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 79

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 80

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 81

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 82

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 83

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 84

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 85

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 86

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 87

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 88

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 89

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 90

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 91

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 92

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 93

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 94

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 95

- Heap when you only need top-k; full sort is wasted work.

## entry 96

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 97

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 98

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 99

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 100

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 101

- Euler tour flattens a tree into an array for range-query LCA.

## entry 102

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 103

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 104

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 105

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 106

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 107

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 108

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 109

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 110

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 111

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 112

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 113

- Monotonic stack pops while the new element violates the invariant.

## entry 114

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 115

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 116

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 117

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 118

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 119

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 120

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 121

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 122

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 123

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 124

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 125

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 126

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 127

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 128

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 129

- Euler tour flattens a tree into an array for range-query LCA.

## entry 130

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 131

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 132

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 133

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 134

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 135

- Greedy by end-time picks the most non-overlapping intervals.

## entry 136

- Walk both pointers from each end inward; advance the smaller side.

## entry 137

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 138

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 139

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 140

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 141

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 142

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 143

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 144

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 145

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 146

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 147

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 148

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 149

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 150

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 151

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 152

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 153

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 154

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 155

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 156

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 157

- LIS via patience: each pile holds the smallest tail of length k.

## entry 158

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 159

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 160

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 161

- Monotonic stack pops while the new element violates the invariant.

## entry 162

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 163

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 164

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 165

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 166

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 167

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 168

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 169

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 170

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 171

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 172

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 173

- StringBuilder: amortize allocation by doubling on grow.

## entry 174

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 175

- Greedy by end-time picks the most non-overlapping intervals.

## entry 176

- Stable sort matters when a secondary key was set in a prior pass.

## entry 177

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 178

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 179

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 180

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 181

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 182

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 183

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 184

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 185

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 186

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 187

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 188

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 189

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 190

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 191

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 192

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 193

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 194

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 195

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 196

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 197

- Heap when you only need top-k; full sort is wasted work.

## entry 198

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 199

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 200

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 201

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 202

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 203

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 204

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 205

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 206

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 207

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 208

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 209

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 210

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 211

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 212

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 213

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 214

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 215

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 216

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 217

- Heap when you only need top-k; full sort is wasted work.

## entry 218

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 219

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 220

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 221

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 222

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 223

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 224

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 225

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 226

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 227

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 228

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 229

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 230

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 231

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 232

- LIS via patience: each pile holds the smallest tail of length k.

## entry 233

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 234

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 235

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 236

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 237

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 238

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 239

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 240

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 241

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 242

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 243

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 244

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 245

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 246

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 247

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 248

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 249

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 250

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 251

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 252

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 253

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 254

- Heap when you only need top-k; full sort is wasted work.

## entry 255

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 256

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 257

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 258

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 259

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 260

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 261

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 262

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 263

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 264

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 265

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 266

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 267

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 268

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 269

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 270

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 271

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 272

- Heap when you only need top-k; full sort is wasted work.

## entry 273

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 274

- Euler tour flattens a tree into an array for range-query LCA.

## entry 275

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 276

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 277

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 278

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 279

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 280

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 281

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 282

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 283

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 284

- Heap when you only need top-k; full sort is wasted work.

## entry 285

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 286

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 287

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 288

- Walk both pointers from each end inward; advance the smaller side.

## entry 289

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 290

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 291

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 292

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 293

- Splay tree: every access splays to the root; amortized O(log n).

## entry 294

- LIS via patience: each pile holds the smallest tail of length k.

## entry 295

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 296

- Heap when you only need top-k; full sort is wasted work.

## entry 297

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 298

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 299

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 300

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 301

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 302

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 303

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 304

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 305

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 306

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 307

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 308

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 309

- Monotonic stack pops while the new element violates the invariant.

## entry 310

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 311

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 312

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 313

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 314

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 315

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 316

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 317

- Heap when you only need top-k; full sort is wasted work.

## entry 318

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 319

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 320

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 321

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 322

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 323

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 324

- LIS via patience: each pile holds the smallest tail of length k.

## entry 325

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 326

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 327

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 328

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 329

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 330

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 331

- Stable sort matters when a secondary key was set in a prior pass.

## entry 332

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 333

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 334

- Monotonic stack pops while the new element violates the invariant.

## entry 335

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 336

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 337

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 338

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 339

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 340

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 341

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 342

- Euler tour flattens a tree into an array for range-query LCA.

## entry 343

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 344

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 345

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 346

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 347

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 348

- Heap when you only need top-k; full sort is wasted work.

## entry 349

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 350

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 351

- Monotonic stack pops while the new element violates the invariant.

## entry 352

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 353

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 354

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 355

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 356

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 357

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 358

- StringBuilder: amortize allocation by doubling on grow.

## entry 359

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 360

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 361

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 362

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 363

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 364

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 365

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 366

- Heap when you only need top-k; full sort is wasted work.

## entry 367

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 368

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 369

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 370

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 371

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 372

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 373

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 374

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 375

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 376

- Euler tour flattens a tree into an array for range-query LCA.

## entry 377

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 378

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 379

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 380

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 381

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 382

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 383

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 384

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 385

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 386

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 387

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 388

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 389

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 390

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 391

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 392

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 393

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 394

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 395

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 396

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 397

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 398

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 399

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 400

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 401

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 402

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 403

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 404

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 405

- Heap when you only need top-k; full sort is wasted work.

## entry 406

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 407

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 408

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 409

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 410

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 411

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 412

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 413

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 414

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 415

- StringBuilder: amortize allocation by doubling on grow.

## entry 416

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 417

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 418

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 419

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 420

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 421

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 422

- Greedy by end-time picks the most non-overlapping intervals.

## entry 423

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 424

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 425

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 426

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 427

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 428

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 429

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 430

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 431

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 432

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 433

- Heap when you only need top-k; full sort is wasted work.

## entry 434

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 435

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 436

- Monotonic stack pops while the new element violates the invariant.

## entry 437

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 438

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 439

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 440

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 441

- Greedy by end-time picks the most non-overlapping intervals.

## entry 442

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 443

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 444

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 445

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 446

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 447

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 448

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 449

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 450

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 451

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 452

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 453

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 454

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 455

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 456

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 457

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 458

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 459

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 460

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 461

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 462

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 463

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 464

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 465

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 466

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 467

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 468

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 469

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 470

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 471

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 472

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 473

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 474

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 475

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 476

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 477

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 478

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 479

- Greedy by end-time picks the most non-overlapping intervals.

## entry 480

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 481

- StringBuilder: amortize allocation by doubling on grow.

## entry 482

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 483

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 484

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 485

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 486

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 487

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 488

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 489

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 490

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 491

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 492

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 493

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 494

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 495

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 496

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 497

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 498

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 499

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 500

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 501

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 502

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 503

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 504

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 505

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 506

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 507

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 508

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 509

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 510

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 511

- Monotonic stack pops while the new element violates the invariant.

## entry 512

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 513

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 514

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 515

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 516

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 517

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 518

- Heap when you only need top-k; full sort is wasted work.

## entry 519

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 520

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 521

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 522

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 523

- Walk both pointers from each end inward; advance the smaller side.

## entry 524

- Greedy by end-time picks the most non-overlapping intervals.

## entry 525

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 526

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 527

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 528

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 529

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 530

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 531

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 532

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 533

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 534

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 535

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 536

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 537

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 538

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 539

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 540

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 541

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 542

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 543

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 544

- Heap when you only need top-k; full sort is wasted work.

## entry 545

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 546

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 547

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 548

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 549

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 550

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 551

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 552

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 553

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 554

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 555

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 556

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 557

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 558

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 559

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 560

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 561

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 562

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 563

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 564

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 565

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 566

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 567

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 568

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 569

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 570

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 571

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 572

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
