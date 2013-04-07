# dp-2d

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

- Morris traversal threads predecessors back to current node — O(1) extra space.

- Manacher expands around each center, reusing prior radii via mirror reflection.

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

- Pick a pivot, partition, recurse on the side that contains the kth slot.

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

- Stable sort matters when a secondary key was set in a prior pass.

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

- Edit distance is LCS with a twist: substitution is a third option at each cell.

- Greedy by end-time picks the most non-overlapping intervals.

- Walk both pointers from each end inward; advance the smaller side.

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

- Union-Find with path compression amortizes to near-O(1) per op.

- Heap when you only need top-k; full sort is wasted work.

- BFS layers carry implicit shortest-path distance in unweighted graphs.

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

- Iterative DFS with an explicit stack avoids recursion-limit issues.

- Monotonic stack pops while the new element violates the invariant.

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

- LIS via patience: each pile holds the smallest tail of length k.

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 1

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 2

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 3

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 4

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 5

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 6

- Greedy by end-time picks the most non-overlapping intervals.

## entry 7

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 8

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 9

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 10

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 11

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 12

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 13

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 14

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 15

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 16

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 17

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 18

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 19

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 20

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 21

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 22

- Monotonic stack pops while the new element violates the invariant.

## entry 23

- Euler tour flattens a tree into an array for range-query LCA.

## entry 24

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 25

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 26

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 27

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 28

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 29

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 30

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 31

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 32

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 33

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 34

- StringBuilder: amortize allocation by doubling on grow.

## entry 35

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 36

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 37

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 38

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 39

- Euler tour flattens a tree into an array for range-query LCA.

## entry 40

- Monotonic stack pops while the new element violates the invariant.

## entry 41

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 42

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 43

- Stable sort matters when a secondary key was set in a prior pass.

## entry 44

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 45

- Greedy by end-time picks the most non-overlapping intervals.

## entry 46

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 47

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 48

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 49

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 50

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 51

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 52

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 53

- Heap when you only need top-k; full sort is wasted work.

## entry 54

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 55

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 56

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 57

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 58

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 59

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 60

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 61

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 62

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 63

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 64

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 65

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 66

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 67

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 68

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 69

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 70

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 71

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 72

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 73

- StringBuilder: amortize allocation by doubling on grow.

## entry 74

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 75

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 76

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 77

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 78

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 79

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 80

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 81

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 82

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 83

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 84

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 85

- Monotonic stack pops while the new element violates the invariant.

## entry 86

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 87

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 88

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 89

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 90

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 91

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 92

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 93

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 94

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 95

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 96

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 97

- Stable sort matters when a secondary key was set in a prior pass.

## entry 98

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 99

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 100

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 101

- Greedy by end-time picks the most non-overlapping intervals.

## entry 102

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 103

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 104

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 105

- Walk both pointers from each end inward; advance the smaller side.

## entry 106

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 107

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 108

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 109

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 110

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 111

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 112

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 113

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 114

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 115

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 116

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 117

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 118

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 119

- Greedy by end-time picks the most non-overlapping intervals.

## entry 120

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 121

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 122

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 123

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 124

- Splay tree: every access splays to the root; amortized O(log n).

## entry 125

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 126

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 127

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 128

- Stable sort matters when a secondary key was set in a prior pass.

## entry 129

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 130

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 131

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 132

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 133

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 134

- Euler tour flattens a tree into an array for range-query LCA.

## entry 135

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 136

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 137

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 138

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 139

- Euler tour flattens a tree into an array for range-query LCA.

## entry 140

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 141

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 142

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 143

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 144

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 145

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 146

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 147

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 148

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 149

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 150

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 151

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 152

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 153

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 154

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 155

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 156

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 157

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 158

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 159

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 160

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 161

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 162

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 163

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 164

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 165

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 166

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 167

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 168

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 169

- LIS via patience: each pile holds the smallest tail of length k.

## entry 170

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 171

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 172

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 173

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 174

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 175

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 176

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 177

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 178

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 179

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 180

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 181

- Heap when you only need top-k; full sort is wasted work.

## entry 182

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 183

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 184

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 185

- StringBuilder: amortize allocation by doubling on grow.

## entry 186

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 187

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 188

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 189

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 190

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 191

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 192

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 193

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 194

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 195

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 196

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 197

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 198

- Walk both pointers from each end inward; advance the smaller side.

## entry 199

- Euler tour flattens a tree into an array for range-query LCA.

## entry 200

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 201

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 202

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 203

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 204

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 205

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 206

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 207

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 208

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 209

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 210

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 211

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 212

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 213

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 214

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 215

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 216

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 217

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 218

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 219

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 220

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 221

- Euler tour flattens a tree into an array for range-query LCA.

## entry 222

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 223

- Walk both pointers from each end inward; advance the smaller side.

## entry 224

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 225

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 226

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 227

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 228

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 229

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 230

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 231

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 232

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 233

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 234

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 235

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 236

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 237

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 238

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 239

- StringBuilder: amortize allocation by doubling on grow.

