# tree-dp

## entry 1

- Heap when you only need top-k; full sort is wasted work.

## entry 2

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 3

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 4

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 5

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 6

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 7

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 8

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 9

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 10

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 11

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 12

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 13

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 14

- Walk both pointers from each end inward; advance the smaller side.

## entry 15

- LIS via patience: each pile holds the smallest tail of length k.

## entry 16

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 17

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 18

- Walk both pointers from each end inward; advance the smaller side.

## entry 19

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 20

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 21

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 22

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 23

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 24

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 25

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 26

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 27

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 28

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 29

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 30

- Walk both pointers from each end inward; advance the smaller side.

## entry 31

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 32

- Stable sort matters when a secondary key was set in a prior pass.

## entry 33

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 34

- StringBuilder: amortize allocation by doubling on grow.

## entry 35

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 36

- Monotonic stack pops while the new element violates the invariant.

## entry 37

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 38

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 39

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 40

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 41

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 42

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 43

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 44

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 45

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 46

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 47

- Euler tour flattens a tree into an array for range-query LCA.

## entry 48

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 49

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 50

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 51

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 52

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 53

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 54

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 55

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 56

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 57

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 58

- Greedy by end-time picks the most non-overlapping intervals.

## entry 59

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 60

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 61

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 62

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 63

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 64

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 65

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 66

- Stable sort matters when a secondary key was set in a prior pass.

## entry 67

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 68

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 69

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 70

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 71

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 72

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 73

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 74

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 75

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 76

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 77

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 78

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 79

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 80

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 81

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 82

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 83

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 84

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 85

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 86

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 87

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 88

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 89

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 90

- LIS via patience: each pile holds the smallest tail of length k.

## entry 91

- LIS via patience: each pile holds the smallest tail of length k.

## entry 92

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 93

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 94

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 95

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 96

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 97

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 98

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 99

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 100

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 101

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 102

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 103

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 104

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 105

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 106

- Walk both pointers from each end inward; advance the smaller side.

## entry 107

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 108

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 109

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 110

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 111

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 112

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 113

- Euler tour flattens a tree into an array for range-query LCA.

## entry 114

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 115

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 116

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 117

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 118

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 119

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 120

- LIS via patience: each pile holds the smallest tail of length k.

## entry 121

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 122

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 123

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 124

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 125

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 126

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 127

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 128

- Stable sort matters when a secondary key was set in a prior pass.

## entry 129

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 130

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 131

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 132

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 133

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 134

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 135

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 136

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 137

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 138

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 139

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 140

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 141

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 142

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 143

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 144

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 145

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 146

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 147

- LIS via patience: each pile holds the smallest tail of length k.

## entry 148

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 149

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 150

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 151

- Stable sort matters when a secondary key was set in a prior pass.

## entry 152

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 153

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 154

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 155

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 156

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 157

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 158

- Heap when you only need top-k; full sort is wasted work.

## entry 159

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 160

- Monotonic stack pops while the new element violates the invariant.

## entry 161

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 162

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 163

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 164

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 165

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 166

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 167

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 168

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 169

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 170

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 171

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 172

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 173

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 174

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 175

- Euler tour flattens a tree into an array for range-query LCA.

## entry 176

- Heap when you only need top-k; full sort is wasted work.

## entry 177

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 178

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 179

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 180

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 181

- Monotonic stack pops while the new element violates the invariant.

## entry 182

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 183

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 184

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 185

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 186

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 187

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 188

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 189

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 190

- Monotonic stack pops while the new element violates the invariant.

## entry 191

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 192

- Euler tour flattens a tree into an array for range-query LCA.

## entry 193

- Heap when you only need top-k; full sort is wasted work.

## entry 194

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 195

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 196

- Heap when you only need top-k; full sort is wasted work.

## entry 197

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 198

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 199

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 200

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 201

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 202

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 203

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 204

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 205

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 206

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 207

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 208

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 209

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 210

- Walk both pointers from each end inward; advance the smaller side.

## entry 211

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 212

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 213

- LIS via patience: each pile holds the smallest tail of length k.

