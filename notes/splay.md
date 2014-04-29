# splay

## entry 1

- Heap when you only need top-k; full sort is wasted work.

## entry 2

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 3

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 4

- Euler tour flattens a tree into an array for range-query LCA.

## entry 5

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 6

- LIS via patience: each pile holds the smallest tail of length k.

## entry 7

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 8

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 9

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 10

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 11

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 12

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 13

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 14

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 15

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 16

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 17

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 18

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 19

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 20

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 21

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 22

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 23

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 24

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 25

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 26

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 27

- Euler tour flattens a tree into an array for range-query LCA.

## entry 28

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 29

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 30

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 31

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 32

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 33

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 34

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 35

- Walk both pointers from each end inward; advance the smaller side.

## entry 36

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 37

- Euler tour flattens a tree into an array for range-query LCA.

## entry 38

- StringBuilder: amortize allocation by doubling on grow.

## entry 39

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 40

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 41

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 42

- StringBuilder: amortize allocation by doubling on grow.

## entry 43

- Euler tour flattens a tree into an array for range-query LCA.

## entry 44

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 45

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 46

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 47

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 48

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 49

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 50

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 51

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 52

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 53

- Splay tree: every access splays to the root; amortized O(log n).

## entry 54

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 55

- Splay tree: every access splays to the root; amortized O(log n).

## entry 56

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 57

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 58

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 59

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 60

- Euler tour flattens a tree into an array for range-query LCA.

## entry 61

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 62

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 63

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 64

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 65

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 66

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 67

- Monotonic stack pops while the new element violates the invariant.

## entry 68

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 69

- LIS via patience: each pile holds the smallest tail of length k.

## entry 70

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 71

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 72

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 73

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 74

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 75

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 76

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 77

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 78

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 79

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 80

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 81

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 82

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 83

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 84

- Splay tree: every access splays to the root; amortized O(log n).

## entry 85

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 86

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 87

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 88

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 89

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 90

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 91

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 92

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 93

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 94

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 95

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 96

- Greedy by end-time picks the most non-overlapping intervals.

## entry 97

- Greedy by end-time picks the most non-overlapping intervals.

## entry 98

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 99

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 100

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 101

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 102

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 103

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 104

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 105

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 106

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 107

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 108

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 109

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 110

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 111

- Greedy by end-time picks the most non-overlapping intervals.

## entry 112

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 113

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 114

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 115

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 116

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 117

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 118

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 119

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 120

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 121

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 122

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 123

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 124

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 125

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 126

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 127

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 128

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 129

- LIS via patience: each pile holds the smallest tail of length k.

## entry 130

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 131

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 132

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 133

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 134

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 135

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 136

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 137

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 138

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 139

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 140

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 141

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 142

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 143

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 144

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 145

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 146

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 147

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 148

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 149

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 150

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 151

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 152

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 153

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 154

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 155

- Splay tree: every access splays to the root; amortized O(log n).

## entry 156

- Heap when you only need top-k; full sort is wasted work.

## entry 157

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 158

- Walk both pointers from each end inward; advance the smaller side.

## entry 159

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 160

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 161

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 162

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 163

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 164

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 165

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 166

- Stable sort matters when a secondary key was set in a prior pass.

## entry 167

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 168

- LIS via patience: each pile holds the smallest tail of length k.

## entry 169

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 170

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 171

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 172

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 173

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 174

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 175

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 176

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 177

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 178

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 179

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 180

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 181

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 182

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 183

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 184

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 185

- Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.

## entry 186

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 187

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 188

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 189

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 190

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 191

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 192

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 193

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 194

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 195

- Walk both pointers from each end inward; advance the smaller side.

## entry 196

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 197

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 198

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 199

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 200

- Walk both pointers from each end inward; advance the smaller side.

## entry 201

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 202

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 203

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 204

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 205

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 206

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 207

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 208

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 209

- Heap when you only need top-k; full sort is wasted work.

## entry 210

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 211

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 212

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 213

- Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.

## entry 214

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 215

- Greedy by end-time picks the most non-overlapping intervals.

## entry 216

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 217

- Heap when you only need top-k; full sort is wasted work.

## entry 218

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 219

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 220

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 221

- Heap when you only need top-k; full sort is wasted work.

## entry 222

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 223

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 224

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 225

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 226

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 227

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 228

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 229

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 230

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 231

- Splay tree: every access splays to the root; amortized O(log n).