## entry 240

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 241

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 242

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 243

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 244

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 245

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 246

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 247

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 248

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 249

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 250

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 251

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 252

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 253

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 254

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 255

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 256

- Euler tour flattens a tree into an array for range-query LCA.

## entry 257

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 258

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 259

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 260

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 261

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 262

- StringBuilder: amortize allocation by doubling on grow.

## entry 263

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 264

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 265

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 266

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 267

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 268

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 269

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 270

- Euler tour flattens a tree into an array for range-query LCA.

## entry 271

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 272

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 273

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 274

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 275

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 276

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 277

- Splay tree: every access splays to the root; amortized O(log n).

## entry 278

- LIS via patience: each pile holds the smallest tail of length k.

## entry 279

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 280

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 281

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 282

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 283

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 284

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 285

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 286

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 287

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 288

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 289

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 290

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 291

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 292

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 293

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 294

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 295

- LIS via patience: each pile holds the smallest tail of length k.

## entry 296

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 297

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 298

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 299

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 300

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 301

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 302

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 303

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 304

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 305

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 306

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 307

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 308

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 309

- Euler tour flattens a tree into an array for range-query LCA.

## entry 310

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 311

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 312

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 313

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 314

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 315

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 316

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 317

- Walk both pointers from each end inward; advance the smaller side.

## entry 318

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 319

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 320

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 321

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 322

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 323

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 324

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 325

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 326

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 327

- Monotonic stack pops while the new element violates the invariant.

## entry 328

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 329

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 330

- StringBuilder: amortize allocation by doubling on grow.

## entry 331

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 332

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 333

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 334

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 335

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 336

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 337

- LIS via patience: each pile holds the smallest tail of length k.

## entry 338

- Greedy by end-time picks the most non-overlapping intervals.

## entry 339

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 340

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 341

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 342

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 343

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 344

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 345

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 346

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 347

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 348

- Euler tour flattens a tree into an array for range-query LCA.

## entry 349

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 350

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 351

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 352

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 353

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 354

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 355

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 356

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 357

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 358

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 359

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 360

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 361

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 362

- Heap when you only need top-k; full sort is wasted work.

## entry 363

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 364

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 365

- Heap when you only need top-k; full sort is wasted work.

## entry 366

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 367

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 368

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 369

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 370

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 371

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 372

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 373

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 374

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 375

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 376

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 377

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 378

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 379

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 380

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 381

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 382

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 383

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 384

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 385

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 386

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 387

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 388

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 389

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 390

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 391

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 392

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 393

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 394

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 395

- Splay tree: every access splays to the root; amortized O(log n).

## entry 396

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 397

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 398

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 399

- Greedy by end-time picks the most non-overlapping intervals.

## entry 400

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 401

- Heap when you only need top-k; full sort is wasted work.

## entry 402

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 403

- Greedy by end-time picks the most non-overlapping intervals.

## entry 404

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 405

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 406

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 407

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 408

- Stable sort matters when a secondary key was set in a prior pass.

## entry 409

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 410

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 411

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 412

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 413

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 414

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 415

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 416

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 417

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 418

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 419

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 420

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 421

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 422

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 423

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 424

- Walk both pointers from each end inward; advance the smaller side.

## entry 425

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 426

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 427

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 428

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 429

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 430

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 431

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 432

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 433

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 434

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 435

- Splay tree: every access splays to the root; amortized O(log n).

## entry 436

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 437

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 438

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 439

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 440

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 441

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 442

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 443

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 444

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 445

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 446

- Splay tree: every access splays to the root; amortized O(log n).

## entry 447

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 448

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 449

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 450

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 451

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 452

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 453

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 454

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 455

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 456

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 457

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 458

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 459

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 460

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 461

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 462

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 463

- StringBuilder: amortize allocation by doubling on grow.

## entry 464

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 465

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 466

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 467

- LIS via patience: each pile holds the smallest tail of length k.

## entry 468

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 469

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 470

- Greedy by end-time picks the most non-overlapping intervals.

## entry 471

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 472

- LIS via patience: each pile holds the smallest tail of length k.

## entry 473

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 474

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 475

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 476

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 477

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 478

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 479

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 480

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 481

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 482

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 483

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 484

- StringBuilder: amortize allocation by doubling on grow.

## entry 485

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 486

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 487

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 488

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 489

- Heap when you only need top-k; full sort is wasted work.

## entry 490

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 491

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 492

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 493

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 494

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 495

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 496

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 497

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 498

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 499

- Heap when you only need top-k; full sort is wasted work.

## entry 500

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 501

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 502

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 503

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 504

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 505

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 506

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 507

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 508

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 509

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 510

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 511

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 512

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 513

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 514

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 515

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 516

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 517

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 518

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 519

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 520

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 521

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 522

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 523

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 524

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 525

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 526

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 527

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 528

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 529

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 530

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 531

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 532

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 533

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 534

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 535

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 536

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 537

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 538

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 539

- Edit distance is LCS with a twist: substitution is a third option at each cell.