## entry 214

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 215

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 216

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 217

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 218

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 219

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 220

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 221

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 222

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 223

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 224

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 225

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 226

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 227

- Monotonic stack pops while the new element violates the invariant.

## entry 228

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 229

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 230

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 231

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 232

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 233

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 234

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 235

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 236

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 237

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 238

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 239

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 240

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 241

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 242

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 243

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 244

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 245

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 246

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 247

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 248

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 249

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 250

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 251

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 252

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 253

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 254

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 255

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 256

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 257

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 258

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 259

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 260

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 261

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 262

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 263

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 264

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 265

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 266

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 267

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 268

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 269

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 270

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 271

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 272

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 273

- Splay tree: every access splays to the root; amortized O(log n).

## entry 274

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 275

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 276

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 277

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 278

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 279

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 280

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 281

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 282

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 283

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 284

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 285

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 286

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 287

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 288

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 289

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 290

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 291

- Heap when you only need top-k; full sort is wasted work.

## entry 292

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 293

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 294

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 295

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 296

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 297

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 298

- Monotonic stack pops while the new element violates the invariant.

## entry 299

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 300

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 301

- Greedy by end-time picks the most non-overlapping intervals.

## entry 302

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 303

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 304

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 305

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 306

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 307

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 308

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 309

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 310

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 311

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 312

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 313

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 314

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 315

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 316

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 317

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 318

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 319

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 320

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 321

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 322

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 323

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 324

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 325

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 326

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 327

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 328

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 329

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 330

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 331

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 332

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 333

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 334

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 335

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 336

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 337

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 338

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 339

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 340

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 341

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 342

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 343

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 344

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 345

- Splay tree: every access splays to the root; amortized O(log n).

## entry 346

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 347

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 348

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 349

- Monotonic stack pops while the new element violates the invariant.

## entry 350

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 351

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 352

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 353

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 354

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 355

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 356

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 357

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 358

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 359

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 360

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 361

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 362

- Heap when you only need top-k; full sort is wasted work.

## entry 363

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 364

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 365

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 366

- Stable sort matters when a secondary key was set in a prior pass.

## entry 367

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 368

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 369

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 370

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 371

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 372

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 373

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 374

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 375

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 376

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 377

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 378

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 379

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 380

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 381

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 382

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 383

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 384

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 385

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 386

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 387

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 388

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 389

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 390

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 391

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 392

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 393

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 394

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 395

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 396

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 397

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 398

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 399

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 400

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 401

- Euler tour flattens a tree into an array for range-query LCA.

## entry 402

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 403

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 404

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 405

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 406

- Greedy by end-time picks the most non-overlapping intervals.

## entry 407

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 408

- Greedy by end-time picks the most non-overlapping intervals.

## entry 409

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 410

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 411

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 412

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 413

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 414

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 415

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 416

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 417

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 418

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 419

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 420

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 421

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 422

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 423

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 424

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 425

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 426

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 427

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 428

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 429

- Stable sort matters when a secondary key was set in a prior pass.

## entry 430

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 431

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 432

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 433

- Euler tour flattens a tree into an array for range-query LCA.

## entry 434

- LIS via patience: each pile holds the smallest tail of length k.

## entry 435

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 436

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 437

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 438

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 439

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 440

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 441

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 442

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 443

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 444

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 445

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 446

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 447

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 448

- LIS via patience: each pile holds the smallest tail of length k.

## entry 449

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 450

- LIS via patience: each pile holds the smallest tail of length k.

## entry 451

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 452

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 453

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 454

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 455

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 456

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 457

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 458

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 459

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 460

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 461

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 462

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 463

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 464

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 465

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 466

- Stable sort matters when a secondary key was set in a prior pass.

## entry 467

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 468

- LIS via patience: each pile holds the smallest tail of length k.

## entry 469

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 470

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 471

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 472

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 473

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 474

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 475

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 476

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 477

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 478

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 479

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 480

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 481

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 482

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 483

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 484

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 485

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 486

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 487

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 488

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 489

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 490

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 491

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 492

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 493

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 494

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 495

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 496

- Tabulation wins when iteration order is obvious and stack depth would blow up.