## entry 232

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 233

- Monotonic stack pops while the new element violates the invariant.

## entry 234

- Stable sort matters when a secondary key was set in a prior pass.

## entry 235

- Hash collision: chain or open-address; chained handles arbitrary load factor.

## entry 236

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 237

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 238

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 239

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 240

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 241

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 242

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 243

- Walk both pointers from each end inward; advance the smaller side.

## entry 244

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 245

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 246

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 247

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 248

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 249

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 250

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 251

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 252

- Splay tree: every access splays to the root; amortized O(log n).

## entry 253

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 254

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 255

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 256

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 257

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 258

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 259

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 260

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 261

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 262

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 263

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 264

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 265

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 266

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 267

- Splay tree: every access splays to the root; amortized O(log n).

## entry 268

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 269

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 270

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 271

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 272

- StringBuilder: amortize allocation by doubling on grow.

## entry 273

- Toposort via Kahn: in-degree zero first; cycle iff some node never drains.

## entry 274

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 275

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 276

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 277

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 278

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 279

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 280

- Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.

## entry 281

- Stable sort matters when a secondary key was set in a prior pass.

## entry 282

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 283

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 284

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 285

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 286

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 287

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 288

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 289

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 290

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 291

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 292

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 293

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 294

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 295

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 296

- Bridges: edges whose removal disconnects the graph; low-link with parent skip.

## entry 297

- Euler tour flattens a tree into an array for range-query LCA.

## entry 298

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 299

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 300

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 301

- Monotonic stack pops while the new element violates the invariant.

## entry 302

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 303

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 304

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 305

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 306

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 307

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 308

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 309

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 310

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 311

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 312

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 313

- Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.

## entry 314

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 315

- DFS on a grid: write a sentinel into the visited cell; restore if needed.

## entry 316

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 317

- Edit distance is LCS with a twist: substitution is a third option at each cell.

## entry 318

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 319

- k-d tree: median-split each axis; nearest-neighbor average O(log n).

## entry 320

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 321

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 322

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 323

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 324

- LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.

## entry 325

- Heap when you only need top-k; full sort is wasted work.

## entry 326

- LIS via patience: each pile holds the smallest tail of length k.

## entry 327

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 328

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 329

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 330

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 331

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 332

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 333

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 334

- Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.

## entry 335

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 336

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 337

- Morris traversal threads predecessors back to current node — O(1) extra space.

## entry 338

- Manacher expands around each center, reusing prior radii via mirror reflection.

## entry 339

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 340

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 341

- Open addressing with linear probing wins until load factor exceeds 0.7.

## entry 342

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 343

- Merge intervals: sort by start; extend the running interval while overlapping.

## entry 344

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 345

- LIS via patience: each pile holds the smallest tail of length k.

## entry 346

- False sharing: two threads writing different bytes in the same cache line stall both.

## entry 347

- Greedy by end-time picks the most non-overlapping intervals.

## entry 348

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 349

- Padding inside a struct can dwarf the actual data; reorder fields by size.

## entry 350

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 351

- Pick a pivot, partition, recurse on the side that contains the kth slot.

## entry 352

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 353

- Heap when you only need top-k; full sort is wasted work.

## entry 354

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 355

- Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.

## entry 356

- LRU cache: doubly-linked list + hash map; O(1) get/put.

## entry 357

- Z-array `z[i]` is the longest substring starting at i that matches a prefix.

## entry 358

- Splay tree: every access splays to the root; amortized O(log n).

## entry 359

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 360

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 361

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 362

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 363

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 364

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 365

- Union-Find with path compression amortizes to near-O(1) per op.

## entry 366

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 367

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 368

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 369

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 370

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 371

- Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.

## entry 372

- Endianness matters when serializing multi-byte ints to a file or wire.

## entry 373

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 374

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 375

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 376

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 377

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 378

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 379

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 380

- Iterative DFS with an explicit stack avoids recursion-limit issues.

## entry 381

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 382

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 383

- StringBuilder: amortize allocation by doubling on grow.

## entry 384

- Polynomial rolling hash with two moduli kills almost all collisions in practice.

## entry 385

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 386

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 387

- Persistent tree: every update creates a new version sharing unchanged nodes.

## entry 388

- Heap when you only need top-k; full sort is wasted work.

## entry 389

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 390

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 391

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 392

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 393

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 394

- DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.

## entry 395

- Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.

## entry 396

- Boyer-Moore: candidate + counter; reset on tie; verify on second pass.

## entry 397

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 398

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 399

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 400

- Trie nodes are heavy; for fixed alphabets, an array beats a hash table.

## entry 401

- Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.

## entry 402

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 403

- Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.

## entry 404

- Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.

## entry 405

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 406

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 407

- SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.

## entry 408

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 409

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 410

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 411

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 412

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 413

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 414

- Backtracking template: choose, recurse, un-choose. Mutate then revert.

## entry 415

- Unbounded knapsack: capacity inner ascending allows item reuse.

## entry 416

- Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.

## entry 417

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 418

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 419

- LIS via patience: each pile holds the smallest tail of length k.

## entry 420

- Graph DP on DAGs: topological order makes the dependency direction explicit.

## entry 421

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 422

- Memoization: top-down with a cache map; tabulation: bottom-up with an array.

## entry 423

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 424

- LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.

## entry 425

- BFS layers carry implicit shortest-path distance in unweighted graphs.

## entry 426

- Treap: BST + heap on random priorities; expected O(log n) per op.

## entry 427

- Stable sort matters when a secondary key was set in a prior pass.

## entry 428

- LIS via patience: each pile holds the smallest tail of length k.

## entry 429

- StringBuilder: amortize allocation by doubling on grow.

## entry 430

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 431

- Articulation points: same DFS as bridges, with a slightly different test.

## entry 432

- Walk both pointers from each end inward; advance the smaller side.

## entry 433

- Heap when you only need top-k; full sort is wasted work.

## entry 434

- Greedy by end-time picks the most non-overlapping intervals.

## entry 435

- Robin Hood hashing: probe-distance balancing reduces worst-case lookup.

## entry 436

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 437

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 438

- Centroid decomposition: each level halves subtree sizes — O(n log n) overall.

## entry 439

- Monotonic deque: push back, pop back to maintain order, pop front when stale.

## entry 440

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 441

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 442

- Interval DP: solve all `[l, r]` ranges from short to long.

## entry 443

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 444

- Tree DP: post-order DFS lets children inform the parent in one pass.

## entry 445

- Tabulation wins when iteration order is obvious and stack depth would blow up.

## entry 446

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 447

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 448

- Alignment: a 64-bit load on an unaligned pointer faults on some platforms.

## entry 449

- Sieve: cross out multiples starting at i*i to skip earlier-marked composites.

## entry 450

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 451

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 452

- Interval tree: stores intervals on the median; query traverses O(log n) levels.

## entry 453

- Euler tour flattens a tree into an array for range-query LCA.

## entry 454

- Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.

## entry 455

- LIS via patience: each pile holds the smallest tail of length k.

## entry 456

- Tarjan SCC: low-link values find strongly connected components in one DFS.

## entry 457

- Wavelet tree: range k-th element in O(log Σ) time.

## entry 458

- Walk both pointers from each end inward; advance the smaller side.

## entry 459

- Walk both pointers from each end inward; advance the smaller side.

## entry 460

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 461

- Heavy-light decomposition: each path crosses O(log n) heavy chains.

## entry 462

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 463

- BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.

## entry 464

- Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.

## entry 465

- Rope: tree of small string fragments; O(log n) concat and substring.

## entry 466

- LCA via binary lifting: jump up powers of two until depths match, then converge.

## entry 467

- Splay tree: every access splays to the root; amortized O(log n).

## entry 468

- Fenwick supports prefix-sum updates in O(log n) with a flat array.

## entry 469

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 470

- Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).

## entry 471

- ASCII rules are a strict subset of UTF-8; no special handling needed.

## entry 472

- Greedy by end-time picks the most non-overlapping intervals.

## entry 473

- LIS via patience: each pile holds the smallest tail of length k.

## entry 474

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 475

- State compression: bitmask + integer encodes a small subset cheaply.

## entry 476

- Walk both pointers from each end inward; advance the smaller side.

## entry 477

- 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.

## entry 478

- Greedy by end-time picks the most non-overlapping intervals.

## entry 479

- In-place compaction uses two pointers: read advances always, write only on keep.

## entry 480

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 481

- Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.

## entry 482

- Segment tree: half-open intervals `[l, r)` simplify the recursion base case.

## entry 483

- UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...

## entry 484

- StringBuilder pitfall: reuse forces a deep copy on the first read.

## entry 485

- Hash collision: chain or open-address; chained handles arbitrary load factor.
